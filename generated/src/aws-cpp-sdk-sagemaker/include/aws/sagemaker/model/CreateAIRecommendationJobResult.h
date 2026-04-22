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
class CreateAIRecommendationJobResult {
 public:
  AWS_SAGEMAKER_API CreateAIRecommendationJobResult() = default;
  AWS_SAGEMAKER_API CreateAIRecommendationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API CreateAIRecommendationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the created recommendation job.</p>
   */
  inline const Aws::String& GetAIRecommendationJobArn() const { return m_aIRecommendationJobArn; }
  template <typename AIRecommendationJobArnT = Aws::String>
  void SetAIRecommendationJobArn(AIRecommendationJobArnT&& value) {
    m_aIRecommendationJobArnHasBeenSet = true;
    m_aIRecommendationJobArn = std::forward<AIRecommendationJobArnT>(value);
  }
  template <typename AIRecommendationJobArnT = Aws::String>
  CreateAIRecommendationJobResult& WithAIRecommendationJobArn(AIRecommendationJobArnT&& value) {
    SetAIRecommendationJobArn(std::forward<AIRecommendationJobArnT>(value));
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
  CreateAIRecommendationJobResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_aIRecommendationJobArn;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_aIRecommendationJobArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
