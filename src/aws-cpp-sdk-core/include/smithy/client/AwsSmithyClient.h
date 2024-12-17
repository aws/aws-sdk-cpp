/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/client/AwsSmithyClientBase.h>
#include <smithy/client/AwsSmithyClientAsyncRequestContext.h>
#include <smithy/client/common/AwsSmithyRequestSigning.h>
#include <smithy/identity/identity/AwsIdentity.h>
#include <smithy/identity/auth/AuthSchemeOption.h>
#include <smithy/identity/auth/AuthSchemeResolverBase.h>
#include <smithy/tracing/TelemetryProvider.h>

#include <aws/crt/Variant.h>

#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/FutureOutcome.h>
#include <aws/core/utils/Outcome.h>

namespace smithy {
namespace client
{
    template<const char* ServiceNameT,
             typename ServiceClientConfigurationT,
             typename ServiceAuthSchemeResolverT,
             typename AuthSchemesVariantT,
             typename EndpointProviderT,
             typename SerializerT,
             typename ResponseT,
             typename ErrorMarshallerT>
    class AwsSmithyClientT : public AwsSmithyClientBase
    {
    public:
        static_assert(std::is_base_of<Aws::Client::AWSErrorMarshaller, ErrorMarshallerT>::value, "MarshallerT must be derived from class Aws::Client::AWSErrorMarshaller");

        explicit AwsSmithyClientT(const ServiceClientConfigurationT& clientConfig,
            const Aws::String& serviceName,
            const Aws::String& serviceUserAgentName,
            const std::shared_ptr<Aws::Http::HttpClient>& httpClient,
            const std::shared_ptr<Aws::Client::AWSErrorMarshaller>& errorMarshaller,
            const std::shared_ptr<EndpointProviderT> endpointProvider,
            const std::shared_ptr<ServiceAuthSchemeResolverT>& authSchemeResolver,
            const Aws::UnorderedMap<Aws::String, AuthSchemesVariantT>& authSchemes)
            : AwsSmithyClientBase(Aws::MakeUnique<ServiceClientConfigurationT>(ServiceNameT, clientConfig),
                serviceName,
                serviceUserAgentName,
                httpClient,
                errorMarshaller),
              m_clientConfiguration(*static_cast<ServiceClientConfigurationT*>(AwsSmithyClientBase::m_clientConfig.get())),
              m_endpointProvider(endpointProvider),
              m_authSchemeResolver(authSchemeResolver),
              m_authSchemes(authSchemes),
              m_serializer(Aws::MakeShared<SerializerT>(ServiceNameT, m_clientConfiguration.telemetryProvider))
        {
          m_serviceName = ServiceNameT;
          initClient();
        }

        AwsSmithyClientT(const AwsSmithyClientT& other):
            AwsSmithyClientBase(other,
              Aws::MakeUnique<ServiceClientConfigurationT>(ServiceNameT, other.m_clientConfiguration),
              ServiceNameT,
              other.m_serviceUserAgentName,
              Aws::Http::CreateHttpClient(other.m_clientConfiguration),
              Aws::MakeShared<ErrorMarshallerT>(ServiceNameT)),
            m_clientConfiguration{*static_cast<ServiceClientConfigurationT*>(m_clientConfig.get())},
            m_endpointProvider{other.m_endpointProvider},
            m_authSchemeResolver{Aws::MakeShared<ServiceAuthSchemeResolverT>(ServiceNameT)},
            m_authSchemes{other.m_authSchemes},
            m_serializer{Aws::MakeShared<SerializerT>(ServiceNameT, m_clientConfiguration.telemetryProvider)}
        {
            initClient();
        }

        AwsSmithyClientT& operator=(const AwsSmithyClientT& other)
        {   
            if(this != &other)
            {
                AwsSmithyClientBase::deepCopy(Aws::MakeUnique<ServiceClientConfigurationT>(ServiceNameT, other.m_clientConfiguration),
                  ServiceNameT,
                  Aws::Http::CreateHttpClient(other.m_clientConfiguration),
                  Aws::MakeShared<ErrorMarshallerT>(ServiceNameT));
                m_clientConfiguration = *static_cast<ServiceClientConfigurationT*>(m_clientConfig.get());
                m_endpointProvider = other.m_endpointProvider;
                m_authSchemeResolver = Aws::MakeShared<ServiceAuthSchemeResolverT>(ServiceNameT);
                m_authSchemes = other.m_authSchemes;
                m_serializer = Aws::MakeShared<SerializerT>(ServiceNameT, m_clientConfiguration.telemetryProvider);
                m_errorMarshaller = Aws::MakeShared<ErrorMarshallerT>(ServiceNameT);
                initClient();
            }
            return *this;
        }

        AwsSmithyClientT (AwsSmithyClientT&&) = default;

