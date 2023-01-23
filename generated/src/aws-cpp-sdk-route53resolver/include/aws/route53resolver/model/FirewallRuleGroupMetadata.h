/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Minimal high-level information for a firewall rule group. The action
   * <a>ListFirewallRuleGroups</a> returns an array of these objects. </p> <p>To
   * retrieve full information for a firewall rule group, call
   * <a>GetFirewallRuleGroup</a> and <a>ListFirewallRules</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/FirewallRuleGroupMetadata">AWS
   * API Reference</a></p>
   */
  class FirewallRuleGroupMetadata
  {
  public:
    AWS_ROUTE53RESOLVER_API FirewallRuleGroupMetadata();
    AWS_ROUTE53RESOLVER_API FirewallRuleGroupMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API FirewallRuleGroupMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the rule group. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the rule group. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the rule group. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the rule group. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the rule group. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the rule group. </p>
     */
    inline FirewallRuleGroupMetadata& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the rule group. </p>
     */
    inline FirewallRuleGroupMetadata& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the rule group. </p>
     */
    inline FirewallRuleGroupMetadata& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ARN (Amazon Resource Name) of the rule group.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN (Amazon Resource Name) of the rule group.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN (Amazon Resource Name) of the rule group.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN (Amazon Resource Name) of the rule group.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the rule group.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the rule group.</p>
     */
    inline FirewallRuleGroupMetadata& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the rule group.</p>
     */
    inline FirewallRuleGroupMetadata& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the rule group.</p>
     */
    inline FirewallRuleGroupMetadata& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the rule group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the rule group.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the rule group.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the rule group.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the rule group.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the rule group.</p>
     */
    inline FirewallRuleGroupMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the rule group.</p>
     */
    inline FirewallRuleGroupMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the rule group.</p>
     */
    inline FirewallRuleGroupMetadata& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID for the account that created the rule
     * group. When a rule group is shared with your account, this is the account that
     * has shared the rule group with you. </p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The Amazon Web Services account ID for the account that created the rule
     * group. When a rule group is shared with your account, this is the account that
     * has shared the rule group with you. </p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID for the account that created the rule
     * group. When a rule group is shared with your account, this is the account that
     * has shared the rule group with you. </p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The Amazon Web Services account ID for the account that created the rule
     * group. When a rule group is shared with your account, this is the account that
     * has shared the rule group with you. </p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID for the account that created the rule
     * group. When a rule group is shared with your account, this is the account that
     * has shared the rule group with you. </p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID for the account that created the rule
     * group. When a rule group is shared with your account, this is the account that
     * has shared the rule group with you. </p>
     */
    inline FirewallRuleGroupMetadata& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID for the account that created the rule
     * group. When a rule group is shared with your account, this is the account that
     * has shared the rule group with you. </p>
     */
    inline FirewallRuleGroupMetadata& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID for the account that created the rule
     * group. When a rule group is shared with your account, this is the account that
     * has shared the rule group with you. </p>
     */
    inline FirewallRuleGroupMetadata& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>A unique string defined by you to identify the request. This allows you to
     * retry failed requests without the risk of running the operation twice. This can
     * be any unique string, for example, a timestamp. </p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }

    /**
     * <p>A unique string defined by you to identify the request. This allows you to
     * retry failed requests without the risk of running the operation twice. This can
     * be any unique string, for example, a timestamp. </p>
     */
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }

    /**
     * <p>A unique string defined by you to identify the request. This allows you to
     * retry failed requests without the risk of running the operation twice. This can
     * be any unique string, for example, a timestamp. </p>
     */
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }

    /**
     * <p>A unique string defined by you to identify the request. This allows you to
     * retry failed requests without the risk of running the operation twice. This can
     * be any unique string, for example, a timestamp. </p>
     */
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }

    /**
     * <p>A unique string defined by you to identify the request. This allows you to
     * retry failed requests without the risk of running the operation twice. This can
     * be any unique string, for example, a timestamp. </p>
     */
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }

    /**
     * <p>A unique string defined by you to identify the request. This allows you to
     * retry failed requests without the risk of running the operation twice. This can
     * be any unique string, for example, a timestamp. </p>
     */
    inline FirewallRuleGroupMetadata& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>A unique string defined by you to identify the request. This allows you to
     * retry failed requests without the risk of running the operation twice. This can
     * be any unique string, for example, a timestamp. </p>
     */
    inline FirewallRuleGroupMetadata& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>A unique string defined by you to identify the request. This allows you to
     * retry failed requests without the risk of running the operation twice. This can
     * be any unique string, for example, a timestamp. </p>
     */
    inline FirewallRuleGroupMetadata& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}


    /**
     * <p>Whether the rule group is shared with other Amazon Web Services accounts, or
     * was shared with the current account by another Amazon Web Services account.
     * Sharing is configured through Resource Access Manager (RAM).</p>
     */
    inline const ShareStatus& GetShareStatus() const{ return m_shareStatus; }

    /**
     * <p>Whether the rule group is shared with other Amazon Web Services accounts, or
     * was shared with the current account by another Amazon Web Services account.
     * Sharing is configured through Resource Access Manager (RAM).</p>
     */
    inline bool ShareStatusHasBeenSet() const { return m_shareStatusHasBeenSet; }

    /**
     * <p>Whether the rule group is shared with other Amazon Web Services accounts, or
     * was shared with the current account by another Amazon Web Services account.
     * Sharing is configured through Resource Access Manager (RAM).</p>
     */
    inline void SetShareStatus(const ShareStatus& value) { m_shareStatusHasBeenSet = true; m_shareStatus = value; }

    /**
     * <p>Whether the rule group is shared with other Amazon Web Services accounts, or
     * was shared with the current account by another Amazon Web Services account.
     * Sharing is configured through Resource Access Manager (RAM).</p>
     */
    inline void SetShareStatus(ShareStatus&& value) { m_shareStatusHasBeenSet = true; m_shareStatus = std::move(value); }

    /**
     * <p>Whether the rule group is shared with other Amazon Web Services accounts, or
     * was shared with the current account by another Amazon Web Services account.
     * Sharing is configured through Resource Access Manager (RAM).</p>
     */
    inline FirewallRuleGroupMetadata& WithShareStatus(const ShareStatus& value) { SetShareStatus(value); return *this;}

    /**
     * <p>Whether the rule group is shared with other Amazon Web Services accounts, or
     * was shared with the current account by another Amazon Web Services account.
     * Sharing is configured through Resource Access Manager (RAM).</p>
     */
    inline FirewallRuleGroupMetadata& WithShareStatus(ShareStatus&& value) { SetShareStatus(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    ShareStatus m_shareStatus;
    bool m_shareStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
