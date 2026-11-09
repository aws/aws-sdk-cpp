/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/ReplicationStatus.h>

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
class FailoverReplicationResult {
 public:
  AWS_OPENSEARCHSERVICE_API FailoverReplicationResult() = default;
  AWS_OPENSEARCHSERVICE_API FailoverReplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OPENSEARCHSERVICE_API FailoverReplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the domain being promoted.</p>
   */
  inline const Aws::String& GetDomainArn() const { return m_domainArn; }
  template <typename DomainArnT = Aws::String>
  void SetDomainArn(DomainArnT&& value) {
    m_domainArnHasBeenSet = true;
    m_domainArn = std::forward<DomainArnT>(value);
  }
  template <typename DomainArnT = Aws::String>
  FailoverReplicationResult& WithDomainArn(DomainArnT&& value) {
    SetDomainArn(std::forward<DomainArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the replication relationship. This is <code>FAILING_OVER</code>
   * while the promotion is in progress.</p>
   */
  inline ReplicationStatus GetStatus() const { return m_status; }
  inline void SetStatus(ReplicationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline FailoverReplicationResult& WithStatus(ReplicationStatus value) {
    SetStatus(value);
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
  FailoverReplicationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_domainArn;

  ReplicationStatus m_status{ReplicationStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_domainArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
