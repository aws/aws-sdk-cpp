/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/AssociatedResourceType.h>
#include <aws/wafv2/model/ChallengeJavascriptSdkInjectionConfig.h>
#include <aws/wafv2/model/RequestBodyAssociatedResourceTypeConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WAFV2 {
namespace Model {

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
 * is fixed at 8 KB (8,192 bytes).</p> <p>You can also use this to have your
 * CloudFront distributions insert the WAF challenge JavaScript SDK into the HTML
 * responses that they return. For more information, see the
 * <code>ChallengeJavascriptSdkInjection</code> setting. </p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/AssociationConfig">AWS
 * API Reference</a></p>
 */
class AssociationConfig {
 public:
  AWS_WAFV2_API AssociationConfig() = default;
  AWS_WAFV2_API AssociationConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API AssociationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
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
  inline const Aws::Map<AssociatedResourceType, RequestBodyAssociatedResourceTypeConfig>& GetRequestBody() const { return m_requestBody; }
  inline bool RequestBodyHasBeenSet() const { return m_requestBodyHasBeenSet; }
  template <typename RequestBodyT = Aws::Map<AssociatedResourceType, RequestBodyAssociatedResourceTypeConfig>>
  void SetRequestBody(RequestBodyT&& value) {
    m_requestBodyHasBeenSet = true;
    m_requestBody = std::forward<RequestBodyT>(value);
  }
  template <typename RequestBodyT = Aws::Map<AssociatedResourceType, RequestBodyAssociatedResourceTypeConfig>>
  AssociationConfig& WithRequestBody(RequestBodyT&& value) {
    SetRequestBody(std::forward<RequestBodyT>(value));
    return *this;
  }
  inline AssociationConfig& AddRequestBody(AssociatedResourceType key, RequestBodyAssociatedResourceTypeConfig value) {
    m_requestBodyHasBeenSet = true;
    m_requestBody.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the CloudFront distributions that insert the WAF challenge
   * JavaScript SDK into the HTML responses that they return. When you enable this
   * setting for a distribution, you do not add the SDK to your web pages yourself.
   * </p> <p>You can configure this setting only for CloudFront distributions, using
   * the <code>CLOUDFRONT</code> map key. WAF rejects any other resource type, and
   * the setting is not available for regional resources. To configure it, use the
   * CloudFront scope. </p> <p>Your web ACL must also contain at least one of the
   * following qualifying managed rule groups. WAF Bot Control qualifies only at the
   * <code>TARGETED</code> inspection level, not at <code>COMMON</code>: </p> <ul>
   * <li> <p>The WAF Bot Control managed rule group
   * <code>AWSManagedRulesBotControlRuleSet</code>, with the inspection level set to
   * <code>TARGETED</code>. </p> </li> <li> <p>The WAF Fraud Control account takeover
   * prevention (ATP) managed rule group <code>AWSManagedRulesATPRuleSet</code>. </p>
   * </li> <li> <p>The WAF Fraud Control account creation fraud prevention (ACFP)
   * managed rule group <code>AWSManagedRulesACFPRuleSet</code>. </p> </li> </ul>
   * <p>If you remove the last qualifying managed rule group from the web ACL, or
   * lower the WAF Bot Control inspection level from <code>TARGETED</code> to
   * <code>COMMON</code>, you must remove this setting in the same update. Otherwise,
   * WAF rejects the update. </p> <p>Example JSON: <code> { "CLOUDFRONT": {} }</code>
   * </p> <p>If you omit this setting, CloudFront does not insert the SDK. When you
   * omit it from a web ACL that previously used it, cached HTML that already
   * contains the SDK is still served until it expires, or until you invalidate the
   * cache for that distribution. For more information, see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-challenge-javascript-sdk-injection.html">Automatic
   * SDK integration for CloudFront distributions</a> in the <i>WAF Developer
   * Guide</i>. </p>
   */
  inline const Aws::Map<AssociatedResourceType, ChallengeJavascriptSdkInjectionConfig>& GetChallengeJavascriptSdkInjection() const {
    return m_challengeJavascriptSdkInjection;
  }
  inline bool ChallengeJavascriptSdkInjectionHasBeenSet() const { return m_challengeJavascriptSdkInjectionHasBeenSet; }
  template <typename ChallengeJavascriptSdkInjectionT = Aws::Map<AssociatedResourceType, ChallengeJavascriptSdkInjectionConfig>>
  void SetChallengeJavascriptSdkInjection(ChallengeJavascriptSdkInjectionT&& value) {
    m_challengeJavascriptSdkInjectionHasBeenSet = true;
    m_challengeJavascriptSdkInjection = std::forward<ChallengeJavascriptSdkInjectionT>(value);
  }
  template <typename ChallengeJavascriptSdkInjectionT = Aws::Map<AssociatedResourceType, ChallengeJavascriptSdkInjectionConfig>>
  AssociationConfig& WithChallengeJavascriptSdkInjection(ChallengeJavascriptSdkInjectionT&& value) {
    SetChallengeJavascriptSdkInjection(std::forward<ChallengeJavascriptSdkInjectionT>(value));
    return *this;
  }
  inline AssociationConfig& AddChallengeJavascriptSdkInjection(AssociatedResourceType key, ChallengeJavascriptSdkInjectionConfig value) {
    m_challengeJavascriptSdkInjectionHasBeenSet = true;
    m_challengeJavascriptSdkInjection.emplace(key, value);
    return *this;
  }
  ///@}
 private:
  Aws::Map<AssociatedResourceType, RequestBodyAssociatedResourceTypeConfig> m_requestBody;

  Aws::Map<AssociatedResourceType, ChallengeJavascriptSdkInjectionConfig> m_challengeJavascriptSdkInjection;
  bool m_requestBodyHasBeenSet = false;
  bool m_challengeJavascriptSdkInjectionHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
