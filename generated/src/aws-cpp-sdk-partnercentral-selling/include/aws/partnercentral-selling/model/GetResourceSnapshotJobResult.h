/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/partnercentral-selling/model/ResourceType.h>
#include <aws/partnercentral-selling/model/ResourceSnapshotJobStatus.h>
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
  class GetResourceSnapshotJobResult
  {
  public:
    AWS_PARTNERCENTRALSELLING_API GetResourceSnapshotJobResult();
    AWS_PARTNERCENTRALSELLING_API GetResourceSnapshotJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API GetResourceSnapshotJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot job. This globally unique
     * identifier can be used for resource-specific operations across AWS services.
     * </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetResourceSnapshotJobResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetResourceSnapshotJobResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetResourceSnapshotJobResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The catalog in which the snapshot job was created. This will match the
     * Catalog specified in the request. </p>
     */
    inline const Aws::String& GetCatalog() const{ return m_catalog; }
    inline void SetCatalog(const Aws::String& value) { m_catalog = value; }
    inline void SetCatalog(Aws::String&& value) { m_catalog = std::move(value); }
    inline void SetCatalog(const char* value) { m_catalog.assign(value); }
    inline GetResourceSnapshotJobResult& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}
    inline GetResourceSnapshotJobResult& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}
    inline GetResourceSnapshotJobResult& WithCatalog(const char* value) { SetCatalog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the snapshot job was created in ISO 8601 format (UTC).
     * Example: "2023-05-01T20:37:46Z" </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetResourceSnapshotJobResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetResourceSnapshotJobResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the engagement associated with this snapshot job. This
     * links the job to a specific engagement context. </p>
     */
    inline const Aws::String& GetEngagementId() const{ return m_engagementId; }
    inline void SetEngagementId(const Aws::String& value) { m_engagementId = value; }
    inline void SetEngagementId(Aws::String&& value) { m_engagementId = std::move(value); }
    inline void SetEngagementId(const char* value) { m_engagementId.assign(value); }
    inline GetResourceSnapshotJobResult& WithEngagementId(const Aws::String& value) { SetEngagementId(value); return *this;}
    inline GetResourceSnapshotJobResult& WithEngagementId(Aws::String&& value) { SetEngagementId(std::move(value)); return *this;}
    inline GetResourceSnapshotJobResult& WithEngagementId(const char* value) { SetEngagementId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the snapshot job. This matches the
     * ResourceSnapshotJobIdentifier provided in the request. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetResourceSnapshotJobResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetResourceSnapshotJobResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetResourceSnapshotJobResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the job has encountered any failures, this field contains the error
     * message from the most recent failure. This can be useful for troubleshooting
     * issues with the job. </p>
     */
    inline const Aws::String& GetLastFailure() const{ return m_lastFailure; }
    inline void SetLastFailure(const Aws::String& value) { m_lastFailure = value; }
    inline void SetLastFailure(Aws::String&& value) { m_lastFailure = std::move(value); }
    inline void SetLastFailure(const char* value) { m_lastFailure.assign(value); }
    inline GetResourceSnapshotJobResult& WithLastFailure(const Aws::String& value) { SetLastFailure(value); return *this;}
    inline GetResourceSnapshotJobResult& WithLastFailure(Aws::String&& value) { SetLastFailure(std::move(value)); return *this;}
    inline GetResourceSnapshotJobResult& WithLastFailure(const char* value) { SetLastFailure(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of the last successful execution of the job, in ISO 8601
     * format (UTC). Example: "2023-05-01T20:37:46Z" </p>
     */
    inline const Aws::Utils::DateTime& GetLastSuccessfulExecutionDate() const{ return m_lastSuccessfulExecutionDate; }
    inline void SetLastSuccessfulExecutionDate(const Aws::Utils::DateTime& value) { m_lastSuccessfulExecutionDate = value; }
    inline void SetLastSuccessfulExecutionDate(Aws::Utils::DateTime&& value) { m_lastSuccessfulExecutionDate = std::move(value); }
    inline GetResourceSnapshotJobResult& WithLastSuccessfulExecutionDate(const Aws::Utils::DateTime& value) { SetLastSuccessfulExecutionDate(value); return *this;}
    inline GetResourceSnapshotJobResult& WithLastSuccessfulExecutionDate(Aws::Utils::DateTime&& value) { SetLastSuccessfulExecutionDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource being snapshotted. This
     * provides a globally unique identifier for the resource across AWS. </p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }
    inline GetResourceSnapshotJobResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline GetResourceSnapshotJobResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline GetResourceSnapshotJobResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the specific resource being snapshotted. The format might
     * vary depending on the ResourceType. </p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline void SetResourceId(const Aws::String& value) { m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceId.assign(value); }
    inline GetResourceSnapshotJobResult& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline GetResourceSnapshotJobResult& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline GetResourceSnapshotJobResult& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the template used for creating the snapshot. This is the same as
     * the template name. It defines the structure and content of the snapshot.</p>
     */
    inline const Aws::String& GetResourceSnapshotTemplateName() const{ return m_resourceSnapshotTemplateName; }
    inline void SetResourceSnapshotTemplateName(const Aws::String& value) { m_resourceSnapshotTemplateName = value; }
    inline void SetResourceSnapshotTemplateName(Aws::String&& value) { m_resourceSnapshotTemplateName = std::move(value); }
    inline void SetResourceSnapshotTemplateName(const char* value) { m_resourceSnapshotTemplateName.assign(value); }
    inline GetResourceSnapshotJobResult& WithResourceSnapshotTemplateName(const Aws::String& value) { SetResourceSnapshotTemplateName(value); return *this;}
    inline GetResourceSnapshotJobResult& WithResourceSnapshotTemplateName(Aws::String&& value) { SetResourceSnapshotTemplateName(std::move(value)); return *this;}
    inline GetResourceSnapshotJobResult& WithResourceSnapshotTemplateName(const char* value) { SetResourceSnapshotTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource being snapshotted. This would have "Opportunity" as a
     * value as it is dependent on the supported resource type.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline void SetResourceType(const ResourceType& value) { m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceType = std::move(value); }
    inline GetResourceSnapshotJobResult& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline GetResourceSnapshotJobResult& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the snapshot job. Valid values:</p> <ul> <li>
     * <p>STOPPED: The job is not currently running.</p> </li> <li> <p>RUNNING: The job
     * is actively executing.</p> </li> </ul>
     */
    inline const ResourceSnapshotJobStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ResourceSnapshotJobStatus& value) { m_status = value; }
    inline void SetStatus(ResourceSnapshotJobStatus&& value) { m_status = std::move(value); }
    inline GetResourceSnapshotJobResult& WithStatus(const ResourceSnapshotJobStatus& value) { SetStatus(value); return *this;}
    inline GetResourceSnapshotJobResult& WithStatus(ResourceSnapshotJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetResourceSnapshotJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetResourceSnapshotJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetResourceSnapshotJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_catalog;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_engagementId;

    Aws::String m_id;

    Aws::String m_lastFailure;

    Aws::Utils::DateTime m_lastSuccessfulExecutionDate;

    Aws::String m_resourceArn;

    Aws::String m_resourceId;

    Aws::String m_resourceSnapshotTemplateName;

    ResourceType m_resourceType;

    ResourceSnapshotJobStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
