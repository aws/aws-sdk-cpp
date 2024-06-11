﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/DisplayData.h>
#include <aws/sso-admin/model/FederationProtocol.h>
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
    AWS_SSOADMIN_API ApplicationProvider();
    AWS_SSOADMIN_API ApplicationProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API ApplicationProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the application provider.</p>
     */
    inline const Aws::String& GetApplicationProviderArn() const{ return m_applicationProviderArn; }
    inline bool ApplicationProviderArnHasBeenSet() const { return m_applicationProviderArnHasBeenSet; }
    inline void SetApplicationProviderArn(const Aws::String& value) { m_applicationProviderArnHasBeenSet = true; m_applicationProviderArn = value; }
    inline void SetApplicationProviderArn(Aws::String&& value) { m_applicationProviderArnHasBeenSet = true; m_applicationProviderArn = std::move(value); }
    inline void SetApplicationProviderArn(const char* value) { m_applicationProviderArnHasBeenSet = true; m_applicationProviderArn.assign(value); }
    inline ApplicationProvider& WithApplicationProviderArn(const Aws::String& value) { SetApplicationProviderArn(value); return *this;}
    inline ApplicationProvider& WithApplicationProviderArn(Aws::String&& value) { SetApplicationProviderArn(std::move(value)); return *this;}
    inline ApplicationProvider& WithApplicationProviderArn(const char* value) { SetApplicationProviderArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that describes how IAM Identity Center represents the application
     * provider in the portal.</p>
     */
    inline const DisplayData& GetDisplayData() const{ return m_displayData; }
    inline bool DisplayDataHasBeenSet() const { return m_displayDataHasBeenSet; }
    inline void SetDisplayData(const DisplayData& value) { m_displayDataHasBeenSet = true; m_displayData = value; }
    inline void SetDisplayData(DisplayData&& value) { m_displayDataHasBeenSet = true; m_displayData = std::move(value); }
    inline ApplicationProvider& WithDisplayData(const DisplayData& value) { SetDisplayData(value); return *this;}
    inline ApplicationProvider& WithDisplayData(DisplayData&& value) { SetDisplayData(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol that the application provider uses to perform federation.</p>
     */
    inline const FederationProtocol& GetFederationProtocol() const{ return m_federationProtocol; }
    inline bool FederationProtocolHasBeenSet() const { return m_federationProtocolHasBeenSet; }
    inline void SetFederationProtocol(const FederationProtocol& value) { m_federationProtocolHasBeenSet = true; m_federationProtocol = value; }
    inline void SetFederationProtocol(FederationProtocol&& value) { m_federationProtocolHasBeenSet = true; m_federationProtocol = std::move(value); }
    inline ApplicationProvider& WithFederationProtocol(const FederationProtocol& value) { SetFederationProtocol(value); return *this;}
    inline ApplicationProvider& WithFederationProtocol(FederationProtocol&& value) { SetFederationProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that describes the application provider's resource server.</p>
     */
    inline const ResourceServerConfig& GetResourceServerConfig() const{ return m_resourceServerConfig; }
    inline bool ResourceServerConfigHasBeenSet() const { return m_resourceServerConfigHasBeenSet; }
    inline void SetResourceServerConfig(const ResourceServerConfig& value) { m_resourceServerConfigHasBeenSet = true; m_resourceServerConfig = value; }
    inline void SetResourceServerConfig(ResourceServerConfig&& value) { m_resourceServerConfigHasBeenSet = true; m_resourceServerConfig = std::move(value); }
    inline ApplicationProvider& WithResourceServerConfig(const ResourceServerConfig& value) { SetResourceServerConfig(value); return *this;}
    inline ApplicationProvider& WithResourceServerConfig(ResourceServerConfig&& value) { SetResourceServerConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationProviderArn;
    bool m_applicationProviderArnHasBeenSet = false;

    DisplayData m_displayData;
    bool m_displayDataHasBeenSet = false;

    FederationProtocol m_federationProtocol;
    bool m_federationProtocolHasBeenSet = false;

    ResourceServerConfig m_resourceServerConfig;
    bool m_resourceServerConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
