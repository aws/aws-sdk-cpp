/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/mocks/tracing/MockMeterProvider.h>
#include <smithy/tracing/NoopMeterProvider.h>
#include <smithy/tracing/NoopTracerProvider.h>

using namespace smithy::components::tracing;

static const char MOCK_METER_PROVIDER_TAG[] = "MockMeterProvider";

void MockMetricsRecorder::Record(const Aws::String& name)
{
    std::lock_guard<std::mutex> guard(m_lock);
    m_names.insert(name);
}

bool MockMetricsRecorder::Contains(const Aws::String& name) const
{
    std::lock_guard<std::mutex> guard(m_lock);
    return m_names.find(name) != m_names.end();
}

MockHistogram::MockHistogram(Aws::String name, std::shared_ptr<MockMetricsRecorder> recorder)
    : m_name(std::move(name)), m_recorder(std::move(recorder))
{
}

void MockHistogram::record(double value, Aws::Map<Aws::String, Aws::String> attributes)
{
    AWS_UNREFERENCED_PARAM(value);
    AWS_UNREFERENCED_PARAM(attributes);
    m_recorder->Record(m_name);
}

MockMeter::MockMeter(std::shared_ptr<MockMetricsRecorder> recorder) : m_recorder(std::move(recorder))
{
}

Aws::UniquePtr<GaugeHandle> MockMeter::CreateGauge(Aws::String name,
    std::function<void(Aws::UniquePtr<AsyncMeasurement>)> callback,
    Aws::String units,
    Aws::String description) const
{
    AWS_UNREFERENCED_PARAM(name);
    AWS_UNREFERENCED_PARAM(callback);
    AWS_UNREFERENCED_PARAM(units);
    AWS_UNREFERENCED_PARAM(description);
    return Aws::MakeUnique<NoopGaugeHandle>(MOCK_METER_PROVIDER_TAG);
}

Aws::UniquePtr<UpDownCounter> MockMeter::CreateUpDownCounter(Aws::String name, Aws::String units, Aws::String description) const
{
    AWS_UNREFERENCED_PARAM(name);
    AWS_UNREFERENCED_PARAM(units);
    AWS_UNREFERENCED_PARAM(description);
    return Aws::MakeUnique<NoopUpDownCounter>(MOCK_METER_PROVIDER_TAG);
}

Aws::UniquePtr<MonotonicCounter> MockMeter::CreateCounter(Aws::String name, Aws::String units, Aws::String description) const
{
    AWS_UNREFERENCED_PARAM(name);
    AWS_UNREFERENCED_PARAM(units);
    AWS_UNREFERENCED_PARAM(description);
    return Aws::MakeUnique<NoopMonotonicCounter>(MOCK_METER_PROVIDER_TAG);
}

Aws::UniquePtr<Histogram> MockMeter::CreateHistogram(Aws::String name, Aws::String units, Aws::String description) const
{
    AWS_UNREFERENCED_PARAM(units);
    AWS_UNREFERENCED_PARAM(description);
    return Aws::MakeUnique<MockHistogram>(MOCK_METER_PROVIDER_TAG, std::move(name), m_recorder);
}

MockMeterProvider::MockMeterProvider(std::shared_ptr<MockMetricsRecorder> recorder) : m_recorder(std::move(recorder))
{
}

std::shared_ptr<Meter> MockMeterProvider::GetMeter(Aws::String scope, Aws::Map<Aws::String, Aws::String> attributes)
{
    AWS_UNREFERENCED_PARAM(scope);
    AWS_UNREFERENCED_PARAM(attributes);
    return Aws::MakeShared<MockMeter>(MOCK_METER_PROVIDER_TAG, m_recorder);
}

std::shared_ptr<TelemetryProvider> MockMeterProvider::CreateTelemetryProvider(std::shared_ptr<MockMetricsRecorder> recorder)
{
    return Aws::MakeShared<TelemetryProvider>(MOCK_METER_PROVIDER_TAG,
        Aws::MakeUnique<NoopTracerProvider>(MOCK_METER_PROVIDER_TAG, Aws::MakeUnique<NoopTracer>(MOCK_METER_PROVIDER_TAG)),
        Aws::MakeUnique<MockMeterProvider>(MOCK_METER_PROVIDER_TAG, std::move(recorder)),
        []() -> void {},
        []() -> void {});
}
