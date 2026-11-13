/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ExtensionVersionSummary.h>

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
class ListClusterExtensionVersionsResult {
 public:
  AWS_SAGEMAKER_API ListClusterExtensionVersionsResult() = default;
  AWS_SAGEMAKER_API ListClusterExtensionVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API ListClusterExtensionVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The versions of the extension that you can install, from the highest version
   * to the lowest.</p>
   */
  inline const Aws::Vector<ExtensionVersionSummary>& GetExtensionVersions() const { return m_extensionVersions; }
  template <typename ExtensionVersionsT = Aws::Vector<ExtensionVersionSummary>>
  void SetExtensionVersions(ExtensionVersionsT&& value) {
    m_extensionVersionsHasBeenSet = true;
    m_extensionVersions = std::forward<ExtensionVersionsT>(value);
  }
  template <typename ExtensionVersionsT = Aws::Vector<ExtensionVersionSummary>>
  ListClusterExtensionVersionsResult& WithExtensionVersions(ExtensionVersionsT&& value) {
    SetExtensionVersions(std::forward<ExtensionVersionsT>(value));
    return *this;
  }
  template <typename ExtensionVersionsT = ExtensionVersionSummary>
  ListClusterExtensionVersionsResult& AddExtensionVersions(ExtensionVersionsT&& value) {
    m_extensionVersionsHasBeenSet = true;
    m_extensionVersions.emplace_back(std::forward<ExtensionVersionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the response is truncated, a token that you can use in the next request to
   * retrieve the next set of versions.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListClusterExtensionVersionsResult& WithNextToken(NextTokenT&& value) {
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
  ListClusterExtensionVersionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ExtensionVersionSummary> m_extensionVersions;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_extensionVersionsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
