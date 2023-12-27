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
        typedef std::function<void(const PayloadPart&)> PayloadPartCallback;
        typedef std::function<void(const Aws::Client::AWSError<SageMakerRuntimeErrors>& error)> ErrorCallback;

    public:
        AWS_SAGEMAKERRUNTIME_API InvokeEndpointWithResponseStreamHandler();
        AWS_SAGEMAKERRUNTIME_API InvokeEndpointWithResponseStreamHandler& operator=(const InvokeEndpointWithResponseStreamHandler&) = default;

        AWS_SAGEMAKERRUNTIME_API virtual void OnEvent() override;

        inline void SetInitialResponseCallback(const InvokeEndpointWithResponseStreamInitialResponseCallback& callback) { m_onInitialResponse = callback; }
        inline void SetPayloadPartCallback(const PayloadPartCallback& callback) { m_onPayloadPart = callback; }
        inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

    private:
        AWS_SAGEMAKERRUNTIME_API void HandleEventInMessage();
        AWS_SAGEMAKERRUNTIME_API void HandleErrorInMessage();
        AWS_SAGEMAKERRUNTIME_API void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

        InvokeEndpointWithResponseStreamInitialResponseCallback m_onInitialResponse;
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
