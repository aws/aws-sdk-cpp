/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/ImmunityTimeProperty.h>
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
   * <p>Specifies how WAF should handle <code>CAPTCHA</code> evaluations. This is
   * available at the web ACL level and in each rule. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/CaptchaConfig">AWS
   * API Reference</a></p>
   */
  class CaptchaConfig
  {
  public:
    AWS_WAFV2_API CaptchaConfig() = default;
    AWS_WAFV2_API CaptchaConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API CaptchaConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines how long a <code>CAPTCHA</code> timestamp in the token remains
     * valid after the client successfully solves a <code>CAPTCHA</code> puzzle. </p>
     */
    inline const ImmunityTimeProperty& GetImmunityTimeProperty() const { return m_immunityTimeProperty; }
    inline bool ImmunityTimePropertyHasBeenSet() const { return m_immunityTimePropertyHasBeenSet; }
    template<typename ImmunityTimePropertyT = ImmunityTimeProperty>
    void SetImmunityTimeProperty(ImmunityTimePropertyT&& value) { m_immunityTimePropertyHasBeenSet = true; m_immunityTimeProperty = std::forward<ImmunityTimePropertyT>(value); }
    template<typename ImmunityTimePropertyT = ImmunityTimeProperty>
    CaptchaConfig& WithImmunityTimeProperty(ImmunityTimePropertyT&& value) { SetImmunityTimeProperty(std::forward<ImmunityTimePropertyT>(value)); return *this;}
    ///@}
  private:

    ImmunityTimeProperty m_immunityTimeProperty;
    bool m_immunityTimePropertyHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
