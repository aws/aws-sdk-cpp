/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/AssessmentResult.h>
#include <aws/marketplace-catalog/model/AssessmentTargetSummary.h>
#include <aws/marketplace-catalog/model/ControlAssessment.h>
#include <aws/marketplace-catalog/model/FrameworkSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceCatalog {
namespace Model {
class DescribeAssessmentResult {
 public:
  AWS_MARKETPLACECATALOG_API DescribeAssessmentResult() = default;
  AWS_MARKETPLACECATALOG_API DescribeAssessmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MARKETPLACECATALOG_API DescribeAssessmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ARN associated with the assessment.</p>
   */
  inline const Aws::String& GetAssessmentArn() const { return m_assessmentArn; }
  template <typename AssessmentArnT = Aws::String>
  void SetAssessmentArn(AssessmentArnT&& value) {
    m_assessmentArnHasBeenSet = true;
    m_assessmentArn = std::forward<AssessmentArnT>(value);
  }
  template <typename AssessmentArnT = Aws::String>
  DescribeAssessmentResult& WithAssessmentArn(AssessmentArnT&& value) {
    SetAssessmentArn(std::forward<AssessmentArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique ID of the assessment.</p>
   */
  inline const Aws::String& GetAssessmentId() const { return m_assessmentId; }
  template <typename AssessmentIdT = Aws::String>
  void SetAssessmentId(AssessmentIdT&& value) {
    m_assessmentIdHasBeenSet = true;
    m_assessmentId = std::forward<AssessmentIdT>(value);
  }
  template <typename AssessmentIdT = Aws::String>
  DescribeAssessmentResult& WithAssessmentId(AssessmentIdT&& value) {
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
  template <typename FrameworkIdT = Aws::String>
  void SetFrameworkId(FrameworkIdT&& value) {
    m_frameworkIdHasBeenSet = true;
    m_frameworkId = std::forward<FrameworkIdT>(value);
  }
  template <typename FrameworkIdT = Aws::String>
  DescribeAssessmentResult& WithFrameworkId(FrameworkIdT&& value) {
    SetFrameworkId(std::forward<FrameworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Identifies the entity or change set that was assessed.</p>
   */
  inline const AssessmentTargetSummary& GetAssessmentTargetSummary() const { return m_assessmentTargetSummary; }
  template <typename AssessmentTargetSummaryT = AssessmentTargetSummary>
  void SetAssessmentTargetSummary(AssessmentTargetSummaryT&& value) {
    m_assessmentTargetSummaryHasBeenSet = true;
    m_assessmentTargetSummary = std::forward<AssessmentTargetSummaryT>(value);
  }
  template <typename AssessmentTargetSummaryT = AssessmentTargetSummary>
  DescribeAssessmentResult& WithAssessmentTargetSummary(AssessmentTargetSummaryT&& value) {
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
  template <typename FrameworkSummaryT = FrameworkSummary>
  void SetFrameworkSummary(FrameworkSummaryT&& value) {
    m_frameworkSummaryHasBeenSet = true;
    m_frameworkSummary = std::forward<FrameworkSummaryT>(value);
  }
  template <typename FrameworkSummaryT = FrameworkSummary>
  DescribeAssessmentResult& WithFrameworkSummary(FrameworkSummaryT&& value) {
    SetFrameworkSummary(std::forward<FrameworkSummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The overall result of the assessment.</p>
   */
  inline AssessmentResult GetAssessmentResult() const { return m_assessmentResult; }
  inline void SetAssessmentResult(AssessmentResult value) {
    m_assessmentResultHasBeenSet = true;
    m_assessmentResult = value;
  }
  inline DescribeAssessmentResult& WithAssessmentResult(AssessmentResult value) {
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
  template <typename CreatedAtT = Aws::String>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::String>
  DescribeAssessmentResult& WithCreatedAt(CreatedAtT&& value) {
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
  template <typename ExpiresAtT = Aws::String>
  void SetExpiresAt(ExpiresAtT&& value) {
    m_expiresAtHasBeenSet = true;
    m_expiresAt = std::forward<ExpiresAtT>(value);
  }
  template <typename ExpiresAtT = Aws::String>
  DescribeAssessmentResult& WithExpiresAt(ExpiresAtT&& value) {
    SetExpiresAt(std::forward<ExpiresAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of <code>ControlAssessment</code> objects, each containing the
   * result of an individual control evaluated as part of the assessment.</p>
   */
  inline const Aws::Vector<ControlAssessment>& GetControlAssessments() const { return m_controlAssessments; }
  template <typename ControlAssessmentsT = Aws::Vector<ControlAssessment>>
  void SetControlAssessments(ControlAssessmentsT&& value) {
    m_controlAssessmentsHasBeenSet = true;
    m_controlAssessments = std::forward<ControlAssessmentsT>(value);
  }
  template <typename ControlAssessmentsT = Aws::Vector<ControlAssessment>>
  DescribeAssessmentResult& WithControlAssessments(ControlAssessmentsT&& value) {
    SetControlAssessments(std::forward<ControlAssessmentsT>(value));
    return *this;
  }
  template <typename ControlAssessmentsT = ControlAssessment>
  DescribeAssessmentResult& AddControlAssessments(ControlAssessmentsT&& value) {
    m_controlAssessmentsHasBeenSet = true;
    m_controlAssessments.emplace_back(std::forward<ControlAssessmentsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value of the next token, if it exists. <code>null</code> if there are no
   * more results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeAssessmentResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DescribeAssessmentResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_assessmentArn;

  Aws::String m_assessmentId;

  Aws::String m_frameworkId;

  AssessmentTargetSummary m_assessmentTargetSummary;

  FrameworkSummary m_frameworkSummary;

  AssessmentResult m_assessmentResult{AssessmentResult::NOT_SET};

  Aws::String m_createdAt;

  Aws::String m_expiresAt;

  Aws::Vector<ControlAssessment> m_controlAssessments;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_assessmentArnHasBeenSet = false;
  bool m_assessmentIdHasBeenSet = false;
  bool m_frameworkIdHasBeenSet = false;
  bool m_assessmentTargetSummaryHasBeenSet = false;
  bool m_frameworkSummaryHasBeenSet = false;
  bool m_assessmentResultHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_expiresAtHasBeenSet = false;
  bool m_controlAssessmentsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
