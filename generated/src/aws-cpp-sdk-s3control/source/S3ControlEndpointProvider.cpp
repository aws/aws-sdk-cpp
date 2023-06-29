/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/S3ControlEndpointProvider.h>

namespace Aws
{
#ifndef AWS_S3CONTROL_EXPORTS // Except for Windows DLL
namespace Endpoint
{
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<S3Control::Endpoint::S3ControlClientConfiguration,
    S3Control::Endpoint::S3ControlBuiltInParameters,
    S3Control::Endpoint::S3ControlClientContextParameters>;

template class Aws::Endpoint::DefaultEndpointProvider<S3Control::Endpoint::S3ControlClientConfiguration,
    S3Control::Endpoint::S3ControlBuiltInParameters,
    S3Control::Endpoint::S3ControlClientContextParameters>;
} // namespace Endpoint
#endif

namespace S3Control
{
namespace Endpoint
{
  void S3ControlClientContextParameters::SetUseArnRegion(bool value)
  {
    return SetBooleanParameter(Aws::String("UseArnRegion"), value);
  }
  const S3ControlClientContextParameters::ClientContextParameters::EndpointParameter& S3ControlClientContextParameters::GetUseArnRegion() const
  {
    return GetParameter("UseArnRegion");
  }
  void S3ControlBuiltInParameters::SetFromClientConfiguration(const S3ControlClientConfiguration& config)
  {
    SetFromClientConfiguration(static_cast<const S3ControlClientConfiguration::BaseClientConfigClass&>(config));

    static const char* AWS_S3_USE_ARN_REGION = "UseArnRegion";
    SetBooleanParameter(AWS_S3_USE_ARN_REGION, config.useArnRegion);
  }
} // namespace Endpoint
} // namespace S3Control
} // namespace Aws
