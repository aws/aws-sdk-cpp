/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class CreateFirewallDomainListRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API CreateFirewallDomainListRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFirewallDomainList"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique string that identifies the request and that allows you to retry
     * failed requests without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }

    /**
     * <p>A unique string that identifies the request and that allows you to retry
     * failed requests without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }

    /**
     * <p>A unique string that identifies the request and that allows you to retry
     * failed requests without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }

    /**
     * <p>A unique string that identifies the request and that allows you to retry
     * failed requests without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }

    /**
     * <p>A unique string that identifies the request and that allows you to retry
     * failed requests without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }

    /**
     * <p>A unique string that identifies the request and that allows you to retry
     * failed requests without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline CreateFirewallDomainListRequest& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows you to retry
     * failed requests without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline CreateFirewallDomainListRequest& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows you to retry
     * failed requests without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline CreateFirewallDomainListRequest& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}


    /**
     * <p>A name that lets you identify the domain list to manage and use it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name that lets you identify the domain list to manage and use it.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name that lets you identify the domain list to manage and use it.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name that lets you identify the domain list to manage and use it.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name that lets you identify the domain list to manage and use it.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name that lets you identify the domain list to manage and use it.</p>
     */
    inline CreateFirewallDomainListRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name that lets you identify the domain list to manage and use it.</p>
     */
    inline CreateFirewallDomainListRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name that lets you identify the domain list to manage and use it.</p>
     */
    inline CreateFirewallDomainListRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A list of the tag keys and values that you want to associate with the domain
     * list. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of the tag keys and values that you want to associate with the domain
     * list. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of the tag keys and values that you want to associate with the domain
     * list. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of the tag keys and values that you want to associate with the domain
     * list. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of the tag keys and values that you want to associate with the domain
     * list. </p>
     */
    inline CreateFirewallDomainListRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of the tag keys and values that you want to associate with the domain
     * list. </p>
     */
    inline CreateFirewallDomainListRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of the tag keys and values that you want to associate with the domain
     * list. </p>
     */
    inline CreateFirewallDomainListRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of the tag keys and values that you want to associate with the domain
     * list. </p>
     */
    inline CreateFirewallDomainListRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
