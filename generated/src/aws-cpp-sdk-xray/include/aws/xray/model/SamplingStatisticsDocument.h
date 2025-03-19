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
   * <p>Request sampling results for a single rule from a service. Results are for
   * the last 10 seconds unless the service has been assigned a longer reporting
   * interval after a previous call to <a
   * href="https://docs.aws.amazon.com/xray/latest/api/API_GetSamplingTargets.html">GetSamplingTargets</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/SamplingStatisticsDocument">AWS
   * API Reference</a></p>
   */
  class SamplingStatisticsDocument
  {
  public:
    AWS_XRAY_API SamplingStatisticsDocument() = default;
    AWS_XRAY_API SamplingStatisticsDocument(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API SamplingStatisticsDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the sampling rule.</p>
     */
    inline const Aws::String& GetRuleName() const { return m_ruleName; }
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
    template<typename RuleNameT = Aws::String>
    void SetRuleName(RuleNameT&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::forward<RuleNameT>(value); }
    template<typename RuleNameT = Aws::String>
    SamplingStatisticsDocument& WithRuleName(RuleNameT&& value) { SetRuleName(std::forward<RuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the service in hexadecimal.</p>
     */
    inline const Aws::String& GetClientID() const { return m_clientID; }
    inline bool ClientIDHasBeenSet() const { return m_clientIDHasBeenSet; }
    template<typename ClientIDT = Aws::String>
    void SetClientID(ClientIDT&& value) { m_clientIDHasBeenSet = true; m_clientID = std::forward<ClientIDT>(value); }
    template<typename ClientIDT = Aws::String>
    SamplingStatisticsDocument& WithClientID(ClientIDT&& value) { SetClientID(std::forward<ClientIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current time.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    SamplingStatisticsDocument& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of requests that matched the rule.</p>
     */
    inline int GetRequestCount() const { return m_requestCount; }
    inline bool RequestCountHasBeenSet() const { return m_requestCountHasBeenSet; }
    inline void SetRequestCount(int value) { m_requestCountHasBeenSet = true; m_requestCount = value; }
    inline SamplingStatisticsDocument& WithRequestCount(int value) { SetRequestCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of requests recorded.</p>
     */
    inline int GetSampledCount() const { return m_sampledCount; }
    inline bool SampledCountHasBeenSet() const { return m_sampledCountHasBeenSet; }
    inline void SetSampledCount(int value) { m_sampledCountHasBeenSet = true; m_sampledCount = value; }
    inline SamplingStatisticsDocument& WithSampledCount(int value) { SetSampledCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of requests recorded with borrowed reservoir quota.</p>
     */
    inline int GetBorrowCount() const { return m_borrowCount; }
    inline bool BorrowCountHasBeenSet() const { return m_borrowCountHasBeenSet; }
    inline void SetBorrowCount(int value) { m_borrowCountHasBeenSet = true; m_borrowCount = value; }
    inline SamplingStatisticsDocument& WithBorrowCount(int value) { SetBorrowCount(value); return *this;}
    ///@}
  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    Aws::String m_clientID;
    bool m_clientIDHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;

    int m_requestCount{0};
    bool m_requestCountHasBeenSet = false;

    int m_sampledCount{0};
    bool m_sampledCountHasBeenSet = false;

    int m_borrowCount{0};
    bool m_borrowCountHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
