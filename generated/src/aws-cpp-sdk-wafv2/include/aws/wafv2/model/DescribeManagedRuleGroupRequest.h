/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/Scope.h>
#include <utility>

namespace Aws
{
namespace WAFV2
{
namespace Model
{

  /**
   */
  class DescribeManagedRuleGroupRequest : public WAFV2Request
  {
  public:
    AWS_WAFV2_API DescribeManagedRuleGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeManagedRuleGroup"; }

    AWS_WAFV2_API Aws::String SerializePayload() const override;

    AWS_WAFV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the managed rule group vendor. You use this, along with the rule
     * group name, to identify the rule group.</p>
     */
    inline const Aws::String& GetVendorName() const{ return m_vendorName; }

    /**
     * <p>The name of the managed rule group vendor. You use this, along with the rule
     * group name, to identify the rule group.</p>
     */
    inline bool VendorNameHasBeenSet() const { return m_vendorNameHasBeenSet; }

    /**
     * <p>The name of the managed rule group vendor. You use this, along with the rule
     * group name, to identify the rule group.</p>
     */
    inline void SetVendorName(const Aws::String& value) { m_vendorNameHasBeenSet = true; m_vendorName = value; }

    /**
     * <p>The name of the managed rule group vendor. You use this, along with the rule
     * group name, to identify the rule group.</p>
     */
    inline void SetVendorName(Aws::String&& value) { m_vendorNameHasBeenSet = true; m_vendorName = std::move(value); }

    /**
     * <p>The name of the managed rule group vendor. You use this, along with the rule
     * group name, to identify the rule group.</p>
     */
    inline void SetVendorName(const char* value) { m_vendorNameHasBeenSet = true; m_vendorName.assign(value); }

    /**
     * <p>The name of the managed rule group vendor. You use this, along with the rule
     * group name, to identify the rule group.</p>
     */
    inline DescribeManagedRuleGroupRequest& WithVendorName(const Aws::String& value) { SetVendorName(value); return *this;}

    /**
     * <p>The name of the managed rule group vendor. You use this, along with the rule
     * group name, to identify the rule group.</p>
     */
    inline DescribeManagedRuleGroupRequest& WithVendorName(Aws::String&& value) { SetVendorName(std::move(value)); return *this;}

    /**
     * <p>The name of the managed rule group vendor. You use this, along with the rule
     * group name, to identify the rule group.</p>
     */
    inline DescribeManagedRuleGroupRequest& WithVendorName(const char* value) { SetVendorName(value); return *this;}


    /**
     * <p>The name of the managed rule group. You use this, along with the vendor name,
     * to identify the rule group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the managed rule group. You use this, along with the vendor name,
     * to identify the rule group.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the managed rule group. You use this, along with the vendor name,
     * to identify the rule group.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the managed rule group. You use this, along with the vendor name,
     * to identify the rule group.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the managed rule group. You use this, along with the vendor name,
     * to identify the rule group.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the managed rule group. You use this, along with the vendor name,
     * to identify the rule group.</p>
     */
    inline DescribeManagedRuleGroupRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the managed rule group. You use this, along with the vendor name,
     * to identify the rule group.</p>
     */
    inline DescribeManagedRuleGroupRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the managed rule group. You use this, along with the vendor name,
     * to identify the rule group.</p>
     */
    inline DescribeManagedRuleGroupRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies whether this is for an Amazon CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an Amazon API Gateway REST API, an AppSync GraphQL API, or an Amazon
     * Cognito user pool. </p> <p>To work with CloudFront, you must also specify the
     * Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the
     * Region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline const Scope& GetScope() const{ return m_scope; }

    /**
     * <p>Specifies whether this is for an Amazon CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an Amazon API Gateway REST API, an AppSync GraphQL API, or an Amazon
     * Cognito user pool. </p> <p>To work with CloudFront, you must also specify the
     * Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the
     * Region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }

    /**
     * <p>Specifies whether this is for an Amazon CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an Amazon API Gateway REST API, an AppSync GraphQL API, or an Amazon
     * Cognito user pool. </p> <p>To work with CloudFront, you must also specify the
     * Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the
     * Region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline void SetScope(const Scope& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>Specifies whether this is for an Amazon CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an Amazon API Gateway REST API, an AppSync GraphQL API, or an Amazon
     * Cognito user pool. </p> <p>To work with CloudFront, you must also specify the
     * Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the
     * Region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline void SetScope(Scope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

    /**
     * <p>Specifies whether this is for an Amazon CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an Amazon API Gateway REST API, an AppSync GraphQL API, or an Amazon
     * Cognito user pool. </p> <p>To work with CloudFront, you must also specify the
     * Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the
     * Region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline DescribeManagedRuleGroupRequest& WithScope(const Scope& value) { SetScope(value); return *this;}

    /**
     * <p>Specifies whether this is for an Amazon CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an Amazon API Gateway REST API, an AppSync GraphQL API, or an Amazon
     * Cognito user pool. </p> <p>To work with CloudFront, you must also specify the
     * Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the
     * Region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline DescribeManagedRuleGroupRequest& WithScope(Scope&& value) { SetScope(std::move(value)); return *this;}


    /**
     * <p>The version of the rule group. You can only use a version that is not
     * scheduled for expiration. If you don't provide this, WAF uses the vendor's
     * default version. </p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }

    /**
     * <p>The version of the rule group. You can only use a version that is not
     * scheduled for expiration. If you don't provide this, WAF uses the vendor's
     * default version. </p>
     */
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }

    /**
     * <p>The version of the rule group. You can only use a version that is not
     * scheduled for expiration. If you don't provide this, WAF uses the vendor's
     * default version. </p>
     */
    inline void SetVersionName(const Aws::String& value) { m_versionNameHasBeenSet = true; m_versionName = value; }

    /**
     * <p>The version of the rule group. You can only use a version that is not
     * scheduled for expiration. If you don't provide this, WAF uses the vendor's
     * default version. </p>
     */
    inline void SetVersionName(Aws::String&& value) { m_versionNameHasBeenSet = true; m_versionName = std::move(value); }

    /**
     * <p>The version of the rule group. You can only use a version that is not
     * scheduled for expiration. If you don't provide this, WAF uses the vendor's
     * default version. </p>
     */
    inline void SetVersionName(const char* value) { m_versionNameHasBeenSet = true; m_versionName.assign(value); }

    /**
     * <p>The version of the rule group. You can only use a version that is not
     * scheduled for expiration. If you don't provide this, WAF uses the vendor's
     * default version. </p>
     */
    inline DescribeManagedRuleGroupRequest& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}

    /**
     * <p>The version of the rule group. You can only use a version that is not
     * scheduled for expiration. If you don't provide this, WAF uses the vendor's
     * default version. </p>
     */
    inline DescribeManagedRuleGroupRequest& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}

    /**
     * <p>The version of the rule group. You can only use a version that is not
     * scheduled for expiration. If you don't provide this, WAF uses the vendor's
     * default version. </p>
     */
    inline DescribeManagedRuleGroupRequest& WithVersionName(const char* value) { SetVersionName(value); return *this;}

  private:

    Aws::String m_vendorName;
    bool m_vendorNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Scope m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
