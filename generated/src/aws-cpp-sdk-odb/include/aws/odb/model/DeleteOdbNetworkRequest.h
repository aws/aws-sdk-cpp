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
  class DeleteOdbNetworkRequest : public OdbRequest
  {
  public:
    AWS_ODB_API DeleteOdbNetworkRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteOdbNetwork"; }

    AWS_ODB_API Aws::String SerializePayload() const override;

    AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the ODB network to delete.</p>
     */
    inline const Aws::String& GetOdbNetworkId() const { return m_odbNetworkId; }
    inline bool OdbNetworkIdHasBeenSet() const { return m_odbNetworkIdHasBeenSet; }
    template<typename OdbNetworkIdT = Aws::String>
    void SetOdbNetworkId(OdbNetworkIdT&& value) { m_odbNetworkIdHasBeenSet = true; m_odbNetworkId = std::forward<OdbNetworkIdT>(value); }
    template<typename OdbNetworkIdT = Aws::String>
    DeleteOdbNetworkRequest& WithOdbNetworkId(OdbNetworkIdT&& value) { SetOdbNetworkId(std::forward<OdbNetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to delete associated OCI networking resources along with
     * the ODB network.</p>
     */
    inline bool GetDeleteAssociatedResources() const { return m_deleteAssociatedResources; }
    inline bool DeleteAssociatedResourcesHasBeenSet() const { return m_deleteAssociatedResourcesHasBeenSet; }
    inline void SetDeleteAssociatedResources(bool value) { m_deleteAssociatedResourcesHasBeenSet = true; m_deleteAssociatedResources = value; }
    inline DeleteOdbNetworkRequest& WithDeleteAssociatedResources(bool value) { SetDeleteAssociatedResources(value); return *this;}
    ///@}
  private:

    Aws::String m_odbNetworkId;
    bool m_odbNetworkIdHasBeenSet = false;

    bool m_deleteAssociatedResources{false};
    bool m_deleteAssociatedResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
