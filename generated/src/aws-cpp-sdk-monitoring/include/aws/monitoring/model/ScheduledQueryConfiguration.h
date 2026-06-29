/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/model/ScheduleConfiguration.h>
#include <aws/monitoring/model/Tag.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatch {
namespace Model {

/**
 * <p>The configuration of the CloudWatch Logs scheduled query that backs a log
 * alarm.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/ScheduledQueryConfiguration">AWS
 * API Reference</a></p>
 */
class ScheduledQueryConfiguration {
 public:
  AWS_CLOUDWATCH_API ScheduledQueryConfiguration() = default;
  AWS_CLOUDWATCH_API ScheduledQueryConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API ScheduledQueryConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The CloudWatch Logs query to execute on each scheduled run. Length
   * constraints: maximum of 10,000 characters.</p>
   */
  inline const Aws::String& GetQueryString() const { return m_queryString; }
  inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
  template <typename QueryStringT = Aws::String>
  void SetQueryString(QueryStringT&& value) {
    m_queryStringHasBeenSet = true;
    m_queryString = std::forward<QueryStringT>(value);
  }
  template <typename QueryStringT = Aws::String>
  ScheduledQueryConfiguration& WithQueryString(QueryStringT&& value) {
    SetQueryString(std::forward<QueryStringT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The log groups to query. Each entry can be a log group name or ARN. Use the
   * ARN form when querying log groups in a different account (for example, when
   * running cross-account queries from a monitoring account). The list must contain
   * between 1 and 50 entries.</p>
   */
  inline const Aws::Vector<Aws::String>& GetLogGroupIdentifiers() const { return m_logGroupIdentifiers; }
  inline bool LogGroupIdentifiersHasBeenSet() const { return m_logGroupIdentifiersHasBeenSet; }
  template <typename LogGroupIdentifiersT = Aws::Vector<Aws::String>>
  void SetLogGroupIdentifiers(LogGroupIdentifiersT&& value) {
    m_logGroupIdentifiersHasBeenSet = true;
    m_logGroupIdentifiers = std::forward<LogGroupIdentifiersT>(value);
  }
  template <typename LogGroupIdentifiersT = Aws::Vector<Aws::String>>
  ScheduledQueryConfiguration& WithLogGroupIdentifiers(LogGroupIdentifiersT&& value) {
    SetLogGroupIdentifiers(std::forward<LogGroupIdentifiersT>(value));
    return *this;
  }
  template <typename LogGroupIdentifiersT = Aws::String>
  ScheduledQueryConfiguration& AddLogGroupIdentifiers(LogGroupIdentifiersT&& value) {
    m_logGroupIdentifiersHasBeenSet = true;
    m_logGroupIdentifiers.emplace_back(std::forward<LogGroupIdentifiersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the CloudWatch Logs scheduled query that
   * the alarm uses. This field is populated in <code>DescribeAlarms</code>
   * responses.</p>
   */
  inline const Aws::String& GetQueryARN() const { return m_queryARN; }
  inline bool QueryARNHasBeenSet() const { return m_queryARNHasBeenSet; }
  template <typename QueryARNT = Aws::String>
  void SetQueryARN(QueryARNT&& value) {
    m_queryARNHasBeenSet = true;
    m_queryARN = std::forward<QueryARNT>(value);
  }
  template <typename QueryARNT = Aws::String>
  ScheduledQueryConfiguration& WithQueryARN(QueryARNT&& value) {
    SetQueryARN(std::forward<QueryARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that CloudWatch assumes when
   * executing the scheduled query against the configured log groups.</p>
   */
  inline const Aws::String& GetScheduledQueryRoleARN() const { return m_scheduledQueryRoleARN; }
  inline bool ScheduledQueryRoleARNHasBeenSet() const { return m_scheduledQueryRoleARNHasBeenSet; }
  template <typename ScheduledQueryRoleARNT = Aws::String>
  void SetScheduledQueryRoleARN(ScheduledQueryRoleARNT&& value) {
    m_scheduledQueryRoleARNHasBeenSet = true;
    m_scheduledQueryRoleARN = std::forward<ScheduledQueryRoleARNT>(value);
  }
  template <typename ScheduledQueryRoleARNT = Aws::String>
  ScheduledQueryConfiguration& WithScheduledQueryRoleARN(ScheduledQueryRoleARNT&& value) {
    SetScheduledQueryRoleARN(std::forward<ScheduledQueryRoleARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The schedule and time-range offset configuration for the underlying scheduled
   * query.</p>
   */
  inline const ScheduleConfiguration& GetScheduleConfiguration() const { return m_scheduleConfiguration; }
  inline bool ScheduleConfigurationHasBeenSet() const { return m_scheduleConfigurationHasBeenSet; }
  template <typename ScheduleConfigurationT = ScheduleConfiguration>
  void SetScheduleConfiguration(ScheduleConfigurationT&& value) {
    m_scheduleConfigurationHasBeenSet = true;
    m_scheduleConfiguration = std::forward<ScheduleConfigurationT>(value);
  }
  template <typename ScheduleConfigurationT = ScheduleConfiguration>
  ScheduledQueryConfiguration& WithScheduleConfiguration(ScheduleConfigurationT&& value) {
    SetScheduleConfiguration(std::forward<ScheduleConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The expression that defines how to aggregate query results into one or more
   * scalar values for alarm evaluation. For example, <code>count(*)</code> or
   * <code>avg(latency) by host | sort desc</code>. Length constraints: minimum 1
   * character, maximum 2048 characters.</p>
   */
  inline const Aws::String& GetAggregationExpression() const { return m_aggregationExpression; }
  inline bool AggregationExpressionHasBeenSet() const { return m_aggregationExpressionHasBeenSet; }
  template <typename AggregationExpressionT = Aws::String>
  void SetAggregationExpression(AggregationExpressionT&& value) {
    m_aggregationExpressionHasBeenSet = true;
    m_aggregationExpression = std::forward<AggregationExpressionT>(value);
  }
  template <typename AggregationExpressionT = Aws::String>
  ScheduledQueryConfiguration& WithAggregationExpression(AggregationExpressionT&& value) {
    SetAggregationExpression(std::forward<AggregationExpressionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of key-value pairs to associate with the underlying scheduled query
   * resource.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  ScheduledQueryConfiguration& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  ScheduledQueryConfiguration& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_queryString;

  Aws::Vector<Aws::String> m_logGroupIdentifiers;

  Aws::String m_queryARN;

  Aws::String m_scheduledQueryRoleARN;

  ScheduleConfiguration m_scheduleConfiguration;

  Aws::String m_aggregationExpression;

  Aws::Vector<Tag> m_tags;
  bool m_queryStringHasBeenSet = false;
  bool m_logGroupIdentifiersHasBeenSet = false;
  bool m_queryARNHasBeenSet = false;
  bool m_scheduledQueryRoleARNHasBeenSet = false;
  bool m_scheduleConfigurationHasBeenSet = false;
  bool m_aggregationExpressionHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
