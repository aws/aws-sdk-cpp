/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/IntegrationType.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Contains details about a product.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Product">AWS
   * API Reference</a></p>
   */
  class Product
  {
  public:
    AWS_SECURITYHUB_API Product() = default;
    AWS_SECURITYHUB_API Product(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Product& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN assigned to the product.</p>
     */
    inline const Aws::String& GetProductArn() const { return m_productArn; }
    inline bool ProductArnHasBeenSet() const { return m_productArnHasBeenSet; }
    template<typename ProductArnT = Aws::String>
    void SetProductArn(ProductArnT&& value) { m_productArnHasBeenSet = true; m_productArn = std::forward<ProductArnT>(value); }
    template<typename ProductArnT = Aws::String>
    Product& WithProductArn(ProductArnT&& value) { SetProductArn(std::forward<ProductArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the product.</p>
     */
    inline const Aws::String& GetProductName() const { return m_productName; }
    inline bool ProductNameHasBeenSet() const { return m_productNameHasBeenSet; }
    template<typename ProductNameT = Aws::String>
    void SetProductName(ProductNameT&& value) { m_productNameHasBeenSet = true; m_productName = std::forward<ProductNameT>(value); }
    template<typename ProductNameT = Aws::String>
    Product& WithProductName(ProductNameT&& value) { SetProductName(std::forward<ProductNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the company that provides the product.</p>
     */
    inline const Aws::String& GetCompanyName() const { return m_companyName; }
    inline bool CompanyNameHasBeenSet() const { return m_companyNameHasBeenSet; }
    template<typename CompanyNameT = Aws::String>
    void SetCompanyName(CompanyNameT&& value) { m_companyNameHasBeenSet = true; m_companyName = std::forward<CompanyNameT>(value); }
    template<typename CompanyNameT = Aws::String>
    Product& WithCompanyName(CompanyNameT&& value) { SetCompanyName(std::forward<CompanyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the product.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Product& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The categories assigned to the product.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCategories() const { return m_categories; }
    inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }
    template<typename CategoriesT = Aws::Vector<Aws::String>>
    void SetCategories(CategoriesT&& value) { m_categoriesHasBeenSet = true; m_categories = std::forward<CategoriesT>(value); }
    template<typename CategoriesT = Aws::Vector<Aws::String>>
    Product& WithCategories(CategoriesT&& value) { SetCategories(std::forward<CategoriesT>(value)); return *this;}
    template<typename CategoriesT = Aws::String>
    Product& AddCategories(CategoriesT&& value) { m_categoriesHasBeenSet = true; m_categories.emplace_back(std::forward<CategoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The types of integration that the product supports. Available values are the
     * following.</p> <ul> <li> <p> <code>SEND_FINDINGS_TO_SECURITY_HUB</code> - The
     * integration sends findings to Security Hub.</p> </li> <li> <p>
     * <code>RECEIVE_FINDINGS_FROM_SECURITY_HUB</code> - The integration receives
     * findings from Security Hub.</p> </li> <li> <p>
     * <code>UPDATE_FINDINGS_IN_SECURITY_HUB</code> - The integration does not send new
     * findings to Security Hub, but does make updates to the findings that it receives
     * from Security Hub.</p> </li> </ul>
     */
    inline const Aws::Vector<IntegrationType>& GetIntegrationTypes() const { return m_integrationTypes; }
    inline bool IntegrationTypesHasBeenSet() const { return m_integrationTypesHasBeenSet; }
    template<typename IntegrationTypesT = Aws::Vector<IntegrationType>>
    void SetIntegrationTypes(IntegrationTypesT&& value) { m_integrationTypesHasBeenSet = true; m_integrationTypes = std::forward<IntegrationTypesT>(value); }
    template<typename IntegrationTypesT = Aws::Vector<IntegrationType>>
    Product& WithIntegrationTypes(IntegrationTypesT&& value) { SetIntegrationTypes(std::forward<IntegrationTypesT>(value)); return *this;}
    inline Product& AddIntegrationTypes(IntegrationType value) { m_integrationTypesHasBeenSet = true; m_integrationTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>For integrations with Amazon Web Services services, the Amazon Web Services
     * Console URL from which to activate the service.</p> <p>For integrations with
     * third-party products, the Amazon Web Services Marketplace URL from which to
     * subscribe to or purchase the product.</p>
     */
    inline const Aws::String& GetMarketplaceUrl() const { return m_marketplaceUrl; }
    inline bool MarketplaceUrlHasBeenSet() const { return m_marketplaceUrlHasBeenSet; }
    template<typename MarketplaceUrlT = Aws::String>
    void SetMarketplaceUrl(MarketplaceUrlT&& value) { m_marketplaceUrlHasBeenSet = true; m_marketplaceUrl = std::forward<MarketplaceUrlT>(value); }
    template<typename MarketplaceUrlT = Aws::String>
    Product& WithMarketplaceUrl(MarketplaceUrlT&& value) { SetMarketplaceUrl(std::forward<MarketplaceUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to the service or product documentation about the integration with
     * Security Hub, including how to activate the integration.</p>
     */
    inline const Aws::String& GetActivationUrl() const { return m_activationUrl; }
    inline bool ActivationUrlHasBeenSet() const { return m_activationUrlHasBeenSet; }
    template<typename ActivationUrlT = Aws::String>
    void SetActivationUrl(ActivationUrlT&& value) { m_activationUrlHasBeenSet = true; m_activationUrl = std::forward<ActivationUrlT>(value); }
    template<typename ActivationUrlT = Aws::String>
    Product& WithActivationUrl(ActivationUrlT&& value) { SetActivationUrl(std::forward<ActivationUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource policy associated with the product.</p>
     */
    inline const Aws::String& GetProductSubscriptionResourcePolicy() const { return m_productSubscriptionResourcePolicy; }
    inline bool ProductSubscriptionResourcePolicyHasBeenSet() const { return m_productSubscriptionResourcePolicyHasBeenSet; }
    template<typename ProductSubscriptionResourcePolicyT = Aws::String>
    void SetProductSubscriptionResourcePolicy(ProductSubscriptionResourcePolicyT&& value) { m_productSubscriptionResourcePolicyHasBeenSet = true; m_productSubscriptionResourcePolicy = std::forward<ProductSubscriptionResourcePolicyT>(value); }
    template<typename ProductSubscriptionResourcePolicyT = Aws::String>
    Product& WithProductSubscriptionResourcePolicy(ProductSubscriptionResourcePolicyT&& value) { SetProductSubscriptionResourcePolicy(std::forward<ProductSubscriptionResourcePolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_productArn;
    bool m_productArnHasBeenSet = false;

    Aws::String m_productName;
    bool m_productNameHasBeenSet = false;

    Aws::String m_companyName;
    bool m_companyNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_categories;
    bool m_categoriesHasBeenSet = false;

    Aws::Vector<IntegrationType> m_integrationTypes;
    bool m_integrationTypesHasBeenSet = false;

    Aws::String m_marketplaceUrl;
    bool m_marketplaceUrlHasBeenSet = false;

    Aws::String m_activationUrl;
    bool m_activationUrlHasBeenSet = false;

    Aws::String m_productSubscriptionResourcePolicy;
    bool m_productSubscriptionResourcePolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
