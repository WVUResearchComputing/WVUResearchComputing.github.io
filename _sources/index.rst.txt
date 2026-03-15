.. WVU-RC documentation master file, created by
   sphinx-quickstart on Mon Oct  1 14:40:16 2018.
   You can adapt this file completely to your liking, but it should at least
   contain the root `toctree` directive.

Research Computing at West Virginia University
==============================================

.. image:: /_static/ResearchComputing.png

West Virginia University Research Computing (WVU-RC) is a team inside WVU's
Research Office dedicated to supporting, enabling, and advancing computational research at WVU.

WVU Research Computing maintains a portfolio of infrastructure to support its mission.
We maintain several High-Performance Computing (HPC) **Clusters**, from general-purpose to specialized ones, both on-premises and in the cloud.
WVU Research Computing also provides other services such as a large research data storage facility called
**DataDepot**, and a Demilitarized Zone (DMZ) for high-speed data transfers called **WVU Research Exchange (REX)**.

In addition to maintaining these facilities, WVU Research Computing offers support, consulting, and training 
in areas of High-Performance Computing, Data Analysis, Machine Learning, and Parallel Programming.

The table below shows our portfolio of HPC resources (past and present):

.. table:: HPC Portafolio at WVU Research Computing
   :widths: 10 10 10 10 60

   +------------------------+---------------------------------------------------------------+---------------+-------------+--------------------+
   | | **Infraestructure/** | | **Description**                                             | | **Compute** | | **CPU**   | | **Accelerators** |
   | | **HPC Clusters**     | |                                                             | | **Nodes**   | | **Cores** | | **GPUs**         |
   +========================+===============================================================+===============+=============+====================+
   | | **Harpers Ferry**    | | General Purpose HPC Cluster.                                |       37      |       9472  | | None             |
   | | (in production)      | | CPU Processors: 2X AMD EPYC 9754 128-Core                   |               |             | |                  |
   | |                      | | Servers provisioned: Oct 29, 2025                           |               |             | |                  |
   | |                      |                                                               |               |             | |                  |
   +------------------------+---------------------------------------------------------------+---------------+-------------+--------------------+
   | | **Dolly Sods**       | | GPU Accelerated HPC Cluster.                                |       37      |       1248  | | 155 NVIDIA GPUs  |
   | | (in production)      | | CPU Processors: AMD EPYC 7513 32-Core Processor             |               |             | | A30 (120)        |
   | |                      | | AMD EPYC 7513 32-Core Processor                             |               |             | | A40 (19)         |
   | |                      |                                                               |               |             | | A100 (16)        |
   +------------------------+---------------------------------------------------------------+---------------+-------------+--------------------+
   | | **WVCTSI Cluster**   | | HPC Cluster for use with                                    |        8      |        320  | | 4 NVIDIA GPUs    |
   | | Secure Cluster       | | Protected Health Information (PHI)                          |               |             | | Tesla V100S      |
   | | (in production)      | | HIPAA compliant                                             |               |             |                    |
   +------------------------+---------------------------------------------------------------+---------------+-------------+--------------------+
   | | **Thorny Flat**      | | General-purpose HPC cluster.                                |      111      |       4232  | | 21 NVIDIA GPUs   |
   | | **Phase 0**          | | CPU processors: Intel Skylake and Cascade Lake.             |               |             | | P6000 (21)       |
   | | (in production)      | | Installed at Pittsburgh Supercomputer Center.               |               |             | |                  |
   |                        | | Servers provisioned: Dec 14 2017                            |               |             | |                  |
   +------------------------+---------------------------------------------------------------+---------------+-------------+--------------------+
   | | **Thorny Flat**      | | General-purpose HPC cluster.                                |       64      |       2560  | | None             |
   | | **Big Mem**          | | Intel processors with Skylake and Cascade Lake.             |               |             | |                  |
   | | (to be relaunched in | | Installed at WVU's Chemistry Research Laboratory (CRL281)   |               |             | |                  |
   | |   2026)              | |                                                             |               |             | |                  |
   |                        | |                                                             |               |             | |                  |
   +------------------------+---------------------------------------------------------------+---------------+-------------+--------------------+
   | | **Spruce Knob**      | | General-purpose HPC cluster first commissioned in 2017.     |      120      |       3376  | | 14/5 NVIDIA GPUs |
   | | (to be relaunched in | | Heterogeneous cluster with Intel processors.                |               |             | | Tesla K20m       |
   | |   2026)              | | Sandy Bridge, Ivy Bridge, Haswell and Broadwell.            |               |             | | Tesla K20Xm      |
   +------------------------+---------------------------------------------------------------+---------------+-------------+--------------------+
   | | **GoFirst**          | | Virtual Infraestructure running on AWS.                     |               |             |                    |
   | | (in production)      | | Serves Business Data Analytics (BUDA) program.              |               |             |                    |
   |                        | | Chambers College of Business and Economics.                 |               |             |                    |
   +------------------------+---------------------------------------------------------------+---------------+-------------+--------------------+
   | | **Mountaineer**      | | First centrally managed HPC Cluster for WVU.                |       32      |        384  | | None             |
   | | (decommissioned in   | | CPUs from Intel Westmere microarchitecture (32 nm).         |               |             | |                  |
   | |    2018)             | |                                                             |               |             | |                  |
   +------------------------+---------------------------------------------------------------+---------------+-------------+--------------------+



The contents of this website can be downloaded as a single PDF here:
`docs_hpc_wvu.pdf <https://docs.hpc.wvu.edu/docs_hpc_wvu.pdf>`_

There are several websites associated with WVU-RC activities, here is a list of
the most relevant ones:

The official webpage in the Research Office portal about the Research Computing Division
   `WVU Research Computing - Research Office <https://research.wvu.edu/tools/research-computing>`_

The legacy documentation was a Wiki website that will continue to be online for a while
   `WVU Research Computing - Legacy Wiki <https://wiki.hpc.wvu.edu/hpc_wiki/index.php/Main_Page>`_

The HelpDesk ticket system
   `WVU Research Computing - HPC HelpDesk <https://helpdesk.hpc.wvu.edu>`_

If your research was possible thanks to the use of our clusters, please acknowledge the support using these comments:

For Thorny Flat:

    "Computational resources were provided by the WVU Research Computing Thorny Flat HPC cluster, partly funded by NSF OAC-1726534."

For Dolly Sods:

    "Computational resources were provided by the WVU Research Computing Dolly Sods HPC cluster, which is funded in part by NSF OAC-2117575."

To request help, create a new ticket on the Research Computing HPC HelpDesk web page. 
You are welcome to e-mail any member of the WVU-RC team directly, but since we are not always at our desk, the ticket system will guarantee that your support question will be seen by someone currently available.

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
   text/700.DomainSpecific
   text/80.ClusterSpecific
   text/90.References

Indices and tables
==================

* :ref:`genindex`
* :ref:`modindex`
* :ref:`search`
