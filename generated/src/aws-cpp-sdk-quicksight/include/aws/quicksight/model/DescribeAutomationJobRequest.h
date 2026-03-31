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
namespace Http {
class URI;
}  // namespace Http
namespace QuickSight {
namespace Model {

/**
 */
class DescribeAutomationJobRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API DescribeAutomationJobRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeAutomationJob"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  AWS_QUICKSIGHT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that contains the automation
   * job.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  DescribeAutomationJobRequest& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the automation group that contains the automation.</p>
   */
  inline const Aws::String& GetAutomationGroupId() const { return m_automationGroupId; }
  inline bool AutomationGroupIdHasBeenSet() const { return m_automationGroupIdHasBeenSet; }
  template <typename AutomationGroupIdT = Aws::String>
  void SetAutomationGroupId(AutomationGroupIdT&& value) {
    m_automationGroupIdHasBeenSet = true;
    m_automationGroupId = std::forward<AutomationGroupIdT>(value);
  }
  template <typename AutomationGroupIdT = Aws::String>
  DescribeAutomationJobRequest& WithAutomationGroupId(AutomationGroupIdT&& value) {
    SetAutomationGroupId(std::forward<AutomationGroupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the automation that the job belongs to.</p>
   */
  inline const Aws::String& GetAutomationId() const { return m_automationId; }
  inline bool AutomationIdHasBeenSet() const { return m_automationIdHasBeenSet; }
  template <typename AutomationIdT = Aws::String>
  void SetAutomationId(AutomationIdT&& value) {
    m_automationIdHasBeenSet = true;
    m_automationId = std::forward<AutomationIdT>(value);
  }
  template <typename AutomationIdT = Aws::String>
  DescribeAutomationJobRequest& WithAutomationId(AutomationIdT&& value) {
    SetAutomationId(std::forward<AutomationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A Boolean value that indicates whether to include the input payload in the
   * response. If set to <code>true</code>, the input payload will be included. If
   * set to <code>false</code>, the input payload will be returned as
   * <code>null</code>.</p>
   */
  inline bool GetIncludeInputPayload() const { return m_includeInputPayload; }
  inline bool IncludeInputPayloadHasBeenSet() const { return m_includeInputPayloadHasBeenSet; }
  inline void SetIncludeInputPayload(bool value) {
    m_includeInputPayloadHasBeenSet = true;
    m_includeInputPayload = value;
  }
  inline DescribeAutomationJobRequest& WithIncludeInputPayload(bool value) {
    SetIncludeInputPayload(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A Boolean value that indicates whether to include the output payload in the
   * response. If set to <code>true</code>, the output payload will be included. If
   * set to <code>false</code>, the output payload will be returned as
   * <code>null</code>.</p>
   */
  inline bool GetIncludeOutputPayload() const { return m_includeOutputPayload; }
  inline bool IncludeOutputPayloadHasBeenSet() const { return m_includeOutputPayloadHasBeenSet; }
  inline void SetIncludeOutputPayload(bool value) {
    m_includeOutputPayloadHasBeenSet = true;
    m_includeOutputPayload = value;
  }
  inline DescribeAutomationJobRequest& WithIncludeOutputPayload(bool value) {
    SetIncludeOutputPayload(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the automation job to describe.</p>
   */
  inline const Aws::String& GetJobId() const { return m_jobId; }
  inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
  template <typename JobIdT = Aws::String>
  void SetJobId(JobIdT&& value) {
    m_jobIdHasBeenSet = true;
    m_jobId = std::forward<JobIdT>(value);
  }
  template <typename JobIdT = Aws::String>
  DescribeAutomationJobRequest& WithJobId(JobIdT&& value) {
    SetJobId(std::forward<JobIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsAccountId;

  Aws::String m_automationGroupId;

  Aws::String m_automationId;

  bool m_includeInputPayload{false};

  bool m_includeOutputPayload{false};

  Aws::String m_jobId;
  bool m_awsAccountIdHasBeenSet = false;
  bool m_automationGroupIdHasBeenSet = false;
  bool m_automationIdHasBeenSet = false;
  bool m_includeInputPayloadHasBeenSet = false;
  bool m_includeOutputPayloadHasBeenSet = false;
  bool m_jobIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
