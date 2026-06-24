/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/StrideCategory.h>
#include <aws/securityagent/model/ThreatActor.h>
#include <aws/securityagent/model/ThreatSeverity.h>
#include <aws/securityagent/model/ThreatStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>Contains summary information about a threat.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ThreatSummary">AWS
 * API Reference</a></p>
 */
class ThreatSummary {
 public:
  AWS_SECURITYAGENT_API ThreatSummary() = default;
  AWS_SECURITYAGENT_API ThreatSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API ThreatSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the threat.</p>
   */
  inline const Aws::String& GetThreatId() const { return m_threatId; }
  inline bool ThreatIdHasBeenSet() const { return m_threatIdHasBeenSet; }
  template <typename ThreatIdT = Aws::String>
  void SetThreatId(ThreatIdT&& value) {
    m_threatIdHasBeenSet = true;
    m_threatId = std::forward<ThreatIdT>(value);
  }
  template <typename ThreatIdT = Aws::String>
  ThreatSummary& WithThreatId(ThreatIdT&& value) {
    SetThreatId(std::forward<ThreatIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the threat model job that produced the threat.</p>
   */
  inline const Aws::String& GetThreatJobId() const { return m_threatJobId; }
  inline bool ThreatJobIdHasBeenSet() const { return m_threatJobIdHasBeenSet; }
  template <typename ThreatJobIdT = Aws::String>
  void SetThreatJobId(ThreatJobIdT&& value) {
    m_threatJobIdHasBeenSet = true;
    m_threatJobId = std::forward<ThreatJobIdT>(value);
  }
  template <typename ThreatJobIdT = Aws::String>
  ThreatSummary& WithThreatJobId(ThreatJobIdT&& value) {
    SetThreatJobId(std::forward<ThreatJobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A short title summarizing the threat.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  ThreatSummary& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The natural-language threat statement.</p>
   */
  inline const Aws::String& GetStatement() const { return m_statement; }
  inline bool StatementHasBeenSet() const { return m_statementHasBeenSet; }
  template <typename StatementT = Aws::String>
  void SetStatement(StatementT&& value) {
    m_statementHasBeenSet = true;
    m_statement = std::forward<StatementT>(value);
  }
  template <typename StatementT = Aws::String>
  ThreatSummary& WithStatement(StatementT&& value) {
    SetStatement(std::forward<StatementT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The severity level of the threat.</p>
   */
  inline ThreatSeverity GetSeverity() const { return m_severity; }
  inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
  inline void SetSeverity(ThreatSeverity value) {
    m_severityHasBeenSet = true;
    m_severity = value;
  }
  inline ThreatSummary& WithSeverity(ThreatSeverity value) {
    SetSeverity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the threat.</p>
   */
  inline ThreatStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ThreatStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ThreatSummary& WithStatus(ThreatStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The STRIDE categories applicable to this threat.</p>
   */
  inline const Aws::Vector<StrideCategory>& GetStride() const { return m_stride; }
  inline bool StrideHasBeenSet() const { return m_strideHasBeenSet; }
  template <typename StrideT = Aws::Vector<StrideCategory>>
  void SetStride(StrideT&& value) {
    m_strideHasBeenSet = true;
    m_stride = std::forward<StrideT>(value);
  }
  template <typename StrideT = Aws::Vector<StrideCategory>>
  ThreatSummary& WithStride(StrideT&& value) {
    SetStride(std::forward<StrideT>(value));
    return *this;
  }
  inline ThreatSummary& AddStride(StrideCategory value) {
    m_strideHasBeenSet = true;
    m_stride.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Who created this threat.</p>
   */
  inline ThreatActor GetCreatedBy() const { return m_createdBy; }
  inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
  inline void SetCreatedBy(ThreatActor value) {
    m_createdByHasBeenSet = true;
    m_createdBy = value;
  }
  inline ThreatSummary& WithCreatedBy(ThreatActor value) {
    SetCreatedBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Who last updated this threat.</p>
   */
  inline ThreatActor GetUpdatedBy() const { return m_updatedBy; }
  inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
  inline void SetUpdatedBy(ThreatActor value) {
    m_updatedByHasBeenSet = true;
    m_updatedBy = value;
  }
  inline ThreatSummary& WithUpdatedBy(ThreatActor value) {
    SetUpdatedBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the threat was created, in UTC format.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  ThreatSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the threat was last updated, in UTC format.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  ThreatSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_threatId;

  Aws::String m_threatJobId;

  Aws::String m_title;

  Aws::String m_statement;

  ThreatSeverity m_severity{ThreatSeverity::NOT_SET};

  ThreatStatus m_status{ThreatStatus::NOT_SET};

  Aws::Vector<StrideCategory> m_stride;

  ThreatActor m_createdBy{ThreatActor::NOT_SET};

  ThreatActor m_updatedBy{ThreatActor::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_threatIdHasBeenSet = false;
  bool m_threatJobIdHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_statementHasBeenSet = false;
  bool m_severityHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_strideHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_updatedByHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
