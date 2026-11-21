/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

#include <utility>

namespace Aws {
namespace QuickSight {
namespace Model {

/**
 */
class DescribeKnowledgeBaseRefreshScheduleRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API DescribeKnowledgeBaseRefreshScheduleRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeKnowledgeBaseRefreshSchedule"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that contains the knowledge
   * base.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  DescribeKnowledgeBaseRefreshScheduleRequest& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the knowledge base.</p>
   */
  inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
  inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
  template <typename KnowledgeBaseIdT = Aws::String>
  void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) {
    m_knowledgeBaseIdHasBeenSet = true;
    m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value);
  }
  template <typename KnowledgeBaseIdT = Aws::String>
  DescribeKnowledgeBaseRefreshScheduleRequest& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) {
    SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the refresh schedule.</p>
   */
  inline const Aws::String& GetScheduleId() const { return m_scheduleId; }
  inline bool ScheduleIdHasBeenSet() const { return m_scheduleIdHasBeenSet; }
  template <typename ScheduleIdT = Aws::String>
  void SetScheduleId(ScheduleIdT&& value) {
    m_scheduleIdHasBeenSet = true;
    m_scheduleId = std::forward<ScheduleIdT>(value);
  }
  template <typename ScheduleIdT = Aws::String>
  DescribeKnowledgeBaseRefreshScheduleRequest& WithScheduleId(ScheduleIdT&& value) {
    SetScheduleId(std::forward<ScheduleIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsAccountId;

  Aws::String m_knowledgeBaseId;

  Aws::String m_scheduleId;
  bool m_awsAccountIdHasBeenSet = false;
  bool m_knowledgeBaseIdHasBeenSet = false;
  bool m_scheduleIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
