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
   * <p>EC2 security group information for an RDS DB security group.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRdsDbSecurityGroupEc2SecurityGroup">AWS
   * API Reference</a></p>
   */
  class AwsRdsDbSecurityGroupEc2SecurityGroup
  {
  public:
    AWS_SECURITYHUB_API AwsRdsDbSecurityGroupEc2SecurityGroup() = default;
    AWS_SECURITYHUB_API AwsRdsDbSecurityGroupEc2SecurityGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsDbSecurityGroupEc2SecurityGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the ID for the EC2 security group.</p>
     */
    inline const Aws::String& GetEc2SecurityGroupId() const { return m_ec2SecurityGroupId; }
    inline bool Ec2SecurityGroupIdHasBeenSet() const { return m_ec2SecurityGroupIdHasBeenSet; }
    template<typename Ec2SecurityGroupIdT = Aws::String>
    void SetEc2SecurityGroupId(Ec2SecurityGroupIdT&& value) { m_ec2SecurityGroupIdHasBeenSet = true; m_ec2SecurityGroupId = std::forward<Ec2SecurityGroupIdT>(value); }
    template<typename Ec2SecurityGroupIdT = Aws::String>
    AwsRdsDbSecurityGroupEc2SecurityGroup& WithEc2SecurityGroupId(Ec2SecurityGroupIdT&& value) { SetEc2SecurityGroupId(std::forward<Ec2SecurityGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the EC2 security group.</p>
     */
    inline const Aws::String& GetEc2SecurityGroupName() const { return m_ec2SecurityGroupName; }
    inline bool Ec2SecurityGroupNameHasBeenSet() const { return m_ec2SecurityGroupNameHasBeenSet; }
    template<typename Ec2SecurityGroupNameT = Aws::String>
    void SetEc2SecurityGroupName(Ec2SecurityGroupNameT&& value) { m_ec2SecurityGroupNameHasBeenSet = true; m_ec2SecurityGroupName = std::forward<Ec2SecurityGroupNameT>(value); }
    template<typename Ec2SecurityGroupNameT = Aws::String>
    AwsRdsDbSecurityGroupEc2SecurityGroup& WithEc2SecurityGroupName(Ec2SecurityGroupNameT&& value) { SetEc2SecurityGroupName(std::forward<Ec2SecurityGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the Amazon Web Services ID of the owner of the EC2 security
     * group.</p>
     */
    inline const Aws::String& GetEc2SecurityGroupOwnerId() const { return m_ec2SecurityGroupOwnerId; }
    inline bool Ec2SecurityGroupOwnerIdHasBeenSet() const { return m_ec2SecurityGroupOwnerIdHasBeenSet; }
    template<typename Ec2SecurityGroupOwnerIdT = Aws::String>
    void SetEc2SecurityGroupOwnerId(Ec2SecurityGroupOwnerIdT&& value) { m_ec2SecurityGroupOwnerIdHasBeenSet = true; m_ec2SecurityGroupOwnerId = std::forward<Ec2SecurityGroupOwnerIdT>(value); }
    template<typename Ec2SecurityGroupOwnerIdT = Aws::String>
    AwsRdsDbSecurityGroupEc2SecurityGroup& WithEc2SecurityGroupOwnerId(Ec2SecurityGroupOwnerIdT&& value) { SetEc2SecurityGroupOwnerId(std::forward<Ec2SecurityGroupOwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the status of the EC2 security group.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    AwsRdsDbSecurityGroupEc2SecurityGroup& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ec2SecurityGroupId;
    bool m_ec2SecurityGroupIdHasBeenSet = false;

    Aws::String m_ec2SecurityGroupName;
    bool m_ec2SecurityGroupNameHasBeenSet = false;

    Aws::String m_ec2SecurityGroupOwnerId;
    bool m_ec2SecurityGroupOwnerIdHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
