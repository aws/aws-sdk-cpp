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
   * <p> The virtual private cloud (VPC) configuration for an Amazon S3 access point.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3AccessPointVpcConfigurationDetails">AWS
   * API Reference</a></p>
   */
  class AwsS3AccessPointVpcConfigurationDetails
  {
  public:
    AWS_SECURITYHUB_API AwsS3AccessPointVpcConfigurationDetails();
    AWS_SECURITYHUB_API AwsS3AccessPointVpcConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3AccessPointVpcConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> If this field is specified, this access point will only allow connections
     * from the specified VPC ID. </p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p> If this field is specified, this access point will only allow connections
     * from the specified VPC ID. </p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p> If this field is specified, this access point will only allow connections
     * from the specified VPC ID. </p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p> If this field is specified, this access point will only allow connections
     * from the specified VPC ID. </p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p> If this field is specified, this access point will only allow connections
     * from the specified VPC ID. </p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p> If this field is specified, this access point will only allow connections
     * from the specified VPC ID. </p>
     */
    inline AwsS3AccessPointVpcConfigurationDetails& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p> If this field is specified, this access point will only allow connections
     * from the specified VPC ID. </p>
     */
    inline AwsS3AccessPointVpcConfigurationDetails& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p> If this field is specified, this access point will only allow connections
     * from the specified VPC ID. </p>
     */
    inline AwsS3AccessPointVpcConfigurationDetails& WithVpcId(const char* value) { SetVpcId(value); return *this;}

  private:

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
