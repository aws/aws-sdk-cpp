/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/MaintenanceType.h>
#include <aws/opensearch/model/MaintenanceStatus.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Container for the domain maintenance details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DomainMaintenanceDetails">AWS
   * API Reference</a></p>
   */
  class DomainMaintenanceDetails
  {
  public:
    AWS_OPENSEARCHSERVICE_API DomainMaintenanceDetails();
    AWS_OPENSEARCHSERVICE_API DomainMaintenanceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API DomainMaintenanceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the requested action.</p>
     */
    inline const Aws::String& GetMaintenanceId() const{ return m_maintenanceId; }
    inline bool MaintenanceIdHasBeenSet() const { return m_maintenanceIdHasBeenSet; }
    inline void SetMaintenanceId(const Aws::String& value) { m_maintenanceIdHasBeenSet = true; m_maintenanceId = value; }
    inline void SetMaintenanceId(Aws::String&& value) { m_maintenanceIdHasBeenSet = true; m_maintenanceId = std::move(value); }
    inline void SetMaintenanceId(const char* value) { m_maintenanceIdHasBeenSet = true; m_maintenanceId.assign(value); }
    inline DomainMaintenanceDetails& WithMaintenanceId(const Aws::String& value) { SetMaintenanceId(value); return *this;}
    inline DomainMaintenanceDetails& WithMaintenanceId(Aws::String&& value) { SetMaintenanceId(std::move(value)); return *this;}
    inline DomainMaintenanceDetails& WithMaintenanceId(const char* value) { SetMaintenanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline DomainMaintenanceDetails& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline DomainMaintenanceDetails& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline DomainMaintenanceDetails& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the action.</p>
     */
    inline const MaintenanceType& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const MaintenanceType& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(MaintenanceType&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline DomainMaintenanceDetails& WithAction(const MaintenanceType& value) { SetAction(value); return *this;}
    inline DomainMaintenanceDetails& WithAction(MaintenanceType&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the data node.</p>
     */
    inline const Aws::String& GetNodeId() const{ return m_nodeId; }
    inline bool NodeIdHasBeenSet() const { return m_nodeIdHasBeenSet; }
    inline void SetNodeId(const Aws::String& value) { m_nodeIdHasBeenSet = true; m_nodeId = value; }
    inline void SetNodeId(Aws::String&& value) { m_nodeIdHasBeenSet = true; m_nodeId = std::move(value); }
    inline void SetNodeId(const char* value) { m_nodeIdHasBeenSet = true; m_nodeId.assign(value); }
    inline DomainMaintenanceDetails& WithNodeId(const Aws::String& value) { SetNodeId(value); return *this;}
    inline DomainMaintenanceDetails& WithNodeId(Aws::String&& value) { SetNodeId(std::move(value)); return *this;}
    inline DomainMaintenanceDetails& WithNodeId(const char* value) { SetNodeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the action.</p>
     */
    inline const MaintenanceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const MaintenanceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(MaintenanceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline DomainMaintenanceDetails& WithStatus(const MaintenanceStatus& value) { SetStatus(value); return *this;}
    inline DomainMaintenanceDetails& WithStatus(MaintenanceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message for the action.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline DomainMaintenanceDetails& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline DomainMaintenanceDetails& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline DomainMaintenanceDetails& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the action was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline DomainMaintenanceDetails& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline DomainMaintenanceDetails& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the action was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline DomainMaintenanceDetails& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline DomainMaintenanceDetails& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_maintenanceId;
    bool m_maintenanceIdHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    MaintenanceType m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_nodeId;
    bool m_nodeIdHasBeenSet = false;

    MaintenanceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
