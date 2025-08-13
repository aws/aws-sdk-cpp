/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/partnercentral-selling/model/ResourceType.h>
#include <aws/partnercentral-selling/model/ResourceSnapshotPayload.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace PartnerCentralSelling
{
namespace Model
{
  class GetResourceSnapshotResult
  {
  public:
    AWS_PARTNERCENTRALSELLING_API GetResourceSnapshotResult() = default;
    AWS_PARTNERCENTRALSELLING_API GetResourceSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API GetResourceSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The catalog in which the snapshot was created. Matches the Catalog specified
     * in the request.</p>
     */
    inline const Aws::String& GetCatalog() const { return m_catalog; }
    template<typename CatalogT = Aws::String>
    void SetCatalog(CatalogT&& value) { m_catalogHasBeenSet = true; m_catalog = std::forward<CatalogT>(value); }
    template<typename CatalogT = Aws::String>
    GetResourceSnapshotResult& WithCatalog(CatalogT&& value) { SetCatalog(std::forward<CatalogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the resource
     * snapshot.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetResourceSnapshotResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS account ID of the principal (user or role) who created the snapshot.
     * This helps in tracking the origin of the snapshot. </p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    GetResourceSnapshotResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the snapshot was created, in ISO 8601 format (e.g.,
     * "2023-06-01T14:30:00Z"). This allows for precise tracking of when the snapshot
     * was taken. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetResourceSnapshotResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the engagement associated with this snapshot. Matches the
     * EngagementIdentifier specified in the request. </p>
     */
    inline const Aws::String& GetEngagementId() const { return m_engagementId; }
    template<typename EngagementIdT = Aws::String>
    void SetEngagementId(EngagementIdT&& value) { m_engagementIdHasBeenSet = true; m_engagementId = std::forward<EngagementIdT>(value); }
    template<typename EngagementIdT = Aws::String>
    GetResourceSnapshotResult& WithEngagementId(EngagementIdT&& value) { SetEngagementId(std::forward<EngagementIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the resource that was snapshotted. Matches the ResourceType
     * specified in the request.</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline GetResourceSnapshotResult& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the specific resource that was snapshotted. Matches the
     * ResourceIdentifier specified in the request.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    GetResourceSnapshotResult& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the view used for this snapshot. This is the same as the template
     * name.</p>
     */
    inline const Aws::String& GetResourceSnapshotTemplateName() const { return m_resourceSnapshotTemplateName; }
    template<typename ResourceSnapshotTemplateNameT = Aws::String>
    void SetResourceSnapshotTemplateName(ResourceSnapshotTemplateNameT&& value) { m_resourceSnapshotTemplateNameHasBeenSet = true; m_resourceSnapshotTemplateName = std::forward<ResourceSnapshotTemplateNameT>(value); }
    template<typename ResourceSnapshotTemplateNameT = Aws::String>
    GetResourceSnapshotResult& WithResourceSnapshotTemplateName(ResourceSnapshotTemplateNameT&& value) { SetResourceSnapshotTemplateName(std::forward<ResourceSnapshotTemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision number of this snapshot. This is a positive integer that is
     * sequential and unique within the context of a resource view.</p>
     */
    inline int GetRevision() const { return m_revision; }
    inline void SetRevision(int value) { m_revisionHasBeenSet = true; m_revision = value; }
    inline GetResourceSnapshotResult& WithRevision(int value) { SetRevision(value); return *this;}
    ///@}

    ///@{
    
    inline const ResourceSnapshotPayload& GetPayload() const { return m_payload; }
    template<typename PayloadT = ResourceSnapshotPayload>
    void SetPayload(PayloadT&& value) { m_payloadHasBeenSet = true; m_payload = std::forward<PayloadT>(value); }
    template<typename PayloadT = ResourceSnapshotPayload>
    GetResourceSnapshotResult& WithPayload(PayloadT&& value) { SetPayload(std::forward<PayloadT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetResourceSnapshotResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_engagementId;
    bool m_engagementIdHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceSnapshotTemplateName;
    bool m_resourceSnapshotTemplateNameHasBeenSet = false;

    int m_revision{0};
    bool m_revisionHasBeenSet = false;

    ResourceSnapshotPayload m_payload;
    bool m_payloadHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
