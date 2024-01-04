import angr

proj = angr.Project('level2')
simgr = proj.factory.simgr()
simgr.explore(find=lambda s: b"Good job." in s.posix.dumps(1))
s = simgr.found[0]
print(s.posix.dumps(0))
