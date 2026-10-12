/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/TrainingSessionDetail.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {
class DescribeTrainingSessionResult {
 public:
  AWS_SAGEMAKER_API DescribeTrainingSessionResult() = default;
  AWS_SAGEMAKER_API DescribeTrainingSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API DescribeTrainingSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The detailed information about the training session.</p>
   */
  inline const TrainingSessionDetail& GetTrainingSessionDetail() const { return m_trainingSessionDetail; }
  template <typename TrainingSessionDetailT = TrainingSessionDetail>
  void SetTrainingSessionDetail(TrainingSessionDetailT&& value) {
    m_trainingSessionDetailHasBeenSet = true;
    m_trainingSessionDetail = std::forward<TrainingSessionDetailT>(value);
  }
  template <typename TrainingSessionDetailT = TrainingSessionDetail>
  DescribeTrainingSessionResult& WithTrainingSessionDetail(TrainingSessionDetailT&& value) {
    SetTrainingSessionDetail(std::forward<TrainingSessionDetailT>(value));
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
  DescribeTrainingSessionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  TrainingSessionDetail m_trainingSessionDetail;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_trainingSessionDetailHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
