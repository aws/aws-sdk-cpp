/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class GetResolverQueryLogConfigAssociationRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API GetResolverQueryLogConfigAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResolverQueryLogConfigAssociation"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Resolver query logging configuration association that you want
     * to get information about.</p>
     */
    inline const Aws::String& GetResolverQueryLogConfigAssociationId() const{ return m_resolverQueryLogConfigAssociationId; }

    /**
     * <p>The ID of the Resolver query logging configuration association that you want
     * to get information about.</p>
     */
    inline bool ResolverQueryLogConfigAssociationIdHasBeenSet() const { return m_resolverQueryLogConfigAssociationIdHasBeenSet; }

    /**
     * <p>The ID of the Resolver query logging configuration association that you want
     * to get information about.</p>
     */
    inline void SetResolverQueryLogConfigAssociationId(const Aws::String& value) { m_resolverQueryLogConfigAssociationIdHasBeenSet = true; m_resolverQueryLogConfigAssociationId = value; }

    /**
     * <p>The ID of the Resolver query logging configuration association that you want
     * to get information about.</p>
     */
    inline void SetResolverQueryLogConfigAssociationId(Aws::String&& value) { m_resolverQueryLogConfigAssociationIdHasBeenSet = true; m_resolverQueryLogConfigAssociationId = std::move(value); }

    /**
     * <p>The ID of the Resolver query logging configuration association that you want
     * to get information about.</p>
     */
    inline void SetResolverQueryLogConfigAssociationId(const char* value) { m_resolverQueryLogConfigAssociationIdHasBeenSet = true; m_resolverQueryLogConfigAssociationId.assign(value); }

    /**
     * <p>The ID of the Resolver query logging configuration association that you want
     * to get information about.</p>
     */
    inline GetResolverQueryLogConfigAssociationRequest& WithResolverQueryLogConfigAssociationId(const Aws::String& value) { SetResolverQueryLogConfigAssociationId(value); return *this;}

    /**
     * <p>The ID of the Resolver query logging configuration association that you want
     * to get information about.</p>
     */
    inline GetResolverQueryLogConfigAssociationRequest& WithResolverQueryLogConfigAssociationId(Aws::String&& value) { SetResolverQueryLogConfigAssociationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Resolver query logging configuration association that you want
     * to get information about.</p>
     */
    inline GetResolverQueryLogConfigAssociationRequest& WithResolverQueryLogConfigAssociationId(const char* value) { SetResolverQueryLogConfigAssociationId(value); return *this;}

  private:

    Aws::String m_resolverQueryLogConfigAssociationId;
    bool m_resolverQueryLogConfigAssociationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
