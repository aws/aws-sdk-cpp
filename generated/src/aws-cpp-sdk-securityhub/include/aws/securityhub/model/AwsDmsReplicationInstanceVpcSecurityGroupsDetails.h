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
   * <p> Provides details about the virtual private cloud (VPC) security group that’s
   * associated with the replication instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsDmsReplicationInstanceVpcSecurityGroupsDetails">AWS
   * API Reference</a></p>
   */
  class AwsDmsReplicationInstanceVpcSecurityGroupsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsDmsReplicationInstanceVpcSecurityGroupsDetails();
    AWS_SECURITYHUB_API AwsDmsReplicationInstanceVpcSecurityGroupsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsDmsReplicationInstanceVpcSecurityGroupsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The identifier of the VPC security group that’s associated with the
     * replication instance. </p>
     */
    inline const Aws::String& GetVpcSecurityGroupId() const{ return m_vpcSecurityGroupId; }

    /**
     * <p> The identifier of the VPC security group that’s associated with the
     * replication instance. </p>
     */
    inline bool VpcSecurityGroupIdHasBeenSet() const { return m_vpcSecurityGroupIdHasBeenSet; }

    /**
     * <p> The identifier of the VPC security group that’s associated with the
     * replication instance. </p>
     */
    inline void SetVpcSecurityGroupId(const Aws::String& value) { m_vpcSecurityGroupIdHasBeenSet = true; m_vpcSecurityGroupId = value; }

    /**
     * <p> The identifier of the VPC security group that’s associated with the
     * replication instance. </p>
     */
    inline void SetVpcSecurityGroupId(Aws::String&& value) { m_vpcSecurityGroupIdHasBeenSet = true; m_vpcSecurityGroupId = std::move(value); }

    /**
     * <p> The identifier of the VPC security group that’s associated with the
     * replication instance. </p>
     */
    inline void SetVpcSecurityGroupId(const char* value) { m_vpcSecurityGroupIdHasBeenSet = true; m_vpcSecurityGroupId.assign(value); }

    /**
     * <p> The identifier of the VPC security group that’s associated with the
     * replication instance. </p>
     */
    inline AwsDmsReplicationInstanceVpcSecurityGroupsDetails& WithVpcSecurityGroupId(const Aws::String& value) { SetVpcSecurityGroupId(value); return *this;}

    /**
     * <p> The identifier of the VPC security group that’s associated with the
     * replication instance. </p>
     */
    inline AwsDmsReplicationInstanceVpcSecurityGroupsDetails& WithVpcSecurityGroupId(Aws::String&& value) { SetVpcSecurityGroupId(std::move(value)); return *this;}

    /**
     * <p> The identifier of the VPC security group that’s associated with the
     * replication instance. </p>
     */
    inline AwsDmsReplicationInstanceVpcSecurityGroupsDetails& WithVpcSecurityGroupId(const char* value) { SetVpcSecurityGroupId(value); return *this;}

  private:

    Aws::String m_vpcSecurityGroupId;
    bool m_vpcSecurityGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
