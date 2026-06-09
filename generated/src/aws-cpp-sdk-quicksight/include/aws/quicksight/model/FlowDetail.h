/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FlowPublishState.h>
#include <aws/quicksight/model/StepAliasMapping.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>The full details of a flow, including its definition specifying the
 * steps.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FlowDetail">AWS
 * API Reference</a></p>
 */
class FlowDetail {
 public:
  AWS_QUICKSIGHT_API FlowDetail() = default;
  AWS_QUICKSIGHT_API FlowDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API FlowDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the flow.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  FlowDetail& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the flow.</p>
   */
  inline const Aws::String& GetFlowId() const { return m_flowId; }
  inline bool FlowIdHasBeenSet() const { return m_flowIdHasBeenSet; }
  template <typename FlowIdT = Aws::String>
  void SetFlowId(FlowIdT&& value) {
    m_flowIdHasBeenSet = true;
    m_flowId = std::forward<FlowIdT>(value);
  }
  template <typename FlowIdT = Aws::String>
  FlowDetail& WithFlowId(FlowIdT&& value) {
    SetFlowId(std::forward<FlowIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the flow.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  FlowDetail& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the flow.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  FlowDetail& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The publish state of the flow. Valid values are <code>DRAFT</code>,
   * <code>PUBLISHED</code>, or <code>PENDING_APPROVAL</code>.</p>
   */
  inline FlowPublishState GetPublishState() const { return m_publishState; }
  inline bool PublishStateHasBeenSet() const { return m_publishStateHasBeenSet; }
  inline void SetPublishState(FlowPublishState value) {
    m_publishStateHasBeenSet = true;
    m_publishState = value;
  }
  inline FlowDetail& WithPublishState(FlowPublishState value) {
    SetPublishState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time this flow was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
  inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  void SetCreatedTime(CreatedTimeT&& value) {
    m_createdTimeHasBeenSet = true;
    m_createdTime = std::forward<CreatedTimeT>(value);
  }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  FlowDetail& WithCreatedTime(CreatedTimeT&& value) {
    SetCreatedTime(std::forward<CreatedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the principal who created the flow.</p>
   */
  inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
  inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
  template <typename CreatedByT = Aws::String>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = Aws::String>
  FlowDetail& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The last time this flow was modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
  inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
  template <typename LastUpdatedTimeT = Aws::Utils::DateTime>
  void SetLastUpdatedTime(LastUpdatedTimeT&& value) {
    m_lastUpdatedTimeHasBeenSet = true;
    m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value);
  }
  template <typename LastUpdatedTimeT = Aws::Utils::DateTime>
  FlowDetail& WithLastUpdatedTime(LastUpdatedTimeT&& value) {
    SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the last principal who updated the flow.</p>
   */
  inline const Aws::String& GetLastUpdatedBy() const { return m_lastUpdatedBy; }
  inline bool LastUpdatedByHasBeenSet() const { return m_lastUpdatedByHasBeenSet; }
  template <typename LastUpdatedByT = Aws::String>
  void SetLastUpdatedBy(LastUpdatedByT&& value) {
    m_lastUpdatedByHasBeenSet = true;
    m_lastUpdatedBy = std::forward<LastUpdatedByT>(value);
  }
  template <typename LastUpdatedByT = Aws::String>
  FlowDetail& WithLastUpdatedBy(LastUpdatedByT&& value) {
    SetLastUpdatedBy(std::forward<LastUpdatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The definition of the flow, specifying the steps and configurations. This is
   * the flow definition in Quick Flow's internal format. The format is subject to
   * change.</p>
   */
  inline Aws::Utils::DocumentView GetFlowDefinition() const { return m_flowDefinition; }
  inline bool FlowDefinitionHasBeenSet() const { return m_flowDefinitionHasBeenSet; }
  template <typename FlowDefinitionT = Aws::Utils::Document>
  void SetFlowDefinition(FlowDefinitionT&& value) {
    m_flowDefinitionHasBeenSet = true;
    m_flowDefinition = std::forward<FlowDefinitionT>(value);
  }
  template <typename FlowDefinitionT = Aws::Utils::Document>
  FlowDetail& WithFlowDefinition(FlowDefinitionT&& value) {
    SetFlowDefinition(std::forward<FlowDefinitionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of step alias mappings for the flow.</p>
   */
  inline const Aws::Vector<StepAliasMapping>& GetStepAliases() const { return m_stepAliases; }
  inline bool StepAliasesHasBeenSet() const { return m_stepAliasesHasBeenSet; }
  template <typename StepAliasesT = Aws::Vector<StepAliasMapping>>
  void SetStepAliases(StepAliasesT&& value) {
    m_stepAliasesHasBeenSet = true;
    m_stepAliases = std::forward<StepAliasesT>(value);
  }
  template <typename StepAliasesT = Aws::Vector<StepAliasMapping>>
  FlowDetail& WithStepAliases(StepAliasesT&& value) {
    SetStepAliases(std::forward<StepAliasesT>(value));
    return *this;
  }
  template <typename StepAliasesT = StepAliasMapping>
  FlowDetail& AddStepAliases(StepAliasesT&& value) {
    m_stepAliasesHasBeenSet = true;
    m_stepAliases.emplace_back(std::forward<StepAliasesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_flowId;

  Aws::String m_name;

  Aws::String m_description;

  FlowPublishState m_publishState{FlowPublishState::NOT_SET};

  Aws::Utils::DateTime m_createdTime{};

  Aws::String m_createdBy;

  Aws::Utils::DateTime m_lastUpdatedTime{};

  Aws::String m_lastUpdatedBy;

  Aws::Utils::Document m_flowDefinition;

  Aws::Vector<StepAliasMapping> m_stepAliases;
  bool m_arnHasBeenSet = false;
  bool m_flowIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_publishStateHasBeenSet = false;
  bool m_createdTimeHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_lastUpdatedTimeHasBeenSet = false;
  bool m_lastUpdatedByHasBeenSet = false;
  bool m_flowDefinitionHasBeenSet = false;
  bool m_stepAliasesHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
