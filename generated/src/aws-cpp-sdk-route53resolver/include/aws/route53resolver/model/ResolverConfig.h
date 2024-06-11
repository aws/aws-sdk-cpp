﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/ResolverAutodefinedReverseStatus.h>
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
   * <p>A complex type that contains information about a Resolver configuration for a
   * VPC.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ResolverConfig">AWS
   * API Reference</a></p>
   */
  class ResolverConfig
  {
  public:
    AWS_ROUTE53RESOLVER_API ResolverConfig();
    AWS_ROUTE53RESOLVER_API ResolverConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API ResolverConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ID for the Resolver configuration.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ResolverConfig& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ResolverConfig& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ResolverConfig& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Virtual Private Cloud VPC that you're configuring
     * Resolver for.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline ResolverConfig& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline ResolverConfig& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline ResolverConfig& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner account ID of the Amazon Virtual Private Cloud VPC.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline ResolverConfig& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline ResolverConfig& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline ResolverConfig& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of whether or not the Resolver will create autodefined rules for
     * reverse DNS lookups. This is enabled by default. The status can be one of
     * following:</p> <ul> <li> <p> <b>ENABLING:</b> Autodefined rules for reverse DNS
     * lookups are being enabled but are not complete.</p> </li> <li> <p>
     * <b>ENABLED:</b> Autodefined rules for reverse DNS lookups are enabled.</p> </li>
     * <li> <p> <b>DISABLING:</b> Autodefined rules for reverse DNS lookups are being
     * disabled but are not complete.</p> </li> <li> <p> <b>DISABLED:</b> Autodefined
     * rules for reverse DNS lookups are disabled.</p> </li> </ul>
     */
    inline const ResolverAutodefinedReverseStatus& GetAutodefinedReverse() const{ return m_autodefinedReverse; }
    inline bool AutodefinedReverseHasBeenSet() const { return m_autodefinedReverseHasBeenSet; }
    inline void SetAutodefinedReverse(const ResolverAutodefinedReverseStatus& value) { m_autodefinedReverseHasBeenSet = true; m_autodefinedReverse = value; }
    inline void SetAutodefinedReverse(ResolverAutodefinedReverseStatus&& value) { m_autodefinedReverseHasBeenSet = true; m_autodefinedReverse = std::move(value); }
    inline ResolverConfig& WithAutodefinedReverse(const ResolverAutodefinedReverseStatus& value) { SetAutodefinedReverse(value); return *this;}
    inline ResolverConfig& WithAutodefinedReverse(ResolverAutodefinedReverseStatus&& value) { SetAutodefinedReverse(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    ResolverAutodefinedReverseStatus m_autodefinedReverse;
    bool m_autodefinedReverseHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
