/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/client/AWSClient.h>
#include <smithy/tracing/TracingUtils.h>
#include <aws/core/client/AWSErrorMarshaller.h>

namespace Aws
{
    namespace Client
    {
        /**
         * Templated base class for protocol-specific AWS clients (JSON, CBOR)
         * Eliminates code duplication by templating the response type and parsing logic.
         */
        template<typename OutcomeType, typename ResponseType>
        class AWSProtocolClient : public AWSClient
        {
        public:
            typedef AWSClient BASECLASS;

            AWSProtocolClient(const Aws::Client::ClientConfiguration& configuration,
                const std::shared_ptr<Aws::Client::AWSAuthSigner>& signer,
                const std::shared_ptr<AWSErrorMarshaller>& errorMarshaller)
                : BASECLASS(configuration, signer, errorMarshaller) {}

            AWSProtocolClient(const Aws::Client::ClientConfiguration& configuration,
                const std::shared_ptr<Aws::Auth::AWSAuthSignerProvider>& signerProvider,
                const std::shared_ptr<AWSErrorMarshaller>& errorMarshaller)
                : BASECLASS(configuration, signerProvider, errorMarshaller) {}

            virtual ~AWSProtocolClient() = default;

        protected:
            /**
             * Returns a OutcomeType or an error from the request. Does some marshalling and raw streams,
             * then just calls AttemptExhaustively.
             *
             * method defaults to POST
             */
            OutcomeType MakeRequest(const Aws::AmazonWebServiceRequest& request,
                                  const Aws::Endpoint::AWSEndpoint& endpoint,
                                  Http::HttpMethod method = Http::HttpMethod::HTTP_POST,
                                  const char* signerName = Aws::Auth::SIGV4_SIGNER,
                                  const char* signerRegionOverride = nullptr,
                                  const char* signerServiceNameOverride = nullptr) const
            {
                const Aws::Http::URI& uri = endpoint.GetURI();
                ExtractSignerInfo(endpoint, signerName, signerRegionOverride, signerServiceNameOverride);
                return MakeRequest(uri, request, method, signerName, signerRegionOverride, signerServiceNameOverride);
            }


            OutcomeType MakeRequest(const Aws::Endpoint::AWSEndpoint& endpoint,
                                  Http::HttpMethod method = Http::HttpMethod::HTTP_POST,
                                  const char* signerName = Aws::Auth::SIGV4_SIGNER,
                                  const char* signerRegionOverride = nullptr,
                                  const char* signerServiceNameOverride = nullptr) const
            {
                const Aws::Http::URI& uri = endpoint.GetURI();
                ExtractSignerInfo(endpoint, signerName, signerRegionOverride, signerServiceNameOverride);
                return MakeRequest(uri, method, signerName, signerRegionOverride, signerServiceNameOverride);
            }

            /**
            * Returns a OutcomeType or an error from the request. Does some marshalling and raw streams,
            * then just calls AttemptExhaustively.
            *
            * method defaults to POST
            */
            OutcomeType MakeRequest(const Aws::Http::URI& uri,
                const Aws::AmazonWebServiceRequest& request,
                Http::HttpMethod method = Http::HttpMethod::HTTP_POST,
                const char* signerName = Aws::Auth::SIGV4_SIGNER,
                const char* signerRegionOverride = nullptr,
                const char* signerServiceNameOverride = nullptr) const
            {
                HttpResponseOutcome httpOutcome(BASECLASS::AttemptExhaustively(uri, request, method, signerName, signerRegionOverride, signerServiceNameOverride));
                return ProcessHttpResponse(httpOutcome, request.GetServiceRequestName());
            }


            /**
            * Returns an OutcomeType or an error from the request. Does some marshalling and raw streams,
            * then just calls AttemptExhaustively.
            *
            * requestName is used for metrics and defaults to empty string, to avoid empty names in metrics provide a valid
            * name.
            *
            * method defaults to POST
            */
            OutcomeType MakeRequest(const Aws::Http::URI& uri,
                Http::HttpMethod method = Http::HttpMethod::HTTP_POST,
                const char* signerName = Aws::Auth::SIGV4_SIGNER,
                const char* requestName = "",
                const char* signerRegionOverride = nullptr,
                const char* signerServiceNameOverride = nullptr) const
            {
                HttpResponseOutcome httpOutcome(BASECLASS::AttemptExhaustively(uri, method, signerName, requestName, signerRegionOverride, signerServiceNameOverride));
                return ProcessHttpResponse(httpOutcome, requestName);
            }

            OutcomeType MakeEventStreamRequest(std::shared_ptr<Aws::Http::HttpRequest>& request) const
            {
                std::shared_ptr<Http::HttpResponse> httpResponse = MakeHttpRequest(request);

                if (DoesResponseGenerateError(httpResponse)) {
                    AWS_LOGSTREAM_DEBUG(GetClientLogTag(), "Request returned error. Attempting to generate appropriate error codes from response");
                    auto error = BuildAWSError(httpResponse);
                    return OutcomeType(std::move(error));
                }

                AWS_LOGSTREAM_DEBUG(GetClientLogTag(), "Request returned successful response.");

                HttpResponseOutcome httpOutcome(std::move(httpResponse));
                if (httpOutcome.GetResult()->GetResponseBody().tellp() > 0) {
                    auto response = ResponseType(httpOutcome.GetResult()->GetResponseBody());
                    if (!response.WasParseSuccessful()) {
                        return OutcomeType(CreateParseError());
                    }
                    return OutcomeType(AmazonWebServiceResult<ResponseType>(std::move(response),
                        httpOutcome.GetResult()->GetHeaders(),
                        httpOutcome.GetResult()->GetResponseCode()));
                }
                return OutcomeType(AmazonWebServiceResult<ResponseType>(ResponseType(), httpOutcome.GetResult()->GetHeaders()));
            }

