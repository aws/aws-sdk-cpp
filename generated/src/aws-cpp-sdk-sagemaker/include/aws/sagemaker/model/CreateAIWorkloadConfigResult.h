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
class CreateAIWorkloadConfigResult {
 public:
  AWS_SAGEMAKER_API CreateAIWorkloadConfigResult() = default;
  AWS_SAGEMAKER_API CreateAIWorkloadConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API CreateAIWorkloadConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the created AI workload configuration.</p>
   */
  inline const Aws::String& GetAIWorkloadConfigArn() const { return m_aIWorkloadConfigArn; }
  template <typename AIWorkloadConfigArnT = Aws::String>
  void SetAIWorkloadConfigArn(AIWorkloadConfigArnT&& value) {
    m_aIWorkloadConfigArnHasBeenSet = true;
    m_aIWorkloadConfigArn = std::forward<AIWorkloadConfigArnT>(value);
  }
  template <typename AIWorkloadConfigArnT = Aws::String>
  CreateAIWorkloadConfigResult& WithAIWorkloadConfigArn(AIWorkloadConfigArnT&& value) {
    SetAIWorkloadConfigArn(std::forward<AIWorkloadConfigArnT>(value));
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
  CreateAIWorkloadConfigResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_aIWorkloadConfigArn;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_aIWorkloadConfigArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
