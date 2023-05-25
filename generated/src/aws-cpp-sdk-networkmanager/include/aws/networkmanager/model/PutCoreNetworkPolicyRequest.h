/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

  /**
   */
  class PutCoreNetworkPolicyRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API PutCoreNetworkPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutCoreNetworkPolicy"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of a core network.</p>
     */
    inline const Aws::String& GetCoreNetworkId() const{ return m_coreNetworkId; }

    /**
     * <p>The ID of a core network.</p>
     */
    inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }

    /**
     * <p>The ID of a core network.</p>
     */
    inline void SetCoreNetworkId(const Aws::String& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = value; }

    /**
     * <p>The ID of a core network.</p>
     */
    inline void SetCoreNetworkId(Aws::String&& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = std::move(value); }

    /**
     * <p>The ID of a core network.</p>
     */
    inline void SetCoreNetworkId(const char* value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId.assign(value); }

    /**
     * <p>The ID of a core network.</p>
     */
    inline PutCoreNetworkPolicyRequest& WithCoreNetworkId(const Aws::String& value) { SetCoreNetworkId(value); return *this;}

    /**
     * <p>The ID of a core network.</p>
     */
    inline PutCoreNetworkPolicyRequest& WithCoreNetworkId(Aws::String&& value) { SetCoreNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of a core network.</p>
     */
    inline PutCoreNetworkPolicyRequest& WithCoreNetworkId(const char* value) { SetCoreNetworkId(value); return *this;}


    /**
     * <p>The policy document.</p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }

    /**
     * <p>The policy document.</p>
     */
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }

    /**
     * <p>The policy document.</p>
     */
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }

    /**
     * <p>The policy document.</p>
     */
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::move(value); }

    /**
     * <p>The policy document.</p>
     */
    inline void SetPolicyDocument(const char* value) { m_policyDocumentHasBeenSet = true; m_policyDocument.assign(value); }

    /**
     * <p>The policy document.</p>
     */
    inline PutCoreNetworkPolicyRequest& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>The policy document.</p>
     */
    inline PutCoreNetworkPolicyRequest& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}

    /**
     * <p>The policy document.</p>
     */
    inline PutCoreNetworkPolicyRequest& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}


    /**
     * <p>a core network policy description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>a core network policy description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>a core network policy description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>a core network policy description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>a core network policy description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>a core network policy description.</p>
     */
    inline PutCoreNetworkPolicyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>a core network policy description.</p>
     */
    inline PutCoreNetworkPolicyRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>a core network policy description.</p>
     */
    inline PutCoreNetworkPolicyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ID of a core network policy. </p>
     */
    inline int GetLatestVersionId() const{ return m_latestVersionId; }

    /**
     * <p>The ID of a core network policy. </p>
     */
    inline bool LatestVersionIdHasBeenSet() const { return m_latestVersionIdHasBeenSet; }

    /**
     * <p>The ID of a core network policy. </p>
     */
    inline void SetLatestVersionId(int value) { m_latestVersionIdHasBeenSet = true; m_latestVersionId = value; }

    /**
     * <p>The ID of a core network policy. </p>
     */
    inline PutCoreNetworkPolicyRequest& WithLatestVersionId(int value) { SetLatestVersionId(value); return *this;}


    /**
     * <p>The client token associated with the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The client token associated with the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The client token associated with the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The client token associated with the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The client token associated with the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The client token associated with the request.</p>
     */
    inline PutCoreNetworkPolicyRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The client token associated with the request.</p>
     */
    inline PutCoreNetworkPolicyRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The client token associated with the request.</p>
     */
    inline PutCoreNetworkPolicyRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_coreNetworkId;
    bool m_coreNetworkIdHasBeenSet = false;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_latestVersionId;
    bool m_latestVersionIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
