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
  class DeleteCloudVmClusterRequest : public OdbRequest
  {
  public:
    AWS_ODB_API DeleteCloudVmClusterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCloudVmCluster"; }

    AWS_ODB_API Aws::String SerializePayload() const override;

    AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the VM cluster to delete.</p>
     */
    inline const Aws::String& GetCloudVmClusterId() const { return m_cloudVmClusterId; }
    inline bool CloudVmClusterIdHasBeenSet() const { return m_cloudVmClusterIdHasBeenSet; }
    template<typename CloudVmClusterIdT = Aws::String>
    void SetCloudVmClusterId(CloudVmClusterIdT&& value) { m_cloudVmClusterIdHasBeenSet = true; m_cloudVmClusterId = std::forward<CloudVmClusterIdT>(value); }
    template<typename CloudVmClusterIdT = Aws::String>
    DeleteCloudVmClusterRequest& WithCloudVmClusterId(CloudVmClusterIdT&& value) { SetCloudVmClusterId(std::forward<CloudVmClusterIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cloudVmClusterId;
    bool m_cloudVmClusterIdHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
