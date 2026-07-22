/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */


#pragma once

#include <aws/core/endpoint/AWSPartitions.h>
#include <aws/core/endpoint/EndpointProviderBase.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/endpoint/ClientContextParameters.h>
#include <aws/core/endpoint/BuiltInParameters.h>

#include <aws/crt/Types.h>

#include <aws/core/utils/Outcome.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/logging/LogMacros.h>

namespace Aws {
    namespace Endpoint {
        /**
         * Endpoint provider backed by a CRT endpoint engine. The two things that differ between
         * the JSON-ruleset and BDD-bytecode providers are captured as template parameters:
         *  - RulesEngineT: the CRT engine type (Aws::Crt::Endpoints::RuleEngine or BddEngine),
         *    both constructed from a ruleset blob plus the partitions blob.
         *  - ResolveFn: the resolution entry point for that engine. It is an out-of-line exported
         *    symbol (ResolveEndpointDefaultImpl / ResolveEndpointBddImpl) so the resolution body
         *    lives once in aws-cpp-sdk-core rather than inlined into every service binary.
         * Everything else (parameter storage, init, override, accessors) is shared here.
         */
        template<typename RulesEngineT,
            ResolveEndpointOutcome(*ResolveFn)(const RulesEngineT &,
                                               const EndpointParameters &,
                                               const EndpointParameters &,
                                               const EndpointParameters &),
            typename ClientConfigurationT = Aws::Client::GenericClientConfiguration,
            typename BuiltInParametersT = Aws::Endpoint::BuiltInParameters,
            typename ClientContextParametersT = Aws::Endpoint::ClientContextParameters>
        class CrtEndpointProvider : public EndpointProviderBase<ClientConfigurationT, BuiltInParametersT,
                    ClientContextParametersT> {
        public:
            CrtEndpointProvider(const char *endpointRulesBlob, const size_t endpointRulesBlobSz)
                : m_crtEngine(Aws::Crt::ByteCursorFromArray((const uint8_t *) endpointRulesBlob, endpointRulesBlobSz),
                              Aws::Crt::ByteCursorFromArray((const uint8_t *) AWSPartitions::GetPartitionsBlob(),
                                                            AWSPartitions::PartitionsBlobSize)) {
                if (!m_crtEngine) {
                    AWS_LOGSTREAM_FATAL("CrtEndpointProvider", "Invalid CRT endpoint engine state");
                }
            }

            virtual ~CrtEndpointProvider() = default;

            void InitBuiltInParameters(const ClientConfigurationT &config) override {
                m_builtInParameters.SetFromClientConfiguration(config);
            }

            void InitBuiltInParameters(const ClientConfigurationT &config, const Aws::String &serviceName) override {
                m_builtInParameters.SetFromClientConfiguration(config, serviceName);
            }

            ResolveEndpointOutcome ResolveEndpoint(const EndpointParameters &endpointParameters) const override {
                return ResolveFn(m_crtEngine, m_builtInParameters.GetAllParameters(),
                                 m_clientContextParameters.GetAllParameters(), endpointParameters);
            };

            const ClientContextParametersT &GetClientContextParameters() const override {
                return m_clientContextParameters;
            }

            ClientContextParametersT &AccessClientContextParameters() override {
                return m_clientContextParameters;
            }

            const BuiltInParametersT &GetBuiltInParameters() const {
                return m_builtInParameters;
            }

            BuiltInParametersT &AccessBuiltInParameters() {
                return m_builtInParameters;
            }

            void OverrideEndpoint(const Aws::String &endpoint) override {
                m_builtInParameters.OverrideEndpoint(endpoint);
            }

        protected:
            /* Crt endpoint engine (RuleEngine or BddEngine) built from the service's ruleset blob */
            RulesEngineT m_crtEngine;

            /* Also known as a configurable parameters defined by the AWS Service in their c2j/smithy model definition */
            ClientContextParametersT m_clientContextParameters;

            /* Also known as parameters on the ClientConfiguration in this SDK */
            BuiltInParametersT m_builtInParameters;
        };
    } // namespace Endpoint
} // namespace Aws
