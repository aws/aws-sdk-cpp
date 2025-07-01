/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/OdbRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace odb
{
namespace Model
{

  /**
   */
  class GetCloudAutonomousVmClusterRequest : public OdbRequest
  {
  public:
    AWS_ODB_API GetCloudAutonomousVmClusterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCloudAutonomousVmCluster"; }

    AWS_ODB_API Aws::String SerializePayload() const override;

    AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the Autonomous VM cluster to retrieve information
     * about.</p>
     */
    inline const Aws::String& GetCloudAutonomousVmClusterId() const { return m_cloudAutonomousVmClusterId; }
    inline bool CloudAutonomousVmClusterIdHasBeenSet() const { return m_cloudAutonomousVmClusterIdHasBeenSet; }
    template<typename CloudAutonomousVmClusterIdT = Aws::String>
    void SetCloudAutonomousVmClusterId(CloudAutonomousVmClusterIdT&& value) { m_cloudAutonomousVmClusterIdHasBeenSet = true; m_cloudAutonomousVmClusterId = std::forward<CloudAutonomousVmClusterIdT>(value); }
    template<typename CloudAutonomousVmClusterIdT = Aws::String>
    GetCloudAutonomousVmClusterRequest& WithCloudAutonomousVmClusterId(CloudAutonomousVmClusterIdT&& value) { SetCloudAutonomousVmClusterId(std::forward<CloudAutonomousVmClusterIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cloudAutonomousVmClusterId;
    bool m_cloudAutonomousVmClusterIdHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
