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
  class GetOdbPeeringConnectionRequest : public OdbRequest
  {
  public:
    AWS_ODB_API GetOdbPeeringConnectionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetOdbPeeringConnection"; }

    AWS_ODB_API Aws::String SerializePayload() const override;

    AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the ODB peering connection to retrieve information
     * about.</p>
     */
    inline const Aws::String& GetOdbPeeringConnectionId() const { return m_odbPeeringConnectionId; }
    inline bool OdbPeeringConnectionIdHasBeenSet() const { return m_odbPeeringConnectionIdHasBeenSet; }
    template<typename OdbPeeringConnectionIdT = Aws::String>
    void SetOdbPeeringConnectionId(OdbPeeringConnectionIdT&& value) { m_odbPeeringConnectionIdHasBeenSet = true; m_odbPeeringConnectionId = std::forward<OdbPeeringConnectionIdT>(value); }
    template<typename OdbPeeringConnectionIdT = Aws::String>
    GetOdbPeeringConnectionRequest& WithOdbPeeringConnectionId(OdbPeeringConnectionIdT&& value) { SetOdbPeeringConnectionId(std::forward<OdbPeeringConnectionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_odbPeeringConnectionId;
    bool m_odbPeeringConnectionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
