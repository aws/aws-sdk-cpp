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


    /**
     * <p>The ID of the domain list. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the domain list. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the domain list. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the domain list. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the domain list. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the domain list. </p>
     */
    inline FirewallDomainList& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the domain list. </p>
     */
    inline FirewallDomainList& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the domain list. </p>
     */
    inline FirewallDomainList& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the firewall domain list.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall domain list.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall domain list.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall domain list.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall domain list.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall domain list.</p>
     */
    inline FirewallDomainList& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall domain list.</p>
     */
    inline FirewallDomainList& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall domain list.</p>
     */
    inline FirewallDomainList& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the domain list. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the domain list. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the domain list. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the domain list. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the domain list. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the domain list. </p>
     */
    inline FirewallDomainList& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the domain list. </p>
     */
    inline FirewallDomainList& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain list. </p>
     */
    inline FirewallDomainList& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The number of domain names that are specified in the domain list.</p>
     */
    inline int GetDomainCount() const{ return m_domainCount; }

    /**
     * <p>The number of domain names that are specified in the domain list.</p>
     */
    inline bool DomainCountHasBeenSet() const { return m_domainCountHasBeenSet; }

    /**
     * <p>The number of domain names that are specified in the domain list.</p>
     */
    inline void SetDomainCount(int value) { m_domainCountHasBeenSet = true; m_domainCount = value; }

    /**
     * <p>The number of domain names that are specified in the domain list.</p>
     */
    inline FirewallDomainList& WithDomainCount(int value) { SetDomainCount(value); return *this;}


    /**
     * <p>The status of the domain list. </p>
     */
    inline const FirewallDomainListStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the domain list. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the domain list. </p>
     */
    inline void SetStatus(const FirewallDomainListStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the domain list. </p>
     */
    inline void SetStatus(FirewallDomainListStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the domain list. </p>
     */
    inline FirewallDomainList& WithStatus(const FirewallDomainListStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the domain list. </p>
     */
    inline FirewallDomainList& WithStatus(FirewallDomainListStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Additional information about the status of the list, if available.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>Additional information about the status of the list, if available.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>Additional information about the status of the list, if available.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>Additional information about the status of the list, if available.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>Additional information about the status of the list, if available.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>Additional information about the status of the list, if available.</p>
     */
    inline FirewallDomainList& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>Additional information about the status of the list, if available.</p>
     */
    inline FirewallDomainList& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>Additional information about the status of the list, if available.</p>
     */
    inline FirewallDomainList& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The owner of the list, used only for lists that are not managed by you. For
     * example, the managed domain list <code>AWSManagedDomainsMalwareDomainList</code>
     * has the managed owner name <code>Route 53 Resolver DNS Firewall</code>.</p>
     */
    inline const Aws::String& GetManagedOwnerName() const{ return m_managedOwnerName; }

    /**
     * <p>The owner of the list, used only for lists that are not managed by you. For
     * example, the managed domain list <code>AWSManagedDomainsMalwareDomainList</code>
     * has the managed owner name <code>Route 53 Resolver DNS Firewall</code>.</p>
     */
    inline bool ManagedOwnerNameHasBeenSet() const { return m_managedOwnerNameHasBeenSet; }

    /**
     * <p>The owner of the list, used only for lists that are not managed by you. For
     * example, the managed domain list <code>AWSManagedDomainsMalwareDomainList</code>
     * has the managed owner name <code>Route 53 Resolver DNS Firewall</code>.</p>
     */
    inline void SetManagedOwnerName(const Aws::String& value) { m_managedOwnerNameHasBeenSet = true; m_managedOwnerName = value; }

    /**
     * <p>The owner of the list, used only for lists that are not managed by you. For
     * example, the managed domain list <code>AWSManagedDomainsMalwareDomainList</code>
     * has the managed owner name <code>Route 53 Resolver DNS Firewall</code>.</p>
     */
    inline void SetManagedOwnerName(Aws::String&& value) { m_managedOwnerNameHasBeenSet = true; m_managedOwnerName = std::move(value); }

    /**
     * <p>The owner of the list, used only for lists that are not managed by you. For
     * example, the managed domain list <code>AWSManagedDomainsMalwareDomainList</code>
     * has the managed owner name <code>Route 53 Resolver DNS Firewall</code>.</p>
     */
    inline void SetManagedOwnerName(const char* value) { m_managedOwnerNameHasBeenSet = true; m_managedOwnerName.assign(value); }

    /**
     * <p>The owner of the list, used only for lists that are not managed by you. For
     * example, the managed domain list <code>AWSManagedDomainsMalwareDomainList</code>
     * has the managed owner name <code>Route 53 Resolver DNS Firewall</code>.</p>
     */
    inline FirewallDomainList& WithManagedOwnerName(const Aws::String& value) { SetManagedOwnerName(value); return *this;}

    /**
     * <p>The owner of the list, used only for lists that are not managed by you. For
     * example, the managed domain list <code>AWSManagedDomainsMalwareDomainList</code>
     * has the managed owner name <code>Route 53 Resolver DNS Firewall</code>.</p>
     */
    inline FirewallDomainList& WithManagedOwnerName(Aws::String&& value) { SetManagedOwnerName(std::move(value)); return *this;}

    /**
     * <p>The owner of the list, used only for lists that are not managed by you. For
     * example, the managed domain list <code>AWSManagedDomainsMalwareDomainList</code>
     * has the managed owner name <code>Route 53 Resolver DNS Firewall</code>.</p>
     */
    inline FirewallDomainList& WithManagedOwnerName(const char* value) { SetManagedOwnerName(value); return *this;}


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
    inline FirewallDomainList& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>A unique string defined by you to identify the request. This allows you to
     * retry failed requests without the risk of running the operation twice. This can
     * be any unique string, for example, a timestamp. </p>
     */
    inline FirewallDomainList& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>A unique string defined by you to identify the request. This allows you to
     * retry failed requests without the risk of running the operation twice. This can
     * be any unique string, for example, a timestamp. </p>
     */
    inline FirewallDomainList& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}


    /**
     * <p>The date and time that the domain list was created, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time that the domain list was created, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time that the domain list was created, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline void SetCreationTime(const Aws::String& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time that the domain list was created, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline void SetCreationTime(Aws::String&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time that the domain list was created, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline void SetCreationTime(const char* value) { m_creationTimeHasBeenSet = true; m_creationTime.assign(value); }

    /**
     * <p>The date and time that the domain list was created, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline FirewallDomainList& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time that the domain list was created, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline FirewallDomainList& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}

    /**
     * <p>The date and time that the domain list was created, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline FirewallDomainList& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}


    /**
     * <p>The date and time that the domain list was last modified, in Unix time format
     * and Coordinated Universal Time (UTC). </p>
     */
    inline const Aws::String& GetModificationTime() const{ return m_modificationTime; }

    /**
     * <p>The date and time that the domain list was last modified, in Unix time format
     * and Coordinated Universal Time (UTC). </p>
     */
    inline bool ModificationTimeHasBeenSet() const { return m_modificationTimeHasBeenSet; }

    /**
     * <p>The date and time that the domain list was last modified, in Unix time format
     * and Coordinated Universal Time (UTC). </p>
     */
    inline void SetModificationTime(const Aws::String& value) { m_modificationTimeHasBeenSet = true; m_modificationTime = value; }

    /**
     * <p>The date and time that the domain list was last modified, in Unix time format
     * and Coordinated Universal Time (UTC). </p>
     */
    inline void SetModificationTime(Aws::String&& value) { m_modificationTimeHasBeenSet = true; m_modificationTime = std::move(value); }

    /**
     * <p>The date and time that the domain list was last modified, in Unix time format
     * and Coordinated Universal Time (UTC). </p>
     */
    inline void SetModificationTime(const char* value) { m_modificationTimeHasBeenSet = true; m_modificationTime.assign(value); }

    /**
     * <p>The date and time that the domain list was last modified, in Unix time format
     * and Coordinated Universal Time (UTC). </p>
     */
    inline FirewallDomainList& WithModificationTime(const Aws::String& value) { SetModificationTime(value); return *this;}

    /**
     * <p>The date and time that the domain list was last modified, in Unix time format
     * and Coordinated Universal Time (UTC). </p>
     */
    inline FirewallDomainList& WithModificationTime(Aws::String&& value) { SetModificationTime(std::move(value)); return *this;}

    /**
     * <p>The date and time that the domain list was last modified, in Unix time format
     * and Coordinated Universal Time (UTC). </p>
     */
    inline FirewallDomainList& WithModificationTime(const char* value) { SetModificationTime(value); return *this;}

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
