/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/MaintenanceStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/MaintenanceType.h>
#include <aws/core/utils/DateTime.h>
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
namespace OpenSearchService
{
namespace Model
{
  /**
   * <p>The result of a <code>GetDomainMaintenanceStatus</code> request that
   * information about the requested action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/GetDomainMaintenanceStatusResponse">AWS
   * API Reference</a></p>
   */
  class GetDomainMaintenanceStatusResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API GetDomainMaintenanceStatusResult();
    AWS_OPENSEARCHSERVICE_API GetDomainMaintenanceStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API GetDomainMaintenanceStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the maintenance action.</p>
     */
    inline const MaintenanceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the maintenance action.</p>
     */
    inline void SetStatus(const MaintenanceStatus& value) { m_status = value; }

    /**
     * <p>The status of the maintenance action.</p>
     */
    inline void SetStatus(MaintenanceStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the maintenance action.</p>
     */
    inline GetDomainMaintenanceStatusResult& WithStatus(const MaintenanceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the maintenance action.</p>
     */
    inline GetDomainMaintenanceStatusResult& WithStatus(MaintenanceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The status message of the maintenance action.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The status message of the maintenance action.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }

    /**
     * <p>The status message of the maintenance action.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }

    /**
     * <p>The status message of the maintenance action.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }

    /**
     * <p>The status message of the maintenance action.</p>
     */
    inline GetDomainMaintenanceStatusResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The status message of the maintenance action.</p>
     */
    inline GetDomainMaintenanceStatusResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status message of the maintenance action.</p>
     */
    inline GetDomainMaintenanceStatusResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The node ID of the maintenance action.</p>
     */
    inline const Aws::String& GetNodeId() const{ return m_nodeId; }

    /**
     * <p>The node ID of the maintenance action.</p>
     */
    inline void SetNodeId(const Aws::String& value) { m_nodeId = value; }

    /**
     * <p>The node ID of the maintenance action.</p>
     */
    inline void SetNodeId(Aws::String&& value) { m_nodeId = std::move(value); }

    /**
     * <p>The node ID of the maintenance action.</p>
     */
    inline void SetNodeId(const char* value) { m_nodeId.assign(value); }

    /**
     * <p>The node ID of the maintenance action.</p>
     */
    inline GetDomainMaintenanceStatusResult& WithNodeId(const Aws::String& value) { SetNodeId(value); return *this;}

    /**
     * <p>The node ID of the maintenance action.</p>
     */
    inline GetDomainMaintenanceStatusResult& WithNodeId(Aws::String&& value) { SetNodeId(std::move(value)); return *this;}

    /**
     * <p>The node ID of the maintenance action.</p>
     */
    inline GetDomainMaintenanceStatusResult& WithNodeId(const char* value) { SetNodeId(value); return *this;}


    /**
     * <p>The action name.</p>
     */
    inline const MaintenanceType& GetAction() const{ return m_action; }

    /**
     * <p>The action name.</p>
     */
    inline void SetAction(const MaintenanceType& value) { m_action = value; }

    /**
     * <p>The action name.</p>
     */
    inline void SetAction(MaintenanceType&& value) { m_action = std::move(value); }

    /**
     * <p>The action name.</p>
     */
    inline GetDomainMaintenanceStatusResult& WithAction(const MaintenanceType& value) { SetAction(value); return *this;}

    /**
     * <p>The action name.</p>
     */
    inline GetDomainMaintenanceStatusResult& WithAction(MaintenanceType&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The time at which the action was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time at which the action was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The time at which the action was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The time at which the action was created.</p>
     */
    inline GetDomainMaintenanceStatusResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time at which the action was created.</p>
     */
    inline GetDomainMaintenanceStatusResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The time at which the action was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The time at which the action was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The time at which the action was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The time at which the action was updated.</p>
     */
    inline GetDomainMaintenanceStatusResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The time at which the action was updated.</p>
     */
    inline GetDomainMaintenanceStatusResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetDomainMaintenanceStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetDomainMaintenanceStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetDomainMaintenanceStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    MaintenanceStatus m_status;

    Aws::String m_statusMessage;

    Aws::String m_nodeId;

    MaintenanceType m_action;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
