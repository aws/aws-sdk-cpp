/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> A list of objects containing <code>RuleArn</code>, <code>ErrorCode</code>,
   * and <code>ErrorMessage</code>. This parameter tells you which automation rules
   * the request didn't process and why. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UnprocessedAutomationRule">AWS
   * API Reference</a></p>
   */
  class UnprocessedAutomationRule
  {
  public:
    AWS_SECURITYHUB_API UnprocessedAutomationRule() = default;
    AWS_SECURITYHUB_API UnprocessedAutomationRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API UnprocessedAutomationRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) for the unprocessed automation rule. </p>
     */
    inline const Aws::String& GetRuleArn() const { return m_ruleArn; }
    inline bool RuleArnHasBeenSet() const { return m_ruleArnHasBeenSet; }
    template<typename RuleArnT = Aws::String>
    void SetRuleArn(RuleArnT&& value) { m_ruleArnHasBeenSet = true; m_ruleArn = std::forward<RuleArnT>(value); }
    template<typename RuleArnT = Aws::String>
    UnprocessedAutomationRule& WithRuleArn(RuleArnT&& value) { SetRuleArn(std::forward<RuleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The error code associated with the unprocessed automation rule. </p>
     */
    inline int GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(int value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline UnprocessedAutomationRule& WithErrorCode(int value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An error message describing why a request didn't process a specific rule.
     * </p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    UnprocessedAutomationRule& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ruleArn;
    bool m_ruleArnHasBeenSet = false;

    int m_errorCode{0};
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
