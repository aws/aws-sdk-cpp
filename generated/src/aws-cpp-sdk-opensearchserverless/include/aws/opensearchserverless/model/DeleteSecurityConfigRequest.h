/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/OpenSearchServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DeleteSecurityConfigRequest : public OpenSearchServerlessRequest
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API DeleteSecurityConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSecurityConfig"; }

    AWS_OPENSEARCHSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_OPENSEARCHSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline DeleteSecurityConfigRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline DeleteSecurityConfigRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline DeleteSecurityConfigRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The security configuration identifier. For SAML the ID will be
     * <code>saml/&lt;accountId&gt;/&lt;idpProviderName&gt;</code>. For example,
     * <code>saml/123456789123/OKTADev</code>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The security configuration identifier. For SAML the ID will be
     * <code>saml/&lt;accountId&gt;/&lt;idpProviderName&gt;</code>. For example,
     * <code>saml/123456789123/OKTADev</code>.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The security configuration identifier. For SAML the ID will be
     * <code>saml/&lt;accountId&gt;/&lt;idpProviderName&gt;</code>. For example,
     * <code>saml/123456789123/OKTADev</code>.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The security configuration identifier. For SAML the ID will be
     * <code>saml/&lt;accountId&gt;/&lt;idpProviderName&gt;</code>. For example,
     * <code>saml/123456789123/OKTADev</code>.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The security configuration identifier. For SAML the ID will be
     * <code>saml/&lt;accountId&gt;/&lt;idpProviderName&gt;</code>. For example,
     * <code>saml/123456789123/OKTADev</code>.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The security configuration identifier. For SAML the ID will be
     * <code>saml/&lt;accountId&gt;/&lt;idpProviderName&gt;</code>. For example,
     * <code>saml/123456789123/OKTADev</code>.</p>
     */
    inline DeleteSecurityConfigRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The security configuration identifier. For SAML the ID will be
     * <code>saml/&lt;accountId&gt;/&lt;idpProviderName&gt;</code>. For example,
     * <code>saml/123456789123/OKTADev</code>.</p>
     */
    inline DeleteSecurityConfigRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The security configuration identifier. For SAML the ID will be
     * <code>saml/&lt;accountId&gt;/&lt;idpProviderName&gt;</code>. For example,
     * <code>saml/123456789123/OKTADev</code>.</p>
     */
    inline DeleteSecurityConfigRequest& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
