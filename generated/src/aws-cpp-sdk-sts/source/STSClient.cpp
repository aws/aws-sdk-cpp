/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/sts/STSClient.h>
#include <aws/sts/STSEndpointProvider.h>
#include <aws/sts/STSErrorMarshaller.h>
#include <aws/sts/model/AssumeRoleRequest.h>
#include <aws/sts/model/AssumeRoleWithSAMLRequest.h>
#include <aws/sts/model/AssumeRoleWithWebIdentityRequest.h>
#include <aws/sts/model/AssumeRootRequest.h>
#include <aws/sts/model/DecodeAuthorizationMessageRequest.h>
#include <aws/sts/model/GetAccessKeyInfoRequest.h>
#include <aws/sts/model/GetCallerIdentityRequest.h>
#include <aws/sts/model/GetDelegatedAccessTokenRequest.h>
#include <aws/sts/model/GetFederationTokenRequest.h>
#include <aws/sts/model/GetSessionTokenRequest.h>
#include <aws/sts/model/GetWebIdentityTokenRequest.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::STS;
using namespace Aws::STS::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace STS {
const char SERVICE_NAME[] = "sts";
const char ALLOCATION_TAG[] = "STSClient";
}  // namespace STS
}  // namespace Aws
const char* STSClient::GetServiceName() { return SERVICE_NAME; }
const char* STSClient::GetAllocationTag() { return ALLOCATION_TAG; }

STSClient::STSClient(const STS::STSClientConfiguration& clientConfiguration, std::shared_ptr<STSEndpointProviderBase> endpointProvider)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "STS", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<STSErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<STSEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region, clientConfiguration.credentialProviderConfig}},
              {smithy::NoAuthSchemeOption::noAuthSchemeOption.schemeId,
               smithy::NoAuthScheme{GetServiceName(), clientConfiguration.region, clientConfiguration.credentialProviderConfig}},
          }) {}

STSClient::STSClient(const AWSCredentials& credentials, std::shared_ptr<STSEndpointProviderBase> endpointProvider,
                     const STS::STSClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "STS", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<STSErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<STSEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials),
                                       GetServiceName(), clientConfiguration.region}},
              {smithy::NoAuthSchemeOption::noAuthSchemeOption.schemeId,
               smithy::NoAuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials),
                                    GetServiceName(), clientConfiguration.region}},
          }) {}

STSClient::STSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<STSEndpointProviderBase> endpointProvider, const STS::STSClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "STS", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<STSErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<STSEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider),
                                       GetServiceName(), clientConfiguration.region}},
              {smithy::NoAuthSchemeOption::noAuthSchemeOption.schemeId,
               smithy::NoAuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider),
                                    GetServiceName(), clientConfiguration.region}},
          }) {}

/* Legacy constructors due deprecation */
STSClient::STSClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "STS", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<STSErrorMarshaller>(ALLOCATION_TAG), Aws::MakeShared<STSEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region, clientConfiguration.credentialProviderConfig}},
              {smithy::NoAuthSchemeOption::noAuthSchemeOption.schemeId,
               smithy::NoAuthScheme{GetServiceName(), clientConfiguration.region, clientConfiguration.credentialProviderConfig}},
          }) {}

STSClient::STSClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "STS", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<STSErrorMarshaller>(ALLOCATION_TAG), Aws::MakeShared<STSEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials),
                                       GetServiceName(), clientConfiguration.region}},
              {smithy::NoAuthSchemeOption::noAuthSchemeOption.schemeId,
               smithy::NoAuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials),
                                    GetServiceName(), clientConfiguration.region}},
          }) {}

STSClient::STSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "STS", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<STSErrorMarshaller>(ALLOCATION_TAG), Aws::MakeShared<STSEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider),
                                       GetServiceName(), clientConfiguration.region}},
              {smithy::NoAuthSchemeOption::noAuthSchemeOption.schemeId,
               smithy::NoAuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider),
                                    GetServiceName(), clientConfiguration.region}},
          }) {}
/* End of legacy constructors due deprecation */

STSClient::~STSClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<STSEndpointProviderBase>& STSClient::accessEndpointProvider() { return m_endpointProvider; }

void STSClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
Aws::String STSClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const {
  EndpointUpdateCallback endpointCallback = [&](Aws::Endpoint::AWSEndpoint& endpoint) {
    Aws::StringStream ss;
    ss << "?" << requestToConvert.SerializePayload();
    endpoint.SetQueryString(ss.str());
  };
  return AwsSmithyClientT::GeneratePresignedUrl(std::move(endpointCallback), Aws::Http::HttpMethod::HTTP_GET, region, GetServiceName(),
                                                3600, {}, {});
}
AssumeRoleOutcome STSClient::AssumeRole(const AssumeRoleRequest& request) const {
  AWS_OPERATION_GUARD(AssumeRole);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssumeRole, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AssumeRole, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssumeRole, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssumeRoleOutcome>(
      [&]() -> AssumeRoleOutcome {
        return AssumeRoleOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { AWS_UNREFERENCED_PARAM(resolvedEndpoint); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssumeRoleWithSAMLOutcome STSClient::AssumeRoleWithSAML(const AssumeRoleWithSAMLRequest& request) const {
  AWS_OPERATION_GUARD(AssumeRoleWithSAML);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssumeRoleWithSAML, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AssumeRoleWithSAML, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssumeRoleWithSAML, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssumeRoleWithSAMLOutcome>(
      [&]() -> AssumeRoleWithSAMLOutcome {
        return AssumeRoleWithSAMLOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { AWS_UNREFERENCED_PARAM(resolvedEndpoint); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssumeRoleWithWebIdentityOutcome STSClient::AssumeRoleWithWebIdentity(const AssumeRoleWithWebIdentityRequest& request) const {
  AWS_OPERATION_GUARD(AssumeRoleWithWebIdentity);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssumeRoleWithWebIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AssumeRoleWithWebIdentity, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssumeRoleWithWebIdentity, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssumeRoleWithWebIdentityOutcome>(
      [&]() -> AssumeRoleWithWebIdentityOutcome {
        return AssumeRoleWithWebIdentityOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { AWS_UNREFERENCED_PARAM(resolvedEndpoint); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssumeRootOutcome STSClient::AssumeRoot(const AssumeRootRequest& request) const {
  AWS_OPERATION_GUARD(AssumeRoot);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssumeRoot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AssumeRoot, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssumeRoot, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssumeRootOutcome>(
      [&]() -> AssumeRootOutcome {
        return AssumeRootOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { AWS_UNREFERENCED_PARAM(resolvedEndpoint); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DecodeAuthorizationMessageOutcome STSClient::DecodeAuthorizationMessage(const DecodeAuthorizationMessageRequest& request) const {
  AWS_OPERATION_GUARD(DecodeAuthorizationMessage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DecodeAuthorizationMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DecodeAuthorizationMessage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DecodeAuthorizationMessage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DecodeAuthorizationMessageOutcome>(
      [&]() -> DecodeAuthorizationMessageOutcome {
        return DecodeAuthorizationMessageOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { AWS_UNREFERENCED_PARAM(resolvedEndpoint); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAccessKeyInfoOutcome STSClient::GetAccessKeyInfo(const GetAccessKeyInfoRequest& request) const {
  AWS_OPERATION_GUARD(GetAccessKeyInfo);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAccessKeyInfo, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetAccessKeyInfo, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAccessKeyInfo, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAccessKeyInfoOutcome>(
      [&]() -> GetAccessKeyInfoOutcome {
        return GetAccessKeyInfoOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { AWS_UNREFERENCED_PARAM(resolvedEndpoint); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetCallerIdentityOutcome STSClient::GetCallerIdentity(const GetCallerIdentityRequest& request) const {
  AWS_OPERATION_GUARD(GetCallerIdentity);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCallerIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetCallerIdentity, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetCallerIdentity, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetCallerIdentityOutcome>(
      [&]() -> GetCallerIdentityOutcome {
        return GetCallerIdentityOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { AWS_UNREFERENCED_PARAM(resolvedEndpoint); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDelegatedAccessTokenOutcome STSClient::GetDelegatedAccessToken(const GetDelegatedAccessTokenRequest& request) const {
  AWS_OPERATION_GUARD(GetDelegatedAccessToken);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDelegatedAccessToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetDelegatedAccessToken, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDelegatedAccessToken, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDelegatedAccessTokenOutcome>(
      [&]() -> GetDelegatedAccessTokenOutcome {
        return GetDelegatedAccessTokenOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { AWS_UNREFERENCED_PARAM(resolvedEndpoint); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetFederationTokenOutcome STSClient::GetFederationToken(const GetFederationTokenRequest& request) const {
  AWS_OPERATION_GUARD(GetFederationToken);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFederationToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetFederationToken, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetFederationToken, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetFederationTokenOutcome>(
      [&]() -> GetFederationTokenOutcome {
        return GetFederationTokenOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { AWS_UNREFERENCED_PARAM(resolvedEndpoint); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSessionTokenOutcome STSClient::GetSessionToken(const GetSessionTokenRequest& request) const {
  AWS_OPERATION_GUARD(GetSessionToken);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSessionToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetSessionToken, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSessionToken, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSessionTokenOutcome>(
      [&]() -> GetSessionTokenOutcome {
        return GetSessionTokenOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { AWS_UNREFERENCED_PARAM(resolvedEndpoint); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetWebIdentityTokenOutcome STSClient::GetWebIdentityToken(const GetWebIdentityTokenRequest& request) const {
  AWS_OPERATION_GUARD(GetWebIdentityToken);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWebIdentityToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetWebIdentityToken, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetWebIdentityToken, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetWebIdentityTokenOutcome>(
      [&]() -> GetWebIdentityTokenOutcome {
        return GetWebIdentityTokenOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { AWS_UNREFERENCED_PARAM(resolvedEndpoint); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
