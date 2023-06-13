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
    AWS_SECURITYHUB_API UnprocessedAutomationRule();
    AWS_SECURITYHUB_API UnprocessedAutomationRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API UnprocessedAutomationRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) for the unprocessed automation rule. </p>
     */
    inline const Aws::String& GetRuleArn() const{ return m_ruleArn; }

    /**
     * <p> The Amazon Resource Name (ARN) for the unprocessed automation rule. </p>
     */
    inline bool RuleArnHasBeenSet() const { return m_ruleArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) for the unprocessed automation rule. </p>
     */
    inline void SetRuleArn(const Aws::String& value) { m_ruleArnHasBeenSet = true; m_ruleArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) for the unprocessed automation rule. </p>
     */
    inline void SetRuleArn(Aws::String&& value) { m_ruleArnHasBeenSet = true; m_ruleArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) for the unprocessed automation rule. </p>
     */
    inline void SetRuleArn(const char* value) { m_ruleArnHasBeenSet = true; m_ruleArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) for the unprocessed automation rule. </p>
     */
    inline UnprocessedAutomationRule& WithRuleArn(const Aws::String& value) { SetRuleArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) for the unprocessed automation rule. </p>
     */
    inline UnprocessedAutomationRule& WithRuleArn(Aws::String&& value) { SetRuleArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) for the unprocessed automation rule. </p>
     */
    inline UnprocessedAutomationRule& WithRuleArn(const char* value) { SetRuleArn(value); return *this;}


    /**
     * <p> The error code associated with the unprocessed automation rule. </p>
     */
    inline int GetErrorCode() const{ return m_errorCode; }

    /**
     * <p> The error code associated with the unprocessed automation rule. </p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p> The error code associated with the unprocessed automation rule. </p>
     */
    inline void SetErrorCode(int value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p> The error code associated with the unprocessed automation rule. </p>
     */
    inline UnprocessedAutomationRule& WithErrorCode(int value) { SetErrorCode(value); return *this;}


    /**
     * <p> An error message describing why a request didn't process a specific rule.
     * </p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p> An error message describing why a request didn't process a specific rule.
     * </p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p> An error message describing why a request didn't process a specific rule.
     * </p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p> An error message describing why a request didn't process a specific rule.
     * </p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p> An error message describing why a request didn't process a specific rule.
     * </p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p> An error message describing why a request didn't process a specific rule.
     * </p>
     */
    inline UnprocessedAutomationRule& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p> An error message describing why a request didn't process a specific rule.
     * </p>
     */
    inline UnprocessedAutomationRule& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p> An error message describing why a request didn't process a specific rule.
     * </p>
     */
    inline UnprocessedAutomationRule& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_ruleArn;
    bool m_ruleArnHasBeenSet = false;

    int m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
