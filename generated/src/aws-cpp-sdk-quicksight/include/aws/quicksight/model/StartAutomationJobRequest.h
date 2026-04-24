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
class StartAutomationJobRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API StartAutomationJobRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartAutomationJob"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that contains the automation.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  StartAutomationJobRequest& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the automation group that contains the automation to run.</p>
   */
  inline const Aws::String& GetAutomationGroupId() const { return m_automationGroupId; }
  inline bool AutomationGroupIdHasBeenSet() const { return m_automationGroupIdHasBeenSet; }
  template <typename AutomationGroupIdT = Aws::String>
  void SetAutomationGroupId(AutomationGroupIdT&& value) {
    m_automationGroupIdHasBeenSet = true;
    m_automationGroupId = std::forward<AutomationGroupIdT>(value);
  }
  template <typename AutomationGroupIdT = Aws::String>
  StartAutomationJobRequest& WithAutomationGroupId(AutomationGroupIdT&& value) {
    SetAutomationGroupId(std::forward<AutomationGroupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the automation to run.</p>
   */
  inline const Aws::String& GetAutomationId() const { return m_automationId; }
  inline bool AutomationIdHasBeenSet() const { return m_automationIdHasBeenSet; }
  template <typename AutomationIdT = Aws::String>
  void SetAutomationId(AutomationIdT&& value) {
    m_automationIdHasBeenSet = true;
    m_automationId = std::forward<AutomationIdT>(value);
  }
  template <typename AutomationIdT = Aws::String>
  StartAutomationJobRequest& WithAutomationId(AutomationIdT&& value) {
    SetAutomationId(std::forward<AutomationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The input payload for the automation job, provided as a JSON string.</p>
   */
  inline const Aws::String& GetInputPayload() const { return m_inputPayload; }
  inline bool InputPayloadHasBeenSet() const { return m_inputPayloadHasBeenSet; }
  template <typename InputPayloadT = Aws::String>
  void SetInputPayload(InputPayloadT&& value) {
    m_inputPayloadHasBeenSet = true;
    m_inputPayload = std::forward<InputPayloadT>(value);
  }
  template <typename InputPayloadT = Aws::String>
  StartAutomationJobRequest& WithInputPayload(InputPayloadT&& value) {
    SetInputPayload(std::forward<InputPayloadT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsAccountId;

  Aws::String m_automationGroupId;

  Aws::String m_automationId;

  Aws::String m_inputPayload;
  bool m_awsAccountIdHasBeenSet = false;
  bool m_automationGroupIdHasBeenSet = false;
  bool m_automationIdHasBeenSet = false;
  bool m_inputPayloadHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
