/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/DataProductFilters.h>
#include <aws/marketplace-catalog/model/SaaSProductFilters.h>
#include <aws/marketplace-catalog/model/AmiProductFilters.h>
#include <aws/marketplace-catalog/model/OfferFilters.h>
#include <aws/marketplace-catalog/model/ContainerProductFilters.h>
#include <aws/marketplace-catalog/model/ResaleAuthorizationFilters.h>
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
namespace MarketplaceCatalog
{
namespace Model
{

  /**
   * <p>Object containing all the filter fields per entity type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/EntityTypeFilters">AWS
   * API Reference</a></p>
   */
  class EntityTypeFilters
  {
  public:
    AWS_MARKETPLACECATALOG_API EntityTypeFilters();
    AWS_MARKETPLACECATALOG_API EntityTypeFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API EntityTypeFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A filter for data products.</p>
     */
    inline const DataProductFilters& GetDataProductFilters() const{ return m_dataProductFilters; }

    /**
     * <p>A filter for data products.</p>
     */
    inline bool DataProductFiltersHasBeenSet() const { return m_dataProductFiltersHasBeenSet; }

    /**
     * <p>A filter for data products.</p>
     */
    inline void SetDataProductFilters(const DataProductFilters& value) { m_dataProductFiltersHasBeenSet = true; m_dataProductFilters = value; }

    /**
     * <p>A filter for data products.</p>
     */
    inline void SetDataProductFilters(DataProductFilters&& value) { m_dataProductFiltersHasBeenSet = true; m_dataProductFilters = std::move(value); }

    /**
     * <p>A filter for data products.</p>
     */
    inline EntityTypeFilters& WithDataProductFilters(const DataProductFilters& value) { SetDataProductFilters(value); return *this;}

    /**
     * <p>A filter for data products.</p>
     */
    inline EntityTypeFilters& WithDataProductFilters(DataProductFilters&& value) { SetDataProductFilters(std::move(value)); return *this;}


    /**
     * <p>A filter for SaaS products.</p>
     */
    inline const SaaSProductFilters& GetSaaSProductFilters() const{ return m_saaSProductFilters; }

    /**
     * <p>A filter for SaaS products.</p>
     */
    inline bool SaaSProductFiltersHasBeenSet() const { return m_saaSProductFiltersHasBeenSet; }

    /**
     * <p>A filter for SaaS products.</p>
     */
    inline void SetSaaSProductFilters(const SaaSProductFilters& value) { m_saaSProductFiltersHasBeenSet = true; m_saaSProductFilters = value; }

    /**
     * <p>A filter for SaaS products.</p>
     */
    inline void SetSaaSProductFilters(SaaSProductFilters&& value) { m_saaSProductFiltersHasBeenSet = true; m_saaSProductFilters = std::move(value); }

    /**
     * <p>A filter for SaaS products.</p>
     */
    inline EntityTypeFilters& WithSaaSProductFilters(const SaaSProductFilters& value) { SetSaaSProductFilters(value); return *this;}

    /**
     * <p>A filter for SaaS products.</p>
     */
    inline EntityTypeFilters& WithSaaSProductFilters(SaaSProductFilters&& value) { SetSaaSProductFilters(std::move(value)); return *this;}


    /**
     * <p>A filter for AMI products.</p>
     */
    inline const AmiProductFilters& GetAmiProductFilters() const{ return m_amiProductFilters; }

    /**
     * <p>A filter for AMI products.</p>
     */
    inline bool AmiProductFiltersHasBeenSet() const { return m_amiProductFiltersHasBeenSet; }

    /**
     * <p>A filter for AMI products.</p>
     */
    inline void SetAmiProductFilters(const AmiProductFilters& value) { m_amiProductFiltersHasBeenSet = true; m_amiProductFilters = value; }

    /**
     * <p>A filter for AMI products.</p>
     */
    inline void SetAmiProductFilters(AmiProductFilters&& value) { m_amiProductFiltersHasBeenSet = true; m_amiProductFilters = std::move(value); }

    /**
     * <p>A filter for AMI products.</p>
     */
    inline EntityTypeFilters& WithAmiProductFilters(const AmiProductFilters& value) { SetAmiProductFilters(value); return *this;}

    /**
     * <p>A filter for AMI products.</p>
     */
    inline EntityTypeFilters& WithAmiProductFilters(AmiProductFilters&& value) { SetAmiProductFilters(std::move(value)); return *this;}


