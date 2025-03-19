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
    AWS_PCACONNECTORSCEP_API IntuneConfiguration() = default;
    AWS_PCACONNECTORSCEP_API IntuneConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORSCEP_API IntuneConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORSCEP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The directory (tenant) ID from your Microsoft Entra ID app registration.</p>
     */
    inline const Aws::String& GetAzureApplicationId() const { return m_azureApplicationId; }
    inline bool AzureApplicationIdHasBeenSet() const { return m_azureApplicationIdHasBeenSet; }
    template<typename AzureApplicationIdT = Aws::String>
    void SetAzureApplicationId(AzureApplicationIdT&& value) { m_azureApplicationIdHasBeenSet = true; m_azureApplicationId = std::forward<AzureApplicationIdT>(value); }
    template<typename AzureApplicationIdT = Aws::String>
    IntuneConfiguration& WithAzureApplicationId(AzureApplicationIdT&& value) { SetAzureApplicationId(std::forward<AzureApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary domain from your Microsoft Entra ID app registration.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    IntuneConfiguration& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
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
