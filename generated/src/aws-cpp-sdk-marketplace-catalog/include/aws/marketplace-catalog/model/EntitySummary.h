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
    AWS_MARKETPLACECATALOG_API EntitySummary();
    AWS_MARKETPLACECATALOG_API EntitySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API EntitySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name for the entity. This value is not unique. It is defined by the
     * seller.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline EntitySummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline EntitySummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline EntitySummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the entity.</p>
     */
    inline const Aws::String& GetEntityType() const{ return m_entityType; }
    inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
    inline void SetEntityType(const Aws::String& value) { m_entityTypeHasBeenSet = true; m_entityType = value; }
    inline void SetEntityType(Aws::String&& value) { m_entityTypeHasBeenSet = true; m_entityType = std::move(value); }
    inline void SetEntityType(const char* value) { m_entityTypeHasBeenSet = true; m_entityType.assign(value); }
    inline EntitySummary& WithEntityType(const Aws::String& value) { SetEntityType(value); return *this;}
    inline EntitySummary& WithEntityType(Aws::String&& value) { SetEntityType(std::move(value)); return *this;}
    inline EntitySummary& WithEntityType(const char* value) { SetEntityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the entity.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }
    inline EntitySummary& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}
    inline EntitySummary& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}
    inline EntitySummary& WithEntityId(const char* value) { SetEntityId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN associated with the unique identifier for the entity.</p>
     */
    inline const Aws::String& GetEntityArn() const{ return m_entityArn; }
    inline bool EntityArnHasBeenSet() const { return m_entityArnHasBeenSet; }
    inline void SetEntityArn(const Aws::String& value) { m_entityArnHasBeenSet = true; m_entityArn = value; }
    inline void SetEntityArn(Aws::String&& value) { m_entityArnHasBeenSet = true; m_entityArn = std::move(value); }
    inline void SetEntityArn(const char* value) { m_entityArnHasBeenSet = true; m_entityArn.assign(value); }
    inline EntitySummary& WithEntityArn(const Aws::String& value) { SetEntityArn(value); return *this;}
    inline EntitySummary& WithEntityArn(Aws::String&& value) { SetEntityArn(std::move(value)); return *this;}
    inline EntitySummary& WithEntityArn(const char* value) { SetEntityArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the entity was published, using ISO 8601 format
     * (2018-02-27T13:45:22Z).</p>
     */
    inline const Aws::String& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(const Aws::String& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::String&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }
    inline void SetLastModifiedDate(const char* value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate.assign(value); }
    inline EntitySummary& WithLastModifiedDate(const Aws::String& value) { SetLastModifiedDate(value); return *this;}
    inline EntitySummary& WithLastModifiedDate(Aws::String&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    inline EntitySummary& WithLastModifiedDate(const char* value) { SetLastModifiedDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility status of the entity to buyers. This value can be
     * <code>Public</code> (everyone can view the entity), <code>Limited</code> (the
     * entity is visible to limited accounts only), or <code>Restricted</code> (the
     * entity was published and then unpublished and only existing buyers can view it).
     * </p>
     */
    inline const Aws::String& GetVisibility() const{ return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(const Aws::String& value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline void SetVisibility(Aws::String&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }
    inline void SetVisibility(const char* value) { m_visibilityHasBeenSet = true; m_visibility.assign(value); }
    inline EntitySummary& WithVisibility(const Aws::String& value) { SetVisibility(value); return *this;}
    inline EntitySummary& WithVisibility(Aws::String&& value) { SetVisibility(std::move(value)); return *this;}
    inline EntitySummary& WithVisibility(const char* value) { SetVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains summary information about the AMI product.</p>
     */
    inline const AmiProductSummary& GetAmiProductSummary() const{ return m_amiProductSummary; }
    inline bool AmiProductSummaryHasBeenSet() const { return m_amiProductSummaryHasBeenSet; }
    inline void SetAmiProductSummary(const AmiProductSummary& value) { m_amiProductSummaryHasBeenSet = true; m_amiProductSummary = value; }
    inline void SetAmiProductSummary(AmiProductSummary&& value) { m_amiProductSummaryHasBeenSet = true; m_amiProductSummary = std::move(value); }
    inline EntitySummary& WithAmiProductSummary(const AmiProductSummary& value) { SetAmiProductSummary(value); return *this;}
    inline EntitySummary& WithAmiProductSummary(AmiProductSummary&& value) { SetAmiProductSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains summary information about the container product.</p>
     */
    inline const ContainerProductSummary& GetContainerProductSummary() const{ return m_containerProductSummary; }
    inline bool ContainerProductSummaryHasBeenSet() const { return m_containerProductSummaryHasBeenSet; }
    inline void SetContainerProductSummary(const ContainerProductSummary& value) { m_containerProductSummaryHasBeenSet = true; m_containerProductSummary = value; }
    inline void SetContainerProductSummary(ContainerProductSummary&& value) { m_containerProductSummaryHasBeenSet = true; m_containerProductSummary = std::move(value); }
    inline EntitySummary& WithContainerProductSummary(const ContainerProductSummary& value) { SetContainerProductSummary(value); return *this;}
    inline EntitySummary& WithContainerProductSummary(ContainerProductSummary&& value) { SetContainerProductSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains summary information about the data product.</p>
     */
    inline const DataProductSummary& GetDataProductSummary() const{ return m_dataProductSummary; }
    inline bool DataProductSummaryHasBeenSet() const { return m_dataProductSummaryHasBeenSet; }
    inline void SetDataProductSummary(const DataProductSummary& value) { m_dataProductSummaryHasBeenSet = true; m_dataProductSummary = value; }
    inline void SetDataProductSummary(DataProductSummary&& value) { m_dataProductSummaryHasBeenSet = true; m_dataProductSummary = std::move(value); }
    inline EntitySummary& WithDataProductSummary(const DataProductSummary& value) { SetDataProductSummary(value); return *this;}
    inline EntitySummary& WithDataProductSummary(DataProductSummary&& value) { SetDataProductSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains summary information about the SaaS product.</p>
     */
    inline const SaaSProductSummary& GetSaaSProductSummary() const{ return m_saaSProductSummary; }
    inline bool SaaSProductSummaryHasBeenSet() const { return m_saaSProductSummaryHasBeenSet; }
    inline void SetSaaSProductSummary(const SaaSProductSummary& value) { m_saaSProductSummaryHasBeenSet = true; m_saaSProductSummary = value; }
    inline void SetSaaSProductSummary(SaaSProductSummary&& value) { m_saaSProductSummaryHasBeenSet = true; m_saaSProductSummary = std::move(value); }
    inline EntitySummary& WithSaaSProductSummary(const SaaSProductSummary& value) { SetSaaSProductSummary(value); return *this;}
    inline EntitySummary& WithSaaSProductSummary(SaaSProductSummary&& value) { SetSaaSProductSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains summary information about the offer.</p>
     */
    inline const OfferSummary& GetOfferSummary() const{ return m_offerSummary; }
    inline bool OfferSummaryHasBeenSet() const { return m_offerSummaryHasBeenSet; }
    inline void SetOfferSummary(const OfferSummary& value) { m_offerSummaryHasBeenSet = true; m_offerSummary = value; }
    inline void SetOfferSummary(OfferSummary&& value) { m_offerSummaryHasBeenSet = true; m_offerSummary = std::move(value); }
    inline EntitySummary& WithOfferSummary(const OfferSummary& value) { SetOfferSummary(value); return *this;}
    inline EntitySummary& WithOfferSummary(OfferSummary&& value) { SetOfferSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains summary information about the Resale
     * Authorization.</p>
     */
    inline const ResaleAuthorizationSummary& GetResaleAuthorizationSummary() const{ return m_resaleAuthorizationSummary; }
    inline bool ResaleAuthorizationSummaryHasBeenSet() const { return m_resaleAuthorizationSummaryHasBeenSet; }
    inline void SetResaleAuthorizationSummary(const ResaleAuthorizationSummary& value) { m_resaleAuthorizationSummaryHasBeenSet = true; m_resaleAuthorizationSummary = value; }
    inline void SetResaleAuthorizationSummary(ResaleAuthorizationSummary&& value) { m_resaleAuthorizationSummaryHasBeenSet = true; m_resaleAuthorizationSummary = std::move(value); }
    inline EntitySummary& WithResaleAuthorizationSummary(const ResaleAuthorizationSummary& value) { SetResaleAuthorizationSummary(value); return *this;}
    inline EntitySummary& WithResaleAuthorizationSummary(ResaleAuthorizationSummary&& value) { SetResaleAuthorizationSummary(std::move(value)); return *this;}
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
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
