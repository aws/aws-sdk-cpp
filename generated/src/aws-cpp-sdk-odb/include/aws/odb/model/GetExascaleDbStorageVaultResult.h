/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/ExascaleDbStorageVault.h>

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
class GetExascaleDbStorageVaultResult {
 public:
  AWS_ODB_API GetExascaleDbStorageVaultResult() = default;
  AWS_ODB_API GetExascaleDbStorageVaultResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ODB_API GetExascaleDbStorageVaultResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Exascale storage vault.</p>
   */
  inline const ExascaleDbStorageVault& GetExascaleDbStorageVault() const { return m_exascaleDbStorageVault; }
  template <typename ExascaleDbStorageVaultT = ExascaleDbStorageVault>
  void SetExascaleDbStorageVault(ExascaleDbStorageVaultT&& value) {
    m_exascaleDbStorageVaultHasBeenSet = true;
    m_exascaleDbStorageVault = std::forward<ExascaleDbStorageVaultT>(value);
  }
  template <typename ExascaleDbStorageVaultT = ExascaleDbStorageVault>
  GetExascaleDbStorageVaultResult& WithExascaleDbStorageVault(ExascaleDbStorageVaultT&& value) {
    SetExascaleDbStorageVault(std::forward<ExascaleDbStorageVaultT>(value));
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
  GetExascaleDbStorageVaultResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  ExascaleDbStorageVault m_exascaleDbStorageVault;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_exascaleDbStorageVaultHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
