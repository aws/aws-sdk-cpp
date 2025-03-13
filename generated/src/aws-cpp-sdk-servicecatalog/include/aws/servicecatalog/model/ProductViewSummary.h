/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ProductType.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Summary information about a product view.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ProductViewSummary">AWS
   * API Reference</a></p>
   */
  class ProductViewSummary
  {
  public:
    AWS_SERVICECATALOG_API ProductViewSummary() = default;
    AWS_SERVICECATALOG_API ProductViewSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ProductViewSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The product view identifier.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ProductViewSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product identifier.</p>
     */
    inline const Aws::String& GetProductId() const { return m_productId; }
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
    template<typename ProductIdT = Aws::String>
    void SetProductId(ProductIdT&& value) { m_productIdHasBeenSet = true; m_productId = std::forward<ProductIdT>(value); }
    template<typename ProductIdT = Aws::String>
    ProductViewSummary& WithProductId(ProductIdT&& value) { SetProductId(std::forward<ProductIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the product.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ProductViewSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the product. Contact the product administrator for the
     * significance of this value.</p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    ProductViewSummary& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Short description of the product.</p>
     */
    inline const Aws::String& GetShortDescription() const { return m_shortDescription; }
    inline bool ShortDescriptionHasBeenSet() const { return m_shortDescriptionHasBeenSet; }
    template<typename ShortDescriptionT = Aws::String>
    void SetShortDescription(ShortDescriptionT&& value) { m_shortDescriptionHasBeenSet = true; m_shortDescription = std::forward<ShortDescriptionT>(value); }
    template<typename ShortDescriptionT = Aws::String>
    ProductViewSummary& WithShortDescription(ShortDescriptionT&& value) { SetShortDescription(std::forward<ShortDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product type. Contact the product administrator for the significance of
     * this value. If this value is <code>MARKETPLACE</code>, the product was created
     * by Amazon Web Services Marketplace.</p>
     */
    inline ProductType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ProductType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ProductViewSummary& WithType(ProductType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distributor of the product. Contact the product administrator for the
     * significance of this value.</p>
     */
    inline const Aws::String& GetDistributor() const { return m_distributor; }
    inline bool DistributorHasBeenSet() const { return m_distributorHasBeenSet; }
    template<typename DistributorT = Aws::String>
    void SetDistributor(DistributorT&& value) { m_distributorHasBeenSet = true; m_distributor = std::forward<DistributorT>(value); }
    template<typename DistributorT = Aws::String>
    ProductViewSummary& WithDistributor(DistributorT&& value) { SetDistributor(std::forward<DistributorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the product has a default path. If the product does not
     * have a default path, call <a>ListLaunchPaths</a> to disambiguate between paths.
     * Otherwise, <a>ListLaunchPaths</a> is not required, and the output of
     * <a>ProductViewSummary</a> can be used directly with
     * <a>DescribeProvisioningParameters</a>.</p>
     */
    inline bool GetHasDefaultPath() const { return m_hasDefaultPath; }
    inline bool HasDefaultPathHasBeenSet() const { return m_hasDefaultPathHasBeenSet; }
    inline void SetHasDefaultPath(bool value) { m_hasDefaultPathHasBeenSet = true; m_hasDefaultPath = value; }
    inline ProductViewSummary& WithHasDefaultPath(bool value) { SetHasDefaultPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email contact information to obtain support for this Product.</p>
     */
    inline const Aws::String& GetSupportEmail() const { return m_supportEmail; }
    inline bool SupportEmailHasBeenSet() const { return m_supportEmailHasBeenSet; }
    template<typename SupportEmailT = Aws::String>
    void SetSupportEmail(SupportEmailT&& value) { m_supportEmailHasBeenSet = true; m_supportEmail = std::forward<SupportEmailT>(value); }
    template<typename SupportEmailT = Aws::String>
    ProductViewSummary& WithSupportEmail(SupportEmailT&& value) { SetSupportEmail(std::forward<SupportEmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the support for this Product.</p>
     */
    inline const Aws::String& GetSupportDescription() const { return m_supportDescription; }
    inline bool SupportDescriptionHasBeenSet() const { return m_supportDescriptionHasBeenSet; }
    template<typename SupportDescriptionT = Aws::String>
    void SetSupportDescription(SupportDescriptionT&& value) { m_supportDescriptionHasBeenSet = true; m_supportDescription = std::forward<SupportDescriptionT>(value); }
    template<typename SupportDescriptionT = Aws::String>
    ProductViewSummary& WithSupportDescription(SupportDescriptionT&& value) { SetSupportDescription(std::forward<SupportDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL information to obtain support for this Product.</p>
     */
    inline const Aws::String& GetSupportUrl() const { return m_supportUrl; }
    inline bool SupportUrlHasBeenSet() const { return m_supportUrlHasBeenSet; }
    template<typename SupportUrlT = Aws::String>
    void SetSupportUrl(SupportUrlT&& value) { m_supportUrlHasBeenSet = true; m_supportUrl = std::forward<SupportUrlT>(value); }
    template<typename SupportUrlT = Aws::String>
    ProductViewSummary& WithSupportUrl(SupportUrlT&& value) { SetSupportUrl(std::forward<SupportUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_productId;
    bool m_productIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_shortDescription;
    bool m_shortDescriptionHasBeenSet = false;

    ProductType m_type{ProductType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_distributor;
    bool m_distributorHasBeenSet = false;

    bool m_hasDefaultPath{false};
    bool m_hasDefaultPathHasBeenSet = false;

    Aws::String m_supportEmail;
    bool m_supportEmailHasBeenSet = false;

    Aws::String m_supportDescription;
    bool m_supportDescriptionHasBeenSet = false;

    Aws::String m_supportUrl;
    bool m_supportUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
