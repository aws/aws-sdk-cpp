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
    AWS_WORKMAIL_API MobileDeviceAccessMatchedRule();
    AWS_WORKMAIL_API MobileDeviceAccessMatchedRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API MobileDeviceAccessMatchedRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifier of the rule that a simulated user matches.</p>
     */
    inline const Aws::String& GetMobileDeviceAccessRuleId() const{ return m_mobileDeviceAccessRuleId; }
    inline bool MobileDeviceAccessRuleIdHasBeenSet() const { return m_mobileDeviceAccessRuleIdHasBeenSet; }
    inline void SetMobileDeviceAccessRuleId(const Aws::String& value) { m_mobileDeviceAccessRuleIdHasBeenSet = true; m_mobileDeviceAccessRuleId = value; }
    inline void SetMobileDeviceAccessRuleId(Aws::String&& value) { m_mobileDeviceAccessRuleIdHasBeenSet = true; m_mobileDeviceAccessRuleId = std::move(value); }
    inline void SetMobileDeviceAccessRuleId(const char* value) { m_mobileDeviceAccessRuleIdHasBeenSet = true; m_mobileDeviceAccessRuleId.assign(value); }
    inline MobileDeviceAccessMatchedRule& WithMobileDeviceAccessRuleId(const Aws::String& value) { SetMobileDeviceAccessRuleId(value); return *this;}
    inline MobileDeviceAccessMatchedRule& WithMobileDeviceAccessRuleId(Aws::String&& value) { SetMobileDeviceAccessRuleId(std::move(value)); return *this;}
    inline MobileDeviceAccessMatchedRule& WithMobileDeviceAccessRuleId(const char* value) { SetMobileDeviceAccessRuleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of a rule that a simulated user matches.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline MobileDeviceAccessMatchedRule& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline MobileDeviceAccessMatchedRule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline MobileDeviceAccessMatchedRule& WithName(const char* value) { SetName(value); return *this;}
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
