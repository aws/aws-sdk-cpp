/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/TimestreamWriteEndpointProvider.h>

namespace Aws
{
#ifndef AWS_TIMESTREAMWRITE_EXPORTS // Except for Windows DLL
namespace Endpoint
{
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<TimestreamWrite::Endpoint::TimestreamWriteClientConfiguration,
    TimestreamWrite::Endpoint::TimestreamWriteBuiltInParameters,
    TimestreamWrite::Endpoint::TimestreamWriteClientContextParameters>;

template class Aws::Endpoint::DefaultEndpointProvider<TimestreamWrite::Endpoint::TimestreamWriteClientConfiguration,
    TimestreamWrite::Endpoint::TimestreamWriteBuiltInParameters,
    TimestreamWrite::Endpoint::TimestreamWriteClientContextParameters>;
} // namespace Endpoint
#endif

namespace TimestreamWrite
{
namespace Endpoint
{
  void TimestreamWriteBuiltInParameters::SetFromClientConfiguration(const TimestreamWriteClientConfiguration& config)
  {
    SetFromClientConfiguration(static_cast<const TimestreamWriteClientConfiguration::BaseClientConfigClass&>(config));

  }
} // namespace Endpoint
} // namespace TimestreamWrite
} // namespace Aws
