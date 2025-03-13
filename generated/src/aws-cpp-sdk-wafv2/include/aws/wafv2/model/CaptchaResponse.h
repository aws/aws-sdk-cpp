/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/FailureReason.h>
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
   * <p>The result from the inspection of the web request for a valid
   * <code>CAPTCHA</code> token. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/CaptchaResponse">AWS
   * API Reference</a></p>
   */
  class CaptchaResponse
  {
  public:
    AWS_WAFV2_API CaptchaResponse() = default;
    AWS_WAFV2_API CaptchaResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API CaptchaResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The HTTP response code indicating the status of the <code>CAPTCHA</code>
     * token in the web request. If the token is missing, invalid, or expired, this
     * code is <code>405 Method Not Allowed</code>.</p>
     */
    inline int GetResponseCode() const { return m_responseCode; }
    inline bool ResponseCodeHasBeenSet() const { return m_responseCodeHasBeenSet; }
    inline void SetResponseCode(int value) { m_responseCodeHasBeenSet = true; m_responseCode = value; }
    inline CaptchaResponse& WithResponseCode(int value) { SetResponseCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the <code>CAPTCHA</code> was last solved for the supplied
     * token. </p>
     */
    inline long long GetSolveTimestamp() const { return m_solveTimestamp; }
    inline bool SolveTimestampHasBeenSet() const { return m_solveTimestampHasBeenSet; }
    inline void SetSolveTimestamp(long long value) { m_solveTimestampHasBeenSet = true; m_solveTimestamp = value; }
    inline CaptchaResponse& WithSolveTimestamp(long long value) { SetSolveTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for failure, populated when the evaluation of the token fails.</p>
     */
    inline FailureReason GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(FailureReason value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline CaptchaResponse& WithFailureReason(FailureReason value) { SetFailureReason(value); return *this;}
    ///@}
  private:

    int m_responseCode{0};
    bool m_responseCodeHasBeenSet = false;

    long long m_solveTimestamp{0};
    bool m_solveTimestampHasBeenSet = false;

    FailureReason m_failureReason{FailureReason::NOT_SET};
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
