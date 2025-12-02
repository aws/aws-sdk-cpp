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
class CreatePresignedMlflowAppUrlResult {
 public:
  AWS_SAGEMAKER_API CreatePresignedMlflowAppUrlResult() = default;
  AWS_SAGEMAKER_API CreatePresignedMlflowAppUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API CreatePresignedMlflowAppUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A presigned URL with an authorization token.</p>
   */
  inline const Aws::String& GetAuthorizedUrl() const { return m_authorizedUrl; }
  template <typename AuthorizedUrlT = Aws::String>
  void SetAuthorizedUrl(AuthorizedUrlT&& value) {
    m_authorizedUrlHasBeenSet = true;
    m_authorizedUrl = std::forward<AuthorizedUrlT>(value);
  }
  template <typename AuthorizedUrlT = Aws::String>
  CreatePresignedMlflowAppUrlResult& WithAuthorizedUrl(AuthorizedUrlT&& value) {
    SetAuthorizedUrl(std::forward<AuthorizedUrlT>(value));
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
  CreatePresignedMlflowAppUrlResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_authorizedUrl;
  bool m_authorizedUrlHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
