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
    AWS_ROUTE53RESOLVER_API FirewallDomainList();
    AWS_ROUTE53RESOLVER_API FirewallDomainList(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API FirewallDomainList& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the domain list. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline FirewallDomainList& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline FirewallDomainList& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline FirewallDomainList& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the firewall domain list.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline FirewallDomainList& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline FirewallDomainList& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline FirewallDomainList& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the domain list. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline FirewallDomainList& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline FirewallDomainList& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline FirewallDomainList& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of domain names that are specified in the domain list.</p>
     */
    inline int GetDomainCount() const{ return m_domainCount; }
    inline bool DomainCountHasBeenSet() const { return m_domainCountHasBeenSet; }
    inline void SetDomainCount(int value) { m_domainCountHasBeenSet = true; m_domainCount = value; }
    inline FirewallDomainList& WithDomainCount(int value) { SetDomainCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the domain list. </p>
     */
    inline const FirewallDomainListStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const FirewallDomainListStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(FirewallDomainListStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline FirewallDomainList& WithStatus(const FirewallDomainListStatus& value) { SetStatus(value); return *this;}
    inline FirewallDomainList& WithStatus(FirewallDomainListStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about the status of the list, if available.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline FirewallDomainList& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline FirewallDomainList& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline FirewallDomainList& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the list, used only for lists that are not managed by you. For
     * example, the managed domain list <code>AWSManagedDomainsMalwareDomainList</code>
     * has the managed owner name <code>Route 53 Resolver DNS Firewall</code>.</p>
     */
    inline const Aws::String& GetManagedOwnerName() const{ return m_managedOwnerName; }
    inline bool ManagedOwnerNameHasBeenSet() const { return m_managedOwnerNameHasBeenSet; }
    inline void SetManagedOwnerName(const Aws::String& value) { m_managedOwnerNameHasBeenSet = true; m_managedOwnerName = value; }
    inline void SetManagedOwnerName(Aws::String&& value) { m_managedOwnerNameHasBeenSet = true; m_managedOwnerName = std::move(value); }
    inline void SetManagedOwnerName(const char* value) { m_managedOwnerNameHasBeenSet = true; m_managedOwnerName.assign(value); }
    inline FirewallDomainList& WithManagedOwnerName(const Aws::String& value) { SetManagedOwnerName(value); return *this;}
    inline FirewallDomainList& WithManagedOwnerName(Aws::String&& value) { SetManagedOwnerName(std::move(value)); return *this;}
    inline FirewallDomainList& WithManagedOwnerName(const char* value) { SetManagedOwnerName(value); return *this;}
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
    inline FirewallDomainList& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}
    inline FirewallDomainList& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}
    inline FirewallDomainList& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the domain list was created, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::String& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::String&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline void SetCreationTime(const char* value) { m_creationTimeHasBeenSet = true; m_creationTime.assign(value); }
    inline FirewallDomainList& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}
    inline FirewallDomainList& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}
    inline FirewallDomainList& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the domain list was last modified, in Unix time format
     * and Coordinated Universal Time (UTC). </p>
     */
    inline const Aws::String& GetModificationTime() const{ return m_modificationTime; }
    inline bool ModificationTimeHasBeenSet() const { return m_modificationTimeHasBeenSet; }
    inline void SetModificationTime(const Aws::String& value) { m_modificationTimeHasBeenSet = true; m_modificationTime = value; }
    inline void SetModificationTime(Aws::String&& value) { m_modificationTimeHasBeenSet = true; m_modificationTime = std::move(value); }
    inline void SetModificationTime(const char* value) { m_modificationTimeHasBeenSet = true; m_modificationTime.assign(value); }
    inline FirewallDomainList& WithModificationTime(const Aws::String& value) { SetModificationTime(value); return *this;}
    inline FirewallDomainList& WithModificationTime(Aws::String&& value) { SetModificationTime(std::move(value)); return *this;}
    inline FirewallDomainList& WithModificationTime(const char* value) { SetModificationTime(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_domainCount;
    bool m_domainCountHasBeenSet = false;

    FirewallDomainListStatus m_status;
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
