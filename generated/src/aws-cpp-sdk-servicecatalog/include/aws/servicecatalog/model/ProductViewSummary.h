﻿/**
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
    AWS_SERVICECATALOG_API ProductViewSummary();
    AWS_SERVICECATALOG_API ProductViewSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ProductViewSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The product view identifier.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ProductViewSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ProductViewSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ProductViewSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product identifier.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }
    inline ProductViewSummary& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}
    inline ProductViewSummary& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}
    inline ProductViewSummary& WithProductId(const char* value) { SetProductId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the product.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ProductViewSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ProductViewSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ProductViewSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the product. Contact the product administrator for the
     * significance of this value.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }
    inline ProductViewSummary& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline ProductViewSummary& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline ProductViewSummary& WithOwner(const char* value) { SetOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Short description of the product.</p>
     */
    inline const Aws::String& GetShortDescription() const{ return m_shortDescription; }
    inline bool ShortDescriptionHasBeenSet() const { return m_shortDescriptionHasBeenSet; }
    inline void SetShortDescription(const Aws::String& value) { m_shortDescriptionHasBeenSet = true; m_shortDescription = value; }
    inline void SetShortDescription(Aws::String&& value) { m_shortDescriptionHasBeenSet = true; m_shortDescription = std::move(value); }
    inline void SetShortDescription(const char* value) { m_shortDescriptionHasBeenSet = true; m_shortDescription.assign(value); }
    inline ProductViewSummary& WithShortDescription(const Aws::String& value) { SetShortDescription(value); return *this;}
    inline ProductViewSummary& WithShortDescription(Aws::String&& value) { SetShortDescription(std::move(value)); return *this;}
    inline ProductViewSummary& WithShortDescription(const char* value) { SetShortDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product type. Contact the product administrator for the significance of
     * this value. If this value is <code>MARKETPLACE</code>, the product was created
     * by Amazon Web Services Marketplace.</p>
     */
    inline const ProductType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ProductType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ProductType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ProductViewSummary& WithType(const ProductType& value) { SetType(value); return *this;}
    inline ProductViewSummary& WithType(ProductType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distributor of the product. Contact the product administrator for the
     * significance of this value.</p>
     */
    inline const Aws::String& GetDistributor() const{ return m_distributor; }
    inline bool DistributorHasBeenSet() const { return m_distributorHasBeenSet; }
    inline void SetDistributor(const Aws::String& value) { m_distributorHasBeenSet = true; m_distributor = value; }
    inline void SetDistributor(Aws::String&& value) { m_distributorHasBeenSet = true; m_distributor = std::move(value); }
    inline void SetDistributor(const char* value) { m_distributorHasBeenSet = true; m_distributor.assign(value); }
    inline ProductViewSummary& WithDistributor(const Aws::String& value) { SetDistributor(value); return *this;}
    inline ProductViewSummary& WithDistributor(Aws::String&& value) { SetDistributor(std::move(value)); return *this;}
    inline ProductViewSummary& WithDistributor(const char* value) { SetDistributor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the product has a default path. If the product does not
     * have a default path, call <a>ListLaunchPaths</a> to disambiguate between paths.
     * Otherwise, <a>ListLaunchPaths</a> is not required, and the output of
     * <a>ProductViewSummary</a> can be used directly with
     * <a>DescribeProvisioningParameters</a>.</p>
     */
    inline bool GetHasDefaultPath() const{ return m_hasDefaultPath; }
    inline bool HasDefaultPathHasBeenSet() const { return m_hasDefaultPathHasBeenSet; }
    inline void SetHasDefaultPath(bool value) { m_hasDefaultPathHasBeenSet = true; m_hasDefaultPath = value; }
    inline ProductViewSummary& WithHasDefaultPath(bool value) { SetHasDefaultPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email contact information to obtain support for this Product.</p>
     */
    inline const Aws::String& GetSupportEmail() const{ return m_supportEmail; }
    inline bool SupportEmailHasBeenSet() const { return m_supportEmailHasBeenSet; }
    inline void SetSupportEmail(const Aws::String& value) { m_supportEmailHasBeenSet = true; m_supportEmail = value; }
    inline void SetSupportEmail(Aws::String&& value) { m_supportEmailHasBeenSet = true; m_supportEmail = std::move(value); }
    inline void SetSupportEmail(const char* value) { m_supportEmailHasBeenSet = true; m_supportEmail.assign(value); }
    inline ProductViewSummary& WithSupportEmail(const Aws::String& value) { SetSupportEmail(value); return *this;}
    inline ProductViewSummary& WithSupportEmail(Aws::String&& value) { SetSupportEmail(std::move(value)); return *this;}
    inline ProductViewSummary& WithSupportEmail(const char* value) { SetSupportEmail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the support for this Product.</p>
     */
    inline const Aws::String& GetSupportDescription() const{ return m_supportDescription; }
    inline bool SupportDescriptionHasBeenSet() const { return m_supportDescriptionHasBeenSet; }
    inline void SetSupportDescription(const Aws::String& value) { m_supportDescriptionHasBeenSet = true; m_supportDescription = value; }
    inline void SetSupportDescription(Aws::String&& value) { m_supportDescriptionHasBeenSet = true; m_supportDescription = std::move(value); }
    inline void SetSupportDescription(const char* value) { m_supportDescriptionHasBeenSet = true; m_supportDescription.assign(value); }
    inline ProductViewSummary& WithSupportDescription(const Aws::String& value) { SetSupportDescription(value); return *this;}
    inline ProductViewSummary& WithSupportDescription(Aws::String&& value) { SetSupportDescription(std::move(value)); return *this;}
    inline ProductViewSummary& WithSupportDescription(const char* value) { SetSupportDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL information to obtain support for this Product.</p>
     */
    inline const Aws::String& GetSupportUrl() const{ return m_supportUrl; }
    inline bool SupportUrlHasBeenSet() const { return m_supportUrlHasBeenSet; }
    inline void SetSupportUrl(const Aws::String& value) { m_supportUrlHasBeenSet = true; m_supportUrl = value; }
    inline void SetSupportUrl(Aws::String&& value) { m_supportUrlHasBeenSet = true; m_supportUrl = std::move(value); }
    inline void SetSupportUrl(const char* value) { m_supportUrlHasBeenSet = true; m_supportUrl.assign(value); }
    inline ProductViewSummary& WithSupportUrl(const Aws::String& value) { SetSupportUrl(value); return *this;}
    inline ProductViewSummary& WithSupportUrl(Aws::String&& value) { SetSupportUrl(std::move(value)); return *this;}
    inline ProductViewSummary& WithSupportUrl(const char* value) { SetSupportUrl(value); return *this;}
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

    ProductType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_distributor;
    bool m_distributorHasBeenSet = false;

    bool m_hasDefaultPath;
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
