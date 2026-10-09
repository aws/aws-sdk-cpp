/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AsyncOperationState.h>
#include <aws/core/utils/threading/Executor.h>

using namespace Aws::Client;
using namespace smithy::components::tracing;

static const char* ASYNC_OPERATION_STATE_TAG = "AsyncOperationState";

class Aws::Client::RequestLifetimeExtension
{
public:
    explicit RequestLifetimeExtension(std::shared_ptr<Aws::AmazonWebServiceRequest> request);
    ~RequestLifetimeExtension();

    RequestLifetimeExtension(const RequestLifetimeExtension&) = delete;
    RequestLifetimeExtension& operator=(const RequestLifetimeExtension&) = delete;

private:
    std::shared_ptr<Aws::AmazonWebServiceRequest> m_request;
    Aws::IOStreamFactory m_responseStreamFactory;
};

OperationTelemetry::OperationTelemetry(std::shared_ptr<TraceSpan> span,
                                       const Aws::String& metricName,
                                       const std::shared_ptr<Meter>& meter,
                                       Aws::Map<Aws::String, Aws::String>&& attributes)
    : m_span(std::move(span)),
      m_durationTimer(metricName, meter, std::move(attributes))
{
}

OperationTelemetry::~OperationTelemetry() = default;

RequestLifetimeExtension::RequestLifetimeExtension(std::shared_ptr<Aws::AmazonWebServiceRequest> request)
    : m_request(std::move(request)),
      m_responseStreamFactory(m_request->GetResponseStreamFactory())
{
    auto extendedRequest = m_request;
    auto responseStreamFactory = m_responseStreamFactory;
    m_request->SetResponseStreamFactory([extendedRequest, responseStreamFactory]() { return responseStreamFactory(); });
}

RequestLifetimeExtension::~RequestLifetimeExtension()
{
    m_request->SetResponseStreamFactory(m_responseStreamFactory);
}

AsyncOperationState::AsyncOperationState(std::shared_ptr<Aws::Utils::Threading::Executor> executor)
    : m_executor(std::move(executor))
{
}

AsyncOperationState::~AsyncOperationState() = default;

bool AsyncOperationState::IsAsyncIOEnabled()
{
#if defined(AWS_CRT_HTTP_USE_ASYNC_IO)
    return true;
#else
    return false;
#endif
}

const std::shared_ptr<Aws::Utils::Threading::Executor>& AsyncOperationState::GetExecutor() const
{
    return m_executor;
}

void AsyncOperationState::AdoptTelemetry(Aws::UniquePtr<OperationTelemetry> telemetry, bool conversionOutsideTiming)
{
    m_telemetry = std::move(telemetry);
    m_conversionOutsideTiming = conversionOutsideTiming;
}

void AsyncOperationState::ExtendRequestLifetime()
{
    if (m_request && !m_requestLifetimeExtension)
    {
        m_requestLifetimeExtension = Aws::MakeUnique<RequestLifetimeExtension>(ASYNC_OPERATION_STATE_TAG, m_request);
    }
}

bool AsyncOperationState::TryTake()
{
    return !m_taken.exchange(true);
}

bool AsyncOperationState::IsTaken() const
{
    return m_taken.load();
}

void AsyncOperationState::BindRequest(std::shared_ptr<Aws::AmazonWebServiceRequest> request)
{
    m_request = std::move(request);
}

void AsyncOperationState::EndTelemetryBeforeConversion()
{
    if (m_conversionOutsideTiming)
    {
        m_telemetry.reset();
    }
}

void AsyncOperationState::EndOperation()
{
    m_telemetry.reset();
    m_requestLifetimeExtension.reset();
    m_request.reset();
}
