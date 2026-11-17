/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdminRequest.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/ConnectorConfiguration.h>

#include <utility>

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

/**
 */
class CreateConnectorRequest : public ObservabilityAdminRequest {
 public:
  AWS_OBSERVABILITYADMIN_API CreateConnectorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateConnector"; }

  AWS_OBSERVABILITYADMIN_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The configuration for connecting to the third-party cloud provider.</p>
   */
  inline const ConnectorConfiguration& GetConnectorConfiguration() const { return m_connectorConfiguration; }
  inline bool ConnectorConfigurationHasBeenSet() const { return m_connectorConfigurationHasBeenSet; }
  template <typename ConnectorConfigurationT = ConnectorConfiguration>
  void SetConnectorConfiguration(ConnectorConfigurationT&& value) {
    m_connectorConfigurationHasBeenSet = true;
    m_connectorConfiguration = std::forward<ConnectorConfigurationT>(value);
  }
  template <typename ConnectorConfigurationT = ConnectorConfiguration>
  CreateConnectorRequest& WithConnectorConfiguration(ConnectorConfigurationT&& value) {
    SetConnectorConfiguration(std::forward<ConnectorConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Identity and Access
   * Management (IAM) role that CloudWatch assumes to get credentials for the
   * third-party cloud provider. The role must trust the Amazon CloudWatch
   * Observability Admin service principal,
   * <code>observabilityadmin.amazonaws.com</code>. The role must also allow
   * <code>sts:GetWebIdentityToken</code> for the provider's token exchange
   * audience.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  CreateConnectorRequest& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the connector. The name must be unique in the account and Region
   * (case-sensitive). If another connector already uses the name, the request fails
   * with a <code>ConflictException</code>.</p> <p>The name can contain letters,
   * digits, hyphens (-), underscores (_) and periods (.), and must start with a
   * letter.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateConnectorRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags that you want to apply to the connector.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateConnectorRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateConnectorRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the operation
   * completes no more than one time. If you use an Amazon Web Services SDK, the SDK
   * generates this value and reuses it on retries. If this token matches a previous
   * request with the same parameters, the service returns the connector from the
   * first request without an error. If you use the same token with different
   * parameters, including different tags, the service returns a
   * <code>ValidationException</code>. This operation is idempotent when you use the
   * same token and parameters.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateConnectorRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  ConnectorConfiguration m_connectorConfiguration;

  Aws::String m_roleArn;

  Aws::String m_name;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_clientToken;
  bool m_connectorConfigurationHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
