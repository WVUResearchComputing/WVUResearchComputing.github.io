.. WVU-RC documentation master file, created by
   sphinx-quickstart on Mon Oct  1 14:40:16 2018.
   You can adapt this file completely to your liking, but it should at least
   contain the root `toctree` directive.

Research Computing at West Virginia University
==============================================

.. image:: /_static/ResearchComputing.png

West Virginia University Research Computing (WVU-RC) is a team inside WVU's
Research Office dedicated to supporting, enabling and advancing computational research at WVU.

WVU Research Computing maintains a portafolio of infraestructures to support its mission.
We maintain several HPC clusters from general purpose to specialized resources both on premises as on the cloud.
WVU Research Computing also provide a variety of other services including a large research storage facility called
**DataDepot**, and a DMZ (demilitarized zone) for high speed data transfers called **WVU Research Exchange (REX)**.

In addition to maintaining these facilities WVU Research Computing offers support, consulting and training 
in areas of High Performance Computing, Data Analysis, Machine Learning and Parallel Programming.

The table below shows our portafolio of HPC resources (past and present):

+------------------------+---------------------+------------------+--------------------+---------------------------------------------------------------+
| - **Infraestructure/** | - **Compute Nodes** | - **CPU Cores**  | - **Accelerators** | **Description**                                               |
| - **HPC Cluster**      | - (total/active)    | - (total/active) | - (total/active)   |                                                               |
+------------------------+---------------------+------------------+--------------------+---------------------------------------------------------------+
| - Mountaineer          |      32/0           |      384/0       |       0/0          | - First centrally managed HPC Cluster for WVU                 |
| - (decommissioned)     |                     |                  |                    | - CPUs from Intel Westmere microarchitecture (32 nm)          |
|                        |                     |                  |                    | - Decomissioned on 2018                                       |
+------------------------+---------------------+------------------+--------------------+---------------------------------------------------------------+
| - Spruce Knob          |     176/148         |    3376/3036     | - 14/5 NVIDIA GPUs | - General-purpose HPC cluster first commissioned in 2017      |
| - (end-of-life         |                     |                  | - Tesla K20m       | - Heterogeneous cluster with Intel processors                 |   
| -  2023)               |                     |                  | - Tesla K20Xm      | - Sandy Bridge, Ivy Bridge, Haswell and Broadwell             |
+------------------------+---------------------+------------------+--------------------+---------------------------------------------------------------+
| - Thorny Flat          |     178/178         |    6516/6516     | - 47 NVIDIA GPUs   | - General-purpose HPC cluster                                 |
| - (in production)      |                     |                  | - P6000 (21)       | - Intel processors with Skylake and Cascade Lake              |
|                        |                     |                  | - RTX 6000 (24)    | - Installed at Pittsburgh Supercomputer Center                |
|                        |                     |                  | - A100 (2)         |                                                               |
+------------------------+---------------------+------------------+--------------------+---------------------------------------------------------------+
| - GoFirst              |                     |                  |                    | - Virtual Infraestructure running on AWS                      |
| - (in production)      |                     |                  |                    | - Serves Business Data Analytics (BUDA) program               |
|                        |                     |                  |                    | - Chambers College of Business and Economics                  |
+------------------------+---------------------+------------------+--------------------+---------------------------------------------------------------+
| - Dolly Sods           |                     |                  |                    | - GPU Accelerated HPC Cluster                                 |
| - (to be installed     |                     |                  |                    | - To be provisioned in Spring 2023                            |
| -  spring 2023)        |                     |                  |                    |                                                               |
+------------------------+---------------------+------------------+--------------------+---------------------------------------------------------------+
| - WVCTSI               |       8/8           |     320/320      | - 4 NVIDIA GPUs    | - HPC Cluster for use with                                    |
| - Secure Cluster       |                     |                  | - Tesla V100S      | - Protected Health Information (PHI)                          |
| - (in production)      |                     |                  |                    | - HIPAA compliant                                             |
+------------------------+---------------------+------------------+--------------------+---------------------------------------------------------------+


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
