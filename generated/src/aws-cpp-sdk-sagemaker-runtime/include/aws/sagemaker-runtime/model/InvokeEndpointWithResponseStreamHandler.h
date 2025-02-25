/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/event/EventStreamHandler.h>
#include <aws/core/client/AWSError.h>
#include <aws/sagemaker-runtime/SageMakerRuntime_EXPORTS.h>
#include <aws/sagemaker-runtime/SageMakerRuntimeErrors.h>

#include <aws/sagemaker-runtime/model/InvokeEndpointWithResponseStreamInitialResponse.h>
#include <aws/sagemaker-runtime/model/PayloadPart.h>

namespace Aws
{
namespace SageMakerRuntime
{
namespace Model
{
    enum class InvokeEndpointWithResponseStreamEventType
    {
        INITIAL_RESPONSE,
        PAYLOADPART,
        UNKNOWN
    };

    class InvokeEndpointWithResponseStreamHandler : public Aws::Utils::Event::EventStreamHandler
    {
        typedef std::function<void(const InvokeEndpointWithResponseStreamInitialResponse&)> InvokeEndpointWithResponseStreamInitialResponseCallback;
        typedef std::function<void(const InvokeEndpointWithResponseStreamInitialResponse&, const Utils::Event::InitialResponseType)> InvokeEndpointWithResponseStreamInitialResponseCallbackEx;
        typedef std::function<void(const PayloadPart&)> PayloadPartCallback;
        typedef std::function<void(const Aws::Client::AWSError<SageMakerRuntimeErrors>& error)> ErrorCallback;

    public:
        AWS_SAGEMAKERRUNTIME_API InvokeEndpointWithResponseStreamHandler();
        AWS_SAGEMAKERRUNTIME_API InvokeEndpointWithResponseStreamHandler& operator=(const InvokeEndpointWithResponseStreamHandler&) = default;
        AWS_SAGEMAKERRUNTIME_API InvokeEndpointWithResponseStreamHandler(const InvokeEndpointWithResponseStreamHandler&) = default;

        AWS_SAGEMAKERRUNTIME_API virtual void OnEvent() override;

        ///@{
        /**
         * Sets an initial response callback. This callback gets called on the initial InvokeEndpointWithResponseStream Operation response.
         *   This can be either "initial-response" decoded event frame or decoded HTTP headers received on connection.
         *   This callback may get called more than once (i.e. on connection headers received and then on the initial-response event received).
         * @param callback
         */
        inline void SetInitialResponseCallbackEx(const InvokeEndpointWithResponseStreamInitialResponseCallbackEx& callback) { m_onInitialResponse = callback; }
        /**
         * Sets an initial response callback (a legacy one that does not distinguish whether response originates from headers or from the event).
         */
        inline void SetInitialResponseCallback(const InvokeEndpointWithResponseStreamInitialResponseCallback& noArgCallback)
        {
            m_onInitialResponse = [noArgCallback](const InvokeEndpointWithResponseStreamInitialResponse& rs, const Utils::Event::InitialResponseType) { return noArgCallback(rs); };
        }
        ///@}
        inline void SetPayloadPartCallback(const PayloadPartCallback& callback) { m_onPayloadPart = callback; }
        inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

        inline InvokeEndpointWithResponseStreamInitialResponseCallbackEx& GetInitialResponseCallbackEx() { return m_onInitialResponse; }

    private:
        AWS_SAGEMAKERRUNTIME_API void HandleEventInMessage();
        AWS_SAGEMAKERRUNTIME_API void HandleErrorInMessage();
        AWS_SAGEMAKERRUNTIME_API void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

        InvokeEndpointWithResponseStreamInitialResponseCallbackEx m_onInitialResponse;
        PayloadPartCallback m_onPayloadPart;
        ErrorCallback m_onError;
    };

namespace InvokeEndpointWithResponseStreamEventMapper
{
    AWS_SAGEMAKERRUNTIME_API InvokeEndpointWithResponseStreamEventType GetInvokeEndpointWithResponseStreamEventTypeForName(const Aws::String& name);

    AWS_SAGEMAKERRUNTIME_API Aws::String GetNameForInvokeEndpointWithResponseStreamEventType(InvokeEndpointWithResponseStreamEventType value);
} // namespace InvokeEndpointWithResponseStreamEventMapper
} // namespace Model
} // namespace SageMakerRuntime
} // namespace Aws
