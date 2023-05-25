/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Minimal high-level information for a firewall domain list. The action
   * <a>ListFirewallDomainLists</a> returns an array of these objects. </p> <p>To
   * retrieve full information for a firewall domain list, call
   * <a>GetFirewallDomainList</a> and <a>ListFirewallDomains</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/FirewallDomainListMetadata">AWS
   * API Reference</a></p>
   */
  class FirewallDomainListMetadata
  {
  public:
    AWS_ROUTE53RESOLVER_API FirewallDomainListMetadata();
    AWS_ROUTE53RESOLVER_API FirewallDomainListMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API FirewallDomainListMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline FirewallDomainListMetadata& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the domain list. </p>
     */
    inline FirewallDomainListMetadata& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the domain list. </p>
     */
    inline FirewallDomainListMetadata& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the firewall domain list metadata.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall domain list metadata.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall domain list metadata.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall domain list metadata.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall domain list metadata.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall domain list metadata.</p>
     */
    inline FirewallDomainListMetadata& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall domain list metadata.</p>
     */
    inline FirewallDomainListMetadata& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall domain list metadata.</p>
     */
    inline FirewallDomainListMetadata& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline FirewallDomainListMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the domain list. </p>
     */
    inline FirewallDomainListMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain list. </p>
     */
    inline FirewallDomainListMetadata& WithName(const char* value) { SetName(value); return *this;}


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
    inline FirewallDomainListMetadata& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>A unique string defined by you to identify the request. This allows you to
     * retry failed requests without the risk of running the operation twice. This can
     * be any unique string, for example, a timestamp. </p>
     */
    inline FirewallDomainListMetadata& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>A unique string defined by you to identify the request. This allows you to
     * retry failed requests without the risk of running the operation twice. This can
     * be any unique string, for example, a timestamp. </p>
     */
    inline FirewallDomainListMetadata& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}


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
    inline FirewallDomainListMetadata& WithManagedOwnerName(const Aws::String& value) { SetManagedOwnerName(value); return *this;}

    /**
     * <p>The owner of the list, used only for lists that are not managed by you. For
     * example, the managed domain list <code>AWSManagedDomainsMalwareDomainList</code>
     * has the managed owner name <code>Route 53 Resolver DNS Firewall</code>.</p>
     */
    inline FirewallDomainListMetadata& WithManagedOwnerName(Aws::String&& value) { SetManagedOwnerName(std::move(value)); return *this;}

    /**
     * <p>The owner of the list, used only for lists that are not managed by you. For
     * example, the managed domain list <code>AWSManagedDomainsMalwareDomainList</code>
     * has the managed owner name <code>Route 53 Resolver DNS Firewall</code>.</p>
     */
    inline FirewallDomainListMetadata& WithManagedOwnerName(const char* value) { SetManagedOwnerName(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    Aws::String m_managedOwnerName;
    bool m_managedOwnerNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
