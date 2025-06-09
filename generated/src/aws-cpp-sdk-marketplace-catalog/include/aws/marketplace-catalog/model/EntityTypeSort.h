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
#include <aws/marketplace-catalog/model/MachineLearningProductSort.h>
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
    AWS_MARKETPLACECATALOG_API EntityTypeSort() = default;
    AWS_MARKETPLACECATALOG_API EntityTypeSort(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API EntityTypeSort& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A sort for data products.</p>
     */
    inline const DataProductSort& GetDataProductSort() const { return m_dataProductSort; }
    inline bool DataProductSortHasBeenSet() const { return m_dataProductSortHasBeenSet; }
    template<typename DataProductSortT = DataProductSort>
    void SetDataProductSort(DataProductSortT&& value) { m_dataProductSortHasBeenSet = true; m_dataProductSort = std::forward<DataProductSortT>(value); }
    template<typename DataProductSortT = DataProductSort>
    EntityTypeSort& WithDataProductSort(DataProductSortT&& value) { SetDataProductSort(std::forward<DataProductSortT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A sort for SaaS products.</p>
     */
    inline const SaaSProductSort& GetSaaSProductSort() const { return m_saaSProductSort; }
    inline bool SaaSProductSortHasBeenSet() const { return m_saaSProductSortHasBeenSet; }
    template<typename SaaSProductSortT = SaaSProductSort>
    void SetSaaSProductSort(SaaSProductSortT&& value) { m_saaSProductSortHasBeenSet = true; m_saaSProductSort = std::forward<SaaSProductSortT>(value); }
    template<typename SaaSProductSortT = SaaSProductSort>
    EntityTypeSort& WithSaaSProductSort(SaaSProductSortT&& value) { SetSaaSProductSort(std::forward<SaaSProductSortT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A sort for AMI products.</p>
     */
    inline const AmiProductSort& GetAmiProductSort() const { return m_amiProductSort; }
    inline bool AmiProductSortHasBeenSet() const { return m_amiProductSortHasBeenSet; }
    template<typename AmiProductSortT = AmiProductSort>
    void SetAmiProductSort(AmiProductSortT&& value) { m_amiProductSortHasBeenSet = true; m_amiProductSort = std::forward<AmiProductSortT>(value); }
    template<typename AmiProductSortT = AmiProductSort>
    EntityTypeSort& WithAmiProductSort(AmiProductSortT&& value) { SetAmiProductSort(std::forward<AmiProductSortT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A sort for offers.</p>
     */
    inline const OfferSort& GetOfferSort() const { return m_offerSort; }
    inline bool OfferSortHasBeenSet() const { return m_offerSortHasBeenSet; }
    template<typename OfferSortT = OfferSort>
    void SetOfferSort(OfferSortT&& value) { m_offerSortHasBeenSet = true; m_offerSort = std::forward<OfferSortT>(value); }
    template<typename OfferSortT = OfferSort>
    EntityTypeSort& WithOfferSort(OfferSortT&& value) { SetOfferSort(std::forward<OfferSortT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A sort for container products.</p>
     */
    inline const ContainerProductSort& GetContainerProductSort() const { return m_containerProductSort; }
    inline bool ContainerProductSortHasBeenSet() const { return m_containerProductSortHasBeenSet; }
    template<typename ContainerProductSortT = ContainerProductSort>
    void SetContainerProductSort(ContainerProductSortT&& value) { m_containerProductSortHasBeenSet = true; m_containerProductSort = std::forward<ContainerProductSortT>(value); }
    template<typename ContainerProductSortT = ContainerProductSort>
    EntityTypeSort& WithContainerProductSort(ContainerProductSortT&& value) { SetContainerProductSort(std::forward<ContainerProductSortT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A sort for Resale Authorizations.</p>
     */
    inline const ResaleAuthorizationSort& GetResaleAuthorizationSort() const { return m_resaleAuthorizationSort; }
    inline bool ResaleAuthorizationSortHasBeenSet() const { return m_resaleAuthorizationSortHasBeenSet; }
    template<typename ResaleAuthorizationSortT = ResaleAuthorizationSort>
    void SetResaleAuthorizationSort(ResaleAuthorizationSortT&& value) { m_resaleAuthorizationSortHasBeenSet = true; m_resaleAuthorizationSort = std::forward<ResaleAuthorizationSortT>(value); }
    template<typename ResaleAuthorizationSortT = ResaleAuthorizationSort>
    EntityTypeSort& WithResaleAuthorizationSort(ResaleAuthorizationSortT&& value) { SetResaleAuthorizationSort(std::forward<ResaleAuthorizationSortT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MachineLearningProductSort& GetMachineLearningProductSort() const { return m_machineLearningProductSort; }
    inline bool MachineLearningProductSortHasBeenSet() const { return m_machineLearningProductSortHasBeenSet; }
    template<typename MachineLearningProductSortT = MachineLearningProductSort>
    void SetMachineLearningProductSort(MachineLearningProductSortT&& value) { m_machineLearningProductSortHasBeenSet = true; m_machineLearningProductSort = std::forward<MachineLearningProductSortT>(value); }
    template<typename MachineLearningProductSortT = MachineLearningProductSort>
    EntityTypeSort& WithMachineLearningProductSort(MachineLearningProductSortT&& value) { SetMachineLearningProductSort(std::forward<MachineLearningProductSortT>(value)); return *this;}
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

    MachineLearningProductSort m_machineLearningProductSort;
    bool m_machineLearningProductSortHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
