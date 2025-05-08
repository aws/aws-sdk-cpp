/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/FederationProtocol.h>
#include <aws/sso-admin/model/DisplayData.h>
#include <aws/sso-admin/model/ResourceServerConfig.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SSOAdmin
{
namespace Model
{

  /**
   * <p>A structure that describes a provider that can be used to connect an Amazon
   * Web Services managed application or customer managed application to IAM Identity
   * Center.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ApplicationProvider">AWS
   * API Reference</a></p>
   */
  class ApplicationProvider
  {
  public:
    AWS_SSOADMIN_API ApplicationProvider() = default;
    AWS_SSOADMIN_API ApplicationProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API ApplicationProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the application provider.</p>
     */
    inline const Aws::String& GetApplicationProviderArn() const { return m_applicationProviderArn; }
    inline bool ApplicationProviderArnHasBeenSet() const { return m_applicationProviderArnHasBeenSet; }
    template<typename ApplicationProviderArnT = Aws::String>
    void SetApplicationProviderArn(ApplicationProviderArnT&& value) { m_applicationProviderArnHasBeenSet = true; m_applicationProviderArn = std::forward<ApplicationProviderArnT>(value); }
    template<typename ApplicationProviderArnT = Aws::String>
    ApplicationProvider& WithApplicationProviderArn(ApplicationProviderArnT&& value) { SetApplicationProviderArn(std::forward<ApplicationProviderArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol that the application provider uses to perform federation.</p>
     */
    inline FederationProtocol GetFederationProtocol() const { return m_federationProtocol; }
    inline bool FederationProtocolHasBeenSet() const { return m_federationProtocolHasBeenSet; }
    inline void SetFederationProtocol(FederationProtocol value) { m_federationProtocolHasBeenSet = true; m_federationProtocol = value; }
    inline ApplicationProvider& WithFederationProtocol(FederationProtocol value) { SetFederationProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that describes how IAM Identity Center represents the application
     * provider in the portal.</p>
     */
    inline const DisplayData& GetDisplayData() const { return m_displayData; }
    inline bool DisplayDataHasBeenSet() const { return m_displayDataHasBeenSet; }
    template<typename DisplayDataT = DisplayData>
    void SetDisplayData(DisplayDataT&& value) { m_displayDataHasBeenSet = true; m_displayData = std::forward<DisplayDataT>(value); }
    template<typename DisplayDataT = DisplayData>
    ApplicationProvider& WithDisplayData(DisplayDataT&& value) { SetDisplayData(std::forward<DisplayDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that describes the application provider's resource server.</p>
     */
    inline const ResourceServerConfig& GetResourceServerConfig() const { return m_resourceServerConfig; }
    inline bool ResourceServerConfigHasBeenSet() const { return m_resourceServerConfigHasBeenSet; }
    template<typename ResourceServerConfigT = ResourceServerConfig>
    void SetResourceServerConfig(ResourceServerConfigT&& value) { m_resourceServerConfigHasBeenSet = true; m_resourceServerConfig = std::forward<ResourceServerConfigT>(value); }
    template<typename ResourceServerConfigT = ResourceServerConfig>
    ApplicationProvider& WithResourceServerConfig(ResourceServerConfigT&& value) { SetResourceServerConfig(std::forward<ResourceServerConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationProviderArn;
    bool m_applicationProviderArnHasBeenSet = false;

    FederationProtocol m_federationProtocol{FederationProtocol::NOT_SET};
    bool m_federationProtocolHasBeenSet = false;

    DisplayData m_displayData;
    bool m_displayDataHasBeenSet = false;

    ResourceServerConfig m_resourceServerConfig;
    bool m_resourceServerConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
