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
  class GetDbNodeRequest : public OdbRequest
  {
  public:
    AWS_ODB_API GetDbNodeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDbNode"; }

    AWS_ODB_API Aws::String SerializePayload() const override;

    AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the VM cluster that contains the DB node.</p>
     */
    inline const Aws::String& GetCloudVmClusterId() const { return m_cloudVmClusterId; }
    inline bool CloudVmClusterIdHasBeenSet() const { return m_cloudVmClusterIdHasBeenSet; }
    template<typename CloudVmClusterIdT = Aws::String>
    void SetCloudVmClusterId(CloudVmClusterIdT&& value) { m_cloudVmClusterIdHasBeenSet = true; m_cloudVmClusterId = std::forward<CloudVmClusterIdT>(value); }
    template<typename CloudVmClusterIdT = Aws::String>
    GetDbNodeRequest& WithCloudVmClusterId(CloudVmClusterIdT&& value) { SetCloudVmClusterId(std::forward<CloudVmClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the DB node to retrieve information about.</p>
     */
    inline const Aws::String& GetDbNodeId() const { return m_dbNodeId; }
    inline bool DbNodeIdHasBeenSet() const { return m_dbNodeIdHasBeenSet; }
    template<typename DbNodeIdT = Aws::String>
    void SetDbNodeId(DbNodeIdT&& value) { m_dbNodeIdHasBeenSet = true; m_dbNodeId = std::forward<DbNodeIdT>(value); }
    template<typename DbNodeIdT = Aws::String>
    GetDbNodeRequest& WithDbNodeId(DbNodeIdT&& value) { SetDbNodeId(std::forward<DbNodeIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cloudVmClusterId;
    bool m_cloudVmClusterIdHasBeenSet = false;

    Aws::String m_dbNodeId;
    bool m_dbNodeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
