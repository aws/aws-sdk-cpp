/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/wafv2/model/Scope.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class CreateAPIKeyRequest : public WAFV2Request
  {
  public:
    AWS_WAFV2_API CreateAPIKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAPIKey"; }

    AWS_WAFV2_API Aws::String SerializePayload() const override;

    AWS_WAFV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }

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
    inline void SetScope(const Scope& value) { m_scopeHasBeenSet = true; m_scope = value; }

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
    inline void SetScope(Scope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

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
    inline CreateAPIKeyRequest& WithScope(const Scope& value) { SetScope(value); return *this;}

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
    inline CreateAPIKeyRequest& WithScope(Scope&& value) { SetScope(std::move(value)); return *this;}


    /**
     * <p>The client application domains that you want to use this API key for. </p>
     * <p>Example JSON: <code>"TokenDomains": ["abc.com", "store.abc.com"]</code> </p>
     * <p>Public suffixes aren't allowed. For example, you can't use
     * <code>gov.au</code> or <code>co.uk</code> as token domains.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTokenDomains() const{ return m_tokenDomains; }

    /**
     * <p>The client application domains that you want to use this API key for. </p>
     * <p>Example JSON: <code>"TokenDomains": ["abc.com", "store.abc.com"]</code> </p>
     * <p>Public suffixes aren't allowed. For example, you can't use
     * <code>gov.au</code> or <code>co.uk</code> as token domains.</p>
     */
    inline bool TokenDomainsHasBeenSet() const { return m_tokenDomainsHasBeenSet; }

    /**
     * <p>The client application domains that you want to use this API key for. </p>
     * <p>Example JSON: <code>"TokenDomains": ["abc.com", "store.abc.com"]</code> </p>
     * <p>Public suffixes aren't allowed. For example, you can't use
     * <code>gov.au</code> or <code>co.uk</code> as token domains.</p>
     */
    inline void SetTokenDomains(const Aws::Vector<Aws::String>& value) { m_tokenDomainsHasBeenSet = true; m_tokenDomains = value; }

    /**
     * <p>The client application domains that you want to use this API key for. </p>
     * <p>Example JSON: <code>"TokenDomains": ["abc.com", "store.abc.com"]</code> </p>
     * <p>Public suffixes aren't allowed. For example, you can't use
     * <code>gov.au</code> or <code>co.uk</code> as token domains.</p>
     */
    inline void SetTokenDomains(Aws::Vector<Aws::String>&& value) { m_tokenDomainsHasBeenSet = true; m_tokenDomains = std::move(value); }

    /**
     * <p>The client application domains that you want to use this API key for. </p>
     * <p>Example JSON: <code>"TokenDomains": ["abc.com", "store.abc.com"]</code> </p>
     * <p>Public suffixes aren't allowed. For example, you can't use
     * <code>gov.au</code> or <code>co.uk</code> as token domains.</p>
     */
    inline CreateAPIKeyRequest& WithTokenDomains(const Aws::Vector<Aws::String>& value) { SetTokenDomains(value); return *this;}

    /**
     * <p>The client application domains that you want to use this API key for. </p>
     * <p>Example JSON: <code>"TokenDomains": ["abc.com", "store.abc.com"]</code> </p>
     * <p>Public suffixes aren't allowed. For example, you can't use
     * <code>gov.au</code> or <code>co.uk</code> as token domains.</p>
     */
    inline CreateAPIKeyRequest& WithTokenDomains(Aws::Vector<Aws::String>&& value) { SetTokenDomains(std::move(value)); return *this;}

    /**
     * <p>The client application domains that you want to use this API key for. </p>
     * <p>Example JSON: <code>"TokenDomains": ["abc.com", "store.abc.com"]</code> </p>
     * <p>Public suffixes aren't allowed. For example, you can't use
     * <code>gov.au</code> or <code>co.uk</code> as token domains.</p>
     */
    inline CreateAPIKeyRequest& AddTokenDomains(const Aws::String& value) { m_tokenDomainsHasBeenSet = true; m_tokenDomains.push_back(value); return *this; }

    /**
     * <p>The client application domains that you want to use this API key for. </p>
     * <p>Example JSON: <code>"TokenDomains": ["abc.com", "store.abc.com"]</code> </p>
     * <p>Public suffixes aren't allowed. For example, you can't use
     * <code>gov.au</code> or <code>co.uk</code> as token domains.</p>
     */
    inline CreateAPIKeyRequest& AddTokenDomains(Aws::String&& value) { m_tokenDomainsHasBeenSet = true; m_tokenDomains.push_back(std::move(value)); return *this; }

    /**
     * <p>The client application domains that you want to use this API key for. </p>
     * <p>Example JSON: <code>"TokenDomains": ["abc.com", "store.abc.com"]</code> </p>
     * <p>Public suffixes aren't allowed. For example, you can't use
     * <code>gov.au</code> or <code>co.uk</code> as token domains.</p>
     */
    inline CreateAPIKeyRequest& AddTokenDomains(const char* value) { m_tokenDomainsHasBeenSet = true; m_tokenDomains.push_back(value); return *this; }

  private:

    Scope m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::Vector<Aws::String> m_tokenDomains;
    bool m_tokenDomainsHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
