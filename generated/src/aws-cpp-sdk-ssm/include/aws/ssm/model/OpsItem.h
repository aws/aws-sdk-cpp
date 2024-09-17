/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/OpsItemStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm/model/OpsItemNotification.h>
#include <aws/ssm/model/RelatedOpsItem.h>
#include <aws/ssm/model/OpsItemDataValue.h>
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
   * <p>Operations engineers and IT professionals use Amazon Web Services Systems
   * Manager OpsCenter to view, investigate, and remediate operational work items
   * (OpsItems) impacting the performance and health of their Amazon Web Services
   * resources. OpsCenter is integrated with Amazon EventBridge and Amazon
   * CloudWatch. This means you can configure these services to automatically create
   * an OpsItem in OpsCenter when a CloudWatch alarm enters the ALARM state or when
   * EventBridge processes an event from any Amazon Web Services service that
   * publishes events. Configuring Amazon CloudWatch alarms and EventBridge events to
   * automatically create OpsItems allows you to quickly diagnose and remediate
   * issues with Amazon Web Services resources from a single console.</p> <p>To help
   * you diagnose issues, each OpsItem includes contextually relevant information
   * such as the name and ID of the Amazon Web Services resource that generated the
   * OpsItem, alarm or event details, alarm history, and an alarm timeline graph. For
   * the Amazon Web Services resource, OpsCenter aggregates information from Config,
   * CloudTrail logs, and EventBridge, so you don't have to navigate across multiple
   * console pages during your investigation. For more information, see <a
   * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">Amazon
   * Web Services Systems Manager OpsCenter</a> in the <i>Amazon Web Services Systems
   * Manager User Guide</i>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/OpsItem">AWS API
   * Reference</a></p>
   */
  class OpsItem
  {
  public:
    AWS_SSM_API OpsItem();
    AWS_SSM_API OpsItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API OpsItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the Amazon Web Services account that created the OpsItem.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline OpsItem& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline OpsItem& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline OpsItem& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of OpsItem. Systems Manager supports the following types of
     * OpsItems:</p> <ul> <li> <p> <code>/aws/issue</code> </p> <p>This type of OpsItem
     * is used for default OpsItems created by OpsCenter. </p> </li> <li> <p>
     * <code>/aws/changerequest</code> </p> <p>This type of OpsItem is used by Change
     * Manager for reviewing and approving or rejecting change requests. </p> </li>
     * <li> <p> <code>/aws/insight</code> </p> <p>This type of OpsItem is used by
     * OpsCenter for aggregating and reporting on duplicate OpsItems. </p> </li> </ul>
     */
    inline const Aws::String& GetOpsItemType() const{ return m_opsItemType; }
    inline bool OpsItemTypeHasBeenSet() const { return m_opsItemTypeHasBeenSet; }
    inline void SetOpsItemType(const Aws::String& value) { m_opsItemTypeHasBeenSet = true; m_opsItemType = value; }
    inline void SetOpsItemType(Aws::String&& value) { m_opsItemTypeHasBeenSet = true; m_opsItemType = std::move(value); }
    inline void SetOpsItemType(const char* value) { m_opsItemTypeHasBeenSet = true; m_opsItemType.assign(value); }
    inline OpsItem& WithOpsItemType(const Aws::String& value) { SetOpsItemType(value); return *this;}
    inline OpsItem& WithOpsItemType(Aws::String&& value) { SetOpsItemType(std::move(value)); return *this;}
    inline OpsItem& WithOpsItemType(const char* value) { SetOpsItemType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the OpsItem was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline OpsItem& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline OpsItem& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OpsItem description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline OpsItem& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline OpsItem& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline OpsItem& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon Web Services account that last updated the OpsItem.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const{ return m_lastModifiedBy; }
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
    inline void SetLastModifiedBy(const Aws::String& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }
    inline void SetLastModifiedBy(Aws::String&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }
    inline void SetLastModifiedBy(const char* value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy.assign(value); }
    inline OpsItem& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}
    inline OpsItem& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}
    inline OpsItem& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the OpsItem was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline OpsItem& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline OpsItem& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Simple Notification Service
     * (Amazon SNS) topic where notifications are sent when this OpsItem is edited or
     * changed.</p>
     */
    inline const Aws::Vector<OpsItemNotification>& GetNotifications() const{ return m_notifications; }
    inline bool NotificationsHasBeenSet() const { return m_notificationsHasBeenSet; }
    inline void SetNotifications(const Aws::Vector<OpsItemNotification>& value) { m_notificationsHasBeenSet = true; m_notifications = value; }
    inline void SetNotifications(Aws::Vector<OpsItemNotification>&& value) { m_notificationsHasBeenSet = true; m_notifications = std::move(value); }
    inline OpsItem& WithNotifications(const Aws::Vector<OpsItemNotification>& value) { SetNotifications(value); return *this;}
    inline OpsItem& WithNotifications(Aws::Vector<OpsItemNotification>&& value) { SetNotifications(std::move(value)); return *this;}
    inline OpsItem& AddNotifications(const OpsItemNotification& value) { m_notificationsHasBeenSet = true; m_notifications.push_back(value); return *this; }
    inline OpsItem& AddNotifications(OpsItemNotification&& value) { m_notificationsHasBeenSet = true; m_notifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The importance of this OpsItem in relation to other OpsItems in the
     * system.</p>
     */
    inline int GetPriority() const{ return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline OpsItem& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more OpsItems that share something in common with the current OpsItem.
     * For example, related OpsItems can include OpsItems with similar error messages,
     * impacted resources, or statuses for the impacted resource.</p>
     */
    inline const Aws::Vector<RelatedOpsItem>& GetRelatedOpsItems() const{ return m_relatedOpsItems; }
    inline bool RelatedOpsItemsHasBeenSet() const { return m_relatedOpsItemsHasBeenSet; }
    inline void SetRelatedOpsItems(const Aws::Vector<RelatedOpsItem>& value) { m_relatedOpsItemsHasBeenSet = true; m_relatedOpsItems = value; }
    inline void SetRelatedOpsItems(Aws::Vector<RelatedOpsItem>&& value) { m_relatedOpsItemsHasBeenSet = true; m_relatedOpsItems = std::move(value); }
    inline OpsItem& WithRelatedOpsItems(const Aws::Vector<RelatedOpsItem>& value) { SetRelatedOpsItems(value); return *this;}
    inline OpsItem& WithRelatedOpsItems(Aws::Vector<RelatedOpsItem>&& value) { SetRelatedOpsItems(std::move(value)); return *this;}
    inline OpsItem& AddRelatedOpsItems(const RelatedOpsItem& value) { m_relatedOpsItemsHasBeenSet = true; m_relatedOpsItems.push_back(value); return *this; }
    inline OpsItem& AddRelatedOpsItems(RelatedOpsItem&& value) { m_relatedOpsItemsHasBeenSet = true; m_relatedOpsItems.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The OpsItem status. For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-working-with-OpsItems-editing-details.html">Editing
     * OpsItem details</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline const OpsItemStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const OpsItemStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(OpsItemStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline OpsItem& WithStatus(const OpsItemStatus& value) { SetStatus(value); return *this;}
    inline OpsItem& WithStatus(OpsItemStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline const Aws::String& GetOpsItemId() const{ return m_opsItemId; }
    inline bool OpsItemIdHasBeenSet() const { return m_opsItemIdHasBeenSet; }
    inline void SetOpsItemId(const Aws::String& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = value; }
    inline void SetOpsItemId(Aws::String&& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = std::move(value); }
    inline void SetOpsItemId(const char* value) { m_opsItemIdHasBeenSet = true; m_opsItemId.assign(value); }
    inline OpsItem& WithOpsItemId(const Aws::String& value) { SetOpsItemId(value); return *this;}
    inline OpsItem& WithOpsItemId(Aws::String&& value) { SetOpsItemId(std::move(value)); return *this;}
    inline OpsItem& WithOpsItemId(const char* value) { SetOpsItemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of this OpsItem. Each time the OpsItem is edited the version
     * number increments by one.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline OpsItem& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline OpsItem& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline OpsItem& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short heading that describes the nature of the OpsItem and the impacted
     * resource.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline OpsItem& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline OpsItem& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline OpsItem& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The origin of the OpsItem, such as Amazon EC2 or Systems Manager. The
     * impacted resource is a subset of source.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline OpsItem& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline OpsItem& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline OpsItem& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Operational data is custom data that provides useful reference details about
     * the OpsItem. For example, you can specify log files, error strings, license
     * keys, troubleshooting tips, or other relevant data. You enter operational data
     * as key-value pairs. The key has a maximum length of 128 characters. The value
     * has a maximum size of 20 KB.</p>  <p>Operational data keys
     * <i>can't</i> begin with the following: <code>amazon</code>, <code>aws</code>,
     * <code>amzn</code>, <code>ssm</code>, <code>/amazon</code>, <code>/aws</code>,
     * <code>/amzn</code>, <code>/ssm</code>.</p>  <p>You can choose to
     * make the data searchable by other users in the account or you can restrict
     * search access. Searchable data means that all users with access to the OpsItem
     * Overview page (as provided by the <a>DescribeOpsItems</a> API operation) can
     * view and search on the specified data. Operational data that isn't searchable is
     * only viewable by users who have access to the OpsItem (as provided by the
     * <a>GetOpsItem</a> API operation).</p> <p>Use the <code>/aws/resources</code> key
     * in OperationalData to specify a related resource in the request. Use the
     * <code>/aws/automations</code> key in OperationalData to associate an Automation
     * runbook with the OpsItem. To view Amazon Web Services CLI example commands that
     * use these keys, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-manually-create-OpsItems.html">Creating
     * OpsItems manually</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, OpsItemDataValue>& GetOperationalData() const{ return m_operationalData; }
    inline bool OperationalDataHasBeenSet() const { return m_operationalDataHasBeenSet; }
    inline void SetOperationalData(const Aws::Map<Aws::String, OpsItemDataValue>& value) { m_operationalDataHasBeenSet = true; m_operationalData = value; }
    inline void SetOperationalData(Aws::Map<Aws::String, OpsItemDataValue>&& value) { m_operationalDataHasBeenSet = true; m_operationalData = std::move(value); }
    inline OpsItem& WithOperationalData(const Aws::Map<Aws::String, OpsItemDataValue>& value) { SetOperationalData(value); return *this;}
    inline OpsItem& WithOperationalData(Aws::Map<Aws::String, OpsItemDataValue>&& value) { SetOperationalData(std::move(value)); return *this;}
    inline OpsItem& AddOperationalData(const Aws::String& key, const OpsItemDataValue& value) { m_operationalDataHasBeenSet = true; m_operationalData.emplace(key, value); return *this; }
    inline OpsItem& AddOperationalData(Aws::String&& key, const OpsItemDataValue& value) { m_operationalDataHasBeenSet = true; m_operationalData.emplace(std::move(key), value); return *this; }
    inline OpsItem& AddOperationalData(const Aws::String& key, OpsItemDataValue&& value) { m_operationalDataHasBeenSet = true; m_operationalData.emplace(key, std::move(value)); return *this; }
    inline OpsItem& AddOperationalData(Aws::String&& key, OpsItemDataValue&& value) { m_operationalDataHasBeenSet = true; m_operationalData.emplace(std::move(key), std::move(value)); return *this; }
    inline OpsItem& AddOperationalData(const char* key, OpsItemDataValue&& value) { m_operationalDataHasBeenSet = true; m_operationalData.emplace(key, std::move(value)); return *this; }
    inline OpsItem& AddOperationalData(const char* key, const OpsItemDataValue& value) { m_operationalDataHasBeenSet = true; m_operationalData.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An OpsItem category. Category options include: Availability, Cost,
     * Performance, Recovery, Security.</p>
     */
    inline const Aws::String& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }
    inline OpsItem& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}
    inline OpsItem& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}
    inline OpsItem& WithCategory(const char* value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity of the OpsItem. Severity options range from 1 to 4.</p>
     */
    inline const Aws::String& GetSeverity() const{ return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(const Aws::String& value) { m_severityHasBeenSet = true; m_severity = value; }
    inline void SetSeverity(Aws::String&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }
    inline void SetSeverity(const char* value) { m_severityHasBeenSet = true; m_severity.assign(value); }
    inline OpsItem& WithSeverity(const Aws::String& value) { SetSeverity(value); return *this;}
    inline OpsItem& WithSeverity(Aws::String&& value) { SetSeverity(std::move(value)); return *this;}
    inline OpsItem& WithSeverity(const char* value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time a runbook workflow started. Currently reported only for the OpsItem
     * type <code>/aws/changerequest</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetActualStartTime() const{ return m_actualStartTime; }
    inline bool ActualStartTimeHasBeenSet() const { return m_actualStartTimeHasBeenSet; }
    inline void SetActualStartTime(const Aws::Utils::DateTime& value) { m_actualStartTimeHasBeenSet = true; m_actualStartTime = value; }
    inline void SetActualStartTime(Aws::Utils::DateTime&& value) { m_actualStartTimeHasBeenSet = true; m_actualStartTime = std::move(value); }
    inline OpsItem& WithActualStartTime(const Aws::Utils::DateTime& value) { SetActualStartTime(value); return *this;}
    inline OpsItem& WithActualStartTime(Aws::Utils::DateTime&& value) { SetActualStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time a runbook workflow ended. Currently reported only for the OpsItem
     * type <code>/aws/changerequest</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetActualEndTime() const{ return m_actualEndTime; }
    inline bool ActualEndTimeHasBeenSet() const { return m_actualEndTimeHasBeenSet; }
    inline void SetActualEndTime(const Aws::Utils::DateTime& value) { m_actualEndTimeHasBeenSet = true; m_actualEndTime = value; }
    inline void SetActualEndTime(Aws::Utils::DateTime&& value) { m_actualEndTimeHasBeenSet = true; m_actualEndTime = std::move(value); }
    inline OpsItem& WithActualEndTime(const Aws::Utils::DateTime& value) { SetActualEndTime(value); return *this;}
    inline OpsItem& WithActualEndTime(Aws::Utils::DateTime&& value) { SetActualEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time specified in a change request for a runbook workflow to start.
     * Currently supported only for the OpsItem type
     * <code>/aws/changerequest</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetPlannedStartTime() const{ return m_plannedStartTime; }
    inline bool PlannedStartTimeHasBeenSet() const { return m_plannedStartTimeHasBeenSet; }
    inline void SetPlannedStartTime(const Aws::Utils::DateTime& value) { m_plannedStartTimeHasBeenSet = true; m_plannedStartTime = value; }
    inline void SetPlannedStartTime(Aws::Utils::DateTime&& value) { m_plannedStartTimeHasBeenSet = true; m_plannedStartTime = std::move(value); }
    inline OpsItem& WithPlannedStartTime(const Aws::Utils::DateTime& value) { SetPlannedStartTime(value); return *this;}
    inline OpsItem& WithPlannedStartTime(Aws::Utils::DateTime&& value) { SetPlannedStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time specified in a change request for a runbook workflow to end.
     * Currently supported only for the OpsItem type
     * <code>/aws/changerequest</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetPlannedEndTime() const{ return m_plannedEndTime; }
    inline bool PlannedEndTimeHasBeenSet() const { return m_plannedEndTimeHasBeenSet; }
    inline void SetPlannedEndTime(const Aws::Utils::DateTime& value) { m_plannedEndTimeHasBeenSet = true; m_plannedEndTime = value; }
    inline void SetPlannedEndTime(Aws::Utils::DateTime&& value) { m_plannedEndTimeHasBeenSet = true; m_plannedEndTime = std::move(value); }
    inline OpsItem& WithPlannedEndTime(const Aws::Utils::DateTime& value) { SetPlannedEndTime(value); return *this;}
    inline OpsItem& WithPlannedEndTime(Aws::Utils::DateTime&& value) { SetPlannedEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OpsItem Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetOpsItemArn() const{ return m_opsItemArn; }
    inline bool OpsItemArnHasBeenSet() const { return m_opsItemArnHasBeenSet; }
    inline void SetOpsItemArn(const Aws::String& value) { m_opsItemArnHasBeenSet = true; m_opsItemArn = value; }
    inline void SetOpsItemArn(Aws::String&& value) { m_opsItemArnHasBeenSet = true; m_opsItemArn = std::move(value); }
    inline void SetOpsItemArn(const char* value) { m_opsItemArnHasBeenSet = true; m_opsItemArn.assign(value); }
    inline OpsItem& WithOpsItemArn(const Aws::String& value) { SetOpsItemArn(value); return *this;}
    inline OpsItem& WithOpsItemArn(Aws::String&& value) { SetOpsItemArn(std::move(value)); return *this;}
    inline OpsItem& WithOpsItemArn(const char* value) { SetOpsItemArn(value); return *this;}
    ///@}
  private:

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_opsItemType;
    bool m_opsItemTypeHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Vector<OpsItemNotification> m_notifications;
    bool m_notificationsHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    Aws::Vector<RelatedOpsItem> m_relatedOpsItems;
    bool m_relatedOpsItemsHasBeenSet = false;

    OpsItemStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_opsItemId;
    bool m_opsItemIdHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::Map<Aws::String, OpsItemDataValue> m_operationalData;
    bool m_operationalDataHasBeenSet = false;

    Aws::String m_category;
    bool m_categoryHasBeenSet = false;

    Aws::String m_severity;
    bool m_severityHasBeenSet = false;

    Aws::Utils::DateTime m_actualStartTime;
    bool m_actualStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_actualEndTime;
    bool m_actualEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_plannedStartTime;
    bool m_plannedStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_plannedEndTime;
    bool m_plannedEndTimeHasBeenSet = false;

    Aws::String m_opsItemArn;
    bool m_opsItemArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
