/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Contains information about the security group for the load
   * balancer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsElbLoadBalancerSourceSecurityGroup">AWS
   * API Reference</a></p>
   */
  class AwsElbLoadBalancerSourceSecurityGroup
  {
  public:
    AWS_SECURITYHUB_API AwsElbLoadBalancerSourceSecurityGroup() = default;
    AWS_SECURITYHUB_API AwsElbLoadBalancerSourceSecurityGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElbLoadBalancerSourceSecurityGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the security group.</p>
     */
    inline const Aws::String& GetGroupName() const { return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    template<typename GroupNameT = Aws::String>
    void SetGroupName(GroupNameT&& value) { m_groupNameHasBeenSet = true; m_groupName = std::forward<GroupNameT>(value); }
    template<typename GroupNameT = Aws::String>
    AwsElbLoadBalancerSourceSecurityGroup& WithGroupName(GroupNameT&& value) { SetGroupName(std::forward<GroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the security group.</p>
     */
    inline const Aws::String& GetOwnerAlias() const { return m_ownerAlias; }
    inline bool OwnerAliasHasBeenSet() const { return m_ownerAliasHasBeenSet; }
    template<typename OwnerAliasT = Aws::String>
    void SetOwnerAlias(OwnerAliasT&& value) { m_ownerAliasHasBeenSet = true; m_ownerAlias = std::forward<OwnerAliasT>(value); }
    template<typename OwnerAliasT = Aws::String>
    AwsElbLoadBalancerSourceSecurityGroup& WithOwnerAlias(OwnerAliasT&& value) { SetOwnerAlias(std::forward<OwnerAliasT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_ownerAlias;
    bool m_ownerAliasHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
