/**
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
    AWS_ROUTE53RESOLVER_API ResolverConfig() = default;
    AWS_ROUTE53RESOLVER_API ResolverConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API ResolverConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ID for the Resolver configuration.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ResolverConfig& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Virtual Private Cloud VPC or a Route 53 Profile that
     * you're configuring Resolver for.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    ResolverConfig& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner account ID of the Amazon Virtual Private Cloud VPC.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    ResolverConfig& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
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
    inline ResolverAutodefinedReverseStatus GetAutodefinedReverse() const { return m_autodefinedReverse; }
    inline bool AutodefinedReverseHasBeenSet() const { return m_autodefinedReverseHasBeenSet; }
    inline void SetAutodefinedReverse(ResolverAutodefinedReverseStatus value) { m_autodefinedReverseHasBeenSet = true; m_autodefinedReverse = value; }
    inline ResolverConfig& WithAutodefinedReverse(ResolverAutodefinedReverseStatus value) { SetAutodefinedReverse(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    ResolverAutodefinedReverseStatus m_autodefinedReverse{ResolverAutodefinedReverseStatus::NOT_SET};
    bool m_autodefinedReverseHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
