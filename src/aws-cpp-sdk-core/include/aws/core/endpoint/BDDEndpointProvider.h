/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */


#pragma once

#include <aws/core/endpoint/internal/CrtEndpointProvider.h>

#include <aws/crt/endpoints/BddEngine.h>

namespace Aws
{
    namespace Endpoint
    {
        /**
         * Resolves an endpoint using the compiled-bytecode CRT BDD engine.
         */
        AWS_CORE_API ResolveEndpointOutcome
        ResolveEndpointBddImpl(const Aws::Crt::Endpoints::BddEngine& bddEngine,
                               const EndpointParameters& builtInParameters,
                               const EndpointParameters& clientContextParameters,
                               const EndpointParameters& endpointParameters);

        /**
         * Resolves endpoints from compiled BDD bytecode via the CRT BddEngine. Drop-in
         * replacement for DefaultEndpointProvider.
         *
         * WARNING: non-owning. The engine points directly into the bytecode blob passed to
         * the constructor; the caller is responsible for keeping it alive for the lifetime of
         * this provider. Generated clients pass GetRulesBlob() (static storage), which satisfies this.
         */
        template<typename ClientConfigurationT = Aws::Client::GenericClientConfiguration,
                 typename BuiltInParametersT = Aws::Endpoint::BuiltInParameters,
                 typename ClientContextParametersT = Aws::Endpoint::ClientContextParameters>
        class AWS_CORE_API BDDEndpointProvider : public CrtEndpointProvider<Aws::Crt::Endpoints::BddEngine,
            ResolveEndpointBddImpl, ClientConfigurationT, BuiltInParametersT, ClientContextParametersT>
        {
        public:
            using CrtEndpointProvider<Aws::Crt::Endpoints::BddEngine, ResolveEndpointBddImpl,
                ClientConfigurationT, BuiltInParametersT, ClientContextParametersT>::CrtEndpointProvider;

            virtual ~BDDEndpointProvider() = default;
        };

        /**
         * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
         */
        AWS_CORE_EXTERN template class AWS_CORE_API BDDEndpointProvider<Aws::Client::GenericClientConfiguration,
            Aws::Endpoint::BuiltInParameters,
            Aws::Endpoint::ClientContextParameters>;
    } // namespace Endpoint
} // namespace Aws
