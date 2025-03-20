/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/S3CrtClientConfiguration.h>
#include <aws/core/Globals.h>
#include <aws/core/client/RetryStrategy.h>

namespace Aws
{
namespace S3Crt
{

static const char US_EAST_1_REGIONAL_ENDPOINT_ENV_VAR[] = "AWS_S3_US_EAST_1_REGIONAL_ENDPOINT";
static const char US_EAST_1_REGIONAL_ENDPOINT_CONFIG_VAR[] = "s3_us_east_1_regional_endpoint";
static const char S3_DISABLE_MULTIREGION_ACCESS_POINTS_ENV_VAR[] = "AWS_S3_DISABLE_MULTIREGION_ACCESS_POINTS";
static const char S3_DISABLE_MULTIREGION_ACCESS_POINTS_CONFIG_VAR[] = "s3_disable_multiregion_access_points";
static const char S3_DISABLE_EXPRESS_SESSION_ENVIRONMENT_VARIABLE[] = "AWS_S3_DISABLE_S3_EXPRESS_AUTH";
static const char S3_DISABLE_EXPRESS_SESSION_CONFIG_FILE_OPTION[] = "s3_disable_s3_express_auth";
static const char S3_USE_ARN_REGION_ENVIRONMENT_VARIABLE[] = "AWS_S3_USE_ARN_REGION";
static const char S3_USE_ARN_REGION_CONFIG_FILE_OPTION[] = "s3_use_arn_region";

void S3CrtClientConfiguration::LoadS3CrtSpecificConfig(const Aws::String& inputProfileName)
{
  if (Aws::S3Crt::US_EAST_1_REGIONAL_ENDPOINT_OPTION::NOT_SET == this->useUSEast1RegionalEndPointOption)
  {
    const Aws::String& useUSEastOption =
        BaseClientConfigClass::LoadConfigFromEnvOrProfile(US_EAST_1_REGIONAL_ENDPOINT_ENV_VAR,
                                                          inputProfileName,
                                                          US_EAST_1_REGIONAL_ENDPOINT_CONFIG_VAR,
                                                          {"legacy", "regional"},
                                                          "regional");
    if (useUSEastOption == "legacy") {
      this->useUSEast1RegionalEndPointOption = Aws::S3Crt::US_EAST_1_REGIONAL_ENDPOINT_OPTION::LEGACY;
    } else {
      this->useUSEast1RegionalEndPointOption = Aws::S3Crt::US_EAST_1_REGIONAL_ENDPOINT_OPTION::REGIONAL;
    }
  }

  Aws::String s3DisableMultiRegionAccessPoints = ClientConfiguration::LoadConfigFromEnvOrProfile(S3_DISABLE_MULTIREGION_ACCESS_POINTS_ENV_VAR,
                                                                                        inputProfileName,
                                                                                        S3_DISABLE_MULTIREGION_ACCESS_POINTS_CONFIG_VAR,
                                                                                        {"true", "false"},
                                                                                        "false");
  if (s3DisableMultiRegionAccessPoints == "true")
  {
    disableMultiRegionAccessPoints = true;
  }

  Aws::String disableS3ExpressAuthCfg = ClientConfiguration::LoadConfigFromEnvOrProfile(S3_DISABLE_EXPRESS_SESSION_ENVIRONMENT_VARIABLE,
                                                                                        inputProfileName,
                                                                                        S3_DISABLE_EXPRESS_SESSION_CONFIG_FILE_OPTION,
                                                                                        {"true", "false"},
                                                                                        "false");
  if (disableS3ExpressAuthCfg == "true")
  {
    disableS3ExpressAuth = true;
  }

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

S3CrtClientConfiguration::S3CrtClientConfiguration(const Client::ClientConfigurationInitValues &configuration)
: BaseClientConfigClass(configuration)
{
  LoadS3CrtSpecificConfig(this->profileName);
}

S3CrtClientConfiguration::S3CrtClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
: BaseClientConfigClass(inputProfileName, shouldDisableIMDS)
{
  LoadS3CrtSpecificConfig(Aws::String(inputProfileName));
}

S3CrtClientConfiguration::S3CrtClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
: BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS)
{
  LoadS3CrtSpecificConfig(this->profileName);
}

S3CrtClientConfiguration::S3CrtClientConfiguration(const Client::ClientConfiguration& config,
                               Client::AWSAuthV4Signer::PayloadSigningPolicy iPayloadSigningPolicy,
                               bool iUseVirtualAddressing,
                               US_EAST_1_REGIONAL_ENDPOINT_OPTION iUseUSEast1RegionalEndPointOption)
  : BaseClientConfigClass(config),
    useVirtualAddressing(iUseVirtualAddressing),
    useUSEast1RegionalEndPointOption(iUseUSEast1RegionalEndPointOption),
    payloadSigningPolicy(iPayloadSigningPolicy)
{
  LoadS3CrtSpecificConfig(this->profileName);
}

/* S3 CRT specifics */
S3CrtClientConfiguration::S3CrtConfigFactories S3CrtClientConfiguration::S3CrtConfigFactories::defaultFactories = []()
{
  S3CrtConfigFactories factories;

  factories.retryStrategyCreateFn = [](const S3Crt::S3CrtClientConfiguration& config) -> aws_retry_strategy*
  {
    aws_event_loop_group *el_group = config.clientBootstrap ?
      config.clientBootstrap->GetUnderlyingHandle()->event_loop_group : Aws::GetDefaultClientBootstrap()->GetUnderlyingHandle()->event_loop_group;

    using CrtRetryStrategyType = S3Crt::S3CrtClientConfiguration::CrtRetryStrategyConfig::CrtRetryStrategyType;

    CrtRetryStrategyType strategyToUse = config.crtRetryStrategyConfig.crtRetryStrategyType;

    if (strategyToUse == CrtRetryStrategyType::NOT_SET && config.retryStrategy)
    {
      if (config.retryStrategy)
      {
        if(Aws::String("standard") == config.retryStrategy->GetStrategyName())
          strategyToUse = CrtRetryStrategyType::STANDARD;
        else if(Aws::String("adaptive") == config.retryStrategy->GetStrategyName())
          strategyToUse = CrtRetryStrategyType::EXPONENTIAL_BACKOFF;
        else
          strategyToUse = CrtRetryStrategyType::DEFAULT;
      }
    }

    if (strategyToUse == CrtRetryStrategyType::DEFAULT)
    {
      return nullptr;
    }

    if (strategyToUse == CrtRetryStrategyType::STANDARD)
    {
      aws_standard_retry_options options {};
      return aws_retry_strategy_new_standard(Aws::get_aws_allocator(), &options);
    }

    if (strategyToUse == CrtRetryStrategyType::EXPONENTIAL_BACKOFF)
    {
      aws_exponential_backoff_retry_options options {};
      options.el_group = el_group,
      options.max_retries = config.crtRetryStrategyConfig.config.maxRetries;
      options.backoff_scale_factor_ms = config.crtRetryStrategyConfig.config.scaleFactorMs;
      options.max_backoff_secs = config.crtRetryStrategyConfig.config.maxBackoffSecs;
      options.jitter_mode = AWS_EXPONENTIAL_BACKOFF_JITTER_FULL;
      return aws_retry_strategy_new_exponential_backoff(Aws::get_aws_allocator(), &options);
    }

    if (strategyToUse == CrtRetryStrategyType::NO_RETRY)
    {
      aws_no_retry_options options {};
      return aws_retry_strategy_new_no_retry(Aws::get_aws_allocator(), &options);
    }

    return nullptr;
  };

  return factories;
}();
/* End of S3 CRT specifics */
} // namespace S3Crt
} // namespace Aws
