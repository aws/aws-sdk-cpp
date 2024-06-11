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
    AWS_SECURITYHUB_API AwsElbLoadBalancerSourceSecurityGroup();
    AWS_SECURITYHUB_API AwsElbLoadBalancerSourceSecurityGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElbLoadBalancerSourceSecurityGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the security group.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }
    inline AwsElbLoadBalancerSourceSecurityGroup& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}
    inline AwsElbLoadBalancerSourceSecurityGroup& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}
    inline AwsElbLoadBalancerSourceSecurityGroup& WithGroupName(const char* value) { SetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the security group.</p>
     */
    inline const Aws::String& GetOwnerAlias() const{ return m_ownerAlias; }
    inline bool OwnerAliasHasBeenSet() const { return m_ownerAliasHasBeenSet; }
    inline void SetOwnerAlias(const Aws::String& value) { m_ownerAliasHasBeenSet = true; m_ownerAlias = value; }
    inline void SetOwnerAlias(Aws::String&& value) { m_ownerAliasHasBeenSet = true; m_ownerAlias = std::move(value); }
    inline void SetOwnerAlias(const char* value) { m_ownerAliasHasBeenSet = true; m_ownerAlias.assign(value); }
    inline AwsElbLoadBalancerSourceSecurityGroup& WithOwnerAlias(const Aws::String& value) { SetOwnerAlias(value); return *this;}
    inline AwsElbLoadBalancerSourceSecurityGroup& WithOwnerAlias(Aws::String&& value) { SetOwnerAlias(std::move(value)); return *this;}
    inline AwsElbLoadBalancerSourceSecurityGroup& WithOwnerAlias(const char* value) { SetOwnerAlias(value); return *this;}
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
