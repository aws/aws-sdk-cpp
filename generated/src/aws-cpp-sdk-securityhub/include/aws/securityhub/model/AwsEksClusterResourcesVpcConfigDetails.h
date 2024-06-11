﻿/**
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


    ///@{
    /**
     * <p>The security groups that are associated with the cross-account elastic
     * network interfaces that are used to allow communication between your nodes and
     * the Amazon EKS control plane.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }
    inline AwsEksClusterResourcesVpcConfigDetails& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline AwsEksClusterResourcesVpcConfigDetails& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline AwsEksClusterResourcesVpcConfigDetails& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    inline AwsEksClusterResourcesVpcConfigDetails& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline AwsEksClusterResourcesVpcConfigDetails& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The subnets that are associated with the cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }
    inline AwsEksClusterResourcesVpcConfigDetails& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline AwsEksClusterResourcesVpcConfigDetails& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline AwsEksClusterResourcesVpcConfigDetails& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    inline AwsEksClusterResourcesVpcConfigDetails& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }
    inline AwsEksClusterResourcesVpcConfigDetails& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> Indicates whether the Amazon EKS public API server endpoint is turned on. If
     * the Amazon EKS public API server endpoint is turned off, your cluster's
     * Kubernetes API server can only receive requests that originate from within the
     * cluster VPC. </p>
     */
    inline bool GetEndpointPublicAccess() const{ return m_endpointPublicAccess; }
    inline bool EndpointPublicAccessHasBeenSet() const { return m_endpointPublicAccessHasBeenSet; }
    inline void SetEndpointPublicAccess(bool value) { m_endpointPublicAccessHasBeenSet = true; m_endpointPublicAccess = value; }
    inline AwsEksClusterResourcesVpcConfigDetails& WithEndpointPublicAccess(bool value) { SetEndpointPublicAccess(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    bool m_endpointPublicAccess;
    bool m_endpointPublicAccessHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
