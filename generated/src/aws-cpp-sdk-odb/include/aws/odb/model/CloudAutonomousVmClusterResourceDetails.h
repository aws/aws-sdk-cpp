/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Resource details of an Autonomous VM cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/CloudAutonomousVmClusterResourceDetails">AWS
   * API Reference</a></p>
   */
  class CloudAutonomousVmClusterResourceDetails
  {
  public:
    AWS_ODB_API CloudAutonomousVmClusterResourceDetails() = default;
    AWS_ODB_API CloudAutonomousVmClusterResourceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API CloudAutonomousVmClusterResourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the Autonomous VM cluster.</p>
     */
    inline const Aws::String& GetCloudAutonomousVmClusterId() const { return m_cloudAutonomousVmClusterId; }
    inline bool CloudAutonomousVmClusterIdHasBeenSet() const { return m_cloudAutonomousVmClusterIdHasBeenSet; }
    template<typename CloudAutonomousVmClusterIdT = Aws::String>
    void SetCloudAutonomousVmClusterId(CloudAutonomousVmClusterIdT&& value) { m_cloudAutonomousVmClusterIdHasBeenSet = true; m_cloudAutonomousVmClusterId = std::forward<CloudAutonomousVmClusterIdT>(value); }
    template<typename CloudAutonomousVmClusterIdT = Aws::String>
    CloudAutonomousVmClusterResourceDetails& WithCloudAutonomousVmClusterId(CloudAutonomousVmClusterIdT&& value) { SetCloudAutonomousVmClusterId(std::forward<CloudAutonomousVmClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of unallocated Autonomous Database storage in the Autonomous VM
     * cluster, in terabytes.</p>
     */
    inline double GetUnallocatedAdbStorageInTBs() const { return m_unallocatedAdbStorageInTBs; }
    inline bool UnallocatedAdbStorageInTBsHasBeenSet() const { return m_unallocatedAdbStorageInTBsHasBeenSet; }
    inline void SetUnallocatedAdbStorageInTBs(double value) { m_unallocatedAdbStorageInTBsHasBeenSet = true; m_unallocatedAdbStorageInTBs = value; }
    inline CloudAutonomousVmClusterResourceDetails& WithUnallocatedAdbStorageInTBs(double value) { SetUnallocatedAdbStorageInTBs(value); return *this;}
    ///@}
  private:

    Aws::String m_cloudAutonomousVmClusterId;
    bool m_cloudAutonomousVmClusterIdHasBeenSet = false;

    double m_unallocatedAdbStorageInTBs{0.0};
    bool m_unallocatedAdbStorageInTBsHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
