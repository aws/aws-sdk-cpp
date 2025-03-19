/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace WorkMail
{
namespace Model
{

  /**
   * <p>The rule that a simulated user matches.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/MobileDeviceAccessMatchedRule">AWS
   * API Reference</a></p>
   */
  class MobileDeviceAccessMatchedRule
  {
  public:
    AWS_WORKMAIL_API MobileDeviceAccessMatchedRule() = default;
    AWS_WORKMAIL_API MobileDeviceAccessMatchedRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API MobileDeviceAccessMatchedRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifier of the rule that a simulated user matches.</p>
     */
    inline const Aws::String& GetMobileDeviceAccessRuleId() const { return m_mobileDeviceAccessRuleId; }
    inline bool MobileDeviceAccessRuleIdHasBeenSet() const { return m_mobileDeviceAccessRuleIdHasBeenSet; }
    template<typename MobileDeviceAccessRuleIdT = Aws::String>
    void SetMobileDeviceAccessRuleId(MobileDeviceAccessRuleIdT&& value) { m_mobileDeviceAccessRuleIdHasBeenSet = true; m_mobileDeviceAccessRuleId = std::forward<MobileDeviceAccessRuleIdT>(value); }
    template<typename MobileDeviceAccessRuleIdT = Aws::String>
    MobileDeviceAccessMatchedRule& WithMobileDeviceAccessRuleId(MobileDeviceAccessRuleIdT&& value) { SetMobileDeviceAccessRuleId(std::forward<MobileDeviceAccessRuleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of a rule that a simulated user matches.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    MobileDeviceAccessMatchedRule& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mobileDeviceAccessRuleId;
    bool m_mobileDeviceAccessRuleIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
