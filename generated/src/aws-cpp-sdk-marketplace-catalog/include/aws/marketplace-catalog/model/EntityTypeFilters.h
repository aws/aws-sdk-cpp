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
#include <aws/marketplace-catalog/model/MachineLearningProductFilters.h>
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
    AWS_MARKETPLACECATALOG_API EntityTypeFilters() = default;
    AWS_MARKETPLACECATALOG_API EntityTypeFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API EntityTypeFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A filter for data products.</p>
     */
    inline const DataProductFilters& GetDataProductFilters() const { return m_dataProductFilters; }
    inline bool DataProductFiltersHasBeenSet() const { return m_dataProductFiltersHasBeenSet; }
    template<typename DataProductFiltersT = DataProductFilters>
    void SetDataProductFilters(DataProductFiltersT&& value) { m_dataProductFiltersHasBeenSet = true; m_dataProductFilters = std::forward<DataProductFiltersT>(value); }
    template<typename DataProductFiltersT = DataProductFilters>
    EntityTypeFilters& WithDataProductFilters(DataProductFiltersT&& value) { SetDataProductFilters(std::forward<DataProductFiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter for SaaS products.</p>
     */
    inline const SaaSProductFilters& GetSaaSProductFilters() const { return m_saaSProductFilters; }
    inline bool SaaSProductFiltersHasBeenSet() const { return m_saaSProductFiltersHasBeenSet; }
    template<typename SaaSProductFiltersT = SaaSProductFilters>
    void SetSaaSProductFilters(SaaSProductFiltersT&& value) { m_saaSProductFiltersHasBeenSet = true; m_saaSProductFilters = std::forward<SaaSProductFiltersT>(value); }
    template<typename SaaSProductFiltersT = SaaSProductFilters>
    EntityTypeFilters& WithSaaSProductFilters(SaaSProductFiltersT&& value) { SetSaaSProductFilters(std::forward<SaaSProductFiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter for AMI products.</p>
     */
    inline const AmiProductFilters& GetAmiProductFilters() const { return m_amiProductFilters; }
    inline bool AmiProductFiltersHasBeenSet() const { return m_amiProductFiltersHasBeenSet; }
    template<typename AmiProductFiltersT = AmiProductFilters>
    void SetAmiProductFilters(AmiProductFiltersT&& value) { m_amiProductFiltersHasBeenSet = true; m_amiProductFilters = std::forward<AmiProductFiltersT>(value); }
    template<typename AmiProductFiltersT = AmiProductFilters>
    EntityTypeFilters& WithAmiProductFilters(AmiProductFiltersT&& value) { SetAmiProductFilters(std::forward<AmiProductFiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter for offers.</p>
     */
    inline const OfferFilters& GetOfferFilters() const { return m_offerFilters; }
    inline bool OfferFiltersHasBeenSet() const { return m_offerFiltersHasBeenSet; }
    template<typename OfferFiltersT = OfferFilters>
    void SetOfferFilters(OfferFiltersT&& value) { m_offerFiltersHasBeenSet = true; m_offerFilters = std::forward<OfferFiltersT>(value); }
    template<typename OfferFiltersT = OfferFilters>
    EntityTypeFilters& WithOfferFilters(OfferFiltersT&& value) { SetOfferFilters(std::forward<OfferFiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter for container products.</p>
     */
    inline const ContainerProductFilters& GetContainerProductFilters() const { return m_containerProductFilters; }
    inline bool ContainerProductFiltersHasBeenSet() const { return m_containerProductFiltersHasBeenSet; }
    template<typename ContainerProductFiltersT = ContainerProductFilters>
    void SetContainerProductFilters(ContainerProductFiltersT&& value) { m_containerProductFiltersHasBeenSet = true; m_containerProductFilters = std::forward<ContainerProductFiltersT>(value); }
    template<typename ContainerProductFiltersT = ContainerProductFilters>
    EntityTypeFilters& WithContainerProductFilters(ContainerProductFiltersT&& value) { SetContainerProductFilters(std::forward<ContainerProductFiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter for Resale Authorizations.</p>
     */
    inline const ResaleAuthorizationFilters& GetResaleAuthorizationFilters() const { return m_resaleAuthorizationFilters; }
    inline bool ResaleAuthorizationFiltersHasBeenSet() const { return m_resaleAuthorizationFiltersHasBeenSet; }
    template<typename ResaleAuthorizationFiltersT = ResaleAuthorizationFilters>
    void SetResaleAuthorizationFilters(ResaleAuthorizationFiltersT&& value) { m_resaleAuthorizationFiltersHasBeenSet = true; m_resaleAuthorizationFilters = std::forward<ResaleAuthorizationFiltersT>(value); }
    template<typename ResaleAuthorizationFiltersT = ResaleAuthorizationFilters>
    EntityTypeFilters& WithResaleAuthorizationFilters(ResaleAuthorizationFiltersT&& value) { SetResaleAuthorizationFilters(std::forward<ResaleAuthorizationFiltersT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MachineLearningProductFilters& GetMachineLearningProductFilters() const { return m_machineLearningProductFilters; }
    inline bool MachineLearningProductFiltersHasBeenSet() const { return m_machineLearningProductFiltersHasBeenSet; }
    template<typename MachineLearningProductFiltersT = MachineLearningProductFilters>
    void SetMachineLearningProductFilters(MachineLearningProductFiltersT&& value) { m_machineLearningProductFiltersHasBeenSet = true; m_machineLearningProductFilters = std::forward<MachineLearningProductFiltersT>(value); }
    template<typename MachineLearningProductFiltersT = MachineLearningProductFilters>
    EntityTypeFilters& WithMachineLearningProductFilters(MachineLearningProductFiltersT&& value) { SetMachineLearningProductFilters(std::forward<MachineLearningProductFiltersT>(value)); return *this;}
    ///@}
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

    MachineLearningProductFilters m_machineLearningProductFilters;
    bool m_machineLearningProductFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
