/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/ResourceType.h>
#include <aws/core/utils/DateTime.h>
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
    AWS_PARTNERCENTRALSELLING_API GetResourceSnapshotJobResult() = default;
    AWS_PARTNERCENTRALSELLING_API GetResourceSnapshotJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API GetResourceSnapshotJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The catalog in which the snapshot job was created. This will match the
     * Catalog specified in the request. </p>
     */
    inline const Aws::String& GetCatalog() const { return m_catalog; }
    template<typename CatalogT = Aws::String>
    void SetCatalog(CatalogT&& value) { m_catalogHasBeenSet = true; m_catalog = std::forward<CatalogT>(value); }
    template<typename CatalogT = Aws::String>
    GetResourceSnapshotJobResult& WithCatalog(CatalogT&& value) { SetCatalog(std::forward<CatalogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the snapshot job. This matches the
     * ResourceSnapshotJobIdentifier provided in the request. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetResourceSnapshotJobResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot job. This globally unique
     * identifier can be used for resource-specific operations across AWS services.
     * </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetResourceSnapshotJobResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the engagement associated with this snapshot job. This
     * links the job to a specific engagement context. </p>
     */
    inline const Aws::String& GetEngagementId() const { return m_engagementId; }
    template<typename EngagementIdT = Aws::String>
    void SetEngagementId(EngagementIdT&& value) { m_engagementIdHasBeenSet = true; m_engagementId = std::forward<EngagementIdT>(value); }
    template<typename EngagementIdT = Aws::String>
    GetResourceSnapshotJobResult& WithEngagementId(EngagementIdT&& value) { SetEngagementId(std::forward<EngagementIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource being snapshotted. This would have "Opportunity" as a
     * value as it is dependent on the supported resource type.</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline GetResourceSnapshotJobResult& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the specific resource being snapshotted. The format might
     * vary depending on the ResourceType. </p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    GetResourceSnapshotJobResult& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource being snapshotted. This
     * provides a globally unique identifier for the resource across AWS. </p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    GetResourceSnapshotJobResult& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the template used for creating the snapshot. This is the same as
     * the template name. It defines the structure and content of the snapshot.</p>
     */
    inline const Aws::String& GetResourceSnapshotTemplateName() const { return m_resourceSnapshotTemplateName; }
    template<typename ResourceSnapshotTemplateNameT = Aws::String>
    void SetResourceSnapshotTemplateName(ResourceSnapshotTemplateNameT&& value) { m_resourceSnapshotTemplateNameHasBeenSet = true; m_resourceSnapshotTemplateName = std::forward<ResourceSnapshotTemplateNameT>(value); }
    template<typename ResourceSnapshotTemplateNameT = Aws::String>
    GetResourceSnapshotJobResult& WithResourceSnapshotTemplateName(ResourceSnapshotTemplateNameT&& value) { SetResourceSnapshotTemplateName(std::forward<ResourceSnapshotTemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the snapshot job was created in ISO 8601 format (UTC).
     * Example: "2023-05-01T20:37:46Z" </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetResourceSnapshotJobResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the snapshot job. Valid values:</p> <ul> <li>
     * <p>STOPPED: The job is not currently running.</p> </li> <li> <p>RUNNING: The job
     * is actively executing.</p> </li> </ul>
     */
    inline ResourceSnapshotJobStatus GetStatus() const { return m_status; }
    inline void SetStatus(ResourceSnapshotJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetResourceSnapshotJobResult& WithStatus(ResourceSnapshotJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of the last successful execution of the job, in ISO 8601
     * format (UTC). Example: "2023-05-01T20:37:46Z" </p>
     */
    inline const Aws::Utils::DateTime& GetLastSuccessfulExecutionDate() const { return m_lastSuccessfulExecutionDate; }
    template<typename LastSuccessfulExecutionDateT = Aws::Utils::DateTime>
    void SetLastSuccessfulExecutionDate(LastSuccessfulExecutionDateT&& value) { m_lastSuccessfulExecutionDateHasBeenSet = true; m_lastSuccessfulExecutionDate = std::forward<LastSuccessfulExecutionDateT>(value); }
    template<typename LastSuccessfulExecutionDateT = Aws::Utils::DateTime>
    GetResourceSnapshotJobResult& WithLastSuccessfulExecutionDate(LastSuccessfulExecutionDateT&& value) { SetLastSuccessfulExecutionDate(std::forward<LastSuccessfulExecutionDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the job has encountered any failures, this field contains the error
     * message from the most recent failure. This can be useful for troubleshooting
     * issues with the job. </p>
     */
    inline const Aws::String& GetLastFailure() const { return m_lastFailure; }
    template<typename LastFailureT = Aws::String>
    void SetLastFailure(LastFailureT&& value) { m_lastFailureHasBeenSet = true; m_lastFailure = std::forward<LastFailureT>(value); }
    template<typename LastFailureT = Aws::String>
    GetResourceSnapshotJobResult& WithLastFailure(LastFailureT&& value) { SetLastFailure(std::forward<LastFailureT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetResourceSnapshotJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_engagementId;
    bool m_engagementIdHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_resourceSnapshotTemplateName;
    bool m_resourceSnapshotTemplateNameHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    ResourceSnapshotJobStatus m_status{ResourceSnapshotJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastSuccessfulExecutionDate{};
    bool m_lastSuccessfulExecutionDateHasBeenSet = false;

    Aws::String m_lastFailure;
    bool m_lastFailureHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
