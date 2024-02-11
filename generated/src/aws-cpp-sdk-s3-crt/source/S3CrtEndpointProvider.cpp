/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/S3CrtEndpointProvider.h>

namespace Aws
{
#ifndef AWS_S3CRT_EXPORTS // Except for Windows DLL
namespace Endpoint
{
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<S3Crt::Endpoint::S3CrtClientConfiguration,
    S3Crt::Endpoint::S3CrtBuiltInParameters,
    S3Crt::Endpoint::S3CrtClientContextParameters>;

template class Aws::Endpoint::DefaultEndpointProvider<S3Crt::Endpoint::S3CrtClientConfiguration,
    S3Crt::Endpoint::S3CrtBuiltInParameters,
    S3Crt::Endpoint::S3CrtClientContextParameters>;
} // namespace Endpoint
#endif

namespace S3Crt
{
namespace Endpoint
{
  void S3CrtClientContextParameters::SetForcePathStyle(bool value)
  {
    return SetBooleanParameter(Aws::String("ForcePathStyle"), value);
  }
  const S3CrtClientContextParameters::ClientContextParameters::EndpointParameter& S3CrtClientContextParameters::GetForcePathStyle() const
  {
    return GetParameter("ForcePathStyle");
  }
  void S3CrtClientContextParameters::SetDisableMultiRegionAccessPoints(bool value)
  {
    return SetBooleanParameter(Aws::String("DisableMultiRegionAccessPoints"), value);
  }
  const S3CrtClientContextParameters::ClientContextParameters::EndpointParameter& S3CrtClientContextParameters::GetDisableMultiRegionAccessPoints() const
  {
    return GetParameter("DisableMultiRegionAccessPoints");
  }
  void S3CrtClientContextParameters::SetUseArnRegion(bool value)
  {
    return SetBooleanParameter(Aws::String("UseArnRegion"), value);
  }
  const S3CrtClientContextParameters::ClientContextParameters::EndpointParameter& S3CrtClientContextParameters::GetUseArnRegion() const
  {
    return GetParameter("UseArnRegion");
  }
  void S3CrtClientContextParameters::SetAccelerate(bool value)
  {
    return SetBooleanParameter(Aws::String("Accelerate"), value);
  }
  const S3CrtClientContextParameters::ClientContextParameters::EndpointParameter& S3CrtClientContextParameters::GetAccelerate() const
  {
    return GetParameter("Accelerate");
  }
  void S3CrtClientContextParameters::SetDisableS3ExpressSessionAuth(bool value)
  {
    return SetBooleanParameter(Aws::String("DisableS3ExpressSessionAuth"), value);
  }
  const S3CrtClientContextParameters::ClientContextParameters::EndpointParameter& S3CrtClientContextParameters::GetDisableS3ExpressSessionAuth() const
  {
    return GetParameter("DisableS3ExpressSessionAuth");
  }
  void S3CrtBuiltInParameters::SetFromClientConfiguration(const S3CrtClientConfiguration& config)
  {
    SetFromClientConfiguration(static_cast<const S3CrtClientConfiguration::BaseClientConfigClass&>(config));

    static const char* AWS_S3_USE_GLOBAL_ENDPOINT = "UseGlobalEndpoint";
    if (config.useUSEast1RegionalEndPointOption == US_EAST_1_REGIONAL_ENDPOINT_OPTION::LEGACY) {
      SetBooleanParameter(AWS_S3_USE_GLOBAL_ENDPOINT, true);
    }

    // Not supported by this SDK:
    // static const char* AWS_S3_ACCELERATE = "Accelerate";
    // static const char* AWS_S3_FORCE_PATH_STYLE = "ForcePathStyle";

    static const char* AWS_S3_USE_ARN_REGION = "UseArnRegion";
    SetBooleanParameter(AWS_S3_USE_ARN_REGION, config.useArnRegion);

    static const char* AWS_S3_DISABLE_MRAP = "DisableMultiRegionAccessPoints";
    SetBooleanParameter(AWS_S3_DISABLE_MRAP, config.disableMultiRegionAccessPoints);

    static const char* AWS_S3_FORCE_PATH_STYLE = "ForcePathStyle";
    if (!config.useVirtualAddressing) {
      SetBooleanParameter(AWS_S3_FORCE_PATH_STYLE, true);
    }

    static const char* AWS_S3_DISABLE_EXPRESS_AUTH = "DisableS3ExpressSessionAuth";
    if(config.disableS3ExpressAuth) {
      SetBooleanParameter(AWS_S3_DISABLE_EXPRESS_AUTH, true);
    }
  }
} // namespace Endpoint
} // namespace S3Crt
} // namespace Aws
