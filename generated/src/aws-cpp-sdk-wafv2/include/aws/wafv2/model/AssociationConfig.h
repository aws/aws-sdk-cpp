/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/wafv2/model/AssociatedResourceType.h>
#include <aws/wafv2/model/RequestBodyAssociatedResourceTypeConfig.h>
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
   * <p>Specifies custom configurations for the associations between the web ACL and
   * protected resources. </p> <p>Use this to customize the maximum size of the
   * request body that your protected resources forward to WAF for inspection. You
   * can customize this setting for CloudFront, API Gateway, Amazon Cognito, App
   * Runner, or Verified Access resources. The default setting is 16 KB (16,384
   * bytes). </p>  <p>You are charged additional fees when your protected
   * resources forward body sizes that are larger than the default. For more
   * information, see <a href="http://aws.amazon.com/waf/pricing/">WAF
   * Pricing</a>.</p>  <p>For Application Load Balancer and AppSync, the limit
   * is fixed at 8 KB (8,192 bytes).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/AssociationConfig">AWS
   * API Reference</a></p>
   */
  class AssociationConfig
  {
  public:
    AWS_WAFV2_API AssociationConfig();
    AWS_WAFV2_API AssociationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API AssociationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * at 8 KB (8,192 bytes).</p>
     */
    inline const Aws::Map<AssociatedResourceType, RequestBodyAssociatedResourceTypeConfig>& GetRequestBody() const{ return m_requestBody; }

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
     * at 8 KB (8,192 bytes).</p>
     */
    inline bool RequestBodyHasBeenSet() const { return m_requestBodyHasBeenSet; }

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
     * at 8 KB (8,192 bytes).</p>
     */
    inline void SetRequestBody(const Aws::Map<AssociatedResourceType, RequestBodyAssociatedResourceTypeConfig>& value) { m_requestBodyHasBeenSet = true; m_requestBody = value; }

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
     * at 8 KB (8,192 bytes).</p>
     */
    inline void SetRequestBody(Aws::Map<AssociatedResourceType, RequestBodyAssociatedResourceTypeConfig>&& value) { m_requestBodyHasBeenSet = true; m_requestBody = std::move(value); }

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
     * at 8 KB (8,192 bytes).</p>
     */
    inline AssociationConfig& WithRequestBody(const Aws::Map<AssociatedResourceType, RequestBodyAssociatedResourceTypeConfig>& value) { SetRequestBody(value); return *this;}

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
     * at 8 KB (8,192 bytes).</p>
     */
    inline AssociationConfig& WithRequestBody(Aws::Map<AssociatedResourceType, RequestBodyAssociatedResourceTypeConfig>&& value) { SetRequestBody(std::move(value)); return *this;}

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
     * at 8 KB (8,192 bytes).</p>
     */
    inline AssociationConfig& AddRequestBody(const AssociatedResourceType& key, const RequestBodyAssociatedResourceTypeConfig& value) { m_requestBodyHasBeenSet = true; m_requestBody.emplace(key, value); return *this; }

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
     * at 8 KB (8,192 bytes).</p>
     */
    inline AssociationConfig& AddRequestBody(AssociatedResourceType&& key, const RequestBodyAssociatedResourceTypeConfig& value) { m_requestBodyHasBeenSet = true; m_requestBody.emplace(std::move(key), value); return *this; }

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
     * at 8 KB (8,192 bytes).</p>
     */
    inline AssociationConfig& AddRequestBody(const AssociatedResourceType& key, RequestBodyAssociatedResourceTypeConfig&& value) { m_requestBodyHasBeenSet = true; m_requestBody.emplace(key, std::move(value)); return *this; }

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
     * at 8 KB (8,192 bytes).</p>
     */
    inline AssociationConfig& AddRequestBody(AssociatedResourceType&& key, RequestBodyAssociatedResourceTypeConfig&& value) { m_requestBodyHasBeenSet = true; m_requestBody.emplace(std::move(key), std::move(value)); return *this; }

  private:

    Aws::Map<AssociatedResourceType, RequestBodyAssociatedResourceTypeConfig> m_requestBody;
    bool m_requestBodyHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
