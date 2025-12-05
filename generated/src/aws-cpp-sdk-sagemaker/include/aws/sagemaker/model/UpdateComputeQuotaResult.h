/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
class UpdateComputeQuotaResult {
 public:
  AWS_SAGEMAKER_API UpdateComputeQuotaResult() = default;
  AWS_SAGEMAKER_API UpdateComputeQuotaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API UpdateComputeQuotaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>ARN of the compute allocation definition.</p>
   */
  inline const Aws::String& GetComputeQuotaArn() const { return m_computeQuotaArn; }
  template <typename ComputeQuotaArnT = Aws::String>
  void SetComputeQuotaArn(ComputeQuotaArnT&& value) {
    m_computeQuotaArnHasBeenSet = true;
    m_computeQuotaArn = std::forward<ComputeQuotaArnT>(value);
  }
  template <typename ComputeQuotaArnT = Aws::String>
  UpdateComputeQuotaResult& WithComputeQuotaArn(ComputeQuotaArnT&& value) {
    SetComputeQuotaArn(std::forward<ComputeQuotaArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Version of the compute allocation definition.</p>
   */
  inline int GetComputeQuotaVersion() const { return m_computeQuotaVersion; }
  inline void SetComputeQuotaVersion(int value) {
    m_computeQuotaVersionHasBeenSet = true;
    m_computeQuotaVersion = value;
  }
  inline UpdateComputeQuotaResult& WithComputeQuotaVersion(int value) {
    SetComputeQuotaVersion(value);
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
  UpdateComputeQuotaResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_computeQuotaArn;

  int m_computeQuotaVersion{0};

  Aws::String m_requestId;
  bool m_computeQuotaArnHasBeenSet = false;
  bool m_computeQuotaVersionHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
