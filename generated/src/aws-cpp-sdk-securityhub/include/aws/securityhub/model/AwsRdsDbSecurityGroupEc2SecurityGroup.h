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
    AWS_SECURITYHUB_API AwsRdsDbSecurityGroupEc2SecurityGroup();
    AWS_SECURITYHUB_API AwsRdsDbSecurityGroupEc2SecurityGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsDbSecurityGroupEc2SecurityGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the ID for the EC2 security group.</p>
     */
    inline const Aws::String& GetEc2SecurityGroupId() const{ return m_ec2SecurityGroupId; }

    /**
     * <p>Specifies the ID for the EC2 security group.</p>
     */
    inline bool Ec2SecurityGroupIdHasBeenSet() const { return m_ec2SecurityGroupIdHasBeenSet; }

    /**
     * <p>Specifies the ID for the EC2 security group.</p>
     */
    inline void SetEc2SecurityGroupId(const Aws::String& value) { m_ec2SecurityGroupIdHasBeenSet = true; m_ec2SecurityGroupId = value; }

    /**
     * <p>Specifies the ID for the EC2 security group.</p>
     */
    inline void SetEc2SecurityGroupId(Aws::String&& value) { m_ec2SecurityGroupIdHasBeenSet = true; m_ec2SecurityGroupId = std::move(value); }

    /**
     * <p>Specifies the ID for the EC2 security group.</p>
     */
    inline void SetEc2SecurityGroupId(const char* value) { m_ec2SecurityGroupIdHasBeenSet = true; m_ec2SecurityGroupId.assign(value); }

    /**
     * <p>Specifies the ID for the EC2 security group.</p>
     */
    inline AwsRdsDbSecurityGroupEc2SecurityGroup& WithEc2SecurityGroupId(const Aws::String& value) { SetEc2SecurityGroupId(value); return *this;}

    /**
     * <p>Specifies the ID for the EC2 security group.</p>
     */
    inline AwsRdsDbSecurityGroupEc2SecurityGroup& WithEc2SecurityGroupId(Aws::String&& value) { SetEc2SecurityGroupId(std::move(value)); return *this;}

    /**
     * <p>Specifies the ID for the EC2 security group.</p>
     */
    inline AwsRdsDbSecurityGroupEc2SecurityGroup& WithEc2SecurityGroupId(const char* value) { SetEc2SecurityGroupId(value); return *this;}


    /**
     * <p>Specifies the name of the EC2 security group.</p>
     */
    inline const Aws::String& GetEc2SecurityGroupName() const{ return m_ec2SecurityGroupName; }

    /**
     * <p>Specifies the name of the EC2 security group.</p>
     */
    inline bool Ec2SecurityGroupNameHasBeenSet() const { return m_ec2SecurityGroupNameHasBeenSet; }

    /**
     * <p>Specifies the name of the EC2 security group.</p>
     */
    inline void SetEc2SecurityGroupName(const Aws::String& value) { m_ec2SecurityGroupNameHasBeenSet = true; m_ec2SecurityGroupName = value; }

    /**
     * <p>Specifies the name of the EC2 security group.</p>
     */
    inline void SetEc2SecurityGroupName(Aws::String&& value) { m_ec2SecurityGroupNameHasBeenSet = true; m_ec2SecurityGroupName = std::move(value); }

    /**
     * <p>Specifies the name of the EC2 security group.</p>
     */
    inline void SetEc2SecurityGroupName(const char* value) { m_ec2SecurityGroupNameHasBeenSet = true; m_ec2SecurityGroupName.assign(value); }

    /**
     * <p>Specifies the name of the EC2 security group.</p>
     */
    inline AwsRdsDbSecurityGroupEc2SecurityGroup& WithEc2SecurityGroupName(const Aws::String& value) { SetEc2SecurityGroupName(value); return *this;}

    /**
     * <p>Specifies the name of the EC2 security group.</p>
     */
    inline AwsRdsDbSecurityGroupEc2SecurityGroup& WithEc2SecurityGroupName(Aws::String&& value) { SetEc2SecurityGroupName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the EC2 security group.</p>
     */
    inline AwsRdsDbSecurityGroupEc2SecurityGroup& WithEc2SecurityGroupName(const char* value) { SetEc2SecurityGroupName(value); return *this;}


    /**
     * <p>Provides the Amazon Web Services ID of the owner of the EC2 security
     * group.</p>
     */
    inline const Aws::String& GetEc2SecurityGroupOwnerId() const{ return m_ec2SecurityGroupOwnerId; }

    /**
     * <p>Provides the Amazon Web Services ID of the owner of the EC2 security
     * group.</p>
     */
    inline bool Ec2SecurityGroupOwnerIdHasBeenSet() const { return m_ec2SecurityGroupOwnerIdHasBeenSet; }

    /**
     * <p>Provides the Amazon Web Services ID of the owner of the EC2 security
     * group.</p>
     */
    inline void SetEc2SecurityGroupOwnerId(const Aws::String& value) { m_ec2SecurityGroupOwnerIdHasBeenSet = true; m_ec2SecurityGroupOwnerId = value; }

    /**
     * <p>Provides the Amazon Web Services ID of the owner of the EC2 security
     * group.</p>
     */
    inline void SetEc2SecurityGroupOwnerId(Aws::String&& value) { m_ec2SecurityGroupOwnerIdHasBeenSet = true; m_ec2SecurityGroupOwnerId = std::move(value); }

    /**
     * <p>Provides the Amazon Web Services ID of the owner of the EC2 security
     * group.</p>
     */
    inline void SetEc2SecurityGroupOwnerId(const char* value) { m_ec2SecurityGroupOwnerIdHasBeenSet = true; m_ec2SecurityGroupOwnerId.assign(value); }

    /**
     * <p>Provides the Amazon Web Services ID of the owner of the EC2 security
     * group.</p>
     */
    inline AwsRdsDbSecurityGroupEc2SecurityGroup& WithEc2SecurityGroupOwnerId(const Aws::String& value) { SetEc2SecurityGroupOwnerId(value); return *this;}

    /**
     * <p>Provides the Amazon Web Services ID of the owner of the EC2 security
     * group.</p>
     */
    inline AwsRdsDbSecurityGroupEc2SecurityGroup& WithEc2SecurityGroupOwnerId(Aws::String&& value) { SetEc2SecurityGroupOwnerId(std::move(value)); return *this;}

    /**
     * <p>Provides the Amazon Web Services ID of the owner of the EC2 security
     * group.</p>
     */
    inline AwsRdsDbSecurityGroupEc2SecurityGroup& WithEc2SecurityGroupOwnerId(const char* value) { SetEc2SecurityGroupOwnerId(value); return *this;}


    /**
     * <p>Provides the status of the EC2 security group.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Provides the status of the EC2 security group.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Provides the status of the EC2 security group.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Provides the status of the EC2 security group.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Provides the status of the EC2 security group.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>Provides the status of the EC2 security group.</p>
     */
    inline AwsRdsDbSecurityGroupEc2SecurityGroup& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Provides the status of the EC2 security group.</p>
     */
    inline AwsRdsDbSecurityGroupEc2SecurityGroup& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Provides the status of the EC2 security group.</p>
     */
    inline AwsRdsDbSecurityGroupEc2SecurityGroup& WithStatus(const char* value) { SetStatus(value); return *this;}

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
