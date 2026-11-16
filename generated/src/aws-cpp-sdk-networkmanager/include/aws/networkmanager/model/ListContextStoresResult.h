/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/ContextStore.h>

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
class ListContextStoresResult {
 public:
  AWS_NETWORKMANAGER_API ListContextStoresResult() = default;
  AWS_NETWORKMANAGER_API ListContextStoresResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NETWORKMANAGER_API ListContextStoresResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The context stores.</p>
   */
  inline const Aws::Vector<ContextStore>& GetContextStores() const { return m_contextStores; }
  template <typename ContextStoresT = Aws::Vector<ContextStore>>
  void SetContextStores(ContextStoresT&& value) {
    m_contextStoresHasBeenSet = true;
    m_contextStores = std::forward<ContextStoresT>(value);
  }
  template <typename ContextStoresT = Aws::Vector<ContextStore>>
  ListContextStoresResult& WithContextStores(ContextStoresT&& value) {
    SetContextStores(std::forward<ContextStoresT>(value));
    return *this;
  }
  template <typename ContextStoresT = ContextStore>
  ListContextStoresResult& AddContextStores(ContextStoresT&& value) {
    m_contextStoresHasBeenSet = true;
    m_contextStores.emplace_back(std::forward<ContextStoresT>(value));
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
  ListContextStoresResult& WithNextToken(NextTokenT&& value) {
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
  ListContextStoresResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ContextStore> m_contextStores;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_contextStoresHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
