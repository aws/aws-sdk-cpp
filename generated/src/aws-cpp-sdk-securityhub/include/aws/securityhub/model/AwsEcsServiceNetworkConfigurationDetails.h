/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails.h>
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
   * <p>For tasks that use the <code>awsvpc</code> networking mode, the VPC subnet
   * and security group configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsServiceNetworkConfigurationDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsServiceNetworkConfigurationDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsServiceNetworkConfigurationDetails();
    AWS_SECURITYHUB_API AwsEcsServiceNetworkConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsServiceNetworkConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The VPC subnet and security group configuration.</p>
     */
    inline const AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails& GetAwsVpcConfiguration() const{ return m_awsVpcConfiguration; }

    /**
     * <p>The VPC subnet and security group configuration.</p>
     */
    inline bool AwsVpcConfigurationHasBeenSet() const { return m_awsVpcConfigurationHasBeenSet; }

    /**
     * <p>The VPC subnet and security group configuration.</p>
     */
    inline void SetAwsVpcConfiguration(const AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails& value) { m_awsVpcConfigurationHasBeenSet = true; m_awsVpcConfiguration = value; }

    /**
     * <p>The VPC subnet and security group configuration.</p>
     */
    inline void SetAwsVpcConfiguration(AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails&& value) { m_awsVpcConfigurationHasBeenSet = true; m_awsVpcConfiguration = std::move(value); }

    /**
     * <p>The VPC subnet and security group configuration.</p>
     */
    inline AwsEcsServiceNetworkConfigurationDetails& WithAwsVpcConfiguration(const AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails& value) { SetAwsVpcConfiguration(value); return *this;}

    /**
     * <p>The VPC subnet and security group configuration.</p>
     */
    inline AwsEcsServiceNetworkConfigurationDetails& WithAwsVpcConfiguration(AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails&& value) { SetAwsVpcConfiguration(std::move(value)); return *this;}

  private:

    AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails m_awsVpcConfiguration;
    bool m_awsVpcConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
