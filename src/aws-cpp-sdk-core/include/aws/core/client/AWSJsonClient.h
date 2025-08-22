/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#if !defined(AWS_JSON_CLIENT_H)
#define AWS_JSON_CLIENT_H

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/client/AWSProtocolClient.h>

namespace Aws
{
    namespace Utils
    {
        namespace Json
        {
            class JsonValue;
        } // namespace Json
    } // namespace Utils

    namespace Client
    {
        using JsonOutcome = Utils::Outcome<AmazonWebServiceResult<Utils::Json::JsonValue>, AWSError<CoreErrors>>;

        template <typename OutcomeT, typename ClientT, typename AWSEndpointT, typename RequestT, typename HandlerT>
        class BidirectionalEventStreamingTask;

        /**
         *  AWSClient that handles marshalling json response bodies. You would inherit from this class
         *  to create a client that uses Json as its payload format.
         */
        class AWS_CORE_API AWSJsonClient : public AWSProtocolClient<JsonOutcome, Utils::Json::JsonValue>
        {
        public:
            typedef AWSProtocolClient<JsonOutcome, Utils::Json::JsonValue> BASECLASS;

            /**
             * Simply calls AWSClient constructor.
             */
            AWSJsonClient(const Aws::Client::ClientConfiguration& configuration,
                const std::shared_ptr<Aws::Client::AWSAuthSigner>& signer,
                const std::shared_ptr<AWSErrorMarshaller>& errorMarshaller);

            /**
             * Simply calls AWSClient constructor.
             */
            AWSJsonClient(const Aws::Client::ClientConfiguration& configuration,
                    const std::shared_ptr<Aws::Auth::AWSAuthSignerProvider>& signerProvider,
                    const std::shared_ptr<AWSErrorMarshaller>& errorMarshaller);

            virtual ~AWSJsonClient() = default;

        protected:
            template <typename OutcomeT, typename ClientT, typename AWSEndpointT, typename RequestT, typename HandlerT>
            friend class BidirectionalEventStreamingTask; // allow BidirectionalEventStreamingTask to MakeRequests

        private:
            AWSError<CoreErrors> CreateParseError() const override;
            const char* GetClientLogTag() const override;
        };
    } // namespace Client
} // namespace Aws

#endif // !defined(AWS_JSON_CLIENT_H)