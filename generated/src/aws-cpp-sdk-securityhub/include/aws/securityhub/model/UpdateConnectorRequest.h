/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/CspmProviderUpdateConfiguration.h>

#include <utility>

namespace Aws {
namespace SecurityHub {
namespace Model {

/**
 */
class UpdateConnectorRequest : public SecurityHubRequest {
 public:
  AWS_SECURITYHUB_API UpdateConnectorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateConnector"; }

  AWS_SECURITYHUB_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the connector to update.</p>
   */
  inline const Aws::String& GetConnectorId() const { return m_connectorId; }
  inline bool ConnectorIdHasBeenSet() const { return m_connectorIdHasBeenSet; }
  template <typename ConnectorIdT = Aws::String>
  void SetConnectorId(ConnectorIdT&& value) {
    m_connectorIdHasBeenSet = true;
    m_connectorId = std::forward<ConnectorIdT>(value);
  }
  template <typename ConnectorIdT = Aws::String>
  UpdateConnectorRequest& WithConnectorId(ConnectorIdT&& value) {
    SetConnectorId(std::forward<ConnectorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated description of the connector.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateConnectorRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated cloud provider configuration for the connector.</p>
   */
  inline const CspmProviderUpdateConfiguration& GetProvider() const { return m_provider; }
  inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
  template <typename ProviderT = CspmProviderUpdateConfiguration>
  void SetProvider(ProviderT&& value) {
    m_providerHasBeenSet = true;
    m_provider = std::forward<ProviderT>(value);
  }
  template <typename ProviderT = CspmProviderUpdateConfiguration>
  UpdateConnectorRequest& WithProvider(ProviderT&& value) {
    SetProvider(std::forward<ProviderT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_connectorId;

  Aws::String m_description;

  CspmProviderUpdateConfiguration m_provider;
  bool m_connectorIdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_providerHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
