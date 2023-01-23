/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>Aggregated request sampling data for a sampling rule across all services for
   * a 10-second window.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/SamplingStatisticSummary">AWS
   * API Reference</a></p>
   */
  class SamplingStatisticSummary
  {
  public:
    AWS_XRAY_API SamplingStatisticSummary();
    AWS_XRAY_API SamplingStatisticSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API SamplingStatisticSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the sampling rule.</p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }

    /**
     * <p>The name of the sampling rule.</p>
     */
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }

    /**
     * <p>The name of the sampling rule.</p>
     */
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }

    /**
     * <p>The name of the sampling rule.</p>
     */
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::move(value); }

    /**
     * <p>The name of the sampling rule.</p>
     */
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }

    /**
     * <p>The name of the sampling rule.</p>
     */
    inline SamplingStatisticSummary& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}

    /**
     * <p>The name of the sampling rule.</p>
     */
    inline SamplingStatisticSummary& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}

    /**
     * <p>The name of the sampling rule.</p>
     */
    inline SamplingStatisticSummary& WithRuleName(const char* value) { SetRuleName(value); return *this;}


    /**
     * <p>The start time of the reporting window.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The start time of the reporting window.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The start time of the reporting window.</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The start time of the reporting window.</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>The start time of the reporting window.</p>
     */
    inline SamplingStatisticSummary& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The start time of the reporting window.</p>
     */
    inline SamplingStatisticSummary& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}


    /**
     * <p>The number of requests that matched the rule.</p>
     */
    inline int GetRequestCount() const{ return m_requestCount; }

    /**
     * <p>The number of requests that matched the rule.</p>
     */
    inline bool RequestCountHasBeenSet() const { return m_requestCountHasBeenSet; }

    /**
     * <p>The number of requests that matched the rule.</p>
     */
    inline void SetRequestCount(int value) { m_requestCountHasBeenSet = true; m_requestCount = value; }

    /**
     * <p>The number of requests that matched the rule.</p>
     */
    inline SamplingStatisticSummary& WithRequestCount(int value) { SetRequestCount(value); return *this;}


    /**
     * <p>The number of requests recorded with borrowed reservoir quota.</p>
     */
    inline int GetBorrowCount() const{ return m_borrowCount; }

    /**
     * <p>The number of requests recorded with borrowed reservoir quota.</p>
     */
    inline bool BorrowCountHasBeenSet() const { return m_borrowCountHasBeenSet; }

    /**
     * <p>The number of requests recorded with borrowed reservoir quota.</p>
     */
    inline void SetBorrowCount(int value) { m_borrowCountHasBeenSet = true; m_borrowCount = value; }

    /**
     * <p>The number of requests recorded with borrowed reservoir quota.</p>
     */
    inline SamplingStatisticSummary& WithBorrowCount(int value) { SetBorrowCount(value); return *this;}


    /**
     * <p>The number of requests recorded.</p>
     */
    inline int GetSampledCount() const{ return m_sampledCount; }

    /**
     * <p>The number of requests recorded.</p>
     */
    inline bool SampledCountHasBeenSet() const { return m_sampledCountHasBeenSet; }

    /**
     * <p>The number of requests recorded.</p>
     */
    inline void SetSampledCount(int value) { m_sampledCountHasBeenSet = true; m_sampledCount = value; }

    /**
     * <p>The number of requests recorded.</p>
     */
    inline SamplingStatisticSummary& WithSampledCount(int value) { SetSampledCount(value); return *this;}

  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;

    int m_requestCount;
    bool m_requestCountHasBeenSet = false;

    int m_borrowCount;
    bool m_borrowCountHasBeenSet = false;

    int m_sampledCount;
    bool m_sampledCountHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
