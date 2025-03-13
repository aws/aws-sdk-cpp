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
    AWS_ROUTE53RESOLVER_API FirewallRuleGroupMetadata() = default;
    AWS_ROUTE53RESOLVER_API FirewallRuleGroupMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API FirewallRuleGroupMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the rule group. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    FirewallRuleGroupMetadata& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the rule group.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    FirewallRuleGroupMetadata& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the rule group.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    FirewallRuleGroupMetadata& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID for the account that created the rule
     * group. When a rule group is shared with your account, this is the account that
     * has shared the rule group with you. </p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    FirewallRuleGroupMetadata& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique string defined by you to identify the request. This allows you to
     * retry failed requests without the risk of running the operation twice. This can
     * be any unique string, for example, a timestamp. </p>
     */
    inline const Aws::String& GetCreatorRequestId() const { return m_creatorRequestId; }
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }
    template<typename CreatorRequestIdT = Aws::String>
    void SetCreatorRequestId(CreatorRequestIdT&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::forward<CreatorRequestIdT>(value); }
    template<typename CreatorRequestIdT = Aws::String>
    FirewallRuleGroupMetadata& WithCreatorRequestId(CreatorRequestIdT&& value) { SetCreatorRequestId(std::forward<CreatorRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the rule group is shared with other Amazon Web Services accounts, or
     * was shared with the current account by another Amazon Web Services account.
     * Sharing is configured through Resource Access Manager (RAM).</p>
     */
    inline ShareStatus GetShareStatus() const { return m_shareStatus; }
    inline bool ShareStatusHasBeenSet() const { return m_shareStatusHasBeenSet; }
    inline void SetShareStatus(ShareStatus value) { m_shareStatusHasBeenSet = true; m_shareStatus = value; }
    inline FirewallRuleGroupMetadata& WithShareStatus(ShareStatus value) { SetShareStatus(value); return *this;}
    ///@}
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

    ShareStatus m_shareStatus{ShareStatus::NOT_SET};
    bool m_shareStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
