/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/FirewallRuleGroupStatus.h>
#include <aws/route53resolver/model/ShareStatus.h>
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
namespace Route53Resolver
{
namespace Model
{

  /**
   * <p>High-level information for a firewall rule group. A firewall rule group is a
   * collection of rules that DNS Firewall uses to filter DNS network traffic for a
   * VPC. To retrieve the rules for the rule group, call
   * <a>ListFirewallRules</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/FirewallRuleGroup">AWS
   * API Reference</a></p>
   */
  class FirewallRuleGroup
  {
  public:
    AWS_ROUTE53RESOLVER_API FirewallRuleGroup();
    AWS_ROUTE53RESOLVER_API FirewallRuleGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API FirewallRuleGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the rule group. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline FirewallRuleGroup& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline FirewallRuleGroup& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline FirewallRuleGroup& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the rule group.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline FirewallRuleGroup& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline FirewallRuleGroup& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline FirewallRuleGroup& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the rule group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline FirewallRuleGroup& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline FirewallRuleGroup& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline FirewallRuleGroup& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of rules in the rule group.</p>
     */
    inline int GetRuleCount() const{ return m_ruleCount; }
    inline bool RuleCountHasBeenSet() const { return m_ruleCountHasBeenSet; }
    inline void SetRuleCount(int value) { m_ruleCountHasBeenSet = true; m_ruleCount = value; }
    inline FirewallRuleGroup& WithRuleCount(int value) { SetRuleCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the domain list. </p>
     */
    inline const FirewallRuleGroupStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const FirewallRuleGroupStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(FirewallRuleGroupStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline FirewallRuleGroup& WithStatus(const FirewallRuleGroupStatus& value) { SetStatus(value); return *this;}
    inline FirewallRuleGroup& WithStatus(FirewallRuleGroupStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about the status of the rule group, if available.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline FirewallRuleGroup& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline FirewallRuleGroup& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline FirewallRuleGroup& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID for the account that created the rule
     * group. When a rule group is shared with your account, this is the account that
     * has shared the rule group with you. </p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline FirewallRuleGroup& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline FirewallRuleGroup& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline FirewallRuleGroup& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique string defined by you to identify the request. This allows you to
     * retry failed requests without the risk of running the operation twice. This can
     * be any unique string, for example, a timestamp. </p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }
    inline FirewallRuleGroup& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}
    inline FirewallRuleGroup& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}
    inline FirewallRuleGroup& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the rule group is shared with other Amazon Web Services accounts, or
     * was shared with the current account by another Amazon Web Services account.
     * Sharing is configured through Resource Access Manager (RAM).</p>
     */
    inline const ShareStatus& GetShareStatus() const{ return m_shareStatus; }
    inline bool ShareStatusHasBeenSet() const { return m_shareStatusHasBeenSet; }
    inline void SetShareStatus(const ShareStatus& value) { m_shareStatusHasBeenSet = true; m_shareStatus = value; }
    inline void SetShareStatus(ShareStatus&& value) { m_shareStatusHasBeenSet = true; m_shareStatus = std::move(value); }
    inline FirewallRuleGroup& WithShareStatus(const ShareStatus& value) { SetShareStatus(value); return *this;}
    inline FirewallRuleGroup& WithShareStatus(ShareStatus&& value) { SetShareStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the rule group was created, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::String& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::String&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline void SetCreationTime(const char* value) { m_creationTimeHasBeenSet = true; m_creationTime.assign(value); }
    inline FirewallRuleGroup& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}
    inline FirewallRuleGroup& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}
    inline FirewallRuleGroup& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the rule group was last modified, in Unix time format
     * and Coordinated Universal Time (UTC).</p>
     */
    inline const Aws::String& GetModificationTime() const{ return m_modificationTime; }
    inline bool ModificationTimeHasBeenSet() const { return m_modificationTimeHasBeenSet; }
    inline void SetModificationTime(const Aws::String& value) { m_modificationTimeHasBeenSet = true; m_modificationTime = value; }
    inline void SetModificationTime(Aws::String&& value) { m_modificationTimeHasBeenSet = true; m_modificationTime = std::move(value); }
    inline void SetModificationTime(const char* value) { m_modificationTimeHasBeenSet = true; m_modificationTime.assign(value); }
    inline FirewallRuleGroup& WithModificationTime(const Aws::String& value) { SetModificationTime(value); return *this;}
    inline FirewallRuleGroup& WithModificationTime(Aws::String&& value) { SetModificationTime(std::move(value)); return *this;}
    inline FirewallRuleGroup& WithModificationTime(const char* value) { SetModificationTime(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_ruleCount;
    bool m_ruleCountHasBeenSet = false;

    FirewallRuleGroupStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    ShareStatus m_shareStatus;
    bool m_shareStatusHasBeenSet = false;

    Aws::String m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_modificationTime;
    bool m_modificationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
