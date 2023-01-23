/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/S3ControlClientConfiguration.h>

namespace Aws
{
namespace S3Control
{

static const char S3_USE_ARN_REGION_ENVIRONMENT_VARIABLE[] = "AWS_S3_USE_ARN_REGION";
static const char S3_USE_ARN_REGION_CONFIG_FILE_OPTION[] = "s3_use_arn_region";

void S3ControlClientConfiguration::LoadS3ControlSpecificConfig(const Aws::String& inputProfileName)
{
  Aws::String useArnRegionCfg = ClientConfiguration::LoadConfigFromEnvOrProfile(S3_USE_ARN_REGION_ENVIRONMENT_VARIABLE,
                                                                               inputProfileName,
                                                                               S3_USE_ARN_REGION_CONFIG_FILE_OPTION,
                                                                               {"true", "false"},
                                                                               "false");
  if (useArnRegionCfg == "true")
  {
    useArnRegion = true;
  }
}

S3ControlClientConfiguration::S3ControlClientConfiguration()
: BaseClientConfigClass()
{
  LoadS3ControlSpecificConfig(this->profileName);
}

S3ControlClientConfiguration::S3ControlClientConfiguration(const char* inputProfileName)
: BaseClientConfigClass(inputProfileName)
{
  LoadS3ControlSpecificConfig(Aws::String(inputProfileName));
}

S3ControlClientConfiguration::S3ControlClientConfiguration(bool useSmartDefaults, const char* defaultMode)
: BaseClientConfigClass(useSmartDefaults, defaultMode)
{
  LoadS3ControlSpecificConfig(this->profileName);
}

S3ControlClientConfiguration::S3ControlClientConfiguration(const Client::ClientConfiguration& config)  : BaseClientConfigClass(config){
  LoadS3ControlSpecificConfig(this->profileName);
}


} // namespace S3Control
} // namespace Aws
