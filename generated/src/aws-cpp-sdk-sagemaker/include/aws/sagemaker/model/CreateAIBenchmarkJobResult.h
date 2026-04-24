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
class CreateAIBenchmarkJobResult {
 public:
  AWS_SAGEMAKER_API CreateAIBenchmarkJobResult() = default;
  AWS_SAGEMAKER_API CreateAIBenchmarkJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API CreateAIBenchmarkJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the created benchmark job.</p>
   */
  inline const Aws::String& GetAIBenchmarkJobArn() const { return m_aIBenchmarkJobArn; }
  template <typename AIBenchmarkJobArnT = Aws::String>
  void SetAIBenchmarkJobArn(AIBenchmarkJobArnT&& value) {
    m_aIBenchmarkJobArnHasBeenSet = true;
    m_aIBenchmarkJobArn = std::forward<AIBenchmarkJobArnT>(value);
  }
  template <typename AIBenchmarkJobArnT = Aws::String>
  CreateAIBenchmarkJobResult& WithAIBenchmarkJobArn(AIBenchmarkJobArnT&& value) {
    SetAIBenchmarkJobArn(std::forward<AIBenchmarkJobArnT>(value));
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
  CreateAIBenchmarkJobResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_aIBenchmarkJobArn;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_aIBenchmarkJobArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
