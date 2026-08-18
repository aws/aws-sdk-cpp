/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/AssessmentResult.h>
#include <aws/marketplace-catalog/model/AssessmentTargetSummary.h>
#include <aws/marketplace-catalog/model/FrameworkSummary.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceCatalog {
namespace Model {

/**
 * <p>Summarized information about an assessment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/AssessmentSummary">AWS
 * API Reference</a></p>
 */
class AssessmentSummary {
 public:
  AWS_MARKETPLACECATALOG_API AssessmentSummary() = default;
  AWS_MARKETPLACECATALOG_API AssessmentSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API AssessmentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN associated with the assessment.</p>
   */
  inline const Aws::String& GetAssessmentArn() const { return m_assessmentArn; }
  inline bool AssessmentArnHasBeenSet() const { return m_assessmentArnHasBeenSet; }
  template <typename AssessmentArnT = Aws::String>
  void SetAssessmentArn(AssessmentArnT&& value) {
    m_assessmentArnHasBeenSet = true;
    m_assessmentArn = std::forward<AssessmentArnT>(value);
  }
  template <typename AssessmentArnT = Aws::String>
  AssessmentSummary& WithAssessmentArn(AssessmentArnT&& value) {
    SetAssessmentArn(std::forward<AssessmentArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique ID of the assessment.</p>
   */
  inline const Aws::String& GetAssessmentId() const { return m_assessmentId; }
  inline bool AssessmentIdHasBeenSet() const { return m_assessmentIdHasBeenSet; }
  template <typename AssessmentIdT = Aws::String>
  void SetAssessmentId(AssessmentIdT&& value) {
    m_assessmentIdHasBeenSet = true;
    m_assessmentId = std::forward<AssessmentIdT>(value);
  }
  template <typename AssessmentIdT = Aws::String>
  AssessmentSummary& WithAssessmentId(AssessmentIdT&& value) {
    SetAssessmentId(std::forward<AssessmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the framework that was evaluated by this assessment, in the
   * format <code>frameworkId@version</code> (for example,
   * <code>AMISecurity@1.0</code>).</p>
   */
  inline const Aws::String& GetFrameworkId() const { return m_frameworkId; }
  inline bool FrameworkIdHasBeenSet() const { return m_frameworkIdHasBeenSet; }
  template <typename FrameworkIdT = Aws::String>
  void SetFrameworkId(FrameworkIdT&& value) {
    m_frameworkIdHasBeenSet = true;
    m_frameworkId = std::forward<FrameworkIdT>(value);
  }
  template <typename FrameworkIdT = Aws::String>
  AssessmentSummary& WithFrameworkId(FrameworkIdT&& value) {
    SetFrameworkId(std::forward<FrameworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Identifies the entity or change set that was assessed.</p>
   */
  inline const AssessmentTargetSummary& GetAssessmentTargetSummary() const { return m_assessmentTargetSummary; }
  inline bool AssessmentTargetSummaryHasBeenSet() const { return m_assessmentTargetSummaryHasBeenSet; }
  template <typename AssessmentTargetSummaryT = AssessmentTargetSummary>
  void SetAssessmentTargetSummary(AssessmentTargetSummaryT&& value) {
    m_assessmentTargetSummaryHasBeenSet = true;
    m_assessmentTargetSummary = std::forward<AssessmentTargetSummaryT>(value);
  }
  template <typename AssessmentTargetSummaryT = AssessmentTargetSummary>
  AssessmentSummary& WithAssessmentTargetSummary(AssessmentTargetSummaryT&& value) {
    SetAssessmentTargetSummary(std::forward<AssessmentTargetSummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The framework-specific details of the assessed resource. The set member
   * corresponds to the framework identified by <code>FrameworkId</code>.</p>
   */
  inline const FrameworkSummary& GetFrameworkSummary() const { return m_frameworkSummary; }
  inline bool FrameworkSummaryHasBeenSet() const { return m_frameworkSummaryHasBeenSet; }
  template <typename FrameworkSummaryT = FrameworkSummary>
  void SetFrameworkSummary(FrameworkSummaryT&& value) {
    m_frameworkSummaryHasBeenSet = true;
    m_frameworkSummary = std::forward<FrameworkSummaryT>(value);
  }
  template <typename FrameworkSummaryT = FrameworkSummary>
  AssessmentSummary& WithFrameworkSummary(FrameworkSummaryT&& value) {
    SetFrameworkSummary(std::forward<FrameworkSummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The overall result of the assessment.</p>
   */
  inline AssessmentResult GetAssessmentResult() const { return m_assessmentResult; }
  inline bool AssessmentResultHasBeenSet() const { return m_assessmentResultHasBeenSet; }
  inline void SetAssessmentResult(AssessmentResult value) {
    m_assessmentResultHasBeenSet = true;
    m_assessmentResult = value;
  }
  inline AssessmentSummary& WithAssessmentResult(AssessmentResult value) {
    SetAssessmentResult(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the assessment was created, in ISO 8601 format
   * (<code>2018-02-27T13:45:22Z</code>).</p>
   */
  inline const Aws::String& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::String>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::String>
  AssessmentSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the assessment expires, in ISO 8601 format
   * (<code>2018-02-27T13:45:22Z</code>).</p>
   */
  inline const Aws::String& GetExpiresAt() const { return m_expiresAt; }
  inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }
  template <typename ExpiresAtT = Aws::String>
  void SetExpiresAt(ExpiresAtT&& value) {
    m_expiresAtHasBeenSet = true;
    m_expiresAt = std::forward<ExpiresAtT>(value);
  }
  template <typename ExpiresAtT = Aws::String>
  AssessmentSummary& WithExpiresAt(ExpiresAtT&& value) {
    SetExpiresAt(std::forward<ExpiresAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_assessmentArn;

  Aws::String m_assessmentId;

  Aws::String m_frameworkId;

  AssessmentTargetSummary m_assessmentTargetSummary;

  FrameworkSummary m_frameworkSummary;

  AssessmentResult m_assessmentResult{AssessmentResult::NOT_SET};

  Aws::String m_createdAt;

  Aws::String m_expiresAt;
  bool m_assessmentArnHasBeenSet = false;
  bool m_assessmentIdHasBeenSet = false;
  bool m_frameworkIdHasBeenSet = false;
  bool m_assessmentTargetSummaryHasBeenSet = false;
  bool m_frameworkSummaryHasBeenSet = false;
  bool m_assessmentResultHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_expiresAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
