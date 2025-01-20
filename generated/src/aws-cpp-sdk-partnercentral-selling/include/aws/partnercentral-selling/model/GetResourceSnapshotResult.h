/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/partnercentral-selling/model/ResourceSnapshotPayload.h>
#include <aws/partnercentral-selling/model/ResourceType.h>
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
    AWS_PARTNERCENTRALSELLING_API GetResourceSnapshotResult();
    AWS_PARTNERCENTRALSELLING_API GetResourceSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API GetResourceSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the resource
     * snapshot.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetResourceSnapshotResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetResourceSnapshotResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetResourceSnapshotResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The catalog in which the snapshot was created. Matches the Catalog specified
     * in the request.</p>
     */
    inline const Aws::String& GetCatalog() const{ return m_catalog; }
    inline void SetCatalog(const Aws::String& value) { m_catalog = value; }
    inline void SetCatalog(Aws::String&& value) { m_catalog = std::move(value); }
    inline void SetCatalog(const char* value) { m_catalog.assign(value); }
    inline GetResourceSnapshotResult& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}
    inline GetResourceSnapshotResult& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}
    inline GetResourceSnapshotResult& WithCatalog(const char* value) { SetCatalog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the snapshot was created, in ISO 8601 format (e.g.,
     * "2023-06-01T14:30:00Z"). This allows for precise tracking of when the snapshot
     * was taken. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetResourceSnapshotResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetResourceSnapshotResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS account ID of the principal (user or role) who created the snapshot.
     * This helps in tracking the origin of the snapshot. </p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline GetResourceSnapshotResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline GetResourceSnapshotResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline GetResourceSnapshotResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the engagement associated with this snapshot. Matches the
     * EngagementIdentifier specified in the request. </p>
     */
    inline const Aws::String& GetEngagementId() const{ return m_engagementId; }
    inline void SetEngagementId(const Aws::String& value) { m_engagementId = value; }
    inline void SetEngagementId(Aws::String&& value) { m_engagementId = std::move(value); }
    inline void SetEngagementId(const char* value) { m_engagementId.assign(value); }
    inline GetResourceSnapshotResult& WithEngagementId(const Aws::String& value) { SetEngagementId(value); return *this;}
    inline GetResourceSnapshotResult& WithEngagementId(Aws::String&& value) { SetEngagementId(std::move(value)); return *this;}
    inline GetResourceSnapshotResult& WithEngagementId(const char* value) { SetEngagementId(value); return *this;}
    ///@}

    ///@{
    
    inline const ResourceSnapshotPayload& GetPayload() const{ return m_payload; }
    inline void SetPayload(const ResourceSnapshotPayload& value) { m_payload = value; }
    inline void SetPayload(ResourceSnapshotPayload&& value) { m_payload = std::move(value); }
    inline GetResourceSnapshotResult& WithPayload(const ResourceSnapshotPayload& value) { SetPayload(value); return *this;}
    inline GetResourceSnapshotResult& WithPayload(ResourceSnapshotPayload&& value) { SetPayload(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the specific resource that was snapshotted. Matches the
     * ResourceIdentifier specified in the request.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline void SetResourceId(const Aws::String& value) { m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceId.assign(value); }
    inline GetResourceSnapshotResult& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline GetResourceSnapshotResult& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline GetResourceSnapshotResult& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the view used for this snapshot. This is the same as the template
     * name.</p>
     */
    inline const Aws::String& GetResourceSnapshotTemplateName() const{ return m_resourceSnapshotTemplateName; }
    inline void SetResourceSnapshotTemplateName(const Aws::String& value) { m_resourceSnapshotTemplateName = value; }
    inline void SetResourceSnapshotTemplateName(Aws::String&& value) { m_resourceSnapshotTemplateName = std::move(value); }
    inline void SetResourceSnapshotTemplateName(const char* value) { m_resourceSnapshotTemplateName.assign(value); }
    inline GetResourceSnapshotResult& WithResourceSnapshotTemplateName(const Aws::String& value) { SetResourceSnapshotTemplateName(value); return *this;}
    inline GetResourceSnapshotResult& WithResourceSnapshotTemplateName(Aws::String&& value) { SetResourceSnapshotTemplateName(std::move(value)); return *this;}
    inline GetResourceSnapshotResult& WithResourceSnapshotTemplateName(const char* value) { SetResourceSnapshotTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the resource that was snapshotted. Matches the ResourceType
     * specified in the request.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline void SetResourceType(const ResourceType& value) { m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceType = std::move(value); }
    inline GetResourceSnapshotResult& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline GetResourceSnapshotResult& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision number of this snapshot. This is a positive integer that is
     * sequential and unique within the context of a resource view.</p>
     */
    inline int GetRevision() const{ return m_revision; }
    inline void SetRevision(int value) { m_revision = value; }
    inline GetResourceSnapshotResult& WithRevision(int value) { SetRevision(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetResourceSnapshotResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetResourceSnapshotResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetResourceSnapshotResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_catalog;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::String m_engagementId;

    ResourceSnapshotPayload m_payload;

    Aws::String m_resourceId;

    Aws::String m_resourceSnapshotTemplateName;

    ResourceType m_resourceType;

    int m_revision;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
