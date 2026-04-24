/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#if !defined(AWS_CBOR_CLIENT_H)
#define AWS_CBOR_CLIENT_H

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/client/AWSProtocolClient.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/core/utils/cbor/CborValue.h>

namespace Aws
{
    namespace Utils
    {
        namespace Cbor
        {
            class CborValue;
        } // namespace Cbor
    } // namespace Utils

    namespace Client
    {
        using RpcV2CborOutcome = Utils::Outcome<AmazonWebServiceResult<Utils::Cbor::CborValue>, AWSError<CoreErrors>>;

        template <typename OutcomeT, typename ClientT, typename AWSEndpointT, typename RequestT, typename HandlerT>
        class BidirectionalEventStreamingTask;

        /**
         *  AWSClient that handles marshalling cbor response bodies. You would inherit from this class
         *  to create a client that uses Cbor as its payload format.
         */
        class AWS_CORE_API AWSRpcV2CborClient : public AWSProtocolClient<RpcV2CborOutcome, Utils::Cbor::CborValue>
        {
        public:
            typedef AWSProtocolClient<RpcV2CborOutcome, Utils::Cbor::CborValue> BASECLASS;

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
            friend class BidirectionalEventStreamingTask;

        private:
            AWSError<CoreErrors> CreateParseError() const override;
            const char* GetClientLogTag() const override;
        };
    } // namespace Client
} // namespace Aws

#endif // !defined(AWS_CBOR_CLIENT_H)