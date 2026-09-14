/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/testing/Testing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSSet.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <smithy/tracing/MeterProvider.h>
#include <smithy/tracing/TelemetryProvider.h>

#include <memory>
#include <mutex>

class AWS_TESTING_API MockMetricsRecorder
{
public:
    void Record(const Aws::String& name);
    bool Contains(const Aws::String& name) const;

private:
    mutable std::mutex m_lock;
    Aws::Set<Aws::String> m_names;
};

class AWS_TESTING_API MockHistogram : public smithy::components::tracing::Histogram
{
public:
    MockHistogram(Aws::String name, std::shared_ptr<MockMetricsRecorder> recorder);

    void record(double value, Aws::Map<Aws::String, Aws::String> attributes) override;

private:
    Aws::String m_name;
    std::shared_ptr<MockMetricsRecorder> m_recorder;
};

class AWS_TESTING_API MockMeter : public smithy::components::tracing::Meter
{
public:
    explicit MockMeter(std::shared_ptr<MockMetricsRecorder> recorder);

    Aws::UniquePtr<smithy::components::tracing::GaugeHandle> CreateGauge(Aws::String name,
        std::function<void(Aws::UniquePtr<smithy::components::tracing::AsyncMeasurement>)> callback,
        Aws::String units,
        Aws::String description) const override;

    Aws::UniquePtr<smithy::components::tracing::UpDownCounter> CreateUpDownCounter(Aws::String name,
        Aws::String units,
        Aws::String description) const override;

    Aws::UniquePtr<smithy::components::tracing::MonotonicCounter> CreateCounter(Aws::String name,
        Aws::String units,
        Aws::String description) const override;

    Aws::UniquePtr<smithy::components::tracing::Histogram> CreateHistogram(Aws::String name,
        Aws::String units,
        Aws::String description) const override;

private:
    std::shared_ptr<MockMetricsRecorder> m_recorder;
};

class AWS_TESTING_API MockMeterProvider : public smithy::components::tracing::MeterProvider
{
public:
    explicit MockMeterProvider(std::shared_ptr<MockMetricsRecorder> recorder);

    std::shared_ptr<smithy::components::tracing::Meter> GetMeter(Aws::String scope,
        Aws::Map<Aws::String, Aws::String> attributes) override;

    static std::shared_ptr<smithy::components::tracing::TelemetryProvider> CreateTelemetryProvider(
        std::shared_ptr<MockMetricsRecorder> recorder);

private:
    std::shared_ptr<MockMetricsRecorder> m_recorder;
};
