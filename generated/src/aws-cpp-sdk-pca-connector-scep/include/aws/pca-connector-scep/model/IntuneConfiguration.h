/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-scep/PcaConnectorScep_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace PcaConnectorScep
{
namespace Model
{

  /**
   * <p>Contains configuration details for use with Microsoft Intune. For information
   * about using Connector for SCEP for Microsoft Intune, see <a
   * href="https://docs.aws.amazon.com/privateca/latest/userguide/scep-connector.htmlconnector-for-scep-intune.html">Using
   * Connector for SCEP for Microsoft Intune</a>.</p> <p>When you use Connector for
   * SCEP for Microsoft Intune, certain functionalities are enabled by accessing
   * Microsoft Intune through the Microsoft API. Your use of the Connector for SCEP
   * and accompanying Amazon Web Services services doesn't remove your need to have a
   * valid license for your use of the Microsoft Intune service. You should also
   * review the <a
   * href="https://learn.microsoft.com/en-us/mem/intune/apps/app-protection-policy">Microsoft
   * Intune® App Protection Policies</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-scep-2018-05-10/IntuneConfiguration">AWS
   * API Reference</a></p>
   */
  class IntuneConfiguration
  {
  public:
    AWS_PCACONNECTORSCEP_API IntuneConfiguration();
    AWS_PCACONNECTORSCEP_API IntuneConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORSCEP_API IntuneConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORSCEP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The directory (tenant) ID from your Microsoft Entra ID app registration.</p>
     */
    inline const Aws::String& GetAzureApplicationId() const{ return m_azureApplicationId; }
    inline bool AzureApplicationIdHasBeenSet() const { return m_azureApplicationIdHasBeenSet; }
    inline void SetAzureApplicationId(const Aws::String& value) { m_azureApplicationIdHasBeenSet = true; m_azureApplicationId = value; }
    inline void SetAzureApplicationId(Aws::String&& value) { m_azureApplicationIdHasBeenSet = true; m_azureApplicationId = std::move(value); }
    inline void SetAzureApplicationId(const char* value) { m_azureApplicationIdHasBeenSet = true; m_azureApplicationId.assign(value); }
    inline IntuneConfiguration& WithAzureApplicationId(const Aws::String& value) { SetAzureApplicationId(value); return *this;}
    inline IntuneConfiguration& WithAzureApplicationId(Aws::String&& value) { SetAzureApplicationId(std::move(value)); return *this;}
    inline IntuneConfiguration& WithAzureApplicationId(const char* value) { SetAzureApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary domain from your Microsoft Entra ID app registration.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline IntuneConfiguration& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline IntuneConfiguration& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline IntuneConfiguration& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}
  private:

    Aws::String m_azureApplicationId;
    bool m_azureApplicationIdHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorScep
} // namespace Aws
