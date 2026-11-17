/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/mgn/Mgn_EXPORTS.h>

#include <utility>

namespace Aws {
namespace mgn {
namespace Model {

/**
 */
class StartRemoteSourceActionJobRequest : public MgnRequest {
 public:
  AWS_MGN_API StartRemoteSourceActionJobRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartRemoteSourceActionJob"; }

  AWS_MGN_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ARNs of the source actions to run.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRemoteSourceActionArns() const { return m_remoteSourceActionArns; }
  inline bool RemoteSourceActionArnsHasBeenSet() const { return m_remoteSourceActionArnsHasBeenSet; }
  template <typename RemoteSourceActionArnsT = Aws::Vector<Aws::String>>
  void SetRemoteSourceActionArns(RemoteSourceActionArnsT&& value) {
    m_remoteSourceActionArnsHasBeenSet = true;
    m_remoteSourceActionArns = std::forward<RemoteSourceActionArnsT>(value);
  }
  template <typename RemoteSourceActionArnsT = Aws::Vector<Aws::String>>
  StartRemoteSourceActionJobRequest& WithRemoteSourceActionArns(RemoteSourceActionArnsT&& value) {
    SetRemoteSourceActionArns(std::forward<RemoteSourceActionArnsT>(value));
    return *this;
  }
  template <typename RemoteSourceActionArnsT = Aws::String>
  StartRemoteSourceActionJobRequest& AddRemoteSourceActionArns(RemoteSourceActionArnsT&& value) {
    m_remoteSourceActionArnsHasBeenSet = true;
    m_remoteSourceActionArns.emplace_back(std::forward<RemoteSourceActionArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the connector that runs the source actions.</p>
   */
  inline const Aws::String& GetConnectorArn() const { return m_connectorArn; }
  inline bool ConnectorArnHasBeenSet() const { return m_connectorArnHasBeenSet; }
  template <typename ConnectorArnT = Aws::String>
  void SetConnectorArn(ConnectorArnT&& value) {
    m_connectorArnHasBeenSet = true;
    m_connectorArn = std::forward<ConnectorArnT>(value);
  }
  template <typename ConnectorArnT = Aws::String>
  StartRemoteSourceActionJobRequest& WithConnectorArn(ConnectorArnT&& value) {
    SetConnectorArn(std::forward<ConnectorArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARNs of the source servers to run the source actions on.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSourceServerArns() const { return m_sourceServerArns; }
  inline bool SourceServerArnsHasBeenSet() const { return m_sourceServerArnsHasBeenSet; }
  template <typename SourceServerArnsT = Aws::Vector<Aws::String>>
  void SetSourceServerArns(SourceServerArnsT&& value) {
    m_sourceServerArnsHasBeenSet = true;
    m_sourceServerArns = std::forward<SourceServerArnsT>(value);
  }
  template <typename SourceServerArnsT = Aws::Vector<Aws::String>>
  StartRemoteSourceActionJobRequest& WithSourceServerArns(SourceServerArnsT&& value) {
    SetSourceServerArns(std::forward<SourceServerArnsT>(value));
    return *this;
  }
  template <typename SourceServerArnsT = Aws::String>
  StartRemoteSourceActionJobRequest& AddSourceServerArns(SourceServerArnsT&& value) {
    m_sourceServerArnsHasBeenSet = true;
    m_sourceServerArns.emplace_back(std::forward<SourceServerArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StartRemoteSourceActionJobRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags to assign to the job.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  StartRemoteSourceActionJobRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  StartRemoteSourceActionJobRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Account ID.</p>
   */
  inline const Aws::String& GetAccountID() const { return m_accountID; }
  inline bool AccountIDHasBeenSet() const { return m_accountIDHasBeenSet; }
  template <typename AccountIDT = Aws::String>
  void SetAccountID(AccountIDT&& value) {
    m_accountIDHasBeenSet = true;
    m_accountID = std::forward<AccountIDT>(value);
  }
  template <typename AccountIDT = Aws::String>
  StartRemoteSourceActionJobRequest& WithAccountID(AccountIDT&& value) {
    SetAccountID(std::forward<AccountIDT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_remoteSourceActionArns;

  Aws::String m_connectorArn;

  Aws::Vector<Aws::String> m_sourceServerArns;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_accountID;
  bool m_remoteSourceActionArnsHasBeenSet = false;
  bool m_connectorArnHasBeenSet = false;
  bool m_sourceServerArnsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_tagsHasBeenSet = false;
  bool m_accountIDHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
