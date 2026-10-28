/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/ReplicationPeer.h>
#include <aws/opensearch/model/ReplicationRole.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchService {
namespace Model {
class DescribeDomainReplicationResult {
 public:
  AWS_OPENSEARCHSERVICE_API DescribeDomainReplicationResult() = default;
  AWS_OPENSEARCHSERVICE_API DescribeDomainReplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OPENSEARCHSERVICE_API DescribeDomainReplicationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the domain described.</p>
   */
  inline const Aws::String& GetDomainArn() const { return m_domainArn; }
  template <typename DomainArnT = Aws::String>
  void SetDomainArn(DomainArnT&& value) {
    m_domainArnHasBeenSet = true;
    m_domainArn = std::forward<DomainArnT>(value);
  }
  template <typename DomainArnT = Aws::String>
  DescribeDomainReplicationResult& WithDomainArn(DomainArnT&& value) {
    SetDomainArn(std::forward<DomainArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The domain's role in the arrangement, either <code>PRIMARY</code> or
   * <code>SECONDARY</code>. Absent when the domain is not replicating.</p>
   */
  inline ReplicationRole GetRole() const { return m_role; }
  inline void SetRole(ReplicationRole value) {
    m_roleHasBeenSet = true;
    m_role = value;
  }
  inline DescribeDomainReplicationResult& WithRole(ReplicationRole value) {
    SetRole(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The domains that this domain replicates with. Each entry carries the state of
   * that one relationship. Empty when the domain is not replicating.</p>
   */
  inline const Aws::Vector<ReplicationPeer>& GetPeers() const { return m_peers; }
  template <typename PeersT = Aws::Vector<ReplicationPeer>>
  void SetPeers(PeersT&& value) {
    m_peersHasBeenSet = true;
    m_peers = std::forward<PeersT>(value);
  }
  template <typename PeersT = Aws::Vector<ReplicationPeer>>
  DescribeDomainReplicationResult& WithPeers(PeersT&& value) {
    SetPeers(std::forward<PeersT>(value));
    return *this;
  }
  template <typename PeersT = ReplicationPeer>
  DescribeDomainReplicationResult& AddPeers(PeersT&& value) {
    m_peersHasBeenSet = true;
    m_peers.emplace_back(std::forward<PeersT>(value));
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
  DescribeDomainReplicationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_domainArn;

  ReplicationRole m_role{ReplicationRole::NOT_SET};

  Aws::Vector<ReplicationPeer> m_peers;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_domainArnHasBeenSet = false;
  bool m_roleHasBeenSet = false;
  bool m_peersHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
