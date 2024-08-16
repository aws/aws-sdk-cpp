/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/TimestreamQueryEndpointProvider.h>

namespace Aws
{
#ifndef AWS_TIMESTREAMQUERY_EXPORTS // Except for Windows DLL
namespace Endpoint
{
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<TimestreamQuery::Endpoint::TimestreamQueryClientConfiguration,
    TimestreamQuery::Endpoint::TimestreamQueryBuiltInParameters,
    TimestreamQuery::Endpoint::TimestreamQueryClientContextParameters>;

template class Aws::Endpoint::DefaultEndpointProvider<TimestreamQuery::Endpoint::TimestreamQueryClientConfiguration,
    TimestreamQuery::Endpoint::TimestreamQueryBuiltInParameters,
    TimestreamQuery::Endpoint::TimestreamQueryClientContextParameters>;
} // namespace Endpoint
#endif

namespace TimestreamQuery
{
namespace Endpoint
{
  void TimestreamQueryBuiltInParameters::SetFromClientConfiguration(const TimestreamQueryClientConfiguration& config)
  {
    SetFromClientConfiguration(static_cast<const TimestreamQueryClientConfiguration::BaseClientConfigClass&>(config));

  }
} // namespace Endpoint
} // namespace TimestreamQuery
} // namespace Aws
