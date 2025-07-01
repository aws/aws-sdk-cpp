/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/model/CloudAutonomousVmClusterResourceDetails.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace odb
{
namespace Model
{

  /**
   * <p>Information about unallocated resources in the Cloud Exadata
   * infrastructure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/CloudExadataInfrastructureUnallocatedResources">AWS
   * API Reference</a></p>
   */
  class CloudExadataInfrastructureUnallocatedResources
  {
  public:
    AWS_ODB_API CloudExadataInfrastructureUnallocatedResources() = default;
    AWS_ODB_API CloudExadataInfrastructureUnallocatedResources(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API CloudExadataInfrastructureUnallocatedResources& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of Autonomous VM clusters associated with this Cloud Exadata
     * Infrastructure.</p>
     */
    inline const Aws::Vector<CloudAutonomousVmClusterResourceDetails>& GetCloudAutonomousVmClusters() const { return m_cloudAutonomousVmClusters; }
    inline bool CloudAutonomousVmClustersHasBeenSet() const { return m_cloudAutonomousVmClustersHasBeenSet; }
    template<typename CloudAutonomousVmClustersT = Aws::Vector<CloudAutonomousVmClusterResourceDetails>>
    void SetCloudAutonomousVmClusters(CloudAutonomousVmClustersT&& value) { m_cloudAutonomousVmClustersHasBeenSet = true; m_cloudAutonomousVmClusters = std::forward<CloudAutonomousVmClustersT>(value); }
    template<typename CloudAutonomousVmClustersT = Aws::Vector<CloudAutonomousVmClusterResourceDetails>>
    CloudExadataInfrastructureUnallocatedResources& WithCloudAutonomousVmClusters(CloudAutonomousVmClustersT&& value) { SetCloudAutonomousVmClusters(std::forward<CloudAutonomousVmClustersT>(value)); return *this;}
    template<typename CloudAutonomousVmClustersT = CloudAutonomousVmClusterResourceDetails>
    CloudExadataInfrastructureUnallocatedResources& AddCloudAutonomousVmClusters(CloudAutonomousVmClustersT&& value) { m_cloudAutonomousVmClustersHasBeenSet = true; m_cloudAutonomousVmClusters.emplace_back(std::forward<CloudAutonomousVmClustersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The display name of the Cloud Exadata infrastructure.</p>
     */
    inline const Aws::String& GetCloudExadataInfrastructureDisplayName() const { return m_cloudExadataInfrastructureDisplayName; }
    inline bool CloudExadataInfrastructureDisplayNameHasBeenSet() const { return m_cloudExadataInfrastructureDisplayNameHasBeenSet; }
    template<typename CloudExadataInfrastructureDisplayNameT = Aws::String>
    void SetCloudExadataInfrastructureDisplayName(CloudExadataInfrastructureDisplayNameT&& value) { m_cloudExadataInfrastructureDisplayNameHasBeenSet = true; m_cloudExadataInfrastructureDisplayName = std::forward<CloudExadataInfrastructureDisplayNameT>(value); }
    template<typename CloudExadataInfrastructureDisplayNameT = Aws::String>
    CloudExadataInfrastructureUnallocatedResources& WithCloudExadataInfrastructureDisplayName(CloudExadataInfrastructureDisplayNameT&& value) { SetCloudExadataInfrastructureDisplayName(std::forward<CloudExadataInfrastructureDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of unallocated Exadata storage available, in terabytes (TB).</p>
     */
    inline double GetExadataStorageInTBs() const { return m_exadataStorageInTBs; }
    inline bool ExadataStorageInTBsHasBeenSet() const { return m_exadataStorageInTBsHasBeenSet; }
    inline void SetExadataStorageInTBs(double value) { m_exadataStorageInTBsHasBeenSet = true; m_exadataStorageInTBs = value; }
    inline CloudExadataInfrastructureUnallocatedResources& WithExadataStorageInTBs(double value) { SetExadataStorageInTBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Cloud Exadata infrastructure.</p>
     */
    inline const Aws::String& GetCloudExadataInfrastructureId() const { return m_cloudExadataInfrastructureId; }
    inline bool CloudExadataInfrastructureIdHasBeenSet() const { return m_cloudExadataInfrastructureIdHasBeenSet; }
    template<typename CloudExadataInfrastructureIdT = Aws::String>
    void SetCloudExadataInfrastructureId(CloudExadataInfrastructureIdT&& value) { m_cloudExadataInfrastructureIdHasBeenSet = true; m_cloudExadataInfrastructureId = std::forward<CloudExadataInfrastructureIdT>(value); }
    template<typename CloudExadataInfrastructureIdT = Aws::String>
    CloudExadataInfrastructureUnallocatedResources& WithCloudExadataInfrastructureId(CloudExadataInfrastructureIdT&& value) { SetCloudExadataInfrastructureId(std::forward<CloudExadataInfrastructureIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of unallocated local storage available, in gigabytes (GB).</p>
     */
    inline int GetLocalStorageInGBs() const { return m_localStorageInGBs; }
    inline bool LocalStorageInGBsHasBeenSet() const { return m_localStorageInGBsHasBeenSet; }
    inline void SetLocalStorageInGBs(int value) { m_localStorageInGBsHasBeenSet = true; m_localStorageInGBs = value; }
    inline CloudExadataInfrastructureUnallocatedResources& WithLocalStorageInGBs(int value) { SetLocalStorageInGBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of unallocated memory available, in gigabytes (GB).</p>
     */
    inline int GetMemoryInGBs() const { return m_memoryInGBs; }
    inline bool MemoryInGBsHasBeenSet() const { return m_memoryInGBsHasBeenSet; }
    inline void SetMemoryInGBs(int value) { m_memoryInGBsHasBeenSet = true; m_memoryInGBs = value; }
    inline CloudExadataInfrastructureUnallocatedResources& WithMemoryInGBs(int value) { SetMemoryInGBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of unallocated Oracle CPU Units (OCPUs) available.</p>
     */
    inline int GetOcpus() const { return m_ocpus; }
    inline bool OcpusHasBeenSet() const { return m_ocpusHasBeenSet; }
    inline void SetOcpus(int value) { m_ocpusHasBeenSet = true; m_ocpus = value; }
    inline CloudExadataInfrastructureUnallocatedResources& WithOcpus(int value) { SetOcpus(value); return *this;}
    ///@}
  private:

    Aws::Vector<CloudAutonomousVmClusterResourceDetails> m_cloudAutonomousVmClusters;
    bool m_cloudAutonomousVmClustersHasBeenSet = false;

    Aws::String m_cloudExadataInfrastructureDisplayName;
    bool m_cloudExadataInfrastructureDisplayNameHasBeenSet = false;

    double m_exadataStorageInTBs{0.0};
    bool m_exadataStorageInTBsHasBeenSet = false;

    Aws::String m_cloudExadataInfrastructureId;
    bool m_cloudExadataInfrastructureIdHasBeenSet = false;

    int m_localStorageInGBs{0};
    bool m_localStorageInGBsHasBeenSet = false;

    int m_memoryInGBs{0};
    bool m_memoryInGBsHasBeenSet = false;

    int m_ocpus{0};
    bool m_ocpusHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
