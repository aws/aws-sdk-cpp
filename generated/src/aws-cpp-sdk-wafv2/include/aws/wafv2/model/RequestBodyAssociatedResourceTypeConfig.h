/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/SizeInspectionLimit.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WAFV2
{
namespace Model
{

  /**
   * <p>Customizes the maximum size of the request body that your protected
   * CloudFront, API Gateway, Amazon Cognito, App Runner, and Verified Access
   * resources forward to WAF for inspection. The default size is 16 KB (16,384
   * bytes). You can change the setting for any of the available resource types. </p>
   *  <p>You are charged additional fees when your protected resources forward
   * body sizes that are larger than the default. For more information, see <a
   * href="http://aws.amazon.com/waf/pricing/">WAF Pricing</a>.</p> 
   * <p>Example JSON: <code> { "API_GATEWAY": "KB_48", "APP_RUNNER_SERVICE": "KB_32"
   * }</code> </p> <p>For Application Load Balancer and AppSync, the limit is fixed
   * at 8 KB (8,192 bytes).</p> <p>This is used in the <code>AssociationConfig</code>
   * of the web ACL. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/RequestBodyAssociatedResourceTypeConfig">AWS
   * API Reference</a></p>
   */
  class RequestBodyAssociatedResourceTypeConfig
  {
  public:
    AWS_WAFV2_API RequestBodyAssociatedResourceTypeConfig();
    AWS_WAFV2_API RequestBodyAssociatedResourceTypeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API RequestBodyAssociatedResourceTypeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the maximum size of the web request body component that an
     * associated CloudFront, API Gateway, Amazon Cognito, App Runner, or Verified
     * Access resource should send to WAF for inspection. This applies to statements in
     * the web ACL that inspect the body or JSON body. </p> <p>Default: <code>16 KB
     * (16,384 bytes)</code> </p>
     */
    inline const SizeInspectionLimit& GetDefaultSizeInspectionLimit() const{ return m_defaultSizeInspectionLimit; }

    /**
     * <p>Specifies the maximum size of the web request body component that an
     * associated CloudFront, API Gateway, Amazon Cognito, App Runner, or Verified
     * Access resource should send to WAF for inspection. This applies to statements in
     * the web ACL that inspect the body or JSON body. </p> <p>Default: <code>16 KB
     * (16,384 bytes)</code> </p>
     */
    inline bool DefaultSizeInspectionLimitHasBeenSet() const { return m_defaultSizeInspectionLimitHasBeenSet; }

    /**
     * <p>Specifies the maximum size of the web request body component that an
     * associated CloudFront, API Gateway, Amazon Cognito, App Runner, or Verified
     * Access resource should send to WAF for inspection. This applies to statements in
     * the web ACL that inspect the body or JSON body. </p> <p>Default: <code>16 KB
     * (16,384 bytes)</code> </p>
     */
    inline void SetDefaultSizeInspectionLimit(const SizeInspectionLimit& value) { m_defaultSizeInspectionLimitHasBeenSet = true; m_defaultSizeInspectionLimit = value; }

    /**
     * <p>Specifies the maximum size of the web request body component that an
     * associated CloudFront, API Gateway, Amazon Cognito, App Runner, or Verified
     * Access resource should send to WAF for inspection. This applies to statements in
     * the web ACL that inspect the body or JSON body. </p> <p>Default: <code>16 KB
     * (16,384 bytes)</code> </p>
     */
    inline void SetDefaultSizeInspectionLimit(SizeInspectionLimit&& value) { m_defaultSizeInspectionLimitHasBeenSet = true; m_defaultSizeInspectionLimit = std::move(value); }

    /**
     * <p>Specifies the maximum size of the web request body component that an
     * associated CloudFront, API Gateway, Amazon Cognito, App Runner, or Verified
     * Access resource should send to WAF for inspection. This applies to statements in
     * the web ACL that inspect the body or JSON body. </p> <p>Default: <code>16 KB
     * (16,384 bytes)</code> </p>
     */
    inline RequestBodyAssociatedResourceTypeConfig& WithDefaultSizeInspectionLimit(const SizeInspectionLimit& value) { SetDefaultSizeInspectionLimit(value); return *this;}

    /**
     * <p>Specifies the maximum size of the web request body component that an
     * associated CloudFront, API Gateway, Amazon Cognito, App Runner, or Verified
     * Access resource should send to WAF for inspection. This applies to statements in
     * the web ACL that inspect the body or JSON body. </p> <p>Default: <code>16 KB
     * (16,384 bytes)</code> </p>
     */
    inline RequestBodyAssociatedResourceTypeConfig& WithDefaultSizeInspectionLimit(SizeInspectionLimit&& value) { SetDefaultSizeInspectionLimit(std::move(value)); return *this;}

  private:

    SizeInspectionLimit m_defaultSizeInspectionLimit;
    bool m_defaultSizeInspectionLimitHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
