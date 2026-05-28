/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/AssessmentStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {
class StartFailureModeAssessmentResult {
 public:
  AWS_RESILIENCEHUBV2_API StartFailureModeAssessmentResult() = default;
  AWS_RESILIENCEHUBV2_API StartFailureModeAssessmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESILIENCEHUBV2_API StartFailureModeAssessmentResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the started assessment.</p>
   */
  inline const Aws::String& GetAssessmentId() const { return m_assessmentId; }
  template <typename AssessmentIdT = Aws::String>
  void SetAssessmentId(AssessmentIdT&& value) {
    m_assessmentIdHasBeenSet = true;
    m_assessmentId = std::forward<AssessmentIdT>(value);
  }
  template <typename AssessmentIdT = Aws::String>
  StartFailureModeAssessmentResult& WithAssessmentId(AssessmentIdT&& value) {
    SetAssessmentId(std::forward<AssessmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
  template <typename ServiceArnT = Aws::String>
  void SetServiceArn(ServiceArnT&& value) {
    m_serviceArnHasBeenSet = true;
    m_serviceArn = std::forward<ServiceArnT>(value);
  }
  template <typename ServiceArnT = Aws::String>
  StartFailureModeAssessmentResult& WithServiceArn(ServiceArnT&& value) {
    SetServiceArn(std::forward<ServiceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the started assessment.</p>
   */
  inline AssessmentStatus GetAssessmentStatus() const { return m_assessmentStatus; }
  inline void SetAssessmentStatus(AssessmentStatus value) {
    m_assessmentStatusHasBeenSet = true;
    m_assessmentStatus = value;
  }
  inline StartFailureModeAssessmentResult& WithAssessmentStatus(AssessmentStatus value) {
    SetAssessmentStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the assessment started.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  StartFailureModeAssessmentResult& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
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
  StartFailureModeAssessmentResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_assessmentId;

  Aws::String m_serviceArn;

  AssessmentStatus m_assessmentStatus{AssessmentStatus::NOT_SET};

  Aws::Utils::DateTime m_startedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_assessmentIdHasBeenSet = false;
  bool m_serviceArnHasBeenSet = false;
  bool m_assessmentStatusHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
