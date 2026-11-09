/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>

#include <utility>

namespace Aws {
namespace OpenSearchService {
namespace Model {

/**
 */
class FailoverReplicationRequest : public OpenSearchServiceRequest {
 public:
  AWS_OPENSEARCHSERVICE_API FailoverReplicationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "FailoverReplication"; }

  AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;

  ///@{

  inline const Aws::String& GetDomainName() const { return m_domainName; }
  inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  FailoverReplicationRequest& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the relationship's current primary. The
   * request is rejected if this domain is no longer the peer of the domain you are
   * calling.</p>
   */
  inline const Aws::String& GetPeerDomainArn() const { return m_peerDomainArn; }
  inline bool PeerDomainArnHasBeenSet() const { return m_peerDomainArnHasBeenSet; }
  template <typename PeerDomainArnT = Aws::String>
  void SetPeerDomainArn(PeerDomainArnT&& value) {
    m_peerDomainArnHasBeenSet = true;
    m_peerDomainArn = std::forward<PeerDomainArnT>(value);
  }
  template <typename PeerDomainArnT = Aws::String>
  FailoverReplicationRequest& WithPeerDomainArn(PeerDomainArnT&& value) {
    SetPeerDomainArn(std::forward<PeerDomainArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Acknowledges that writes which had not yet replicated are lost. You must set
   * this to <code>true</code>; the request is rejected otherwise.</p>
   */
  inline bool GetAllowDataLoss() const { return m_allowDataLoss; }
  inline bool AllowDataLossHasBeenSet() const { return m_allowDataLossHasBeenSet; }
  inline void SetAllowDataLoss(bool value) {
    m_allowDataLossHasBeenSet = true;
    m_allowDataLoss = value;
  }
  inline FailoverReplicationRequest& WithAllowDataLoss(bool value) {
    SetAllowDataLoss(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainName;

  Aws::String m_peerDomainArn;

  bool m_allowDataLoss{false};
  bool m_domainNameHasBeenSet = false;
  bool m_peerDomainArnHasBeenSet = false;
  bool m_allowDataLossHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
