/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/internal/CrtEndpointResolver.h>

namespace Aws
{
namespace Endpoint
{

#ifndef AWS_CORE_EXPORTS // Except for Windows DLL
template class BDDEndpointProvider<Aws::Client::GenericClientConfiguration,
            Aws::Endpoint::BuiltInParameters,
            Aws::Endpoint::ClientContextParameters>;
#endif

AWS_CORE_API ResolveEndpointOutcome
ResolveEndpointBddImpl(const Aws::Crt::Endpoints::BddEngine& bddEngine,
                       const EndpointParameters& builtInParameters,
                       const EndpointParameters& clientContextParameters,
                       const EndpointParameters& endpointParameters)
{
    return Aws::Internal::Endpoint::ResolveEndpointImpl(bddEngine, builtInParameters, clientContextParameters, endpointParameters);
}

} // namespace Endpoint
} // namespace Aws
