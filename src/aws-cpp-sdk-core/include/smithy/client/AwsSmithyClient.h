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
             typename ResponseT>
    class AwsSmithyClientT : public AwsSmithyClientBase
    {
    public:
        explicit AwsSmithyClientT(const ServiceClientConfigurationT& clientConfig, const Aws::String& serviceName,
            const std::shared_ptr<Aws::Http::HttpClient>& httpClient,
            const std::shared_ptr<Aws::Client::AWSErrorMarshaller>& errorMarshaller,
            const std::shared_ptr<EndpointProviderT> endpointProvider,
            const std::shared_ptr<ServiceAuthSchemeResolverT>& authSchemeResolver,
            const Aws::UnorderedMap<Aws::String, AuthSchemesVariantT>& authSchemes)
            : AwsSmithyClientBase(Aws::MakeUnique<ServiceClientConfigurationT>(ServiceNameT, clientConfig), serviceName, httpClient, errorMarshaller),
              m_clientConfiguration(*static_cast<ServiceClientConfigurationT*>(AwsSmithyClientBase::m_clientConfig.get())),
              m_endpointProvider(endpointProvider),
              m_authSchemeResolver(authSchemeResolver),
              m_authSchemes(authSchemes),
              m_serializer(Aws::MakeUnique<SerializerT>(ServiceNameT, m_clientConfiguration.telemetryProvider))
        {
            m_serviceName = ServiceNameT;
        }

        virtual ~AwsSmithyClientT() = default;

    protected:
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
                                     EndpointUpdateCallback&& endpointCallback,
                                     std::shared_ptr<Aws::Utils::Event::EventEncoderStream> eventEncoderStream_sp = nullptr
                                     ) const
        {
            auto httpResponseOutcome = MakeRequestSync(request, requestName, method, std::move(endpointCallback),  std::move(eventEncoderStream_sp));
            return m_serializer->Deserialize(std::move(httpResponseOutcome), GetServiceClientName(), requestName);
        }

    protected:
        //Aws::Utils::Event::EventEncoderStream
        void SetInputStreamInRequest(std::shared_ptr<AwsSmithyClientAsyncRequestContext>& pRequestCtx, std::shared_ptr<Aws::Utils::Event::EventEncoderStream>&  eventEncoderStreamSp) const override
        {
            if(pRequestCtx &&
               pRequestCtx->m_pRequest && 
               pRequestCtx->m_authSchemeOption && 
               eventEncoderStreamSp)
            {
                auto authSchemeIter = m_authSchemes.find(pRequestCtx->m_authSchemeOption->schemeId);
                if(authSchemeIter != m_authSchemes.end())
                {
                    eventEncoderStreamSp->SetSigner(authSchemeIter->second->signer());
                    pRequestCtx->m_pRequest->SetInputStream(eventEncoderStreamSp);
                    pRequestCtx->m_semaphore = Aws::MakeShared<Aws::Utils::Threading::Semaphore>(ServiceNameT, 0, 1);
                    pRequestCtx->m_pRequest->SetRequestSignedHandler([eventEncoderStreamSp, pRequestCtx->m_semaphore](const Aws::Http::HttpRequest& httpRequest) 
                    { 
                        eventEncoderStreamSp->SetSignatureSeed(Aws::Client::GetAuthorizationHeader(httpRequest)); 
                        pRequestCtx->m_semaphore->ReleaseAll(); 
                    });
                }
            }

        }

        ServiceClientConfigurationT& m_clientConfiguration;
        std::shared_ptr<EndpointProviderT> m_endpointProvider{};
        std::shared_ptr<ServiceAuthSchemeResolverT> m_authSchemeResolver{};
        Aws::UnorderedMap<Aws::String, AuthSchemesVariantT> m_authSchemes{};
        Aws::UniquePtr<SerializerT> m_serializer{};
    };

} // namespace client
} // namespace smithy
