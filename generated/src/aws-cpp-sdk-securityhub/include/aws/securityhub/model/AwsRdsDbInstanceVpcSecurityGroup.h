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
   * <p>A VPC security groups that the DB instance belongs to.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRdsDbInstanceVpcSecurityGroup">AWS
   * API Reference</a></p>
   */
  class AwsRdsDbInstanceVpcSecurityGroup
  {
  public:
    AWS_SECURITYHUB_API AwsRdsDbInstanceVpcSecurityGroup();
    AWS_SECURITYHUB_API AwsRdsDbInstanceVpcSecurityGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsDbInstanceVpcSecurityGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the VPC security group.</p>
     */
    inline const Aws::String& GetVpcSecurityGroupId() const{ return m_vpcSecurityGroupId; }
    inline bool VpcSecurityGroupIdHasBeenSet() const { return m_vpcSecurityGroupIdHasBeenSet; }
    inline void SetVpcSecurityGroupId(const Aws::String& value) { m_vpcSecurityGroupIdHasBeenSet = true; m_vpcSecurityGroupId = value; }
    inline void SetVpcSecurityGroupId(Aws::String&& value) { m_vpcSecurityGroupIdHasBeenSet = true; m_vpcSecurityGroupId = std::move(value); }
    inline void SetVpcSecurityGroupId(const char* value) { m_vpcSecurityGroupIdHasBeenSet = true; m_vpcSecurityGroupId.assign(value); }
    inline AwsRdsDbInstanceVpcSecurityGroup& WithVpcSecurityGroupId(const Aws::String& value) { SetVpcSecurityGroupId(value); return *this;}
    inline AwsRdsDbInstanceVpcSecurityGroup& WithVpcSecurityGroupId(Aws::String&& value) { SetVpcSecurityGroupId(std::move(value)); return *this;}
    inline AwsRdsDbInstanceVpcSecurityGroup& WithVpcSecurityGroupId(const char* value) { SetVpcSecurityGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the VPC security group.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline AwsRdsDbInstanceVpcSecurityGroup& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline AwsRdsDbInstanceVpcSecurityGroup& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline AwsRdsDbInstanceVpcSecurityGroup& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_vpcSecurityGroupId;
    bool m_vpcSecurityGroupIdHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
