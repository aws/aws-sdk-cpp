/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsWafv2WebAclCaptchaConfigImmunityTimePropertyDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Specifies how WAF should handle CAPTCHA evaluations for rules that don't
   * have their own <code>CaptchaConfig</code> settings. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafv2WebAclCaptchaConfigDetails">AWS
   * API Reference</a></p>
   */
  class AwsWafv2WebAclCaptchaConfigDetails
  {
  public:
    AWS_SECURITYHUB_API AwsWafv2WebAclCaptchaConfigDetails() = default;
    AWS_SECURITYHUB_API AwsWafv2WebAclCaptchaConfigDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafv2WebAclCaptchaConfigDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Determines how long a CAPTCHA timestamp in the token remains valid after the
     * client successfully solves a CAPTCHA puzzle. </p>
     */
    inline const AwsWafv2WebAclCaptchaConfigImmunityTimePropertyDetails& GetImmunityTimeProperty() const { return m_immunityTimeProperty; }
    inline bool ImmunityTimePropertyHasBeenSet() const { return m_immunityTimePropertyHasBeenSet; }
    template<typename ImmunityTimePropertyT = AwsWafv2WebAclCaptchaConfigImmunityTimePropertyDetails>
    void SetImmunityTimeProperty(ImmunityTimePropertyT&& value) { m_immunityTimePropertyHasBeenSet = true; m_immunityTimeProperty = std::forward<ImmunityTimePropertyT>(value); }
    template<typename ImmunityTimePropertyT = AwsWafv2WebAclCaptchaConfigImmunityTimePropertyDetails>
    AwsWafv2WebAclCaptchaConfigDetails& WithImmunityTimeProperty(ImmunityTimePropertyT&& value) { SetImmunityTimeProperty(std::forward<ImmunityTimePropertyT>(value)); return *this;}
    ///@}
  private:

    AwsWafv2WebAclCaptchaConfigImmunityTimePropertyDetails m_immunityTimeProperty;
    bool m_immunityTimePropertyHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
