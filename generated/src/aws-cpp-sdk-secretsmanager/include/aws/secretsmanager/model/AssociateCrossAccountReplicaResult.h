/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/model/StatusType.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SecretsManager {
namespace Model {
class AssociateCrossAccountReplicaResult {
 public:
  AWS_SECRETSMANAGER_API AssociateCrossAccountReplicaResult() = default;
  AWS_SECRETSMANAGER_API AssociateCrossAccountReplicaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECRETSMANAGER_API AssociateCrossAccountReplicaResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ARN of the primary secret.</p>
   */
  inline const Aws::String& GetARN() const { return m_aRN; }
  template <typename ARNT = Aws::String>
  void SetARN(ARNT&& value) {
    m_aRNHasBeenSet = true;
    m_aRN = std::forward<ARNT>(value);
  }
  template <typename ARNT = Aws::String>
  AssociateCrossAccountReplicaResult& WithARN(ARNT&& value) {
    SetARN(std::forward<ARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the replica secret in the other account.</p>
   */
  inline const Aws::String& GetCrossAccountReplicaARN() const { return m_crossAccountReplicaARN; }
  template <typename CrossAccountReplicaARNT = Aws::String>
  void SetCrossAccountReplicaARN(CrossAccountReplicaARNT&& value) {
    m_crossAccountReplicaARNHasBeenSet = true;
    m_crossAccountReplicaARN = std::forward<CrossAccountReplicaARNT>(value);
  }
  template <typename CrossAccountReplicaARNT = Aws::String>
  AssociateCrossAccountReplicaResult& WithCrossAccountReplicaARN(CrossAccountReplicaARNT&& value) {
    SetCrossAccountReplicaARN(std::forward<CrossAccountReplicaARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of replication to the replica secret. Possible values:</p> <ul>
   * <li> <p> <code>InSync</code>, which indicates that replication to the replica
   * completed successfully and the replica is up to date.</p> </li> <li> <p>
   * <code>Failed</code>, which indicates that replication to the replica did not
   * succeed.</p> </li> <li> <p> <code>InProgress</code>, which indicates that
   * Secrets Manager is replicating to the replica.</p> </li> <li> <p>
   * <code>Pending</code>, which indicates that replication has not yet started.</p>
   * </li> <li> <p> <code>Detached</code>, which indicates that primary secret is no
   * longer linked to the replica secret.</p> </li> </ul>
   */
  inline StatusType GetReplicationStatus() const { return m_replicationStatus; }
  inline void SetReplicationStatus(StatusType value) {
    m_replicationStatusHasBeenSet = true;
    m_replicationStatus = value;
  }
  inline AssociateCrossAccountReplicaResult& WithReplicationStatus(StatusType value) {
    SetReplicationStatus(value);
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
  AssociateCrossAccountReplicaResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_aRN;

  Aws::String m_crossAccountReplicaARN;

  StatusType m_replicationStatus{StatusType::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_aRNHasBeenSet = false;
  bool m_crossAccountReplicaARNHasBeenSet = false;
  bool m_replicationStatusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecretsManager
}  // namespace Aws
