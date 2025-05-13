/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/OpenSearchServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace OpenSearchServerless
{
namespace Model
{

  /**
   */
  class UpdateVpcEndpointRequest : public OpenSearchServerlessRequest
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API UpdateVpcEndpointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateVpcEndpoint"; }

    AWS_OPENSEARCHSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_OPENSEARCHSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the interface endpoint to update.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateVpcEndpointRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of one or more subnets to add to the endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddSubnetIds() const { return m_addSubnetIds; }
    inline bool AddSubnetIdsHasBeenSet() const { return m_addSubnetIdsHasBeenSet; }
    template<typename AddSubnetIdsT = Aws::Vector<Aws::String>>
    void SetAddSubnetIds(AddSubnetIdsT&& value) { m_addSubnetIdsHasBeenSet = true; m_addSubnetIds = std::forward<AddSubnetIdsT>(value); }
    template<typename AddSubnetIdsT = Aws::Vector<Aws::String>>
    UpdateVpcEndpointRequest& WithAddSubnetIds(AddSubnetIdsT&& value) { SetAddSubnetIds(std::forward<AddSubnetIdsT>(value)); return *this;}
    template<typename AddSubnetIdsT = Aws::String>
    UpdateVpcEndpointRequest& AddAddSubnetIds(AddSubnetIdsT&& value) { m_addSubnetIdsHasBeenSet = true; m_addSubnetIds.emplace_back(std::forward<AddSubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifiers of the subnets to remove from the endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveSubnetIds() const { return m_removeSubnetIds; }
    inline bool RemoveSubnetIdsHasBeenSet() const { return m_removeSubnetIdsHasBeenSet; }
    template<typename RemoveSubnetIdsT = Aws::Vector<Aws::String>>
    void SetRemoveSubnetIds(RemoveSubnetIdsT&& value) { m_removeSubnetIdsHasBeenSet = true; m_removeSubnetIds = std::forward<RemoveSubnetIdsT>(value); }
    template<typename RemoveSubnetIdsT = Aws::Vector<Aws::String>>
    UpdateVpcEndpointRequest& WithRemoveSubnetIds(RemoveSubnetIdsT&& value) { SetRemoveSubnetIds(std::forward<RemoveSubnetIdsT>(value)); return *this;}
    template<typename RemoveSubnetIdsT = Aws::String>
    UpdateVpcEndpointRequest& AddRemoveSubnetIds(RemoveSubnetIdsT&& value) { m_removeSubnetIdsHasBeenSet = true; m_removeSubnetIds.emplace_back(std::forward<RemoveSubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifiers of the security groups to add to the endpoint.
     * Security groups define the ports, protocols, and sources for inbound traffic
     * that you are authorizing into your endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddSecurityGroupIds() const { return m_addSecurityGroupIds; }
    inline bool AddSecurityGroupIdsHasBeenSet() const { return m_addSecurityGroupIdsHasBeenSet; }
    template<typename AddSecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetAddSecurityGroupIds(AddSecurityGroupIdsT&& value) { m_addSecurityGroupIdsHasBeenSet = true; m_addSecurityGroupIds = std::forward<AddSecurityGroupIdsT>(value); }
    template<typename AddSecurityGroupIdsT = Aws::Vector<Aws::String>>
    UpdateVpcEndpointRequest& WithAddSecurityGroupIds(AddSecurityGroupIdsT&& value) { SetAddSecurityGroupIds(std::forward<AddSecurityGroupIdsT>(value)); return *this;}
    template<typename AddSecurityGroupIdsT = Aws::String>
    UpdateVpcEndpointRequest& AddAddSecurityGroupIds(AddSecurityGroupIdsT&& value) { m_addSecurityGroupIdsHasBeenSet = true; m_addSecurityGroupIds.emplace_back(std::forward<AddSecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifiers of the security groups to remove from the
     * endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveSecurityGroupIds() const { return m_removeSecurityGroupIds; }
    inline bool RemoveSecurityGroupIdsHasBeenSet() const { return m_removeSecurityGroupIdsHasBeenSet; }
    template<typename RemoveSecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetRemoveSecurityGroupIds(RemoveSecurityGroupIdsT&& value) { m_removeSecurityGroupIdsHasBeenSet = true; m_removeSecurityGroupIds = std::forward<RemoveSecurityGroupIdsT>(value); }
    template<typename RemoveSecurityGroupIdsT = Aws::Vector<Aws::String>>
    UpdateVpcEndpointRequest& WithRemoveSecurityGroupIds(RemoveSecurityGroupIdsT&& value) { SetRemoveSecurityGroupIds(std::forward<RemoveSecurityGroupIdsT>(value)); return *this;}
    template<typename RemoveSecurityGroupIdsT = Aws::String>
    UpdateVpcEndpointRequest& AddRemoveSecurityGroupIds(RemoveSecurityGroupIdsT&& value) { m_removeSecurityGroupIdsHasBeenSet = true; m_removeSecurityGroupIds.emplace_back(std::forward<RemoveSecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdateVpcEndpointRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<Aws::String> m_addSubnetIds;
    bool m_addSubnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_removeSubnetIds;
    bool m_removeSubnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_addSecurityGroupIds;
    bool m_addSecurityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_removeSecurityGroupIds;
    bool m_removeSecurityGroupIdsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
