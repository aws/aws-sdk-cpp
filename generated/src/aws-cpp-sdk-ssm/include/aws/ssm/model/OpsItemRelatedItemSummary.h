/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/OpsItemIdentity.h>
#include <aws/core/utils/DateTime.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Summary information about related-item resources for an
   * OpsItem.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/OpsItemRelatedItemSummary">AWS
   * API Reference</a></p>
   */
  class OpsItemRelatedItemSummary
  {
  public:
    AWS_SSM_API OpsItemRelatedItemSummary() = default;
    AWS_SSM_API OpsItemRelatedItemSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API OpsItemRelatedItemSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The OpsItem ID.</p>
     */
    inline const Aws::String& GetOpsItemId() const { return m_opsItemId; }
    inline bool OpsItemIdHasBeenSet() const { return m_opsItemIdHasBeenSet; }
    template<typename OpsItemIdT = Aws::String>
    void SetOpsItemId(OpsItemIdT&& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = std::forward<OpsItemIdT>(value); }
    template<typename OpsItemIdT = Aws::String>
    OpsItemRelatedItemSummary& WithOpsItemId(OpsItemIdT&& value) { SetOpsItemId(std::forward<OpsItemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The association ID.</p>
     */
    inline const Aws::String& GetAssociationId() const { return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    template<typename AssociationIdT = Aws::String>
    void SetAssociationId(AssociationIdT&& value) { m_associationIdHasBeenSet = true; m_associationId = std::forward<AssociationIdT>(value); }
    template<typename AssociationIdT = Aws::String>
    OpsItemRelatedItemSummary& WithAssociationId(AssociationIdT&& value) { SetAssociationId(std::forward<AssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    OpsItemRelatedItemSummary& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The association type.</p>
     */
    inline const Aws::String& GetAssociationType() const { return m_associationType; }
    inline bool AssociationTypeHasBeenSet() const { return m_associationTypeHasBeenSet; }
    template<typename AssociationTypeT = Aws::String>
    void SetAssociationType(AssociationTypeT&& value) { m_associationTypeHasBeenSet = true; m_associationType = std::forward<AssociationTypeT>(value); }
    template<typename AssociationTypeT = Aws::String>
    OpsItemRelatedItemSummary& WithAssociationType(AssociationTypeT&& value) { SetAssociationType(std::forward<AssociationTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the related-item resource.</p>
     */
    inline const Aws::String& GetResourceUri() const { return m_resourceUri; }
    inline bool ResourceUriHasBeenSet() const { return m_resourceUriHasBeenSet; }
    template<typename ResourceUriT = Aws::String>
    void SetResourceUri(ResourceUriT&& value) { m_resourceUriHasBeenSet = true; m_resourceUri = std::forward<ResourceUriT>(value); }
    template<typename ResourceUriT = Aws::String>
    OpsItemRelatedItemSummary& WithResourceUri(ResourceUriT&& value) { SetResourceUri(std::forward<ResourceUriT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const OpsItemIdentity& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = OpsItemIdentity>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = OpsItemIdentity>
    OpsItemRelatedItemSummary& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the related-item association was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    OpsItemRelatedItemSummary& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const OpsItemIdentity& GetLastModifiedBy() const { return m_lastModifiedBy; }
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
    template<typename LastModifiedByT = OpsItemIdentity>
    void SetLastModifiedBy(LastModifiedByT&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::forward<LastModifiedByT>(value); }
    template<typename LastModifiedByT = OpsItemIdentity>
    OpsItemRelatedItemSummary& WithLastModifiedBy(LastModifiedByT&& value) { SetLastModifiedBy(std::forward<LastModifiedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the related-item association was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    OpsItemRelatedItemSummary& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_opsItemId;
    bool m_opsItemIdHasBeenSet = false;

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_associationType;
    bool m_associationTypeHasBeenSet = false;

    Aws::String m_resourceUri;
    bool m_resourceUriHasBeenSet = false;

    OpsItemIdentity m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    OpsItemIdentity m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
