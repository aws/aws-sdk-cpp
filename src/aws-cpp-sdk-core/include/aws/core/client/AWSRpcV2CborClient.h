/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#if !defined(AWS_CBOR_CLIENT_H)
#define AWS_CBOR_CLIENT_H

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/client/AWSClient.h>
#include <aws/crt/cbor/Cbor.h>

namespace Aws
{
    namespace Client
    {
        using RpcV2CborOutcome = Utils::Outcome<AmazonWebServiceResult<Aws::UniquePtr<Crt::Cbor::CborDecoder>>, AWSError<CoreErrors>>;

        template <typename OutcomeT, typename ClientT, typename AWSEndpointT, typename RequestT, typename HandlerT>
        class BidirectionalEventStreamingTask;

        /**
         *  AWSClient that handles marshalling cbor response bodies. You would inherit from this class
         *  to create a client that uses Cbor as its payload format.
         */
        class AWS_CORE_API AWSRpcV2CborClient : public AWSClient
        {
        public:
            typedef AWSClient BASECLASS;

            /**
             * Simply calls AWSClient constructor.
             */
            AWSRpcV2CborClient(const Aws::Client::ClientConfiguration& configuration,
                const std::shared_ptr<Aws::Client::AWSAuthSigner>& signer,
                const std::shared_ptr<AWSErrorMarshaller>& errorMarshaller);

            /**
             * Simply calls AWSClient constructor.
             */
            AWSRpcV2CborClient(const Aws::Client::ClientConfiguration& configuration,
                    const std::shared_ptr<Aws::Auth::AWSAuthSignerProvider>& signerProvider,
                    const std::shared_ptr<AWSErrorMarshaller>& errorMarshaller);

            virtual ~AWSRpcV2CborClient() = default;

        protected:
            template <typename OutcomeT, typename ClientT, typename AWSEndpointT, typename RequestT, typename HandlerT>
            friend class BidirectionalEventStreamingTask; // allow BidirectionalEventStreamingTask to MakeRequests
            /**
             * Converts/Parses an http response into a meaningful AWSError object using the cbor message structure.
             */
            virtual AWSError<CoreErrors> BuildAWSError(const std::shared_ptr<Aws::Http::HttpResponse>& response) const override;

            /**
             * Returns a pointer to a Cbor decoder or an error from the request. Does some marshalling cbor and raw streams,
             * then just calls AttemptExhaustively.
             *
             * method defaults to POST
             */
            RpcV2CborOutcome MakeRequest(const Aws::AmazonWebServiceRequest& request,
                                    const Aws::Endpoint::AWSEndpoint& endpoint,
                                    Http::HttpMethod method = Http::HttpMethod::HTTP_POST,
                                    const char* signerName = Aws::Auth::SIGV4_SIGNER,
                                    const char* signerRegionOverride = nullptr,
                                    const char* signerServiceNameOverride = nullptr) const;

            RpcV2CborOutcome MakeRequest(const Aws::Endpoint::AWSEndpoint& endpoint,
                                    Http::HttpMethod method = Http::HttpMethod::HTTP_POST,
                                    const char* signerName = Aws::Auth::SIGV4_SIGNER,
                                    const char* signerRegionOverride = nullptr,
                                    const char* signerServiceNameOverride = nullptr) const;

            /**
             * Returns a pointer to a Cbor decoder or an error from the request. Does some marshalling cbor and raw streams,
             * then just calls AttemptExhaustively.
             *
             * method defaults to POST
             */
            RpcV2CborOutcome MakeRequest(const Aws::Http::URI& uri,
                const Aws::AmazonWebServiceRequest& request,
                Http::HttpMethod method = Http::HttpMethod::HTTP_POST,
                const char* signerName = Aws::Auth::SIGV4_SIGNER,
                const char* signerRegionOverride = nullptr,
                const char* signerServiceNameOverride = nullptr) const;

            /**
             * Returns a pointer to a Cbor decoder or an error from the request. Does some marshalling json and raw streams,
             * then just calls AttemptExhaustively.
             *
             * requestName is used for metrics and defaults to empty string, to avoid empty names in metrics provide a valid
             * name.
             *
             * method defaults to POST
             */
            RpcV2CborOutcome MakeRequest(const Aws::Http::URI& uri,
                Http::HttpMethod method = Http::HttpMethod::HTTP_POST,
                const char* signerName = Aws::Auth::SIGV4_SIGNER,
                const char* requestName = "",
                const char* signerRegionOverride = nullptr,
                const char* signerServiceNameOverride = nullptr) const;

            RpcV2CborOutcome MakeEventStreamRequest(std::shared_ptr<Aws::Http::HttpRequest>& request) const;

        private:
          Aws::UniquePtr<Aws::Crt::Cbor::CborDecoder> CreateCborDecoder(const HttpResponseOutcome& response) const;
        };
    } // namespace Client
} // namespace Aws

#endif // !defined(AWS_CBOR_CLIENT_H)