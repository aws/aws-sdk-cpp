/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FlowPublishState.h>

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
 * <p>The basic information of the flow exluding its definition specifying the
 * steps.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FlowSummary">AWS
 * API Reference</a></p>
 */
class FlowSummary {
 public:
  AWS_QUICKSIGHT_API FlowSummary() = default;
  AWS_QUICKSIGHT_API FlowSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API FlowSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  FlowSummary& WithArn(ArnT&& value) {
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
  FlowSummary& WithFlowId(FlowIdT&& value) {
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
  FlowSummary& WithName(NameT&& value) {
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
  FlowSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
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
  FlowSummary& WithCreatedTime(CreatedTimeT&& value) {
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
  FlowSummary& WithCreatedBy(CreatedByT&& value) {
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
  FlowSummary& WithLastUpdatedTime(LastUpdatedTimeT&& value) {
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
  FlowSummary& WithLastUpdatedBy(LastUpdatedByT&& value) {
    SetLastUpdatedBy(std::forward<LastUpdatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The publish state for the flow. The valid values are <code>DRAFT</code>,
   * <code>PUBLISHED</code>, or <code>PENDING_APPROVAL</code>.</p>
   */
  inline FlowPublishState GetPublishState() const { return m_publishState; }
  inline bool PublishStateHasBeenSet() const { return m_publishStateHasBeenSet; }
  inline void SetPublishState(FlowPublishState value) {
    m_publishStateHasBeenSet = true;
    m_publishState = value;
  }
  inline FlowSummary& WithPublishState(FlowPublishState value) {
    SetPublishState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of runs done for the flow.</p>
   */
  inline int GetRunCount() const { return m_runCount; }
  inline bool RunCountHasBeenSet() const { return m_runCountHasBeenSet; }
  inline void SetRunCount(int value) {
    m_runCountHasBeenSet = true;
    m_runCount = value;
  }
  inline FlowSummary& WithRunCount(int value) {
    SetRunCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of users who have used the flow.</p>
   */
  inline int GetUserCount() const { return m_userCount; }
  inline bool UserCountHasBeenSet() const { return m_userCountHasBeenSet; }
  inline void SetUserCount(int value) {
    m_userCountHasBeenSet = true;
    m_userCount = value;
  }
  inline FlowSummary& WithUserCount(int value) {
    SetUserCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the last principal who published the flow.</p>
   */
  inline const Aws::String& GetLastPublishedBy() const { return m_lastPublishedBy; }
  inline bool LastPublishedByHasBeenSet() const { return m_lastPublishedByHasBeenSet; }
  template <typename LastPublishedByT = Aws::String>
  void SetLastPublishedBy(LastPublishedByT&& value) {
    m_lastPublishedByHasBeenSet = true;
    m_lastPublishedBy = std::forward<LastPublishedByT>(value);
  }
  template <typename LastPublishedByT = Aws::String>
  FlowSummary& WithLastPublishedBy(LastPublishedByT&& value) {
    SetLastPublishedBy(std::forward<LastPublishedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The last time this flow was published.</p>
   */
  inline const Aws::Utils::DateTime& GetLastPublishedAt() const { return m_lastPublishedAt; }
  inline bool LastPublishedAtHasBeenSet() const { return m_lastPublishedAtHasBeenSet; }
  template <typename LastPublishedAtT = Aws::Utils::DateTime>
  void SetLastPublishedAt(LastPublishedAtT&& value) {
    m_lastPublishedAtHasBeenSet = true;
    m_lastPublishedAt = std::forward<LastPublishedAtT>(value);
  }
  template <typename LastPublishedAtT = Aws::Utils::DateTime>
  FlowSummary& WithLastPublishedAt(LastPublishedAtT&& value) {
    SetLastPublishedAt(std::forward<LastPublishedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_flowId;

  Aws::String m_name;

  Aws::String m_description;

  Aws::Utils::DateTime m_createdTime{};

  Aws::String m_createdBy;

  Aws::Utils::DateTime m_lastUpdatedTime{};

  Aws::String m_lastUpdatedBy;

  FlowPublishState m_publishState{FlowPublishState::NOT_SET};

  int m_runCount{0};

  int m_userCount{0};

  Aws::String m_lastPublishedBy;

  Aws::Utils::DateTime m_lastPublishedAt{};
  bool m_arnHasBeenSet = false;
  bool m_flowIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_createdTimeHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_lastUpdatedTimeHasBeenSet = false;
  bool m_lastUpdatedByHasBeenSet = false;
  bool m_publishStateHasBeenSet = false;
  bool m_runCountHasBeenSet = false;
  bool m_userCountHasBeenSet = false;
  bool m_lastPublishedByHasBeenSet = false;
  bool m_lastPublishedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