            /**
            * Converts/Parses an http response into a meaningful AWSError object.
            */
            AWSError<CoreErrors> BuildAWSError(const std::shared_ptr<Aws::Http::HttpResponse>& httpResponse) const override
            {
                AWSError<CoreErrors> error;
                if (httpResponse->HasClientError())
                {
                  bool retryable = httpResponse->GetClientErrorType() == CoreErrors::NETWORK_CONNECTION ? true : false;
                  error = AWSError<CoreErrors>(httpResponse->GetClientErrorType(), "", httpResponse->GetClientErrorMessage(), retryable);
                }
                else if (!httpResponse->GetResponseBody() || httpResponse->GetResponseBody().tellp() < 1)
                {
                  auto responseCode = httpResponse->GetResponseCode();
                  auto errorCode = AWSClient::GuessBodylessErrorType(responseCode);

                  Aws::StringStream ss;
                  ss << "No response body.";
                  error = AWSError<CoreErrors>(errorCode, "", ss.str(),
                      IsRetryableHttpResponseCode(responseCode));
                }
                else
                {
                  assert(httpResponse->GetResponseCode() != Aws::Http::HttpResponseCode::OK);
                  error = GetErrorMarshaller()->Marshall(*httpResponse);
                }

                error.SetResponseHeaders(httpResponse->GetHeaders());
                error.SetResponseCode(httpResponse->GetResponseCode());
                error.SetRemoteHostIpAddress(httpResponse->GetOriginatingRequest().GetResolvedRemoteHost());
                AWS_LOGSTREAM_ERROR(GetClientLogTag(), error);
                return error;
            }

        private:
            void ExtractSignerInfo(const Aws::Endpoint::AWSEndpoint& endpoint,
                                 const char*& signerName,
                                 const char*& signerRegionOverride,
                                 const char*& signerServiceNameOverride) const
            {
                if (endpoint.GetAttributes()) {
                    signerName = endpoint.GetAttributes()->authScheme.GetName().c_str();
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
            }

            OutcomeType ProcessHttpResponse(HttpResponseOutcome& httpOutcome, const char* requestName) const
            {
                if (!httpOutcome.IsSuccess()) {
                    return smithy::components::tracing::TracingUtils::MakeCallWithTiming<OutcomeType>(
                        [&]() -> OutcomeType { return OutcomeType(std::move(httpOutcome)); },
                        smithy::components::tracing::TracingUtils::SMITHY_CLIENT_DESERIALIZATION_METRIC,
                        *m_telemetryProvider->getMeter(this->GetServiceClientName(), {}),
                        {{smithy::components::tracing::TracingUtils::SMITHY_METHOD_DIMENSION, requestName},
                         {smithy::components::tracing::TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
                }

                if (httpOutcome.GetResult()->GetResponseBody().tellp() > 0) {
                    return smithy::components::tracing::TracingUtils::MakeCallWithTiming<OutcomeType>(
                        [&]() -> OutcomeType {
                            auto response = ResponseType(httpOutcome.GetResult()->GetResponseBody());
                            if (!response.WasParseSuccessful()) {
                                return OutcomeType(CreateParseError());
                            }
                            return OutcomeType(AmazonWebServiceResult<ResponseType>(std::move(response),
                                httpOutcome.GetResult()->GetHeaders(),
                                httpOutcome.GetResult()->GetResponseCode()));
                        },
                        smithy::components::tracing::TracingUtils::SMITHY_CLIENT_DESERIALIZATION_METRIC,
                        *m_telemetryProvider->getMeter(this->GetServiceClientName(), {}),
                        {{smithy::components::tracing::TracingUtils::SMITHY_METHOD_DIMENSION, requestName},
                         {smithy::components::tracing::TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
                }

                return smithy::components::tracing::TracingUtils::MakeCallWithTiming<OutcomeType>(
                    [&]() -> OutcomeType {
                        return OutcomeType(AmazonWebServiceResult<ResponseType>(ResponseType(), httpOutcome.GetResult()->GetHeaders()));
                    },
                    smithy::components::tracing::TracingUtils::SMITHY_CLIENT_DESERIALIZATION_METRIC,
                    *m_telemetryProvider->getMeter(this->GetServiceClientName(), {}),
                    {{smithy::components::tracing::TracingUtils::SMITHY_METHOD_DIMENSION, requestName},
                     {smithy::components::tracing::TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
            }

            // Pure virtual functions for protocol-specific behavior
            virtual AWSError<CoreErrors> CreateParseError() const = 0;
            virtual const char* GetClientLogTag() const { return "AWSProtocolClient"; };
        };
    }
}