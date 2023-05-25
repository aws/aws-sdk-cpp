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
    AWS_SSM_API OpsItemRelatedItemSummary();
    AWS_SSM_API OpsItemRelatedItemSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API OpsItemRelatedItemSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The OpsItem ID.</p>
     */
    inline const Aws::String& GetOpsItemId() const{ return m_opsItemId; }

    /**
     * <p>The OpsItem ID.</p>
     */
    inline bool OpsItemIdHasBeenSet() const { return m_opsItemIdHasBeenSet; }

    /**
     * <p>The OpsItem ID.</p>
     */
    inline void SetOpsItemId(const Aws::String& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = value; }

    /**
     * <p>The OpsItem ID.</p>
     */
    inline void SetOpsItemId(Aws::String&& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = std::move(value); }

    /**
     * <p>The OpsItem ID.</p>
     */
    inline void SetOpsItemId(const char* value) { m_opsItemIdHasBeenSet = true; m_opsItemId.assign(value); }

    /**
     * <p>The OpsItem ID.</p>
     */
    inline OpsItemRelatedItemSummary& WithOpsItemId(const Aws::String& value) { SetOpsItemId(value); return *this;}

    /**
     * <p>The OpsItem ID.</p>
     */
    inline OpsItemRelatedItemSummary& WithOpsItemId(Aws::String&& value) { SetOpsItemId(std::move(value)); return *this;}

    /**
     * <p>The OpsItem ID.</p>
     */
    inline OpsItemRelatedItemSummary& WithOpsItemId(const char* value) { SetOpsItemId(value); return *this;}


    /**
     * <p>The association ID.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The association ID.</p>
     */
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }

    /**
     * <p>The association ID.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>The association ID.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }

    /**
     * <p>The association ID.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }

    /**
     * <p>The association ID.</p>
     */
    inline OpsItemRelatedItemSummary& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The association ID.</p>
     */
    inline OpsItemRelatedItemSummary& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

    /**
     * <p>The association ID.</p>
     */
    inline OpsItemRelatedItemSummary& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}


    /**
     * <p>The resource type.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The resource type.</p>
     */
    inline OpsItemRelatedItemSummary& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type.</p>
     */
    inline OpsItemRelatedItemSummary& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The resource type.</p>
     */
    inline OpsItemRelatedItemSummary& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The association type.</p>
     */
    inline const Aws::String& GetAssociationType() const{ return m_associationType; }

    /**
     * <p>The association type.</p>
     */
    inline bool AssociationTypeHasBeenSet() const { return m_associationTypeHasBeenSet; }

    /**
     * <p>The association type.</p>
     */
    inline void SetAssociationType(const Aws::String& value) { m_associationTypeHasBeenSet = true; m_associationType = value; }

    /**
     * <p>The association type.</p>
     */
    inline void SetAssociationType(Aws::String&& value) { m_associationTypeHasBeenSet = true; m_associationType = std::move(value); }

    /**
     * <p>The association type.</p>
     */
    inline void SetAssociationType(const char* value) { m_associationTypeHasBeenSet = true; m_associationType.assign(value); }

    /**
     * <p>The association type.</p>
     */
    inline OpsItemRelatedItemSummary& WithAssociationType(const Aws::String& value) { SetAssociationType(value); return *this;}

    /**
     * <p>The association type.</p>
     */
    inline OpsItemRelatedItemSummary& WithAssociationType(Aws::String&& value) { SetAssociationType(std::move(value)); return *this;}

    /**
     * <p>The association type.</p>
     */
    inline OpsItemRelatedItemSummary& WithAssociationType(const char* value) { SetAssociationType(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the related-item resource.</p>
     */
    inline const Aws::String& GetResourceUri() const{ return m_resourceUri; }

    /**
     * <p>The Amazon Resource Name (ARN) of the related-item resource.</p>
     */
    inline bool ResourceUriHasBeenSet() const { return m_resourceUriHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the related-item resource.</p>
     */
    inline void SetResourceUri(const Aws::String& value) { m_resourceUriHasBeenSet = true; m_resourceUri = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the related-item resource.</p>
     */
    inline void SetResourceUri(Aws::String&& value) { m_resourceUriHasBeenSet = true; m_resourceUri = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the related-item resource.</p>
     */
    inline void SetResourceUri(const char* value) { m_resourceUriHasBeenSet = true; m_resourceUri.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the related-item resource.</p>
     */
    inline OpsItemRelatedItemSummary& WithResourceUri(const Aws::String& value) { SetResourceUri(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the related-item resource.</p>
     */
    inline OpsItemRelatedItemSummary& WithResourceUri(Aws::String&& value) { SetResourceUri(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the related-item resource.</p>
     */
    inline OpsItemRelatedItemSummary& WithResourceUri(const char* value) { SetResourceUri(value); return *this;}


    
    inline const OpsItemIdentity& GetCreatedBy() const{ return m_createdBy; }

    
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    
    inline void SetCreatedBy(const OpsItemIdentity& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    
    inline void SetCreatedBy(OpsItemIdentity&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    
    inline OpsItemRelatedItemSummary& WithCreatedBy(const OpsItemIdentity& value) { SetCreatedBy(value); return *this;}

    
    inline OpsItemRelatedItemSummary& WithCreatedBy(OpsItemIdentity&& value) { SetCreatedBy(std::move(value)); return *this;}


    /**
     * <p>The time the related-item association was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The time the related-item association was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The time the related-item association was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The time the related-item association was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The time the related-item association was created.</p>
     */
    inline OpsItemRelatedItemSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The time the related-item association was created.</p>
     */
    inline OpsItemRelatedItemSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    
    inline const OpsItemIdentity& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }

    
    inline void SetLastModifiedBy(const OpsItemIdentity& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }

    
    inline void SetLastModifiedBy(OpsItemIdentity&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }

    
    inline OpsItemRelatedItemSummary& WithLastModifiedBy(const OpsItemIdentity& value) { SetLastModifiedBy(value); return *this;}

    
    inline OpsItemRelatedItemSummary& WithLastModifiedBy(OpsItemIdentity&& value) { SetLastModifiedBy(std::move(value)); return *this;}


    /**
     * <p>The time the related-item association was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The time the related-item association was last updated.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The time the related-item association was last updated.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The time the related-item association was last updated.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The time the related-item association was last updated.</p>
     */
    inline OpsItemRelatedItemSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The time the related-item association was last updated.</p>
     */
    inline OpsItemRelatedItemSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}

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

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    OpsItemIdentity m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