    /**
     * <p>A filter for offers.</p>
     */
    inline const OfferFilters& GetOfferFilters() const{ return m_offerFilters; }

    /**
     * <p>A filter for offers.</p>
     */
    inline bool OfferFiltersHasBeenSet() const { return m_offerFiltersHasBeenSet; }

    /**
     * <p>A filter for offers.</p>
     */
    inline void SetOfferFilters(const OfferFilters& value) { m_offerFiltersHasBeenSet = true; m_offerFilters = value; }

    /**
     * <p>A filter for offers.</p>
     */
    inline void SetOfferFilters(OfferFilters&& value) { m_offerFiltersHasBeenSet = true; m_offerFilters = std::move(value); }

    /**
     * <p>A filter for offers.</p>
     */
    inline EntityTypeFilters& WithOfferFilters(const OfferFilters& value) { SetOfferFilters(value); return *this;}

    /**
     * <p>A filter for offers.</p>
     */
    inline EntityTypeFilters& WithOfferFilters(OfferFilters&& value) { SetOfferFilters(std::move(value)); return *this;}


    /**
     * <p>A filter for container products.</p>
     */
    inline const ContainerProductFilters& GetContainerProductFilters() const{ return m_containerProductFilters; }

    /**
     * <p>A filter for container products.</p>
     */
    inline bool ContainerProductFiltersHasBeenSet() const { return m_containerProductFiltersHasBeenSet; }

    /**
     * <p>A filter for container products.</p>
     */
    inline void SetContainerProductFilters(const ContainerProductFilters& value) { m_containerProductFiltersHasBeenSet = true; m_containerProductFilters = value; }

    /**
     * <p>A filter for container products.</p>
     */
    inline void SetContainerProductFilters(ContainerProductFilters&& value) { m_containerProductFiltersHasBeenSet = true; m_containerProductFilters = std::move(value); }

    /**
     * <p>A filter for container products.</p>
     */
    inline EntityTypeFilters& WithContainerProductFilters(const ContainerProductFilters& value) { SetContainerProductFilters(value); return *this;}

    /**
     * <p>A filter for container products.</p>
     */
    inline EntityTypeFilters& WithContainerProductFilters(ContainerProductFilters&& value) { SetContainerProductFilters(std::move(value)); return *this;}


    /**
     * <p>A filter for Resale Authorizations.</p>
     */
    inline const ResaleAuthorizationFilters& GetResaleAuthorizationFilters() const{ return m_resaleAuthorizationFilters; }

    /**
     * <p>A filter for Resale Authorizations.</p>
     */
    inline bool ResaleAuthorizationFiltersHasBeenSet() const { return m_resaleAuthorizationFiltersHasBeenSet; }

    /**
     * <p>A filter for Resale Authorizations.</p>
     */
    inline void SetResaleAuthorizationFilters(const ResaleAuthorizationFilters& value) { m_resaleAuthorizationFiltersHasBeenSet = true; m_resaleAuthorizationFilters = value; }

    /**
     * <p>A filter for Resale Authorizations.</p>
     */
    inline void SetResaleAuthorizationFilters(ResaleAuthorizationFilters&& value) { m_resaleAuthorizationFiltersHasBeenSet = true; m_resaleAuthorizationFilters = std::move(value); }

    /**
     * <p>A filter for Resale Authorizations.</p>
     */
    inline EntityTypeFilters& WithResaleAuthorizationFilters(const ResaleAuthorizationFilters& value) { SetResaleAuthorizationFilters(value); return *this;}

    /**
     * <p>A filter for Resale Authorizations.</p>
     */
    inline EntityTypeFilters& WithResaleAuthorizationFilters(ResaleAuthorizationFilters&& value) { SetResaleAuthorizationFilters(std::move(value)); return *this;}

  private:

    DataProductFilters m_dataProductFilters;
    bool m_dataProductFiltersHasBeenSet = false;

    SaaSProductFilters m_saaSProductFilters;
    bool m_saaSProductFiltersHasBeenSet = false;

    AmiProductFilters m_amiProductFilters;
    bool m_amiProductFiltersHasBeenSet = false;

    OfferFilters m_offerFilters;
    bool m_offerFiltersHasBeenSet = false;

    ContainerProductFilters m_containerProductFilters;
    bool m_containerProductFiltersHasBeenSet = false;

    ResaleAuthorizationFilters m_resaleAuthorizationFilters;
    bool m_resaleAuthorizationFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
