/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/ShieldRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/shield/model/ProtectionGroupAggregation.h>
#include <aws/shield/model/ProtectionGroupPattern.h>
#include <aws/shield/model/ProtectedResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Shield
{
namespace Model
{

  /**
   */
  class UpdateProtectionGroupRequest : public ShieldRequest
  {
  public:
    AWS_SHIELD_API UpdateProtectionGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProtectionGroup"; }

    AWS_SHIELD_API Aws::String SerializePayload() const override;

    AWS_SHIELD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the protection group. You use this to identify the protection
     * group in lists and to manage the protection group, for example to update,
     * delete, or describe it. </p>
     */
    inline const Aws::String& GetProtectionGroupId() const { return m_protectionGroupId; }
    inline bool ProtectionGroupIdHasBeenSet() const { return m_protectionGroupIdHasBeenSet; }
    template<typename ProtectionGroupIdT = Aws::String>
    void SetProtectionGroupId(ProtectionGroupIdT&& value) { m_protectionGroupIdHasBeenSet = true; m_protectionGroupId = std::forward<ProtectionGroupIdT>(value); }
    template<typename ProtectionGroupIdT = Aws::String>
    UpdateProtectionGroupRequest& WithProtectionGroupId(ProtectionGroupIdT&& value) { SetProtectionGroupId(std::forward<ProtectionGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines how Shield combines resource data for the group in order to detect,
     * mitigate, and report events.</p> <ul> <li> <p>Sum - Use the total traffic across
     * the group. This is a good choice for most cases. Examples include Elastic IP
     * addresses for EC2 instances that scale manually or automatically.</p> </li> <li>
     * <p>Mean - Use the average of the traffic across the group. This is a good choice
     * for resources that share traffic uniformly. Examples include accelerators and
     * load balancers.</p> </li> <li> <p>Max - Use the highest traffic from each
     * resource. This is useful for resources that don't share traffic and for
     * resources that share that traffic in a non-uniform way. Examples include Amazon
     * CloudFront distributions and origin resources for CloudFront distributions.</p>
     * </li> </ul>
     */
    inline ProtectionGroupAggregation GetAggregation() const { return m_aggregation; }
    inline bool AggregationHasBeenSet() const { return m_aggregationHasBeenSet; }
    inline void SetAggregation(ProtectionGroupAggregation value) { m_aggregationHasBeenSet = true; m_aggregation = value; }
    inline UpdateProtectionGroupRequest& WithAggregation(ProtectionGroupAggregation value) { SetAggregation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The criteria to use to choose the protected resources for inclusion in the
     * group. You can include all resources that have protections, provide a list of
     * resource Amazon Resource Names (ARNs), or include all resources of a specified
     * resource type.</p>
     */
    inline ProtectionGroupPattern GetPattern() const { return m_pattern; }
    inline bool PatternHasBeenSet() const { return m_patternHasBeenSet; }
    inline void SetPattern(ProtectionGroupPattern value) { m_patternHasBeenSet = true; m_pattern = value; }
    inline UpdateProtectionGroupRequest& WithPattern(ProtectionGroupPattern value) { SetPattern(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type to include in the protection group. All protected resources
     * of this type are included in the protection group. You must set this when you
     * set <code>Pattern</code> to <code>BY_RESOURCE_TYPE</code> and you must not set
     * it for any other <code>Pattern</code> setting. </p>
     */
    inline ProtectedResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ProtectedResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline UpdateProtectionGroupRequest& WithResourceType(ProtectedResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the resources to include in the
     * protection group. You must set this when you set <code>Pattern</code> to
     * <code>ARBITRARY</code> and you must not set it for any other
     * <code>Pattern</code> setting. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMembers() const { return m_members; }
    inline bool MembersHasBeenSet() const { return m_membersHasBeenSet; }
    template<typename MembersT = Aws::Vector<Aws::String>>
    void SetMembers(MembersT&& value) { m_membersHasBeenSet = true; m_members = std::forward<MembersT>(value); }
    template<typename MembersT = Aws::Vector<Aws::String>>
    UpdateProtectionGroupRequest& WithMembers(MembersT&& value) { SetMembers(std::forward<MembersT>(value)); return *this;}
    template<typename MembersT = Aws::String>
    UpdateProtectionGroupRequest& AddMembers(MembersT&& value) { m_membersHasBeenSet = true; m_members.emplace_back(std::forward<MembersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_protectionGroupId;
    bool m_protectionGroupIdHasBeenSet = false;

    ProtectionGroupAggregation m_aggregation{ProtectionGroupAggregation::NOT_SET};
    bool m_aggregationHasBeenSet = false;

    ProtectionGroupPattern m_pattern{ProtectionGroupPattern::NOT_SET};
    bool m_patternHasBeenSet = false;

    ProtectedResourceType m_resourceType{ProtectedResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_members;
    bool m_membersHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
