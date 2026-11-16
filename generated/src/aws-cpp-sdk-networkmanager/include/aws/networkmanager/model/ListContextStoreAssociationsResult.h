/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/ContextStoreAssociation.h>

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
class ListContextStoreAssociationsResult {
 public:
  AWS_NETWORKMANAGER_API ListContextStoreAssociationsResult() = default;
  AWS_NETWORKMANAGER_API ListContextStoreAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NETWORKMANAGER_API ListContextStoreAssociationsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The context store associations.</p>
   */
  inline const Aws::Vector<ContextStoreAssociation>& GetContextStoreAssociations() const { return m_contextStoreAssociations; }
  template <typename ContextStoreAssociationsT = Aws::Vector<ContextStoreAssociation>>
  void SetContextStoreAssociations(ContextStoreAssociationsT&& value) {
    m_contextStoreAssociationsHasBeenSet = true;
    m_contextStoreAssociations = std::forward<ContextStoreAssociationsT>(value);
  }
  template <typename ContextStoreAssociationsT = Aws::Vector<ContextStoreAssociation>>
  ListContextStoreAssociationsResult& WithContextStoreAssociations(ContextStoreAssociationsT&& value) {
    SetContextStoreAssociations(std::forward<ContextStoreAssociationsT>(value));
    return *this;
  }
  template <typename ContextStoreAssociationsT = ContextStoreAssociation>
  ListContextStoreAssociationsResult& AddContextStoreAssociations(ContextStoreAssociationsT&& value) {
    m_contextStoreAssociationsHasBeenSet = true;
    m_contextStoreAssociations.emplace_back(std::forward<ContextStoreAssociationsT>(value));
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
  ListContextStoreAssociationsResult& WithNextToken(NextTokenT&& value) {
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
  ListContextStoreAssociationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ContextStoreAssociation> m_contextStoreAssociations;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_contextStoreAssociationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
