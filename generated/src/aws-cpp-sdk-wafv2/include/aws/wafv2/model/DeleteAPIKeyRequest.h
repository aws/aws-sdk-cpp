﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/wafv2/model/Scope.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WAFV2
{
namespace Model
{

  /**
   */
  class DeleteAPIKeyRequest : public WAFV2Request
  {
  public:
    AWS_WAFV2_API DeleteAPIKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAPIKey"; }

    AWS_WAFV2_API Aws::String SerializePayload() const override;

    AWS_WAFV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies whether this is for an Amazon CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an Amazon API Gateway REST API, an AppSync GraphQL API, an Amazon Cognito
     * user pool, an App Runner service, or an Amazon Web Services Verified Access
     * instance. </p> <p>To work with CloudFront, you must also specify the Region US
     * East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the Region when
     * you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline const Scope& GetScope() const{ return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(const Scope& value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline void SetScope(Scope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }
    inline DeleteAPIKeyRequest& WithScope(const Scope& value) { SetScope(value); return *this;}
    inline DeleteAPIKeyRequest& WithScope(Scope&& value) { SetScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encrypted API key that you want to delete. </p>
     */
    inline const Aws::String& GetAPIKey() const{ return m_aPIKey; }
    inline bool APIKeyHasBeenSet() const { return m_aPIKeyHasBeenSet; }
    inline void SetAPIKey(const Aws::String& value) { m_aPIKeyHasBeenSet = true; m_aPIKey = value; }
    inline void SetAPIKey(Aws::String&& value) { m_aPIKeyHasBeenSet = true; m_aPIKey = std::move(value); }
    inline void SetAPIKey(const char* value) { m_aPIKeyHasBeenSet = true; m_aPIKey.assign(value); }
    inline DeleteAPIKeyRequest& WithAPIKey(const Aws::String& value) { SetAPIKey(value); return *this;}
    inline DeleteAPIKeyRequest& WithAPIKey(Aws::String&& value) { SetAPIKey(std::move(value)); return *this;}
    inline DeleteAPIKeyRequest& WithAPIKey(const char* value) { SetAPIKey(value); return *this;}
    ///@}
  private:

    Scope m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::String m_aPIKey;
    bool m_aPIKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
