/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
class CreateTrainingSessionResult {
 public:
  AWS_SAGEMAKER_API CreateTrainingSessionResult() = default;
  AWS_SAGEMAKER_API CreateTrainingSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API CreateTrainingSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the training session.</p>
   */
  inline const Aws::String& GetTrainingSessionArn() const { return m_trainingSessionArn; }
  template <typename TrainingSessionArnT = Aws::String>
  void SetTrainingSessionArn(TrainingSessionArnT&& value) {
    m_trainingSessionArnHasBeenSet = true;
    m_trainingSessionArn = std::forward<TrainingSessionArnT>(value);
  }
  template <typename TrainingSessionArnT = Aws::String>
  CreateTrainingSessionResult& WithTrainingSessionArn(TrainingSessionArnT&& value) {
    SetTrainingSessionArn(std::forward<TrainingSessionArnT>(value));
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
  CreateTrainingSessionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_trainingSessionArn;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_trainingSessionArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
