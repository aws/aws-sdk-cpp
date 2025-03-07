﻿/**
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
    AWS_OPENSEARCHSERVERLESS_API UpdateVpcEndpointRequest();

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
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UpdateVpcEndpointRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateVpcEndpointRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateVpcEndpointRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of one or more subnets to add to the endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddSubnetIds() const{ return m_addSubnetIds; }
    inline bool AddSubnetIdsHasBeenSet() const { return m_addSubnetIdsHasBeenSet; }
    inline void SetAddSubnetIds(const Aws::Vector<Aws::String>& value) { m_addSubnetIdsHasBeenSet = true; m_addSubnetIds = value; }
    inline void SetAddSubnetIds(Aws::Vector<Aws::String>&& value) { m_addSubnetIdsHasBeenSet = true; m_addSubnetIds = std::move(value); }
    inline UpdateVpcEndpointRequest& WithAddSubnetIds(const Aws::Vector<Aws::String>& value) { SetAddSubnetIds(value); return *this;}
    inline UpdateVpcEndpointRequest& WithAddSubnetIds(Aws::Vector<Aws::String>&& value) { SetAddSubnetIds(std::move(value)); return *this;}
    inline UpdateVpcEndpointRequest& AddAddSubnetIds(const Aws::String& value) { m_addSubnetIdsHasBeenSet = true; m_addSubnetIds.push_back(value); return *this; }
    inline UpdateVpcEndpointRequest& AddAddSubnetIds(Aws::String&& value) { m_addSubnetIdsHasBeenSet = true; m_addSubnetIds.push_back(std::move(value)); return *this; }
    inline UpdateVpcEndpointRequest& AddAddSubnetIds(const char* value) { m_addSubnetIdsHasBeenSet = true; m_addSubnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifiers of the subnets to remove from the endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveSubnetIds() const{ return m_removeSubnetIds; }
    inline bool RemoveSubnetIdsHasBeenSet() const { return m_removeSubnetIdsHasBeenSet; }
    inline void SetRemoveSubnetIds(const Aws::Vector<Aws::String>& value) { m_removeSubnetIdsHasBeenSet = true; m_removeSubnetIds = value; }
    inline void SetRemoveSubnetIds(Aws::Vector<Aws::String>&& value) { m_removeSubnetIdsHasBeenSet = true; m_removeSubnetIds = std::move(value); }
    inline UpdateVpcEndpointRequest& WithRemoveSubnetIds(const Aws::Vector<Aws::String>& value) { SetRemoveSubnetIds(value); return *this;}
    inline UpdateVpcEndpointRequest& WithRemoveSubnetIds(Aws::Vector<Aws::String>&& value) { SetRemoveSubnetIds(std::move(value)); return *this;}
    inline UpdateVpcEndpointRequest& AddRemoveSubnetIds(const Aws::String& value) { m_removeSubnetIdsHasBeenSet = true; m_removeSubnetIds.push_back(value); return *this; }
    inline UpdateVpcEndpointRequest& AddRemoveSubnetIds(Aws::String&& value) { m_removeSubnetIdsHasBeenSet = true; m_removeSubnetIds.push_back(std::move(value)); return *this; }
    inline UpdateVpcEndpointRequest& AddRemoveSubnetIds(const char* value) { m_removeSubnetIdsHasBeenSet = true; m_removeSubnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifiers of the security groups to add to the endpoint.
     * Security groups define the ports, protocols, and sources for inbound traffic
     * that you are authorizing into your endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddSecurityGroupIds() const{ return m_addSecurityGroupIds; }
    inline bool AddSecurityGroupIdsHasBeenSet() const { return m_addSecurityGroupIdsHasBeenSet; }
    inline void SetAddSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_addSecurityGroupIdsHasBeenSet = true; m_addSecurityGroupIds = value; }
    inline void SetAddSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_addSecurityGroupIdsHasBeenSet = true; m_addSecurityGroupIds = std::move(value); }
    inline UpdateVpcEndpointRequest& WithAddSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetAddSecurityGroupIds(value); return *this;}
    inline UpdateVpcEndpointRequest& WithAddSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetAddSecurityGroupIds(std::move(value)); return *this;}
    inline UpdateVpcEndpointRequest& AddAddSecurityGroupIds(const Aws::String& value) { m_addSecurityGroupIdsHasBeenSet = true; m_addSecurityGroupIds.push_back(value); return *this; }
    inline UpdateVpcEndpointRequest& AddAddSecurityGroupIds(Aws::String&& value) { m_addSecurityGroupIdsHasBeenSet = true; m_addSecurityGroupIds.push_back(std::move(value)); return *this; }
    inline UpdateVpcEndpointRequest& AddAddSecurityGroupIds(const char* value) { m_addSecurityGroupIdsHasBeenSet = true; m_addSecurityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifiers of the security groups to remove from the
     * endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveSecurityGroupIds() const{ return m_removeSecurityGroupIds; }
    inline bool RemoveSecurityGroupIdsHasBeenSet() const { return m_removeSecurityGroupIdsHasBeenSet; }
    inline void SetRemoveSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_removeSecurityGroupIdsHasBeenSet = true; m_removeSecurityGroupIds = value; }
    inline void SetRemoveSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_removeSecurityGroupIdsHasBeenSet = true; m_removeSecurityGroupIds = std::move(value); }
    inline UpdateVpcEndpointRequest& WithRemoveSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetRemoveSecurityGroupIds(value); return *this;}
    inline UpdateVpcEndpointRequest& WithRemoveSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetRemoveSecurityGroupIds(std::move(value)); return *this;}
    inline UpdateVpcEndpointRequest& AddRemoveSecurityGroupIds(const Aws::String& value) { m_removeSecurityGroupIdsHasBeenSet = true; m_removeSecurityGroupIds.push_back(value); return *this; }
    inline UpdateVpcEndpointRequest& AddRemoveSecurityGroupIds(Aws::String&& value) { m_removeSecurityGroupIdsHasBeenSet = true; m_removeSecurityGroupIds.push_back(std::move(value)); return *this; }
    inline UpdateVpcEndpointRequest& AddRemoveSecurityGroupIds(const char* value) { m_removeSecurityGroupIdsHasBeenSet = true; m_removeSecurityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline UpdateVpcEndpointRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateVpcEndpointRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateVpcEndpointRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
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

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
