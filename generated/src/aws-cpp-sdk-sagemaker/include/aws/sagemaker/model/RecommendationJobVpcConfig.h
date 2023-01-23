/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Inference Recommender provisions SageMaker endpoints with access to VPC in
   * the inference recommendation job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RecommendationJobVpcConfig">AWS
   * API Reference</a></p>
   */
  class RecommendationJobVpcConfig
  {
  public:
    AWS_SAGEMAKER_API RecommendationJobVpcConfig();
    AWS_SAGEMAKER_API RecommendationJobVpcConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API RecommendationJobVpcConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The VPC security group IDs. IDs have the form of <code>sg-xxxxxxxx</code>.
     * Specify the security groups for the VPC that is specified in the
     * <code>Subnets</code> field.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The VPC security group IDs. IDs have the form of <code>sg-xxxxxxxx</code>.
     * Specify the security groups for the VPC that is specified in the
     * <code>Subnets</code> field.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The VPC security group IDs. IDs have the form of <code>sg-xxxxxxxx</code>.
     * Specify the security groups for the VPC that is specified in the
     * <code>Subnets</code> field.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The VPC security group IDs. IDs have the form of <code>sg-xxxxxxxx</code>.
     * Specify the security groups for the VPC that is specified in the
     * <code>Subnets</code> field.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The VPC security group IDs. IDs have the form of <code>sg-xxxxxxxx</code>.
     * Specify the security groups for the VPC that is specified in the
     * <code>Subnets</code> field.</p>
     */
    inline RecommendationJobVpcConfig& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The VPC security group IDs. IDs have the form of <code>sg-xxxxxxxx</code>.
     * Specify the security groups for the VPC that is specified in the
     * <code>Subnets</code> field.</p>
     */
    inline RecommendationJobVpcConfig& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The VPC security group IDs. IDs have the form of <code>sg-xxxxxxxx</code>.
     * Specify the security groups for the VPC that is specified in the
     * <code>Subnets</code> field.</p>
     */
    inline RecommendationJobVpcConfig& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The VPC security group IDs. IDs have the form of <code>sg-xxxxxxxx</code>.
     * Specify the security groups for the VPC that is specified in the
     * <code>Subnets</code> field.</p>
     */
    inline RecommendationJobVpcConfig& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The VPC security group IDs. IDs have the form of <code>sg-xxxxxxxx</code>.
     * Specify the security groups for the VPC that is specified in the
     * <code>Subnets</code> field.</p>
     */
    inline RecommendationJobVpcConfig& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The ID of the subnets in the VPC to which you want to connect your model.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>The ID of the subnets in the VPC to which you want to connect your model.</p>
     */
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }

    /**
     * <p>The ID of the subnets in the VPC to which you want to connect your model.</p>
     */
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>The ID of the subnets in the VPC to which you want to connect your model.</p>
     */
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }

    /**
     * <p>The ID of the subnets in the VPC to which you want to connect your model.</p>
     */
    inline RecommendationJobVpcConfig& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}

    /**
     * <p>The ID of the subnets in the VPC to which you want to connect your model.</p>
     */
    inline RecommendationJobVpcConfig& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnets in the VPC to which you want to connect your model.</p>
     */
    inline RecommendationJobVpcConfig& AddSubnets(const Aws::String& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /**
     * <p>The ID of the subnets in the VPC to which you want to connect your model.</p>
     */
    inline RecommendationJobVpcConfig& AddSubnets(Aws::String&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of the subnets in the VPC to which you want to connect your model.</p>
     */
    inline RecommendationJobVpcConfig& AddSubnets(const char* value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
