/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */


#pragma once

#include <aws/core/endpoint/internal/CrtEndpointProvider.h>

#include <aws/crt/endpoints/RuleEngine.h>

namespace Aws
{
    namespace Endpoint
    {
        static const char DEFAULT_ENDPOINT_PROVIDER_TAG[] = "Aws::Endpoint::DefaultEndpointProvider";

        /**
         * Default template implementation for endpoint resolution
         * @param ruleEngine
         * @param builtInParameters
         * @param clientContextParameters
         * @param endpointParameters
         * @return
         * Resolves an endpoint using the JSON-ruleset CRT rule engine.
         */
        AWS_CORE_API ResolveEndpointOutcome
        ResolveEndpointDefaultImpl(const Aws::Crt::Endpoints::RuleEngine& ruleEngine,
                                   const EndpointParameters& builtInParameters,
                                   const EndpointParameters& clientContextParameters,
                                   const EndpointParameters& endpointParameters);

        /**
         * Resolves endpoints from a JSON ruleset blob via the CRT Aws::Crt::Endpoints::RuleEngine.
         */
        template<typename ClientConfigurationT = Aws::Client::GenericClientConfiguration,
                 typename BuiltInParametersT = Aws::Endpoint::BuiltInParameters,
                 typename ClientContextParametersT = Aws::Endpoint::ClientContextParameters>
        class AWS_CORE_API DefaultEndpointProvider : public CrtEndpointProvider<Aws::Crt::Endpoints::RuleEngine,
            ResolveEndpointDefaultImpl, ClientConfigurationT, BuiltInParametersT, ClientContextParametersT>
        {
        public:
            using CrtEndpointProvider<Aws::Crt::Endpoints::RuleEngine, ResolveEndpointDefaultImpl,
                ClientConfigurationT, BuiltInParametersT, ClientContextParametersT>::CrtEndpointProvider;

            virtual ~DefaultEndpointProvider() = default;
        };

        /**
         * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
         */
        AWS_CORE_EXTERN template class AWS_CORE_API DefaultEndpointProvider<Aws::Client::GenericClientConfiguration,
            Aws::Endpoint::BuiltInParameters,
            Aws::Endpoint::ClientContextParameters>;
    } // namespace Endpoint
} // namespace Aws
