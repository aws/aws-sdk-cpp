/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ExtensionSummary.h>

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
class ListClusterExtensionsResult {
 public:
  AWS_SAGEMAKER_API ListClusterExtensionsResult() = default;
  AWS_SAGEMAKER_API ListClusterExtensionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API ListClusterExtensionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of extensions installed on the cluster.</p>
   */
  inline const Aws::Vector<ExtensionSummary>& GetExtensions() const { return m_extensions; }
  template <typename ExtensionsT = Aws::Vector<ExtensionSummary>>
  void SetExtensions(ExtensionsT&& value) {
    m_extensionsHasBeenSet = true;
    m_extensions = std::forward<ExtensionsT>(value);
  }
  template <typename ExtensionsT = Aws::Vector<ExtensionSummary>>
  ListClusterExtensionsResult& WithExtensions(ExtensionsT&& value) {
    SetExtensions(std::forward<ExtensionsT>(value));
    return *this;
  }
  template <typename ExtensionsT = ExtensionSummary>
  ListClusterExtensionsResult& AddExtensions(ExtensionsT&& value) {
    m_extensionsHasBeenSet = true;
    m_extensions.emplace_back(std::forward<ExtensionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The next token specified for listing extensions on a SageMaker HyperPod
   * cluster.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListClusterExtensionsResult& WithNextToken(NextTokenT&& value) {
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
  ListClusterExtensionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ExtensionSummary> m_extensions;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_extensionsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