        AwsSmithyClientT& operator=(AwsSmithyClientT&&) = default;

        virtual ~AwsSmithyClientT() = default;

    protected:
        void initClient() {
          m_endpointProvider->InitBuiltInParameters(m_clientConfiguration);
        }

        inline const char* GetServiceClientName() const override { return m_serviceName.c_str(); }

        ResolveEndpointOutcome ResolveEndpoint(const Aws::Endpoint::EndpointParameters& endpointParameters, EndpointUpdateCallback&& epCallback) const override
        {
            assert(m_endpointProvider);
            ResolveEndpointOutcome resolveEndpointOutcome = m_endpointProvider->ResolveEndpoint(endpointParameters);
            if (resolveEndpointOutcome.IsSuccess())
            {
                epCallback(resolveEndpointOutcome.GetResult());
            }
            return resolveEndpointOutcome;
        }

        SelectAuthSchemeOptionOutcome SelectAuthSchemeOption(const AwsSmithyClientAsyncRequestContext& ctx) const override
        {
            assert(m_authSchemeResolver);
            typename ServiceAuthSchemeResolverT::ServiceAuthSchemeParameters identityParams;

            identityParams.serviceName = m_serviceName;
            identityParams.operation = ctx.m_requestName;
            identityParams.region = m_clientConfiguration.region;

            if (ctx.m_pRequest) {
                // refactor once auth scheme resolver will use it's own rule set
                const auto& epParams = ctx.m_pRequest->GetEndpointContextParams();
                for (const auto& epParam : epParams) {
                    using ParameterType = Aws::Endpoint::EndpointParameter::ParameterType;
                    if(epParam.GetStoredType() == ParameterType::STRING)
                        identityParams.additionalProperties.insert({epParam.GetName(), epParam.GetStrValueNoCheck()});
                    else if (epParam.GetStoredType() == ParameterType::BOOLEAN)
                        identityParams.additionalProperties.insert({epParam.GetName(), epParam.GetBoolValueNoCheck()});
                    else
                        assert(!"Unknown endpoint parameter!");
                }
                const auto& serviceParams = ctx.m_pRequest->GetServiceSpecificParameters();
                if (serviceParams) {
                    for (const auto& serviceParam : serviceParams->parameterMap) {
                        identityParams.additionalProperties.insert({serviceParam.first, serviceParam.second});
                    }
                }
            }
            Aws::Vector<AuthSchemeOption> authSchemeOptions = m_authSchemeResolver->resolveAuthScheme(identityParams);

            auto authSchemeOptionIt = std::find_if(authSchemeOptions.begin(), authSchemeOptions.end(),
                                                   [this](const AuthSchemeOption& opt)
                                                   {
                                                       return m_authSchemes.find(opt.schemeId) != m_authSchemes.end();
                                                   });
            assert(authSchemeOptionIt != authSchemeOptions.end());

            if (authSchemeOptionIt != authSchemeOptions.end()) {
                return SelectAuthSchemeOptionOutcome(*authSchemeOptionIt);
            }
            return AWSError(Aws::Client::CoreErrors::CLIENT_SIGNING_FAILURE,
                                 "",
                                 "Failed to select an auth scheme",
                                 false/*retryable*/);
        }

        SigningOutcome SignRequest(std::shared_ptr<HttpRequest> httpRequest, const AuthSchemeOption& targetAuthSchemeOption) const override
        {
            return AwsClientRequestSigning<AuthSchemesVariantT>::SignRequest(httpRequest, targetAuthSchemeOption, m_authSchemes);
        }

        bool AdjustClockSkew(HttpResponseOutcome& outcome, const AuthSchemeOption& authSchemeOption) const override
        {
            return AwsClientRequestSigning<AuthSchemesVariantT>::AdjustClockSkew(outcome, authSchemeOption, m_authSchemes);
        }

        ResponseT MakeRequestDeserialize(Aws::AmazonWebServiceRequest const * const request,
                                     const char* requestName,
                                     Aws::Http::HttpMethod method,
                                     EndpointUpdateCallback&& endpointCallback) const
        {
            auto httpResponseOutcome = MakeRequestSync(request, requestName, method, std::move(endpointCallback));
            return m_serializer->Deserialize(std::move(httpResponseOutcome), GetServiceClientName(), requestName);
        }

        ServiceClientConfigurationT& m_clientConfiguration;
        std::shared_ptr<EndpointProviderT> m_endpointProvider{};
        std::shared_ptr<ServiceAuthSchemeResolverT> m_authSchemeResolver{};
        Aws::UnorderedMap<Aws::String, AuthSchemesVariantT> m_authSchemes{};
        std::shared_ptr<SerializerT> m_serializer{};
    };

} // namespace client
} // namespace smithy
