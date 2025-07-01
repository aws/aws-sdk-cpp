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
  class GetOdbNetworkRequest : public OdbRequest
  {
  public:
    AWS_ODB_API GetOdbNetworkRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetOdbNetwork"; }

    AWS_ODB_API Aws::String SerializePayload() const override;

    AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the ODB network.</p>
     */
    inline const Aws::String& GetOdbNetworkId() const { return m_odbNetworkId; }
    inline bool OdbNetworkIdHasBeenSet() const { return m_odbNetworkIdHasBeenSet; }
    template<typename OdbNetworkIdT = Aws::String>
    void SetOdbNetworkId(OdbNetworkIdT&& value) { m_odbNetworkIdHasBeenSet = true; m_odbNetworkId = std::forward<OdbNetworkIdT>(value); }
    template<typename OdbNetworkIdT = Aws::String>
    GetOdbNetworkRequest& WithOdbNetworkId(OdbNetworkIdT&& value) { SetOdbNetworkId(std::forward<OdbNetworkIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_odbNetworkId;
    bool m_odbNetworkIdHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
