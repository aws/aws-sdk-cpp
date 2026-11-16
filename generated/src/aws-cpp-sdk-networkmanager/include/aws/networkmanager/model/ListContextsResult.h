/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/ContextEntry.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace NetworkManager {
namespace Model {
class ListContextsResult {
 public:
  AWS_NETWORKMANAGER_API ListContextsResult() = default;
  AWS_NETWORKMANAGER_API ListContextsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NETWORKMANAGER_API ListContextsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The context entries.</p>
   */
  inline const Aws::Vector<ContextEntry>& GetContexts() const { return m_contexts; }
  template <typename ContextsT = Aws::Vector<ContextEntry>>
  void SetContexts(ContextsT&& value) {
    m_contextsHasBeenSet = true;
    m_contexts = std::forward<ContextsT>(value);
  }
  template <typename ContextsT = Aws::Vector<ContextEntry>>
  ListContextsResult& WithContexts(ContextsT&& value) {
    SetContexts(std::forward<ContextsT>(value));
    return *this;
  }
  template <typename ContextsT = ContextEntry>
  ListContextsResult& AddContexts(ContextsT&& value) {
    m_contextsHasBeenSet = true;
    m_contexts.emplace_back(std::forward<ContextsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListContextsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the returned context entries. All pages of the same request
   * return the same version.</p>
   */
  inline const Aws::String& GetVersionId() const { return m_versionId; }
  template <typename VersionIdT = Aws::String>
  void SetVersionId(VersionIdT&& value) {
    m_versionIdHasBeenSet = true;
    m_versionId = std::forward<VersionIdT>(value);
  }
  template <typename VersionIdT = Aws::String>
  ListContextsResult& WithVersionId(VersionIdT&& value) {
    SetVersionId(std::forward<VersionIdT>(value));
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
  ListContextsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ContextEntry> m_contexts;

  Aws::String m_nextToken;

  Aws::String m_versionId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_contextsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_versionIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
