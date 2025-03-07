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
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/threading/SameThreadExecutor.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <smithy/identity/signer/built-in/SignerProperties.h>
#include <smithy/identity/auth/built-in/SigV4AuthSchemeOption.h>
#include <smithy/client/AwsLegacyClient.h>

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
    class AwsSmithyClientT : public AwsSmithyClientBase, public AwsLegacyClientT<ServiceNameT, ResponseT, 
        AwsSmithyClientT<ServiceNameT, 
            ServiceClientConfigurationT,
            ServiceAuthSchemeResolverT,
            AuthSchemesVariantT,
            EndpointProviderT,
            SerializerT,
            ResponseT,
            ErrorMarshallerT>>
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
          initClient();
        }

        AwsSmithyClientT(const AwsSmithyClientT& other)
          : AwsSmithyClientBase(other,
                                Aws::MakeUnique<ServiceClientConfigurationT>(ServiceNameT, other.m_clientConfiguration),
                                Aws::Http::CreateHttpClient(other.m_clientConfiguration),
                                Aws::MakeShared<ErrorMarshallerT>(ServiceNameT)),
            m_clientConfiguration(*static_cast<ServiceClientConfigurationT*>(m_clientConfig.get()))
        {
          m_endpointProvider = other.m_endpointProvider;  /* shallow copy */
          m_authSchemeResolver = other.m_authSchemeResolver;  /* shallow copy */
          m_authSchemes = other.m_authSchemes;
          m_serializer = Aws::MakeShared<SerializerT>(ServiceNameT, m_clientConfiguration.telemetryProvider);
          initClient();
        }

        AwsSmithyClientT& operator=(const AwsSmithyClientT& other)
        {
            if(this != &other)
            {
                m_clientConfiguration = other.m_clientConfiguration;
                AwsSmithyClientBase::baseCopyAssign(other,
                  Aws::Http::CreateHttpClient(m_clientConfiguration),
                  Aws::MakeShared<ErrorMarshallerT>(ServiceNameT));

                m_endpointProvider = other.m_endpointProvider; /* shallow copy */
                m_authSchemeResolver = other.m_authSchemeResolver;  /* shallow copy */
                m_authSchemes = other.m_authSchemes;
                m_serializer = Aws::MakeShared<SerializerT>(ServiceNameT, m_clientConfiguration.telemetryProvider);
                initClient();
            }
            return *this;
        }

        AwsSmithyClientT(AwsSmithyClientT&& other)  :
            AwsSmithyClientBase(std::move(static_cast<AwsSmithyClientBase&&>(other)),
              Aws::MakeUnique<ServiceClientConfigurationT>(ServiceNameT, std::move(other.m_clientConfiguration))),
            m_clientConfiguration{*static_cast<ServiceClientConfigurationT*>(m_clientConfig.get())},
            m_endpointProvider(std::move(other.m_endpointProvider)),
            m_authSchemeResolver(std::move(other.m_authSchemeResolver)),
            m_authSchemes(std::move(other.m_authSchemes)),
            m_serializer(std::move(other.m_serializer))
        {
        }

        AwsSmithyClientT& operator=(AwsSmithyClientT&& other)
        {
            if(this != &other)
            {
                m_clientConfiguration = std::move(other.m_clientConfiguration);
                AwsSmithyClientBase::baseMoveAssign(std::move(static_cast<AwsSmithyClientBase&&>(other)));

                m_endpointProvider = std::move(other.m_endpointProvider);
                m_authSchemeResolver = std::move(other.m_authSchemeResolver);
                m_authSchemes = std::move(other.m_authSchemes);
                m_serializer = std::move(other.m_serializer);
            }
            return *this;
        }

        virtual ~AwsSmithyClientT() = default;

    protected:
        void initClient() {
          if (m_endpointProvider && m_authSchemeResolver) {
            m_endpointProvider->InitBuiltInParameters(m_clientConfiguration);
            m_authSchemeResolver->Init(m_clientConfiguration);
          } else {
            AWS_LOGSTREAM_FATAL(ServiceNameT, "Unable to init client: endpoint provider=" << m_endpointProvider
              << " or " << "authSchemeResolver=" << m_authSchemeResolver << " are null!");
          }
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
            return Aws::Client::AWSError<CoreErrors>(Aws::Client::CoreErrors::CLIENT_SIGNING_FAILURE,
                                 "",
                                 "Failed to select an auth scheme",
                                 false/*retryable*/);
        }

        SigningOutcome SignHttpRequest(std::shared_ptr<HttpRequest> httpRequest, const AuthSchemeOption& targetAuthSchemeOption) const override
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

        Aws::String GeneratePresignedUrl(
            EndpointUpdateCallback&& endpointCallback,
            Aws::Http::HttpMethod method,
            const Aws::String& region,
            const Aws::String& serviceName,
            long long expirationInSeconds,
            const Aws::Http::HeaderValueCollection& customizedHeaders,
            const std::shared_ptr<Aws::Http::ServiceSpecificParameters> serviceSpecificParameters) const
        {
            AwsSmithyClientAsyncRequestContext ctx;
            auto authSchemeOptionOutcome = SelectAuthSchemeOption( ctx);
            auto authSchemeOption = std::move(authSchemeOptionOutcome.GetResultWithOwnership());
            
            Aws::Endpoint::EndpointParameters epParams = Aws::Endpoint::EndpointParameters();
            const auto authSchemeEpParams = authSchemeOption.endpointParameters();
            epParams.insert(epParams.end(), authSchemeEpParams.begin(), authSchemeEpParams.end());
            if(serviceSpecificParameters)
            {
                auto bucketIt = serviceSpecificParameters->parameterMap.find("bucketName");
                if(bucketIt != serviceSpecificParameters->parameterMap.end())
                {
                    auto bucket = bucketIt->second;
                    epParams.emplace_back(Aws::String("Bucket"), bucket);
                }
            }

            auto epResolutionOutcome = this->ResolveEndpoint(std::move(epParams), std::move(endpointCallback));
            if (!epResolutionOutcome.IsSuccess())
            {
                AWS_LOGSTREAM_ERROR(ServiceNameT, "Presigned URL generating failed. Encountered error: " << epResolutionOutcome.GetError().GetMessage());
                return {};
            }
            auto endpoint = std::move(epResolutionOutcome.GetResultWithOwnership());
            const Aws::Http::URI& uri = endpoint.GetURI();
            auto signerRegionOverride = region;
            auto signerServiceNameOverride = serviceName;
            //signer name is needed for some identity resolvers
            if (endpoint.GetAttributes()) {
                if (endpoint.GetAttributes()->authScheme.GetSigningRegion()) {
                    signerRegionOverride = endpoint.GetAttributes()->authScheme.GetSigningRegion()->c_str();
                }
                if (endpoint.GetAttributes()->authScheme.GetSigningRegionSet()) {
                    signerRegionOverride = endpoint.GetAttributes()->authScheme.GetSigningRegionSet()->c_str();
                }
                if (endpoint.GetAttributes()->authScheme.GetSigningName()) {
                    signerServiceNameOverride = endpoint.GetAttributes()->authScheme.GetSigningName()->c_str();
                }
            }
            std::shared_ptr<HttpRequest> request = CreateHttpRequest(uri, method, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
            request->SetServiceSpecificParameters(serviceSpecificParameters);
            for (const auto& it: customizedHeaders)
            {
                request->SetHeaderValue(it.first.c_str(), it.second);
            }
            if (AwsClientRequestSigning<AuthSchemesVariantT>::PreSignRequest(request, authSchemeOption, m_authSchemes, signerRegionOverride, signerServiceNameOverride, expirationInSeconds).IsSuccess())
            {
                return request->GetURIString();
            }
            return {};
        }

        //legacy
        Aws::String GeneratePresignedUrl(const Aws::Http::URI& uri,
                                                  Aws::Http::HttpMethod method,
                                                  const Aws::String& region,
                                                  const Aws::String& serviceName,
                                                  long long expirationInSeconds,
                                                  const Aws::Http::HeaderValueCollection& customizedHeaders,
                                                  const std::shared_ptr<Aws::Http::ServiceSpecificParameters> serviceSpecificParameters) const
        {
            std::shared_ptr<HttpRequest> request = CreateHttpRequest(uri, method, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
            request->SetServiceSpecificParameters(serviceSpecificParameters);
            for (const auto& it: customizedHeaders)
            {
                request->SetHeaderValue(it.first.c_str(), it.second);
            }
            AwsSmithyClientAsyncRequestContext ctx;
            auto authSchemeOptionOutcome = SelectAuthSchemeOption( ctx);
            auto authSchemeOption = std::move(authSchemeOptionOutcome.GetResultWithOwnership());
            if (AwsClientRequestSigning<AuthSchemesVariantT>::PreSignRequest(request, authSchemeOption, m_authSchemes, region, serviceName, expirationInSeconds).IsSuccess())
            {
                return request->GetURIString();
            }
            return {};
        }

        
        Aws::String GeneratePresignedUrl(const Aws::Endpoint::AWSEndpoint& endpoint,
                                                  Aws::Http::HttpMethod method,
                                                  const Aws::String& region,
                                                  const Aws::String& serviceName,
                                                  long long expirationInSeconds,
                                                  const Aws::Http::HeaderValueCollection& customizedHeaders,
                                                  const std::shared_ptr<Aws::Http::ServiceSpecificParameters> serviceSpecificParameters) const
        {
            const Aws::Http::URI& uri = endpoint.GetURI();
            auto signerRegionOverride = region;
            auto signerServiceNameOverride = serviceName;
            // signer name is needed for some identity resolvers
            if (endpoint.GetAttributes()) {
                if (endpoint.GetAttributes()->authScheme.GetSigningRegion()) {
                    signerRegionOverride = endpoint.GetAttributes()->authScheme.GetSigningRegion()->c_str();
                }
                if (endpoint.GetAttributes()->authScheme.GetSigningRegionSet()) {
                    signerRegionOverride = endpoint.GetAttributes()->authScheme.GetSigningRegionSet()->c_str();
                }
                if (endpoint.GetAttributes()->authScheme.GetSigningName()) {
                    signerServiceNameOverride = endpoint.GetAttributes()->authScheme.GetSigningName()->c_str();
                }
            }
            return GeneratePresignedUrl(uri, method, signerRegionOverride, signerServiceNameOverride, expirationInSeconds, customizedHeaders, serviceSpecificParameters);
        }
    
        /* Service client specific config, the actual object is stored in AwsSmithyClientBase by pointer
         * In order to avoid config object duplication, smithy template client access it by a reference.
         * So that base client has it by base config pointer, child smithy client has it by child config reference.
         */
        ServiceClientConfigurationT& m_clientConfiguration;
        std::shared_ptr<EndpointProviderT> m_endpointProvider{};
        std::shared_ptr<ServiceAuthSchemeResolverT> m_authSchemeResolver{};
        Aws::UnorderedMap<Aws::String, AuthSchemesVariantT> m_authSchemes{};
        std::shared_ptr<SerializerT> m_serializer{};
    private:
        friend class AwsLegacyClientT<ServiceNameT, ResponseT, AwsSmithyClientT<ServiceNameT, 
            ServiceClientConfigurationT,
            ServiceAuthSchemeResolverT,
            AuthSchemesVariantT,
            EndpointProviderT,
            SerializerT,
            ResponseT,
            ErrorMarshallerT>>;
    };

} // namespace client
} // namespace smithy