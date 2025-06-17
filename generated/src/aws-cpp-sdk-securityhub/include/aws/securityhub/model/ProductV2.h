/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/IntegrationV2Type.h>
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
   * <p>Defines the structure for the productV2.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ProductV2">AWS
   * API Reference</a></p>
   */
  class ProductV2
  {
  public:
    AWS_SECURITYHUB_API ProductV2() = default;
    AWS_SECURITYHUB_API ProductV2(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ProductV2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the productV2.</p>
     */
    inline const Aws::String& GetProductV2Name() const { return m_productV2Name; }
    inline bool ProductV2NameHasBeenSet() const { return m_productV2NameHasBeenSet; }
    template<typename ProductV2NameT = Aws::String>
    void SetProductV2Name(ProductV2NameT&& value) { m_productV2NameHasBeenSet = true; m_productV2Name = std::forward<ProductV2NameT>(value); }
    template<typename ProductV2NameT = Aws::String>
    ProductV2& WithProductV2Name(ProductV2NameT&& value) { SetProductV2Name(std::forward<ProductV2NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the organization or vendor that provides the productV2.</p>
     */
    inline const Aws::String& GetCompanyName() const { return m_companyName; }
    inline bool CompanyNameHasBeenSet() const { return m_companyNameHasBeenSet; }
    template<typename CompanyNameT = Aws::String>
    void SetCompanyName(CompanyNameT&& value) { m_companyNameHasBeenSet = true; m_companyName = std::forward<CompanyNameT>(value); }
    template<typename CompanyNameT = Aws::String>
    ProductV2& WithCompanyName(CompanyNameT&& value) { SetCompanyName(std::forward<CompanyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed information about the productV2.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ProductV2& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domains or functional areas the productV2 addresses.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCategories() const { return m_categories; }
    inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }
    template<typename CategoriesT = Aws::Vector<Aws::String>>
    void SetCategories(CategoriesT&& value) { m_categoriesHasBeenSet = true; m_categories = std::forward<CategoriesT>(value); }
    template<typename CategoriesT = Aws::Vector<Aws::String>>
    ProductV2& WithCategories(CategoriesT&& value) { SetCategories(std::forward<CategoriesT>(value)); return *this;}
    template<typename CategoriesT = Aws::String>
    ProductV2& AddCategories(CategoriesT&& value) { m_categoriesHasBeenSet = true; m_categories.emplace_back(std::forward<CategoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of integration.</p>
     */
    inline const Aws::Vector<IntegrationV2Type>& GetIntegrationV2Types() const { return m_integrationV2Types; }
    inline bool IntegrationV2TypesHasBeenSet() const { return m_integrationV2TypesHasBeenSet; }
    template<typename IntegrationV2TypesT = Aws::Vector<IntegrationV2Type>>
    void SetIntegrationV2Types(IntegrationV2TypesT&& value) { m_integrationV2TypesHasBeenSet = true; m_integrationV2Types = std::forward<IntegrationV2TypesT>(value); }
    template<typename IntegrationV2TypesT = Aws::Vector<IntegrationV2Type>>
    ProductV2& WithIntegrationV2Types(IntegrationV2TypesT&& value) { SetIntegrationV2Types(std::forward<IntegrationV2TypesT>(value)); return *this;}
    inline ProductV2& AddIntegrationV2Types(IntegrationV2Type value) { m_integrationV2TypesHasBeenSet = true; m_integrationV2Types.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The console URL where you can purchase or subscribe to products.</p>
     */
    inline const Aws::String& GetMarketplaceUrl() const { return m_marketplaceUrl; }
    inline bool MarketplaceUrlHasBeenSet() const { return m_marketplaceUrlHasBeenSet; }
    template<typename MarketplaceUrlT = Aws::String>
    void SetMarketplaceUrl(MarketplaceUrlT&& value) { m_marketplaceUrlHasBeenSet = true; m_marketplaceUrl = std::forward<MarketplaceUrlT>(value); }
    template<typename MarketplaceUrlT = Aws::String>
    ProductV2& WithMarketplaceUrl(MarketplaceUrlT&& value) { SetMarketplaceUrl(std::forward<MarketplaceUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to the serviceV@ or productV2 documentation about the integration,
     * which includes how to activate the integration.</p>
     */
    inline const Aws::String& GetActivationUrl() const { return m_activationUrl; }
    inline bool ActivationUrlHasBeenSet() const { return m_activationUrlHasBeenSet; }
    template<typename ActivationUrlT = Aws::String>
    void SetActivationUrl(ActivationUrlT&& value) { m_activationUrlHasBeenSet = true; m_activationUrl = std::forward<ActivationUrlT>(value); }
    template<typename ActivationUrlT = Aws::String>
    ProductV2& WithActivationUrl(ActivationUrlT&& value) { SetActivationUrl(std::forward<ActivationUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_productV2Name;
    bool m_productV2NameHasBeenSet = false;

    Aws::String m_companyName;
    bool m_companyNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_categories;
    bool m_categoriesHasBeenSet = false;

    Aws::Vector<IntegrationV2Type> m_integrationV2Types;
    bool m_integrationV2TypesHasBeenSet = false;

    Aws::String m_marketplaceUrl;
    bool m_marketplaceUrlHasBeenSet = false;

    Aws::String m_activationUrl;
    bool m_activationUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
