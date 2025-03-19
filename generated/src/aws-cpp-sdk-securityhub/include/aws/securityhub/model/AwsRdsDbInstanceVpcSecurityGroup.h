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
    AWS_SECURITYHUB_API AwsRdsDbInstanceVpcSecurityGroup() = default;
    AWS_SECURITYHUB_API AwsRdsDbInstanceVpcSecurityGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsDbInstanceVpcSecurityGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the VPC security group.</p>
     */
    inline const Aws::String& GetVpcSecurityGroupId() const { return m_vpcSecurityGroupId; }
    inline bool VpcSecurityGroupIdHasBeenSet() const { return m_vpcSecurityGroupIdHasBeenSet; }
    template<typename VpcSecurityGroupIdT = Aws::String>
    void SetVpcSecurityGroupId(VpcSecurityGroupIdT&& value) { m_vpcSecurityGroupIdHasBeenSet = true; m_vpcSecurityGroupId = std::forward<VpcSecurityGroupIdT>(value); }
    template<typename VpcSecurityGroupIdT = Aws::String>
    AwsRdsDbInstanceVpcSecurityGroup& WithVpcSecurityGroupId(VpcSecurityGroupIdT&& value) { SetVpcSecurityGroupId(std::forward<VpcSecurityGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the VPC security group.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    AwsRdsDbInstanceVpcSecurityGroup& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
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
