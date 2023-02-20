.. WVU-RC documentation master file, created by
   sphinx-quickstart on Mon Oct  1 14:40:16 2018.
   You can adapt this file completely to your liking, but it should at least
   contain the root `toctree` directive.

Research Computing at West Virginia University
==============================================

.. image:: /_static/ResearchComputing.png

West Virginia University Research Computing (WVU-RC) is a team inside WVU's
Research Office dedicated to supporting, enabling and
advancing computational research at WVU.

This site contains information about how to use the various technologies
provided by the Research Computing division at West Virginia University.
Most documentation here refers to our High Performance Computing clusters
but we also provide a variety of other services a large storage service called
DataDepot, a DMZ (demilitarized zone) for high speed data transfers called
Research Exchange (REX) and support and training in areas of High Performance
Computing, Data Analysis and Parallel Programming.


+-----------------------+---------------------------------------------------------------+---------------------+-------------------+-----------------------+-----------------------+
| **Infraestructure/**  | **Description**                                               | **Compute Nodes**   | **CPU Cores**     | **Accelerators**      | **Status**            |
| **HPC Cluster**       |                                                               | **total/active**    | **total/active**  |                       |                       |
+-----------------------+---------------------------------------------------------------+---------------------+-------------------+-----------------------+-----------------------+
| Mountaineer           | - First centrally managed HPC Cluster for WVU                 |      32/0           |      384/0        |         0             | Decommissioned        |
|                       | - All CPUs from Intel Westmere microarchitecture (32 nm)      |                     |                   |                       | (2018)                |
|                       | - Decomissioned on 2018                                       |                     |                   |                       |                       |
+-----------------------+---------------------------------------------------------------+---------------------+-------------------+-----------------------+-----------------------+
| Spruce Knob           | - General-purpose HPC cluster first commissioned in 2017      |     176/148         |    3376/3036      |       14/5            | End-of-Life           | 
|                       | - Heterogeneous cluster with Intel processors                 |                     |                   |  NVIDIA Tesla K20m    | To be decommissioned  |    
|                       | - Sandy Bridge, Ivy Bridge, Haswell and Broadwell             |                     |                   |  NVIDIIA Tesla K20Xm  | in 2023               |
+-----------------------+---------------------------------------------------------------+---------------------+-------------------+-----------------------+-----------------------+
| Thorny Flat           | - General-purpose HPC cluster                                 |     178/178         |    6516/6516      |       47              |                       | 
|                       | - Intel processors with Skylake and Cascade Lake              |                     |                   |  NVIDIA P6000 (21)    | In Production         | 
|                       | - Installed on Pittsburgh Supercomputer Center                |                     |                   |  NVIDIA RTX 6000 (24) |                       |
|                       |                                                               |                     |                   |  NVIDIA A100 (2)      |                       |
+-----------------------+---------------------------------------------------------------+---------------------+-------------------+-----------------------+-----------------------+
| GoFirst               | - Virtual Infraestructure running on AWS                      |                     |                   |                       |                       | 
|                       | - Serves Business Data Analytics (BUDA) program at the        |                     |                   |                       |                       | 
|                       |   Chambers College of Business and Economics                  |                     |                   |                       |                       | 
+-----------------------+---------------------------------------------------------------+---------------------+-------------------+-----------------------+-----------------------+
| Dolly Sods            | - GPU Accelerated HPC Cluster                                 |                     |                   |                       | Purchased             | 
|                       | - To be provisioned in Spring 2023                            |                     |                   |                       | To be provisioned     | 
|                       |                                                               |                     |                   |                       | Summer 2023           | 
+-----------------------+---------------------------------------------------------------+---------------------+-------------------+-----------------------+-----------------------+
| WVCTSI                | - HPC Cluster for use with Protected Health Information (PHI) |       8/8           |     320/320       |       4               |                       | 
| Secure Cluster        | - This is a HIPAA compliant machine                           |                     |                   | NVIDIA Tesla V100S    | In Production         | 
|                       |                                                               |                     |                   | 2 nodes - 2 GPUs/node |                       | 
+-----------------------+---------------------------------------------------------------+---------------------+-------------------+-----------------------+-----------------------+




The contents of this website can be downloaded as a single PDF here:
`docs_hpc_wvu.pdf <https://docs.hpc.wvu.edu/docs_hpc_wvu.pdf>`_

There are several websites associated with WVU-RC activities, here is a list of
the most relevant ones:

The official webpage in Research Office portal about the Research Computing Division
   `WVU Research Computing - Research Office <https://research.wvu.edu/researchers/computational-research/hpc>`_

The legacy documentation was a Wiki website that will continue to be online for a while
   `WVU Research Computing - Legacy Wiki <https://wiki.hpc.wvu.edu/hpc_wiki/index.php/Main_Page>`_

The HelpDesk ticket system
   `WVU Research Computing - HPC HelpDesk <https://helpdesk.hpc.wvu.edu>`_

If your research was possible thanks to the use of our clusters please acknowledge the support using these comments:
For Spruce Knob:

    "Computational resources were provided by the WVU Research Computing Spruce Knob HPC cluster, which is funded in part by NSF EPS-1003907."

For Thorny Flat:

    "Computational resources were provided by the WVU Research Computing Thorny Flat HPC cluster, which is funded in part by NSF OAC-1726534."

For requesting help, create a new ticket at the Research Computing HPC Help
Desk web page. You are welcome to e-mail any member of the WVU-RC team directly,
but since we are not always at our desk, the ticket system will guarantee that
your support question will be seen by someone currently available.

Main Responsible for Documentation and Scientific Outreach
  `Guillermo Avendano-Franco <mailto:gufranco@mail.wvu.edu>`_

.. toctree::
   :maxdepth: 2

   text/10.Introduction
   text/20.QuickStart
   text/30.BasicUsage
   text/40.AdvancedUsage
   text/500.ScientificProgramming
   text/600.SoftAdmin
   text/70.DomainSpecific
   text/80.ClusterSpecific
   text/90.References

Indices and tables
==================

* :ref:`genindex`
* :ref:`modindex`
* :ref:`search`
