/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/ContextChange.h>

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
class ListContextChangesResult {
 public:
  AWS_NETWORKMANAGER_API ListContextChangesResult() = default;
  AWS_NETWORKMANAGER_API ListContextChangesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NETWORKMANAGER_API ListContextChangesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The context entries that were added or removed.</p>
   */
  inline const Aws::Vector<ContextChange>& GetContextChanges() const { return m_contextChanges; }
  template <typename ContextChangesT = Aws::Vector<ContextChange>>
  void SetContextChanges(ContextChangesT&& value) {
    m_contextChangesHasBeenSet = true;
    m_contextChanges = std::forward<ContextChangesT>(value);
  }
  template <typename ContextChangesT = Aws::Vector<ContextChange>>
  ListContextChangesResult& WithContextChanges(ContextChangesT&& value) {
    SetContextChanges(std::forward<ContextChangesT>(value));
    return *this;
  }
  template <typename ContextChangesT = ContextChange>
  ListContextChangesResult& AddContextChanges(ContextChangesT&& value) {
    m_contextChangesHasBeenSet = true;
    m_contextChanges.emplace_back(std::forward<ContextChangesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version that the changes start from.</p>
   */
  inline const Aws::String& GetFromVersionId() const { return m_fromVersionId; }
  template <typename FromVersionIdT = Aws::String>
  void SetFromVersionId(FromVersionIdT&& value) {
    m_fromVersionIdHasBeenSet = true;
    m_fromVersionId = std::forward<FromVersionIdT>(value);
  }
  template <typename FromVersionIdT = Aws::String>
  ListContextChangesResult& WithFromVersionId(FromVersionIdT&& value) {
    SetFromVersionId(std::forward<FromVersionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version that the changes bring the context entries up to. To get later
   * changes, specify this value as <code>FromVersionId</code> in your next request.
   * All pages of the same request return the same version.</p>
   */
  inline const Aws::String& GetToVersionId() const { return m_toVersionId; }
  template <typename ToVersionIdT = Aws::String>
  void SetToVersionId(ToVersionIdT&& value) {
    m_toVersionIdHasBeenSet = true;
    m_toVersionId = std::forward<ToVersionIdT>(value);
  }
  template <typename ToVersionIdT = Aws::String>
  ListContextChangesResult& WithToVersionId(ToVersionIdT&& value) {
    SetToVersionId(std::forward<ToVersionIdT>(value));
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
  ListContextChangesResult& WithNextToken(NextTokenT&& value) {
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
  ListContextChangesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ContextChange> m_contextChanges;

  Aws::String m_fromVersionId;

  Aws::String m_toVersionId;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_contextChangesHasBeenSet = false;
  bool m_fromVersionIdHasBeenSet = false;
  bool m_toVersionIdHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
