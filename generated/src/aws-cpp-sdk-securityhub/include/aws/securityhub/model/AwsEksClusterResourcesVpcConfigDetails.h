/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Information about the VPC configuration used by the cluster control
   * plane.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEksClusterResourcesVpcConfigDetails">AWS
   * API Reference</a></p>
   */
  class AwsEksClusterResourcesVpcConfigDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEksClusterResourcesVpcConfigDetails();
    AWS_SECURITYHUB_API AwsEksClusterResourcesVpcConfigDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEksClusterResourcesVpcConfigDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The security groups that are associated with the cross-account elastic
     * network interfaces that are used to allow communication between your nodes and
     * the Amazon EKS control plane.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The security groups that are associated with the cross-account elastic
     * network interfaces that are used to allow communication between your nodes and
     * the Amazon EKS control plane.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The security groups that are associated with the cross-account elastic
     * network interfaces that are used to allow communication between your nodes and
     * the Amazon EKS control plane.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The security groups that are associated with the cross-account elastic
     * network interfaces that are used to allow communication between your nodes and
     * the Amazon EKS control plane.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The security groups that are associated with the cross-account elastic
     * network interfaces that are used to allow communication between your nodes and
     * the Amazon EKS control plane.</p>
     */
    inline AwsEksClusterResourcesVpcConfigDetails& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The security groups that are associated with the cross-account elastic
     * network interfaces that are used to allow communication between your nodes and
     * the Amazon EKS control plane.</p>
     */
    inline AwsEksClusterResourcesVpcConfigDetails& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The security groups that are associated with the cross-account elastic
     * network interfaces that are used to allow communication between your nodes and
     * the Amazon EKS control plane.</p>
     */
    inline AwsEksClusterResourcesVpcConfigDetails& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The security groups that are associated with the cross-account elastic
     * network interfaces that are used to allow communication between your nodes and
     * the Amazon EKS control plane.</p>
     */
    inline AwsEksClusterResourcesVpcConfigDetails& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The security groups that are associated with the cross-account elastic
     * network interfaces that are used to allow communication between your nodes and
     * the Amazon EKS control plane.</p>
     */
    inline AwsEksClusterResourcesVpcConfigDetails& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The subnets that are associated with the cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The subnets that are associated with the cluster.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>The subnets that are associated with the cluster.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The subnets that are associated with the cluster.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>The subnets that are associated with the cluster.</p>
     */
    inline AwsEksClusterResourcesVpcConfigDetails& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The subnets that are associated with the cluster.</p>
     */
    inline AwsEksClusterResourcesVpcConfigDetails& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The subnets that are associated with the cluster.</p>
     */
    inline AwsEksClusterResourcesVpcConfigDetails& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The subnets that are associated with the cluster.</p>
     */
    inline AwsEksClusterResourcesVpcConfigDetails& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The subnets that are associated with the cluster.</p>
     */
    inline AwsEksClusterResourcesVpcConfigDetails& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
