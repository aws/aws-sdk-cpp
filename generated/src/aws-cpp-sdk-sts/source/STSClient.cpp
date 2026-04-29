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
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption,
                                                                     smithy::SigV4aAuthSchemeOption::sigV4aAuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region, clientConfiguration.credentialProviderConfig}},
              {smithy::SigV4aAuthSchemeOption::sigV4aAuthSchemeOption.schemeId,
               smithy::SigV4aAuthScheme{GetServiceName(), clientConfiguration.region, clientConfiguration.credentialProviderConfig}},
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
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption,
                                                                     smithy::SigV4aAuthSchemeOption::sigV4aAuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials),
                                       GetServiceName(), clientConfiguration.region}},
              {smithy::SigV4aAuthSchemeOption::sigV4aAuthSchemeOption.schemeId,
               smithy::SigV4aAuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials),
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
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption,
                                                                     smithy::SigV4aAuthSchemeOption::sigV4aAuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider),
                                       GetServiceName(), clientConfiguration.region}},
              {smithy::SigV4aAuthSchemeOption::sigV4aAuthSchemeOption.schemeId,
               smithy::SigV4aAuthScheme{
                   Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(),
                   clientConfiguration.region}},
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
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption,
                                                                     smithy::SigV4aAuthSchemeOption::sigV4aAuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region, clientConfiguration.credentialProviderConfig}},
              {smithy::SigV4aAuthSchemeOption::sigV4aAuthSchemeOption.schemeId,
               smithy::SigV4aAuthScheme{GetServiceName(), clientConfiguration.region, clientConfiguration.credentialProviderConfig}},
              {smithy::NoAuthSchemeOption::noAuthSchemeOption.schemeId,
               smithy::NoAuthScheme{GetServiceName(), clientConfiguration.region, clientConfiguration.credentialProviderConfig}},
          }) {}

STSClient::STSClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "STS", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<STSErrorMarshaller>(ALLOCATION_TAG), Aws::MakeShared<STSEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption,
                                                                     smithy::SigV4aAuthSchemeOption::sigV4aAuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials),
                                       GetServiceName(), clientConfiguration.region}},
              {smithy::SigV4aAuthSchemeOption::sigV4aAuthSchemeOption.schemeId,
               smithy::SigV4aAuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials),
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
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption,
                                                                     smithy::SigV4aAuthSchemeOption::sigV4aAuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider),
                                       GetServiceName(), clientConfiguration.region}},
              {smithy::SigV4aAuthSchemeOption::sigV4aAuthSchemeOption.schemeId,
               smithy::SigV4aAuthScheme{
                   Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(),
                   clientConfiguration.region}},
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
STSClient::InvokeOperationOutcome STSClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                                    Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_clientConfiguration.telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(serviceName, {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto result =
            MakeRequestDeserialize(&request, operationName, httpMethod,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { AWS_UNREFERENCED_PARAM(resolvedEndpoint); });
        return result.IsSuccess() ? InvokeOperationOutcome(result.GetResultWithOwnership())
                                  : InvokeOperationOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}
AssumeRoleOutcome STSClient::AssumeRole(const AssumeRoleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssumeRoleOutcome(result.GetResultWithOwnership()) : AssumeRoleOutcome(std::move(result.GetError()));
}

AssumeRoleWithSAMLOutcome STSClient::AssumeRoleWithSAML(const AssumeRoleWithSAMLRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssumeRoleWithSAMLOutcome(result.GetResultWithOwnership())
                            : AssumeRoleWithSAMLOutcome(std::move(result.GetError()));
}

AssumeRoleWithWebIdentityOutcome STSClient::AssumeRoleWithWebIdentity(const AssumeRoleWithWebIdentityRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssumeRoleWithWebIdentityOutcome(result.GetResultWithOwnership())
                            : AssumeRoleWithWebIdentityOutcome(std::move(result.GetError()));
}

AssumeRootOutcome STSClient::AssumeRoot(const AssumeRootRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssumeRootOutcome(result.GetResultWithOwnership()) : AssumeRootOutcome(std::move(result.GetError()));
}

DecodeAuthorizationMessageOutcome STSClient::DecodeAuthorizationMessage(const DecodeAuthorizationMessageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DecodeAuthorizationMessageOutcome(result.GetResultWithOwnership())
                            : DecodeAuthorizationMessageOutcome(std::move(result.GetError()));
}

GetAccessKeyInfoOutcome STSClient::GetAccessKeyInfo(const GetAccessKeyInfoRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAccessKeyInfoOutcome(result.GetResultWithOwnership())
                            : GetAccessKeyInfoOutcome(std::move(result.GetError()));
}

GetCallerIdentityOutcome STSClient::GetCallerIdentity(const GetCallerIdentityRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCallerIdentityOutcome(result.GetResultWithOwnership())
                            : GetCallerIdentityOutcome(std::move(result.GetError()));
}

GetDelegatedAccessTokenOutcome STSClient::GetDelegatedAccessToken(const GetDelegatedAccessTokenRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDelegatedAccessTokenOutcome(result.GetResultWithOwnership())
                            : GetDelegatedAccessTokenOutcome(std::move(result.GetError()));
}

GetFederationTokenOutcome STSClient::GetFederationToken(const GetFederationTokenRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetFederationTokenOutcome(result.GetResultWithOwnership())
                            : GetFederationTokenOutcome(std::move(result.GetError()));
}

GetSessionTokenOutcome STSClient::GetSessionToken(const GetSessionTokenRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetSessionTokenOutcome(result.GetResultWithOwnership())
                            : GetSessionTokenOutcome(std::move(result.GetError()));
}

GetWebIdentityTokenOutcome STSClient::GetWebIdentityToken(const GetWebIdentityTokenRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetWebIdentityTokenOutcome(result.GetResultWithOwnership())
                            : GetWebIdentityTokenOutcome(std::move(result.GetError()));
}
