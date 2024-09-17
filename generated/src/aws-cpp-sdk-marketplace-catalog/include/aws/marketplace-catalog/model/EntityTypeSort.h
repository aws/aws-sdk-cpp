/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/DataProductSort.h>
#include <aws/marketplace-catalog/model/SaaSProductSort.h>
#include <aws/marketplace-catalog/model/AmiProductSort.h>
#include <aws/marketplace-catalog/model/OfferSort.h>
#include <aws/marketplace-catalog/model/ContainerProductSort.h>
#include <aws/marketplace-catalog/model/ResaleAuthorizationSort.h>
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
   * <p>Object containing all the sort fields per entity type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/EntityTypeSort">AWS
   * API Reference</a></p>
   */
  class EntityTypeSort
  {
  public:
    AWS_MARKETPLACECATALOG_API EntityTypeSort();
    AWS_MARKETPLACECATALOG_API EntityTypeSort(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API EntityTypeSort& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A sort for data products.</p>
     */
    inline const DataProductSort& GetDataProductSort() const{ return m_dataProductSort; }
    inline bool DataProductSortHasBeenSet() const { return m_dataProductSortHasBeenSet; }
    inline void SetDataProductSort(const DataProductSort& value) { m_dataProductSortHasBeenSet = true; m_dataProductSort = value; }
    inline void SetDataProductSort(DataProductSort&& value) { m_dataProductSortHasBeenSet = true; m_dataProductSort = std::move(value); }
    inline EntityTypeSort& WithDataProductSort(const DataProductSort& value) { SetDataProductSort(value); return *this;}
    inline EntityTypeSort& WithDataProductSort(DataProductSort&& value) { SetDataProductSort(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A sort for SaaS products.</p>
     */
    inline const SaaSProductSort& GetSaaSProductSort() const{ return m_saaSProductSort; }
    inline bool SaaSProductSortHasBeenSet() const { return m_saaSProductSortHasBeenSet; }
    inline void SetSaaSProductSort(const SaaSProductSort& value) { m_saaSProductSortHasBeenSet = true; m_saaSProductSort = value; }
    inline void SetSaaSProductSort(SaaSProductSort&& value) { m_saaSProductSortHasBeenSet = true; m_saaSProductSort = std::move(value); }
    inline EntityTypeSort& WithSaaSProductSort(const SaaSProductSort& value) { SetSaaSProductSort(value); return *this;}
    inline EntityTypeSort& WithSaaSProductSort(SaaSProductSort&& value) { SetSaaSProductSort(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A sort for AMI products.</p>
     */
    inline const AmiProductSort& GetAmiProductSort() const{ return m_amiProductSort; }
    inline bool AmiProductSortHasBeenSet() const { return m_amiProductSortHasBeenSet; }
    inline void SetAmiProductSort(const AmiProductSort& value) { m_amiProductSortHasBeenSet = true; m_amiProductSort = value; }
    inline void SetAmiProductSort(AmiProductSort&& value) { m_amiProductSortHasBeenSet = true; m_amiProductSort = std::move(value); }
    inline EntityTypeSort& WithAmiProductSort(const AmiProductSort& value) { SetAmiProductSort(value); return *this;}
    inline EntityTypeSort& WithAmiProductSort(AmiProductSort&& value) { SetAmiProductSort(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A sort for offers.</p>
     */
    inline const OfferSort& GetOfferSort() const{ return m_offerSort; }
    inline bool OfferSortHasBeenSet() const { return m_offerSortHasBeenSet; }
    inline void SetOfferSort(const OfferSort& value) { m_offerSortHasBeenSet = true; m_offerSort = value; }
    inline void SetOfferSort(OfferSort&& value) { m_offerSortHasBeenSet = true; m_offerSort = std::move(value); }
    inline EntityTypeSort& WithOfferSort(const OfferSort& value) { SetOfferSort(value); return *this;}
    inline EntityTypeSort& WithOfferSort(OfferSort&& value) { SetOfferSort(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A sort for container products.</p>
     */
    inline const ContainerProductSort& GetContainerProductSort() const{ return m_containerProductSort; }
    inline bool ContainerProductSortHasBeenSet() const { return m_containerProductSortHasBeenSet; }
    inline void SetContainerProductSort(const ContainerProductSort& value) { m_containerProductSortHasBeenSet = true; m_containerProductSort = value; }
    inline void SetContainerProductSort(ContainerProductSort&& value) { m_containerProductSortHasBeenSet = true; m_containerProductSort = std::move(value); }
    inline EntityTypeSort& WithContainerProductSort(const ContainerProductSort& value) { SetContainerProductSort(value); return *this;}
    inline EntityTypeSort& WithContainerProductSort(ContainerProductSort&& value) { SetContainerProductSort(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A sort for Resale Authorizations.</p>
     */
    inline const ResaleAuthorizationSort& GetResaleAuthorizationSort() const{ return m_resaleAuthorizationSort; }
    inline bool ResaleAuthorizationSortHasBeenSet() const { return m_resaleAuthorizationSortHasBeenSet; }
    inline void SetResaleAuthorizationSort(const ResaleAuthorizationSort& value) { m_resaleAuthorizationSortHasBeenSet = true; m_resaleAuthorizationSort = value; }
    inline void SetResaleAuthorizationSort(ResaleAuthorizationSort&& value) { m_resaleAuthorizationSortHasBeenSet = true; m_resaleAuthorizationSort = std::move(value); }
    inline EntityTypeSort& WithResaleAuthorizationSort(const ResaleAuthorizationSort& value) { SetResaleAuthorizationSort(value); return *this;}
    inline EntityTypeSort& WithResaleAuthorizationSort(ResaleAuthorizationSort&& value) { SetResaleAuthorizationSort(std::move(value)); return *this;}
    ///@}
  private:

    DataProductSort m_dataProductSort;
    bool m_dataProductSortHasBeenSet = false;

    SaaSProductSort m_saaSProductSort;
    bool m_saaSProductSortHasBeenSet = false;

    AmiProductSort m_amiProductSort;
    bool m_amiProductSortHasBeenSet = false;

    OfferSort m_offerSort;
    bool m_offerSortHasBeenSet = false;

    ContainerProductSort m_containerProductSort;
    bool m_containerProductSortHasBeenSet = false;

    ResaleAuthorizationSort m_resaleAuthorizationSort;
    bool m_resaleAuthorizationSortHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
