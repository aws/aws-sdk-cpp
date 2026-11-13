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
class UpdateClusterExtensionResult {
 public:
  AWS_SAGEMAKER_API UpdateClusterExtensionResult() = default;
  AWS_SAGEMAKER_API UpdateClusterExtensionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API UpdateClusterExtensionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the extension that is being updated. To
   * track the update, call <code>DescribeClusterExtension</code>.</p>
   */
  inline const Aws::String& GetExtensionArn() const { return m_extensionArn; }
  template <typename ExtensionArnT = Aws::String>
  void SetExtensionArn(ExtensionArnT&& value) {
    m_extensionArnHasBeenSet = true;
    m_extensionArn = std::forward<ExtensionArnT>(value);
  }
  template <typename ExtensionArnT = Aws::String>
  UpdateClusterExtensionResult& WithExtensionArn(ExtensionArnT&& value) {
    SetExtensionArn(std::forward<ExtensionArnT>(value));
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
  UpdateClusterExtensionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_extensionArn;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_extensionArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
