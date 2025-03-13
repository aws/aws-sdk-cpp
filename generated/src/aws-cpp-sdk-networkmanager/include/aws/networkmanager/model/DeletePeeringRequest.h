/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

  /**
   */
  class DeletePeeringRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API DeletePeeringRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeletePeering"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the peering connection to delete.</p>
     */
    inline const Aws::String& GetPeeringId() const { return m_peeringId; }
    inline bool PeeringIdHasBeenSet() const { return m_peeringIdHasBeenSet; }
    template<typename PeeringIdT = Aws::String>
    void SetPeeringId(PeeringIdT&& value) { m_peeringIdHasBeenSet = true; m_peeringId = std::forward<PeeringIdT>(value); }
    template<typename PeeringIdT = Aws::String>
    DeletePeeringRequest& WithPeeringId(PeeringIdT&& value) { SetPeeringId(std::forward<PeeringIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_peeringId;
    bool m_peeringIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
