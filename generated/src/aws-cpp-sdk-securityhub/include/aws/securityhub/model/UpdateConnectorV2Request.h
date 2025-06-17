/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/ProviderUpdateConfiguration.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class UpdateConnectorV2Request : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API UpdateConnectorV2Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConnectorV2"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The UUID of the connectorV2 to identify connectorV2 resource.</p>
     */
    inline const Aws::String& GetConnectorId() const { return m_connectorId; }
    inline bool ConnectorIdHasBeenSet() const { return m_connectorIdHasBeenSet; }
    template<typename ConnectorIdT = Aws::String>
    void SetConnectorId(ConnectorIdT&& value) { m_connectorIdHasBeenSet = true; m_connectorId = std::forward<ConnectorIdT>(value); }
    template<typename ConnectorIdT = Aws::String>
    UpdateConnectorV2Request& WithConnectorId(ConnectorIdT&& value) { SetConnectorId(std::forward<ConnectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The clientSecret of ServiceNow.</p>
     */
    inline const Aws::String& GetClientSecret() const { return m_clientSecret; }
    inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }
    template<typename ClientSecretT = Aws::String>
    void SetClientSecret(ClientSecretT&& value) { m_clientSecretHasBeenSet = true; m_clientSecret = std::forward<ClientSecretT>(value); }
    template<typename ClientSecretT = Aws::String>
    UpdateConnectorV2Request& WithClientSecret(ClientSecretT&& value) { SetClientSecret(std::forward<ClientSecretT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the connectorV2.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateConnectorV2Request& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The third-party provider’s service configuration.</p>
     */
    inline const ProviderUpdateConfiguration& GetProvider() const { return m_provider; }
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
    template<typename ProviderT = ProviderUpdateConfiguration>
    void SetProvider(ProviderT&& value) { m_providerHasBeenSet = true; m_provider = std::forward<ProviderT>(value); }
    template<typename ProviderT = ProviderUpdateConfiguration>
    UpdateConnectorV2Request& WithProvider(ProviderT&& value) { SetProvider(std::forward<ProviderT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectorId;
    bool m_connectorIdHasBeenSet = false;

    Aws::String m_clientSecret;
    bool m_clientSecretHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ProviderUpdateConfiguration m_provider;
    bool m_providerHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
