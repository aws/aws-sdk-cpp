/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/signer-data/SignerData_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SignerData {
namespace Model {
/**
 * <p>Response containing the list of revoked entities.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signer-data-2017-08-25/GetRevocationStatusResponse">AWS
 * API Reference</a></p>
 */
class GetRevocationStatusResult {
 public:
  AWS_SIGNERDATA_API GetRevocationStatusResult() = default;
  AWS_SIGNERDATA_API GetRevocationStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SIGNERDATA_API GetRevocationStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>List of entity identifiers that have been revoked. Empty if no revocations
   * found.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRevokedEntities() const { return m_revokedEntities; }
  template <typename RevokedEntitiesT = Aws::Vector<Aws::String>>
  void SetRevokedEntities(RevokedEntitiesT&& value) {
    m_revokedEntitiesHasBeenSet = true;
    m_revokedEntities = std::forward<RevokedEntitiesT>(value);
  }
  template <typename RevokedEntitiesT = Aws::Vector<Aws::String>>
  GetRevocationStatusResult& WithRevokedEntities(RevokedEntitiesT&& value) {
    SetRevokedEntities(std::forward<RevokedEntitiesT>(value));
    return *this;
  }
  template <typename RevokedEntitiesT = Aws::String>
  GetRevocationStatusResult& AddRevokedEntities(RevokedEntitiesT&& value) {
    m_revokedEntitiesHasBeenSet = true;
    m_revokedEntities.emplace_back(std::forward<RevokedEntitiesT>(value));
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
  GetRevocationStatusResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_revokedEntities;

  Aws::String m_requestId;
  bool m_revokedEntitiesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SignerData
}  // namespace Aws
