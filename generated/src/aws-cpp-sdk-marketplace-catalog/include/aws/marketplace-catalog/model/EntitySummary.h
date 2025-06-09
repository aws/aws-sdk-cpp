/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/model/AmiProductSummary.h>
#include <aws/marketplace-catalog/model/ContainerProductSummary.h>
#include <aws/marketplace-catalog/model/DataProductSummary.h>
#include <aws/marketplace-catalog/model/SaaSProductSummary.h>
#include <aws/marketplace-catalog/model/OfferSummary.h>
#include <aws/marketplace-catalog/model/ResaleAuthorizationSummary.h>
#include <aws/marketplace-catalog/model/MachineLearningProductSummary.h>
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
   * <p>This object is a container for common summary information about the entity.
   * The summary doesn't contain the whole entity structure, but it does contain
   * information common across all entities.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/EntitySummary">AWS
   * API Reference</a></p>
   */
  class EntitySummary
  {
  public:
    AWS_MARKETPLACECATALOG_API EntitySummary() = default;
    AWS_MARKETPLACECATALOG_API EntitySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API EntitySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name for the entity. This value is not unique. It is defined by the
     * seller.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    EntitySummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the entity.</p>
     */
    inline const Aws::String& GetEntityType() const { return m_entityType; }
    inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
    template<typename EntityTypeT = Aws::String>
    void SetEntityType(EntityTypeT&& value) { m_entityTypeHasBeenSet = true; m_entityType = std::forward<EntityTypeT>(value); }
    template<typename EntityTypeT = Aws::String>
    EntitySummary& WithEntityType(EntityTypeT&& value) { SetEntityType(std::forward<EntityTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the entity.</p>
     */
    inline const Aws::String& GetEntityId() const { return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    template<typename EntityIdT = Aws::String>
    void SetEntityId(EntityIdT&& value) { m_entityIdHasBeenSet = true; m_entityId = std::forward<EntityIdT>(value); }
    template<typename EntityIdT = Aws::String>
    EntitySummary& WithEntityId(EntityIdT&& value) { SetEntityId(std::forward<EntityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN associated with the unique identifier for the entity.</p>
     */
    inline const Aws::String& GetEntityArn() const { return m_entityArn; }
    inline bool EntityArnHasBeenSet() const { return m_entityArnHasBeenSet; }
    template<typename EntityArnT = Aws::String>
    void SetEntityArn(EntityArnT&& value) { m_entityArnHasBeenSet = true; m_entityArn = std::forward<EntityArnT>(value); }
    template<typename EntityArnT = Aws::String>
    EntitySummary& WithEntityArn(EntityArnT&& value) { SetEntityArn(std::forward<EntityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the entity was published, using ISO 8601 format
     * (2018-02-27T13:45:22Z).</p>
     */
    inline const Aws::String& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = Aws::String>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::String>
    EntitySummary& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility status of the entity to buyers. This value can be
     * <code>Public</code> (everyone can view the entity), <code>Limited</code> (the
     * entity is visible to limited accounts only), or <code>Restricted</code> (the
     * entity was published and then unpublished and only existing buyers can view it).
     * </p>
     */
    inline const Aws::String& GetVisibility() const { return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    template<typename VisibilityT = Aws::String>
    void SetVisibility(VisibilityT&& value) { m_visibilityHasBeenSet = true; m_visibility = std::forward<VisibilityT>(value); }
    template<typename VisibilityT = Aws::String>
    EntitySummary& WithVisibility(VisibilityT&& value) { SetVisibility(std::forward<VisibilityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains summary information about the AMI product.</p>
     */
    inline const AmiProductSummary& GetAmiProductSummary() const { return m_amiProductSummary; }
    inline bool AmiProductSummaryHasBeenSet() const { return m_amiProductSummaryHasBeenSet; }
    template<typename AmiProductSummaryT = AmiProductSummary>
    void SetAmiProductSummary(AmiProductSummaryT&& value) { m_amiProductSummaryHasBeenSet = true; m_amiProductSummary = std::forward<AmiProductSummaryT>(value); }
    template<typename AmiProductSummaryT = AmiProductSummary>
    EntitySummary& WithAmiProductSummary(AmiProductSummaryT&& value) { SetAmiProductSummary(std::forward<AmiProductSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains summary information about the container product.</p>
     */
    inline const ContainerProductSummary& GetContainerProductSummary() const { return m_containerProductSummary; }
    inline bool ContainerProductSummaryHasBeenSet() const { return m_containerProductSummaryHasBeenSet; }
    template<typename ContainerProductSummaryT = ContainerProductSummary>
    void SetContainerProductSummary(ContainerProductSummaryT&& value) { m_containerProductSummaryHasBeenSet = true; m_containerProductSummary = std::forward<ContainerProductSummaryT>(value); }
    template<typename ContainerProductSummaryT = ContainerProductSummary>
    EntitySummary& WithContainerProductSummary(ContainerProductSummaryT&& value) { SetContainerProductSummary(std::forward<ContainerProductSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains summary information about the data product.</p>
     */
    inline const DataProductSummary& GetDataProductSummary() const { return m_dataProductSummary; }
    inline bool DataProductSummaryHasBeenSet() const { return m_dataProductSummaryHasBeenSet; }
    template<typename DataProductSummaryT = DataProductSummary>
    void SetDataProductSummary(DataProductSummaryT&& value) { m_dataProductSummaryHasBeenSet = true; m_dataProductSummary = std::forward<DataProductSummaryT>(value); }
    template<typename DataProductSummaryT = DataProductSummary>
    EntitySummary& WithDataProductSummary(DataProductSummaryT&& value) { SetDataProductSummary(std::forward<DataProductSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains summary information about the SaaS product.</p>
     */
    inline const SaaSProductSummary& GetSaaSProductSummary() const { return m_saaSProductSummary; }
    inline bool SaaSProductSummaryHasBeenSet() const { return m_saaSProductSummaryHasBeenSet; }
    template<typename SaaSProductSummaryT = SaaSProductSummary>
    void SetSaaSProductSummary(SaaSProductSummaryT&& value) { m_saaSProductSummaryHasBeenSet = true; m_saaSProductSummary = std::forward<SaaSProductSummaryT>(value); }
    template<typename SaaSProductSummaryT = SaaSProductSummary>
    EntitySummary& WithSaaSProductSummary(SaaSProductSummaryT&& value) { SetSaaSProductSummary(std::forward<SaaSProductSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains summary information about the offer.</p>
     */
    inline const OfferSummary& GetOfferSummary() const { return m_offerSummary; }
    inline bool OfferSummaryHasBeenSet() const { return m_offerSummaryHasBeenSet; }
    template<typename OfferSummaryT = OfferSummary>
    void SetOfferSummary(OfferSummaryT&& value) { m_offerSummaryHasBeenSet = true; m_offerSummary = std::forward<OfferSummaryT>(value); }
    template<typename OfferSummaryT = OfferSummary>
    EntitySummary& WithOfferSummary(OfferSummaryT&& value) { SetOfferSummary(std::forward<OfferSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains summary information about the Resale
     * Authorization.</p>
     */
    inline const ResaleAuthorizationSummary& GetResaleAuthorizationSummary() const { return m_resaleAuthorizationSummary; }
    inline bool ResaleAuthorizationSummaryHasBeenSet() const { return m_resaleAuthorizationSummaryHasBeenSet; }
    template<typename ResaleAuthorizationSummaryT = ResaleAuthorizationSummary>
    void SetResaleAuthorizationSummary(ResaleAuthorizationSummaryT&& value) { m_resaleAuthorizationSummaryHasBeenSet = true; m_resaleAuthorizationSummary = std::forward<ResaleAuthorizationSummaryT>(value); }
    template<typename ResaleAuthorizationSummaryT = ResaleAuthorizationSummary>
    EntitySummary& WithResaleAuthorizationSummary(ResaleAuthorizationSummaryT&& value) { SetResaleAuthorizationSummary(std::forward<ResaleAuthorizationSummaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MachineLearningProductSummary& GetMachineLearningProductSummary() const { return m_machineLearningProductSummary; }
    inline bool MachineLearningProductSummaryHasBeenSet() const { return m_machineLearningProductSummaryHasBeenSet; }
    template<typename MachineLearningProductSummaryT = MachineLearningProductSummary>
    void SetMachineLearningProductSummary(MachineLearningProductSummaryT&& value) { m_machineLearningProductSummaryHasBeenSet = true; m_machineLearningProductSummary = std::forward<MachineLearningProductSummaryT>(value); }
    template<typename MachineLearningProductSummaryT = MachineLearningProductSummary>
    EntitySummary& WithMachineLearningProductSummary(MachineLearningProductSummaryT&& value) { SetMachineLearningProductSummary(std::forward<MachineLearningProductSummaryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_entityType;
    bool m_entityTypeHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    Aws::String m_entityArn;
    bool m_entityArnHasBeenSet = false;

    Aws::String m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_visibility;
    bool m_visibilityHasBeenSet = false;

    AmiProductSummary m_amiProductSummary;
    bool m_amiProductSummaryHasBeenSet = false;

    ContainerProductSummary m_containerProductSummary;
    bool m_containerProductSummaryHasBeenSet = false;

    DataProductSummary m_dataProductSummary;
    bool m_dataProductSummaryHasBeenSet = false;

    SaaSProductSummary m_saaSProductSummary;
    bool m_saaSProductSummaryHasBeenSet = false;

    OfferSummary m_offerSummary;
    bool m_offerSummaryHasBeenSet = false;

    ResaleAuthorizationSummary m_resaleAuthorizationSummary;
    bool m_resaleAuthorizationSummaryHasBeenSet = false;

    MachineLearningProductSummary m_machineLearningProductSummary;
    bool m_machineLearningProductSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
