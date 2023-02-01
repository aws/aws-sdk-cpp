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
   * <p>The result from the inspection of the web request for a valid challenge
   * token. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ChallengeResponse">AWS
   * API Reference</a></p>
   */
  class ChallengeResponse
  {
  public:
    AWS_WAFV2_API ChallengeResponse();
    AWS_WAFV2_API ChallengeResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API ChallengeResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The HTTP response code indicating the status of the challenge token in the
     * web request. If the token is missing, invalid, or expired, this code is
     * <code>202 Request Accepted</code>.</p>
     */
    inline int GetResponseCode() const{ return m_responseCode; }

    /**
     * <p>The HTTP response code indicating the status of the challenge token in the
     * web request. If the token is missing, invalid, or expired, this code is
     * <code>202 Request Accepted</code>.</p>
     */
    inline bool ResponseCodeHasBeenSet() const { return m_responseCodeHasBeenSet; }

    /**
     * <p>The HTTP response code indicating the status of the challenge token in the
     * web request. If the token is missing, invalid, or expired, this code is
     * <code>202 Request Accepted</code>.</p>
     */
    inline void SetResponseCode(int value) { m_responseCodeHasBeenSet = true; m_responseCode = value; }

    /**
     * <p>The HTTP response code indicating the status of the challenge token in the
     * web request. If the token is missing, invalid, or expired, this code is
     * <code>202 Request Accepted</code>.</p>
     */
    inline ChallengeResponse& WithResponseCode(int value) { SetResponseCode(value); return *this;}


    /**
     * <p>The time that the challenge was last solved for the supplied token. </p>
     */
    inline long long GetSolveTimestamp() const{ return m_solveTimestamp; }

    /**
     * <p>The time that the challenge was last solved for the supplied token. </p>
     */
    inline bool SolveTimestampHasBeenSet() const { return m_solveTimestampHasBeenSet; }

    /**
     * <p>The time that the challenge was last solved for the supplied token. </p>
     */
    inline void SetSolveTimestamp(long long value) { m_solveTimestampHasBeenSet = true; m_solveTimestamp = value; }

    /**
     * <p>The time that the challenge was last solved for the supplied token. </p>
     */
    inline ChallengeResponse& WithSolveTimestamp(long long value) { SetSolveTimestamp(value); return *this;}


    /**
     * <p>The reason for failure, populated when the evaluation of the token fails.</p>
     */
    inline const FailureReason& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>The reason for failure, populated when the evaluation of the token fails.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>The reason for failure, populated when the evaluation of the token fails.</p>
     */
    inline void SetFailureReason(const FailureReason& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>The reason for failure, populated when the evaluation of the token fails.</p>
     */
    inline void SetFailureReason(FailureReason&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>The reason for failure, populated when the evaluation of the token fails.</p>
     */
    inline ChallengeResponse& WithFailureReason(const FailureReason& value) { SetFailureReason(value); return *this;}

    /**
     * <p>The reason for failure, populated when the evaluation of the token fails.</p>
     */
    inline ChallengeResponse& WithFailureReason(FailureReason&& value) { SetFailureReason(std::move(value)); return *this;}

  private:

    int m_responseCode;
    bool m_responseCodeHasBeenSet = false;

    long long m_solveTimestamp;
    bool m_solveTimestampHasBeenSet = false;

    FailureReason m_failureReason;
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
