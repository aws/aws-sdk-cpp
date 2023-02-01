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
  class DisassociateResolverQueryLogConfigRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API DisassociateResolverQueryLogConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateResolverQueryLogConfig"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the query logging configuration that you want to disassociate a
     * specified VPC from.</p>
     */
    inline const Aws::String& GetResolverQueryLogConfigId() const{ return m_resolverQueryLogConfigId; }

    /**
     * <p>The ID of the query logging configuration that you want to disassociate a
     * specified VPC from.</p>
     */
    inline bool ResolverQueryLogConfigIdHasBeenSet() const { return m_resolverQueryLogConfigIdHasBeenSet; }

    /**
     * <p>The ID of the query logging configuration that you want to disassociate a
     * specified VPC from.</p>
     */
    inline void SetResolverQueryLogConfigId(const Aws::String& value) { m_resolverQueryLogConfigIdHasBeenSet = true; m_resolverQueryLogConfigId = value; }

    /**
     * <p>The ID of the query logging configuration that you want to disassociate a
     * specified VPC from.</p>
     */
    inline void SetResolverQueryLogConfigId(Aws::String&& value) { m_resolverQueryLogConfigIdHasBeenSet = true; m_resolverQueryLogConfigId = std::move(value); }

    /**
     * <p>The ID of the query logging configuration that you want to disassociate a
     * specified VPC from.</p>
     */
    inline void SetResolverQueryLogConfigId(const char* value) { m_resolverQueryLogConfigIdHasBeenSet = true; m_resolverQueryLogConfigId.assign(value); }

    /**
     * <p>The ID of the query logging configuration that you want to disassociate a
     * specified VPC from.</p>
     */
    inline DisassociateResolverQueryLogConfigRequest& WithResolverQueryLogConfigId(const Aws::String& value) { SetResolverQueryLogConfigId(value); return *this;}

    /**
     * <p>The ID of the query logging configuration that you want to disassociate a
     * specified VPC from.</p>
     */
    inline DisassociateResolverQueryLogConfigRequest& WithResolverQueryLogConfigId(Aws::String&& value) { SetResolverQueryLogConfigId(std::move(value)); return *this;}

    /**
     * <p>The ID of the query logging configuration that you want to disassociate a
     * specified VPC from.</p>
     */
    inline DisassociateResolverQueryLogConfigRequest& WithResolverQueryLogConfigId(const char* value) { SetResolverQueryLogConfigId(value); return *this;}


    /**
     * <p>The ID of the Amazon VPC that you want to disassociate from a specified query
     * logging configuration.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the Amazon VPC that you want to disassociate from a specified query
     * logging configuration.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon VPC that you want to disassociate from a specified query
     * logging configuration.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the Amazon VPC that you want to disassociate from a specified query
     * logging configuration.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the Amazon VPC that you want to disassociate from a specified query
     * logging configuration.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the Amazon VPC that you want to disassociate from a specified query
     * logging configuration.</p>
     */
    inline DisassociateResolverQueryLogConfigRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the Amazon VPC that you want to disassociate from a specified query
     * logging configuration.</p>
     */
    inline DisassociateResolverQueryLogConfigRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon VPC that you want to disassociate from a specified query
     * logging configuration.</p>
     */
    inline DisassociateResolverQueryLogConfigRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}

  private:

    Aws::String m_resolverQueryLogConfigId;
    bool m_resolverQueryLogConfigIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
