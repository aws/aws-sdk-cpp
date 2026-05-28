/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/ReportGenerationStatus.h>
#include <aws/resiliencehubv2/model/ReportOutput.h>
#include <aws/resiliencehubv2/model/ReportType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>Result of a report generation attempt.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ReportGenerationResult">AWS
 * API Reference</a></p>
 */
class ReportGenerationResult {
 public:
  AWS_RESILIENCEHUBV2_API ReportGenerationResult() = default;
  AWS_RESILIENCEHUBV2_API ReportGenerationResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API ReportGenerationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of the generated report.</p>
   */
  inline ReportType GetReportType() const { return m_reportType; }
  inline bool ReportTypeHasBeenSet() const { return m_reportTypeHasBeenSet; }
  inline void SetReportType(ReportType value) {
    m_reportTypeHasBeenSet = true;
    m_reportType = value;
  }
  inline ReportGenerationResult& WithReportType(ReportType value) {
    SetReportType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the report generation.</p>
   */
  inline ReportGenerationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ReportGenerationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ReportGenerationResult& WithStatus(ReportGenerationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The service this report was generated for.</p>
   */
  inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
  inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
  template <typename ServiceArnT = Aws::String>
  void SetServiceArn(ServiceArnT&& value) {
    m_serviceArnHasBeenSet = true;
    m_serviceArn = std::forward<ServiceArnT>(value);
  }
  template <typename ServiceArnT = Aws::String>
  ReportGenerationResult& WithServiceArn(ServiceArnT&& value) {
    SetServiceArn(std::forward<ServiceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Present for FAILURE_MODE reports.</p>
   */
  inline const Aws::String& GetAssessmentId() const { return m_assessmentId; }
  inline bool AssessmentIdHasBeenSet() const { return m_assessmentIdHasBeenSet; }
  template <typename AssessmentIdT = Aws::String>
  void SetAssessmentId(AssessmentIdT&& value) {
    m_assessmentIdHasBeenSet = true;
    m_assessmentId = std::forward<AssessmentIdT>(value);
  }
  template <typename AssessmentIdT = Aws::String>
  ReportGenerationResult& WithAssessmentId(AssessmentIdT&& value) {
    SetAssessmentId(std::forward<AssessmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the report was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  ReportGenerationResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Present when status is SUCCEEDED or FAILED.</p>
   */
  inline const ReportOutput& GetReportOutput() const { return m_reportOutput; }
  inline bool ReportOutputHasBeenSet() const { return m_reportOutputHasBeenSet; }
  template <typename ReportOutputT = ReportOutput>
  void SetReportOutput(ReportOutputT&& value) {
    m_reportOutputHasBeenSet = true;
    m_reportOutput = std::forward<ReportOutputT>(value);
  }
  template <typename ReportOutputT = ReportOutput>
  ReportGenerationResult& WithReportOutput(ReportOutputT&& value) {
    SetReportOutput(std::forward<ReportOutputT>(value));
    return *this;
  }
  ///@}
 private:
  ReportType m_reportType{ReportType::NOT_SET};

  ReportGenerationStatus m_status{ReportGenerationStatus::NOT_SET};

  Aws::String m_serviceArn;

  Aws::String m_assessmentId;

  Aws::Utils::DateTime m_createdAt{};

  ReportOutput m_reportOutput;
  bool m_reportTypeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_serviceArnHasBeenSet = false;
  bool m_assessmentIdHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_reportOutputHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
