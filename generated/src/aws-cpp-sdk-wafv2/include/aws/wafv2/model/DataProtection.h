/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/FieldToProtect.h>
#include <aws/wafv2/model/DataProtectionAction.h>
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
   * <p>Specifies the protection behavior for a field type. This is part of the data
   * protection configuration for a web ACL. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DataProtection">AWS
   * API Reference</a></p>
   */
  class DataProtection
  {
  public:
    AWS_WAFV2_API DataProtection() = default;
    AWS_WAFV2_API DataProtection(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API DataProtection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the field type and optional keys to apply the protection behavior
     * to. </p>
     */
    inline const FieldToProtect& GetField() const { return m_field; }
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
    template<typename FieldT = FieldToProtect>
    void SetField(FieldT&& value) { m_fieldHasBeenSet = true; m_field = std::forward<FieldT>(value); }
    template<typename FieldT = FieldToProtect>
    DataProtection& WithField(FieldT&& value) { SetField(std::forward<FieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how to protect the field. WAF can apply a one-way hash to the field
     * or hard code a string substitution. </p> <ul> <li> <p>One-way hash example:
     * <code>ade099751dEXAMPLEHASH2ea9f3393f80dd5d3bEXAMPLEHASH966ae0d3cd5a1e</code>
     * </p> </li> <li> <p>Substitution example: <code>REDACTED</code> </p> </li> </ul>
     */
    inline DataProtectionAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(DataProtectionAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline DataProtection& WithAction(DataProtectionAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to also exclude any rule match details from the data
     * protection you have enabled for a given field. WAF logs these details for
     * non-terminating matching rules and for the terminating matching rule. For
     * additional information, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/logging-fields.html">Log
     * fields for web ACL traffic</a> in the <i>WAF Developer Guide</i>.</p>
     * <p>Default: <code>FALSE</code> </p>
     */
    inline bool GetExcludeRuleMatchDetails() const { return m_excludeRuleMatchDetails; }
    inline bool ExcludeRuleMatchDetailsHasBeenSet() const { return m_excludeRuleMatchDetailsHasBeenSet; }
    inline void SetExcludeRuleMatchDetails(bool value) { m_excludeRuleMatchDetailsHasBeenSet = true; m_excludeRuleMatchDetails = value; }
    inline DataProtection& WithExcludeRuleMatchDetails(bool value) { SetExcludeRuleMatchDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to also exclude any rate-based rule details from the data
     * protection you have enabled for a given field. If you specify this exception,
     * RateBasedDetails will show the value of the field. For additional information,
     * see the log field <code>rateBasedRuleList</code> at <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/logging-fields.html">Log
     * fields for web ACL traffic</a> in the <i>WAF Developer Guide</i>.</p>
     * <p>Default: <code>FALSE</code> </p>
     */
    inline bool GetExcludeRateBasedDetails() const { return m_excludeRateBasedDetails; }
    inline bool ExcludeRateBasedDetailsHasBeenSet() const { return m_excludeRateBasedDetailsHasBeenSet; }
    inline void SetExcludeRateBasedDetails(bool value) { m_excludeRateBasedDetailsHasBeenSet = true; m_excludeRateBasedDetails = value; }
    inline DataProtection& WithExcludeRateBasedDetails(bool value) { SetExcludeRateBasedDetails(value); return *this;}
    ///@}
  private:

    FieldToProtect m_field;
    bool m_fieldHasBeenSet = false;

    DataProtectionAction m_action{DataProtectionAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    bool m_excludeRuleMatchDetails{false};
    bool m_excludeRuleMatchDetailsHasBeenSet = false;

    bool m_excludeRateBasedDetails{false};
    bool m_excludeRateBasedDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
