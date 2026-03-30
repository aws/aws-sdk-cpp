/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/InsightPriorityLevel.h>
#include <aws/opensearch/model/InsightStatus.h>
#include <aws/opensearch/model/InsightType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchService {
namespace Model {

/**
 * <p>Represents an insight returned by the <code>ListInsights</code> operation. An
 * insight is a notification about a domain event or recommendation that helps you
 * optimize your Amazon OpenSearch Service domain.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/Insight">AWS
 * API Reference</a></p>
 */
class Insight {
 public:
  AWS_OPENSEARCHSERVICE_API Insight() = default;
  AWS_OPENSEARCHSERVICE_API Insight(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API Insight& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the insight.</p>
   */
  inline const Aws::String& GetInsightId() const { return m_insightId; }
  inline bool InsightIdHasBeenSet() const { return m_insightIdHasBeenSet; }
  template <typename InsightIdT = Aws::String>
  void SetInsightId(InsightIdT&& value) {
    m_insightIdHasBeenSet = true;
    m_insightId = std::forward<InsightIdT>(value);
  }
  template <typename InsightIdT = Aws::String>
  Insight& WithInsightId(InsightIdT&& value) {
    SetInsightId(std::forward<InsightIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the insight.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  Insight& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the insight. Possible values are <code>EVENT</code> and
   * <code>RECOMMENDATION</code>.</p>
   */
  inline InsightType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(InsightType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline Insight& WithType(InsightType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The priority level of the insight. Possible values are <code>CRITICAL</code>,
   * <code>HIGH</code>, <code>MEDIUM</code>, and <code>LOW</code>.</p>
   */
  inline InsightPriorityLevel GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  inline void SetPriority(InsightPriorityLevel value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline Insight& WithPriority(InsightPriorityLevel value) {
    SetPriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the insight. Possible values are <code>ACTIVE</code>,
   * <code>RESOLVED</code>, and <code>DISMISSED</code>.</p>
   */
  inline InsightStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(InsightStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline Insight& WithStatus(InsightStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the insight was created, in epoch milliseconds.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  Insight& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the insight was last updated, in epoch milliseconds.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
  inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
  template <typename UpdateTimeT = Aws::Utils::DateTime>
  void SetUpdateTime(UpdateTimeT&& value) {
    m_updateTimeHasBeenSet = true;
    m_updateTime = std::forward<UpdateTimeT>(value);
  }
  template <typename UpdateTimeT = Aws::Utils::DateTime>
  Insight& WithUpdateTime(UpdateTimeT&& value) {
    SetUpdateTime(std::forward<UpdateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the insight is experimental.</p>
   */
  inline bool GetIsExperimental() const { return m_isExperimental; }
  inline bool IsExperimentalHasBeenSet() const { return m_isExperimentalHasBeenSet; }
  inline void SetIsExperimental(bool value) {
    m_isExperimentalHasBeenSet = true;
    m_isExperimental = value;
  }
  inline Insight& WithIsExperimental(bool value) {
    SetIsExperimental(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_insightId;

  Aws::String m_displayName;

  InsightType m_type{InsightType::NOT_SET};

  InsightPriorityLevel m_priority{InsightPriorityLevel::NOT_SET};

  InsightStatus m_status{InsightStatus::NOT_SET};

  Aws::Utils::DateTime m_creationTime{};

  Aws::Utils::DateTime m_updateTime{};

  bool m_isExperimental{false};
  bool m_insightIdHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_updateTimeHasBeenSet = false;
  bool m_isExperimentalHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
