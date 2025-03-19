/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/OpsItemDataValue.h>
#include <aws/ssm/model/OpsItemNotification.h>
#include <aws/ssm/model/RelatedOpsItem.h>
#include <aws/ssm/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class CreateOpsItemRequest : public SSMRequest
  {
  public:
    AWS_SSM_API CreateOpsItemRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateOpsItem"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>User-defined text that contains information about the OpsItem, in Markdown
     * format. </p>  <p>Provide enough information so that users viewing this
     * OpsItem for the first time understand the issue. </p> 
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateOpsItemRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of OpsItem to create. Systems Manager supports the following types
     * of OpsItems:</p> <ul> <li> <p> <code>/aws/issue</code> </p> <p>This type of
     * OpsItem is used for default OpsItems created by OpsCenter. </p> </li> <li> <p>
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
    CreateOpsItemRequest& WithOpsItemType(OpsItemTypeT&& value) { SetOpsItemType(std::forward<OpsItemTypeT>(value)); return *this;}
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
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-manually-create-OpsItems.html">Create
     * OpsItems manually</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, OpsItemDataValue>& GetOperationalData() const { return m_operationalData; }
    inline bool OperationalDataHasBeenSet() const { return m_operationalDataHasBeenSet; }
    template<typename OperationalDataT = Aws::Map<Aws::String, OpsItemDataValue>>
    void SetOperationalData(OperationalDataT&& value) { m_operationalDataHasBeenSet = true; m_operationalData = std::forward<OperationalDataT>(value); }
    template<typename OperationalDataT = Aws::Map<Aws::String, OpsItemDataValue>>
    CreateOpsItemRequest& WithOperationalData(OperationalDataT&& value) { SetOperationalData(std::forward<OperationalDataT>(value)); return *this;}
    template<typename OperationalDataKeyT = Aws::String, typename OperationalDataValueT = OpsItemDataValue>
    CreateOpsItemRequest& AddOperationalData(OperationalDataKeyT&& key, OperationalDataValueT&& value) {
      m_operationalDataHasBeenSet = true; m_operationalData.emplace(std::forward<OperationalDataKeyT>(key), std::forward<OperationalDataValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an SNS topic where notifications are sent
     * when this OpsItem is edited or changed.</p>
     */
    inline const Aws::Vector<OpsItemNotification>& GetNotifications() const { return m_notifications; }
    inline bool NotificationsHasBeenSet() const { return m_notificationsHasBeenSet; }
    template<typename NotificationsT = Aws::Vector<OpsItemNotification>>
    void SetNotifications(NotificationsT&& value) { m_notificationsHasBeenSet = true; m_notifications = std::forward<NotificationsT>(value); }
    template<typename NotificationsT = Aws::Vector<OpsItemNotification>>
    CreateOpsItemRequest& WithNotifications(NotificationsT&& value) { SetNotifications(std::forward<NotificationsT>(value)); return *this;}
    template<typename NotificationsT = OpsItemNotification>
    CreateOpsItemRequest& AddNotifications(NotificationsT&& value) { m_notificationsHasBeenSet = true; m_notifications.emplace_back(std::forward<NotificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The importance of this OpsItem in relation to other OpsItems in the
     * system.</p>
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline CreateOpsItemRequest& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more OpsItems that share something in common with the current
     * OpsItems. For example, related OpsItems can include OpsItems with similar error
     * messages, impacted resources, or statuses for the impacted resource.</p>
     */
    inline const Aws::Vector<RelatedOpsItem>& GetRelatedOpsItems() const { return m_relatedOpsItems; }
    inline bool RelatedOpsItemsHasBeenSet() const { return m_relatedOpsItemsHasBeenSet; }
    template<typename RelatedOpsItemsT = Aws::Vector<RelatedOpsItem>>
    void SetRelatedOpsItems(RelatedOpsItemsT&& value) { m_relatedOpsItemsHasBeenSet = true; m_relatedOpsItems = std::forward<RelatedOpsItemsT>(value); }
    template<typename RelatedOpsItemsT = Aws::Vector<RelatedOpsItem>>
    CreateOpsItemRequest& WithRelatedOpsItems(RelatedOpsItemsT&& value) { SetRelatedOpsItems(std::forward<RelatedOpsItemsT>(value)); return *this;}
    template<typename RelatedOpsItemsT = RelatedOpsItem>
    CreateOpsItemRequest& AddRelatedOpsItems(RelatedOpsItemsT&& value) { m_relatedOpsItemsHasBeenSet = true; m_relatedOpsItems.emplace_back(std::forward<RelatedOpsItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The origin of the OpsItem, such as Amazon EC2 or Systems Manager.</p> 
     * <p>The source name can't contain the following strings: <code>aws</code>,
     * <code>amazon</code>, and <code>amzn</code>. </p> 
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    CreateOpsItemRequest& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
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
    CreateOpsItemRequest& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional metadata that you assign to a resource.</p> <p>Tags use a key-value
     * pair. For example:</p> <p> <code>Key=Department,Value=Finance</code> </p>
     *  <p>To add tags to a new OpsItem, a user must have IAM permissions
     * for both the <code>ssm:CreateOpsItems</code> operation and the
     * <code>ssm:AddTagsToResource</code> operation. To add tags to an existing
     * OpsItem, use the <a>AddTagsToResource</a> operation.</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateOpsItemRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateOpsItemRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify a category to assign to an OpsItem. </p>
     */
    inline const Aws::String& GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    template<typename CategoryT = Aws::String>
    void SetCategory(CategoryT&& value) { m_categoryHasBeenSet = true; m_category = std::forward<CategoryT>(value); }
    template<typename CategoryT = Aws::String>
    CreateOpsItemRequest& WithCategory(CategoryT&& value) { SetCategory(std::forward<CategoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify a severity to assign to an OpsItem.</p>
     */
    inline const Aws::String& GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    template<typename SeverityT = Aws::String>
    void SetSeverity(SeverityT&& value) { m_severityHasBeenSet = true; m_severity = std::forward<SeverityT>(value); }
    template<typename SeverityT = Aws::String>
    CreateOpsItemRequest& WithSeverity(SeverityT&& value) { SetSeverity(std::forward<SeverityT>(value)); return *this;}
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
    CreateOpsItemRequest& WithActualStartTime(ActualStartTimeT&& value) { SetActualStartTime(std::forward<ActualStartTimeT>(value)); return *this;}
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
    CreateOpsItemRequest& WithActualEndTime(ActualEndTimeT&& value) { SetActualEndTime(std::forward<ActualEndTimeT>(value)); return *this;}
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
    CreateOpsItemRequest& WithPlannedStartTime(PlannedStartTimeT&& value) { SetPlannedStartTime(std::forward<PlannedStartTimeT>(value)); return *this;}
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
    CreateOpsItemRequest& WithPlannedEndTime(PlannedEndTimeT&& value) { SetPlannedEndTime(std::forward<PlannedEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target Amazon Web Services account where you want to create an OpsItem.
     * To make this call, your account must be configured to work with OpsItems across
     * accounts. For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-setup.html">Set
     * up OpsCenter</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    CreateOpsItemRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_opsItemType;
    bool m_opsItemTypeHasBeenSet = false;

    Aws::Map<Aws::String, OpsItemDataValue> m_operationalData;
    bool m_operationalDataHasBeenSet = false;

    Aws::Vector<OpsItemNotification> m_notifications;
    bool m_notificationsHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;

    Aws::Vector<RelatedOpsItem> m_relatedOpsItems;
    bool m_relatedOpsItemsHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

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

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
