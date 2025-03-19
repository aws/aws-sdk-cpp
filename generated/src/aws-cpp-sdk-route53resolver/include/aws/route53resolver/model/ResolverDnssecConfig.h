/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/ResolverDNSSECValidationStatus.h>
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
   * <p>A complex type that contains information about a configuration for DNSSEC
   * validation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ResolverDnssecConfig">AWS
   * API Reference</a></p>
   */
  class ResolverDnssecConfig
  {
  public:
    AWS_ROUTE53RESOLVER_API ResolverDnssecConfig() = default;
    AWS_ROUTE53RESOLVER_API ResolverDnssecConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API ResolverDnssecConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID for a configuration for DNSSEC validation.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ResolverDnssecConfig& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner account ID of the virtual private cloud (VPC) for a configuration
     * for DNSSEC validation.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    ResolverDnssecConfig& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the virtual private cloud (VPC) that you're configuring the DNSSEC
     * validation status for.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    ResolverDnssecConfig& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validation status for a DNSSEC configuration. The status can be one of
     * the following:</p> <ul> <li> <p> <b>ENABLING:</b> DNSSEC validation is being
     * enabled but is not complete.</p> </li> <li> <p> <b>ENABLED:</b> DNSSEC
     * validation is enabled.</p> </li> <li> <p> <b>DISABLING:</b> DNSSEC validation is
     * being disabled but is not complete.</p> </li> <li> <p> <b>DISABLED</b> DNSSEC
     * validation is disabled.</p> </li> </ul>
     */
    inline ResolverDNSSECValidationStatus GetValidationStatus() const { return m_validationStatus; }
    inline bool ValidationStatusHasBeenSet() const { return m_validationStatusHasBeenSet; }
    inline void SetValidationStatus(ResolverDNSSECValidationStatus value) { m_validationStatusHasBeenSet = true; m_validationStatus = value; }
    inline ResolverDnssecConfig& WithValidationStatus(ResolverDNSSECValidationStatus value) { SetValidationStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    ResolverDNSSECValidationStatus m_validationStatus{ResolverDNSSECValidationStatus::NOT_SET};
    bool m_validationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
