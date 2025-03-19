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
    AWS_SSM_API OpsItem() = default;
    AWS_SSM_API OpsItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API OpsItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the Amazon Web Services account that created the OpsItem.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    OpsItem& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
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
    inline const Aws::String& GetOpsItemType() const { return m_opsItemType; }
    inline bool OpsItemTypeHasBeenSet() const { return m_opsItemTypeHasBeenSet; }
    template<typename OpsItemTypeT = Aws::String>
    void SetOpsItemType(OpsItemTypeT&& value) { m_opsItemTypeHasBeenSet = true; m_opsItemType = std::forward<OpsItemTypeT>(value); }
    template<typename OpsItemTypeT = Aws::String>
    OpsItem& WithOpsItemType(OpsItemTypeT&& value) { SetOpsItemType(std::forward<OpsItemTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the OpsItem was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    OpsItem& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OpsItem description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    OpsItem& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon Web Services account that last updated the OpsItem.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const { return m_lastModifiedBy; }
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
    template<typename LastModifiedByT = Aws::String>
    void SetLastModifiedBy(LastModifiedByT&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::forward<LastModifiedByT>(value); }
    template<typename LastModifiedByT = Aws::String>
    OpsItem& WithLastModifiedBy(LastModifiedByT&& value) { SetLastModifiedBy(std::forward<LastModifiedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the OpsItem was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    OpsItem& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Simple Notification Service
     * (Amazon SNS) topic where notifications are sent when this OpsItem is edited or
     * changed.</p>
     */
    inline const Aws::Vector<OpsItemNotification>& GetNotifications() const { return m_notifications; }
    inline bool NotificationsHasBeenSet() const { return m_notificationsHasBeenSet; }
    template<typename NotificationsT = Aws::Vector<OpsItemNotification>>
    void SetNotifications(NotificationsT&& value) { m_notificationsHasBeenSet = true; m_notifications = std::forward<NotificationsT>(value); }
    template<typename NotificationsT = Aws::Vector<OpsItemNotification>>
    OpsItem& WithNotifications(NotificationsT&& value) { SetNotifications(std::forward<NotificationsT>(value)); return *this;}
    template<typename NotificationsT = OpsItemNotification>
    OpsItem& AddNotifications(NotificationsT&& value) { m_notificationsHasBeenSet = true; m_notifications.emplace_back(std::forward<NotificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The importance of this OpsItem in relation to other OpsItems in the
     * system.</p>
     */
    inline int GetPriority() const { return m_priority; }
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
    inline const Aws::Vector<RelatedOpsItem>& GetRelatedOpsItems() const { return m_relatedOpsItems; }
    inline bool RelatedOpsItemsHasBeenSet() const { return m_relatedOpsItemsHasBeenSet; }
    template<typename RelatedOpsItemsT = Aws::Vector<RelatedOpsItem>>
    void SetRelatedOpsItems(RelatedOpsItemsT&& value) { m_relatedOpsItemsHasBeenSet = true; m_relatedOpsItems = std::forward<RelatedOpsItemsT>(value); }
    template<typename RelatedOpsItemsT = Aws::Vector<RelatedOpsItem>>
    OpsItem& WithRelatedOpsItems(RelatedOpsItemsT&& value) { SetRelatedOpsItems(std::forward<RelatedOpsItemsT>(value)); return *this;}
    template<typename RelatedOpsItemsT = RelatedOpsItem>
    OpsItem& AddRelatedOpsItems(RelatedOpsItemsT&& value) { m_relatedOpsItemsHasBeenSet = true; m_relatedOpsItems.emplace_back(std::forward<RelatedOpsItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The OpsItem status. For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-working-with-OpsItems-editing-details.html">Editing
     * OpsItem details</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline OpsItemStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(OpsItemStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline OpsItem& WithStatus(OpsItemStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline const Aws::String& GetOpsItemId() const { return m_opsItemId; }
    inline bool OpsItemIdHasBeenSet() const { return m_opsItemIdHasBeenSet; }
    template<typename OpsItemIdT = Aws::String>
    void SetOpsItemId(OpsItemIdT&& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = std::forward<OpsItemIdT>(value); }
    template<typename OpsItemIdT = Aws::String>
    OpsItem& WithOpsItemId(OpsItemIdT&& value) { SetOpsItemId(std::forward<OpsItemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of this OpsItem. Each time the OpsItem is edited the version
     * number increments by one.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    OpsItem& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short heading that describes the nature of the OpsItem and the impacted
     * resource.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    OpsItem& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The origin of the OpsItem, such as Amazon EC2 or Systems Manager. The
     * impacted resource is a subset of source.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    OpsItem& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
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
    inline const Aws::Map<Aws::String, OpsItemDataValue>& GetOperationalData() const { return m_operationalData; }
    inline bool OperationalDataHasBeenSet() const { return m_operationalDataHasBeenSet; }
    template<typename OperationalDataT = Aws::Map<Aws::String, OpsItemDataValue>>
    void SetOperationalData(OperationalDataT&& value) { m_operationalDataHasBeenSet = true; m_operationalData = std::forward<OperationalDataT>(value); }
    template<typename OperationalDataT = Aws::Map<Aws::String, OpsItemDataValue>>
    OpsItem& WithOperationalData(OperationalDataT&& value) { SetOperationalData(std::forward<OperationalDataT>(value)); return *this;}
    template<typename OperationalDataKeyT = Aws::String, typename OperationalDataValueT = OpsItemDataValue>
    OpsItem& AddOperationalData(OperationalDataKeyT&& key, OperationalDataValueT&& value) {
      m_operationalDataHasBeenSet = true; m_operationalData.emplace(std::forward<OperationalDataKeyT>(key), std::forward<OperationalDataValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>An OpsItem category. Category options include: Availability, Cost,
     * Performance, Recovery, Security.</p>
     */
    inline const Aws::String& GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    template<typename CategoryT = Aws::String>
    void SetCategory(CategoryT&& value) { m_categoryHasBeenSet = true; m_category = std::forward<CategoryT>(value); }
    template<typename CategoryT = Aws::String>
    OpsItem& WithCategory(CategoryT&& value) { SetCategory(std::forward<CategoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity of the OpsItem. Severity options range from 1 to 4.</p>
     */
    inline const Aws::String& GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    template<typename SeverityT = Aws::String>
    void SetSeverity(SeverityT&& value) { m_severityHasBeenSet = true; m_severity = std::forward<SeverityT>(value); }
    template<typename SeverityT = Aws::String>
    OpsItem& WithSeverity(SeverityT&& value) { SetSeverity(std::forward<SeverityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time a runbook workflow started. Currently reported only for the OpsItem
     * type <code>/aws/changerequest</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetActualStartTime() const { return m_actualStartTime; }
    inline bool ActualStartTimeHasBeenSet() const { return m_actualStartTimeHasBeenSet; }
    template<typename ActualStartTimeT = Aws::Utils::DateTime>
    void SetActualStartTime(ActualStartTimeT&& value) { m_actualStartTimeHasBeenSet = true; m_actualStartTime = std::forward<ActualStartTimeT>(value); }
    template<typename ActualStartTimeT = Aws::Utils::DateTime>
    OpsItem& WithActualStartTime(ActualStartTimeT&& value) { SetActualStartTime(std::forward<ActualStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time a runbook workflow ended. Currently reported only for the OpsItem
     * type <code>/aws/changerequest</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetActualEndTime() const { return m_actualEndTime; }
    inline bool ActualEndTimeHasBeenSet() const { return m_actualEndTimeHasBeenSet; }
    template<typename ActualEndTimeT = Aws::Utils::DateTime>
    void SetActualEndTime(ActualEndTimeT&& value) { m_actualEndTimeHasBeenSet = true; m_actualEndTime = std::forward<ActualEndTimeT>(value); }
    template<typename ActualEndTimeT = Aws::Utils::DateTime>
    OpsItem& WithActualEndTime(ActualEndTimeT&& value) { SetActualEndTime(std::forward<ActualEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time specified in a change request for a runbook workflow to start.
     * Currently supported only for the OpsItem type
     * <code>/aws/changerequest</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetPlannedStartTime() const { return m_plannedStartTime; }
    inline bool PlannedStartTimeHasBeenSet() const { return m_plannedStartTimeHasBeenSet; }
    template<typename PlannedStartTimeT = Aws::Utils::DateTime>
    void SetPlannedStartTime(PlannedStartTimeT&& value) { m_plannedStartTimeHasBeenSet = true; m_plannedStartTime = std::forward<PlannedStartTimeT>(value); }
    template<typename PlannedStartTimeT = Aws::Utils::DateTime>
    OpsItem& WithPlannedStartTime(PlannedStartTimeT&& value) { SetPlannedStartTime(std::forward<PlannedStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time specified in a change request for a runbook workflow to end.
     * Currently supported only for the OpsItem type
     * <code>/aws/changerequest</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetPlannedEndTime() const { return m_plannedEndTime; }
    inline bool PlannedEndTimeHasBeenSet() const { return m_plannedEndTimeHasBeenSet; }
    template<typename PlannedEndTimeT = Aws::Utils::DateTime>
    void SetPlannedEndTime(PlannedEndTimeT&& value) { m_plannedEndTimeHasBeenSet = true; m_plannedEndTime = std::forward<PlannedEndTimeT>(value); }
    template<typename PlannedEndTimeT = Aws::Utils::DateTime>
    OpsItem& WithPlannedEndTime(PlannedEndTimeT&& value) { SetPlannedEndTime(std::forward<PlannedEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OpsItem Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetOpsItemArn() const { return m_opsItemArn; }
    inline bool OpsItemArnHasBeenSet() const { return m_opsItemArnHasBeenSet; }
    template<typename OpsItemArnT = Aws::String>
    void SetOpsItemArn(OpsItemArnT&& value) { m_opsItemArnHasBeenSet = true; m_opsItemArn = std::forward<OpsItemArnT>(value); }
    template<typename OpsItemArnT = Aws::String>
    OpsItem& WithOpsItemArn(OpsItemArnT&& value) { SetOpsItemArn(std::forward<OpsItemArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_opsItemType;
    bool m_opsItemTypeHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Vector<OpsItemNotification> m_notifications;
    bool m_notificationsHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;

    Aws::Vector<RelatedOpsItem> m_relatedOpsItems;
    bool m_relatedOpsItemsHasBeenSet = false;

    OpsItemStatus m_status{OpsItemStatus::NOT_SET};
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

    Aws::Utils::DateTime m_actualStartTime{};
    bool m_actualStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_actualEndTime{};
    bool m_actualEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_plannedStartTime{};
    bool m_plannedStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_plannedEndTime{};
    bool m_plannedEndTimeHasBeenSet = false;

    Aws::String m_opsItemArn;
    bool m_opsItemArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
