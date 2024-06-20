/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/client/AwsSmithyClientBase.h>
#include <smithy/identity/identity/AwsIdentity.h>

#include <aws/crt/Variant.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/http/HttpResponse.h>

#include "AwsSmithyClientAsyncRequestContext.h"
#include "aws/core/client/ClientConfiguration.h"
#include "aws/core/utils/FutureOutcome.h"
#include "common/AwsSmithyRequestSigning.h"
#include "smithy/identity/auth/AuthOption.h"
#include "smithy/identity/auth/AuthSchemeResolverBase.h"
#include "smithy/tracing/TelemetryProvider.h"

namespace smithy {
namespace client
{
    template<const char* ServiceNameT,
             typename ServiceClientConfigurationT,
             typename ServiceAuthSchemeResolverT,
             typename AuthSchemesVariantT,
             typename EndpointProviderT>
    class AwsSmithyClientT : public AwsSmithyClientBase
    {
    public:
        AwsSmithyClientT(Aws::Client::ClientConfiguration& clientConfig, const Aws::String& serviceName,
            const std::shared_ptr<Aws::Http::HttpClient>& httpClient,
            const std::shared_ptr<Aws::Client::AWSErrorMarshaller>& errorMarshaller,
            const ServiceClientConfigurationT& m_client_config,
            const std::shared_ptr<ServiceAuthSchemeResolverT>& m_auth_scheme_resolver,
            const Aws::UnorderedMap<Aws::String, AuthSchemesVariantT>& m_auth_schemes)
            : AwsSmithyClientBase(clientConfig, serviceName, httpClient, errorMarshaller),
              m_clientConfig(m_client_config),
              m_authSchemeResolver(m_auth_scheme_resolver),
              m_authSchemes(m_auth_schemes)
        {
        }

        virtual ~AwsSmithyClientT() = default;

    protected:
        inline const char* GetServiceClientName() const override { return m_serviceName.c_str(); }

        AuthOption SelectAuthOption(const AwsSmithyClientAsyncRequestContext& ctx) const override
        {
            assert(m_authSchemeResolver);
            typename ServiceAuthSchemeResolverT::ServiceAuthSchemeParameters identityParams;
            // Aws::UnorderedMap<Aws::String, Aws::Crt::Variant<Aws::String, bool>> identityParams;
            if (ctx.m_pRequest) {
                // refactor once auth scheme resolver will use it's own rule set
                const auto& epParams = ctx.m_pRequest->GetEndpointContextParams();
                for (const auto& epParam : epParams) {
                    using Aws::Endpoint::EndpointParameter::ParameterType;
                    if(epParam.GetStoredType() == ParameterType::STRING)
                        identityParams.insert({epParam.GetName(), epParam.GetStrValueNoCheck()});
                    else if (epParam.GetStoredType() == ParameterType::BOOLEAN)
                        identityParams.insert({epParam.GetName(), epParam.GetBoolValueNoCheck()});
                    else
                        assert(!"Unknown endpoint parameter!");
                }
                const auto& serviceParams = ctx.m_pRequest->GetServiceSpecificParameters();
                if (serviceParams) {
                    for (const auto& serviceParam : serviceParams) {
                        identityParams.insert({serviceParam.first, serviceParam.second});
                    }
                }
            }
            std::vector<AuthOption> authOptions = m_authSchemeResolver->resolveAuthScheme(identityParams);

            auto authOptionIt = std::find_first_of(authOptions.begin(), authOptions.end(),
                                                   [this](const AuthOption& opt)
                                                   {
                                                       return m_authSchemes.find(opt.schemeId) != m_authSchemes.end();
                                                   });
            assert(authOptionIt != authOptions.end());

            if (authOptionIt != authOptions.end()) {
                return &authOptionIt;
            }
            return {"UNKNOWN"};
        }

        SigningOutcome SignRequest(const HttpRequest& HTTPRequest, const AuthOption& targetAuthOption) const override
        {
            return AwsClientRequestSigning<AuthSchemesVariantT>::SignRequest(HTTPRequest, targetAuthOption, m_authSchemes);
        }

        bool AdjustClockSkew(HttpResponseOutcome& outcome, const AuthOption& authOption) const override;
        {
            return AwsClientRequestSigning<AuthSchemesVariantT>::AdjustClockSkew(outcome, authOption, m_authSchemes);
        }

        ClientError BuildAWSError(const std::shared_ptr<HttpResponse>& response) const override;

    protected:
        ServiceClientConfigurationT m_clientConfig;
        std::shared_ptr<ServiceAuthSchemeResolverT> m_authSchemeResolver{};
        Aws::UnorderedMap<Aws::String, AuthSchemesVariantT> m_authSchemes{};
    };

} // namespace client
} // namespace smithy
