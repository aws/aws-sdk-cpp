/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/TrainingPlanExtension.h>

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
class DescribeTrainingPlanExtensionHistoryResult {
 public:
  AWS_SAGEMAKER_API DescribeTrainingPlanExtensionHistoryResult() = default;
  AWS_SAGEMAKER_API DescribeTrainingPlanExtensionHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API DescribeTrainingPlanExtensionHistoryResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of extensions for the specified training plan.</p>
   */
  inline const Aws::Vector<TrainingPlanExtension>& GetTrainingPlanExtensions() const { return m_trainingPlanExtensions; }
  template <typename TrainingPlanExtensionsT = Aws::Vector<TrainingPlanExtension>>
  void SetTrainingPlanExtensions(TrainingPlanExtensionsT&& value) {
    m_trainingPlanExtensionsHasBeenSet = true;
    m_trainingPlanExtensions = std::forward<TrainingPlanExtensionsT>(value);
  }
  template <typename TrainingPlanExtensionsT = Aws::Vector<TrainingPlanExtension>>
  DescribeTrainingPlanExtensionHistoryResult& WithTrainingPlanExtensions(TrainingPlanExtensionsT&& value) {
    SetTrainingPlanExtensions(std::forward<TrainingPlanExtensionsT>(value));
    return *this;
  }
  template <typename TrainingPlanExtensionsT = TrainingPlanExtension>
  DescribeTrainingPlanExtensionHistoryResult& AddTrainingPlanExtensions(TrainingPlanExtensionsT&& value) {
    m_trainingPlanExtensionsHasBeenSet = true;
    m_trainingPlanExtensions.emplace_back(std::forward<TrainingPlanExtensionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token to continue pagination if more results are available.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeTrainingPlanExtensionHistoryResult& WithNextToken(NextTokenT&& value) {
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
  DescribeTrainingPlanExtensionHistoryResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<TrainingPlanExtension> m_trainingPlanExtensions;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_trainingPlanExtensionsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
