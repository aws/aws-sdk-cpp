/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/FirewallDomainListStatus.h>
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
   * <p>High-level information about a list of firewall domains for use in a
   * <a>FirewallRule</a>. This is returned by <a>GetFirewallDomainList</a>.</p> <p>To
   * retrieve the domains that are defined for this domain list, call
   * <a>ListFirewallDomains</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/FirewallDomainList">AWS
   * API Reference</a></p>
   */
  class FirewallDomainList
  {
  public:
    AWS_ROUTE53RESOLVER_API FirewallDomainList() = default;
    AWS_ROUTE53RESOLVER_API FirewallDomainList(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API FirewallDomainList& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the domain list. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    FirewallDomainList& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the firewall domain list.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    FirewallDomainList& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the domain list. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    FirewallDomainList& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of domain names that are specified in the domain list.</p>
     */
    inline int GetDomainCount() const { return m_domainCount; }
    inline bool DomainCountHasBeenSet() const { return m_domainCountHasBeenSet; }
    inline void SetDomainCount(int value) { m_domainCountHasBeenSet = true; m_domainCount = value; }
    inline FirewallDomainList& WithDomainCount(int value) { SetDomainCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the domain list. </p>
     */
    inline FirewallDomainListStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(FirewallDomainListStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline FirewallDomainList& WithStatus(FirewallDomainListStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about the status of the list, if available.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    FirewallDomainList& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the list, used only for lists that are not managed by you. For
     * example, the managed domain list <code>AWSManagedDomainsMalwareDomainList</code>
     * has the managed owner name <code>Route 53 Resolver DNS Firewall</code>.</p>
     */
    inline const Aws::String& GetManagedOwnerName() const { return m_managedOwnerName; }
    inline bool ManagedOwnerNameHasBeenSet() const { return m_managedOwnerNameHasBeenSet; }
    template<typename ManagedOwnerNameT = Aws::String>
    void SetManagedOwnerName(ManagedOwnerNameT&& value) { m_managedOwnerNameHasBeenSet = true; m_managedOwnerName = std::forward<ManagedOwnerNameT>(value); }
    template<typename ManagedOwnerNameT = Aws::String>
    FirewallDomainList& WithManagedOwnerName(ManagedOwnerNameT&& value) { SetManagedOwnerName(std::forward<ManagedOwnerNameT>(value)); return *this;}
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
    FirewallDomainList& WithCreatorRequestId(CreatorRequestIdT&& value) { SetCreatorRequestId(std::forward<CreatorRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the domain list was created, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline const Aws::String& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::String>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::String>
    FirewallDomainList& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the domain list was last modified, in Unix time format
     * and Coordinated Universal Time (UTC). </p>
     */
    inline const Aws::String& GetModificationTime() const { return m_modificationTime; }
    inline bool ModificationTimeHasBeenSet() const { return m_modificationTimeHasBeenSet; }
    template<typename ModificationTimeT = Aws::String>
    void SetModificationTime(ModificationTimeT&& value) { m_modificationTimeHasBeenSet = true; m_modificationTime = std::forward<ModificationTimeT>(value); }
    template<typename ModificationTimeT = Aws::String>
    FirewallDomainList& WithModificationTime(ModificationTimeT&& value) { SetModificationTime(std::forward<ModificationTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_domainCount{0};
    bool m_domainCountHasBeenSet = false;

    FirewallDomainListStatus m_status{FirewallDomainListStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_managedOwnerName;
    bool m_managedOwnerNameHasBeenSet = false;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    Aws::String m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_modificationTime;
    bool m_modificationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
