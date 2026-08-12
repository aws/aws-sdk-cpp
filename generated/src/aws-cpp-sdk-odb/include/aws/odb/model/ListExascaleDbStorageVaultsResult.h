/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/ExascaleDbStorageVaultSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace odb {
namespace Model {
class ListExascaleDbStorageVaultsResult {
 public:
  AWS_ODB_API ListExascaleDbStorageVaultsResult() = default;
  AWS_ODB_API ListExascaleDbStorageVaultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ODB_API ListExascaleDbStorageVaultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The token to include in another request to get the next page of items. This
   * value is <code>null</code> when there are no more items to return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListExascaleDbStorageVaultsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of Exascale storage vaults.</p>
   */
  inline const Aws::Vector<ExascaleDbStorageVaultSummary>& GetExascaleDbStorageVaults() const { return m_exascaleDbStorageVaults; }
  template <typename ExascaleDbStorageVaultsT = Aws::Vector<ExascaleDbStorageVaultSummary>>
  void SetExascaleDbStorageVaults(ExascaleDbStorageVaultsT&& value) {
    m_exascaleDbStorageVaultsHasBeenSet = true;
    m_exascaleDbStorageVaults = std::forward<ExascaleDbStorageVaultsT>(value);
  }
  template <typename ExascaleDbStorageVaultsT = Aws::Vector<ExascaleDbStorageVaultSummary>>
  ListExascaleDbStorageVaultsResult& WithExascaleDbStorageVaults(ExascaleDbStorageVaultsT&& value) {
    SetExascaleDbStorageVaults(std::forward<ExascaleDbStorageVaultsT>(value));
    return *this;
  }
  template <typename ExascaleDbStorageVaultsT = ExascaleDbStorageVaultSummary>
  ListExascaleDbStorageVaultsResult& AddExascaleDbStorageVaults(ExascaleDbStorageVaultsT&& value) {
    m_exascaleDbStorageVaultsHasBeenSet = true;
    m_exascaleDbStorageVaults.emplace_back(std::forward<ExascaleDbStorageVaultsT>(value));
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
  ListExascaleDbStorageVaultsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_nextToken;

  Aws::Vector<ExascaleDbStorageVaultSummary> m_exascaleDbStorageVaults;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nextTokenHasBeenSet = false;
  bool m_exascaleDbStorageVaultsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
