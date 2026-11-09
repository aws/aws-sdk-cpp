/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>

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
 * <p>Specifies whether the associated CloudFront distribution inserts the WAF
 * challenge JavaScript SDK into the HTML responses that it returns. The structure
 * is empty: including it turns insertion on, and removing it turns insertion off.
 * </p> <p>This is used in the <code>ChallengeJavascriptSdkInjection</code> map of
 * the <code>AssociationConfig</code> of the web ACL. The map key identifies the
 * resource type and must be <code>CLOUDFRONT</code>. </p> <p>JSON specification:
 * <code>"CLOUDFRONT": {}</code> </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ChallengeJavascriptSdkInjectionConfig">AWS
 * API Reference</a></p>
 */
class ChallengeJavascriptSdkInjectionConfig {
 public:
  AWS_WAFV2_API ChallengeJavascriptSdkInjectionConfig() = default;
  AWS_WAFV2_API ChallengeJavascriptSdkInjectionConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API ChallengeJavascriptSdkInjectionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
