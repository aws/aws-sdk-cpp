/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <smithy/tracing/NoopTracerProvider.h>
#include <smithy/tracing/NoopMeterProvider.h>

using namespace smithy::components::tracing;

static const char *ALLOC_TAG = "SMITHY_TRACING_ALLOC";


class SmithyTracingTest : public Aws::Testing::AwsCppSdkGTestSuite {
};

TEST_F(SmithyTracingTest, TestTraceSpan) {
    auto tracer = Aws::MakeUnique<NoopTracer>(ALLOC_TAG);
    NoopTracerProvider provider(std::move(tracer));
    auto providedTracer = provider.GetTracer("scope", {});
    auto span = providedTracer->CreateSpan("name", {}, SpanKind::INTERNAL);
    span->emitEvent("eventName", {});
    span->end();
}

TEST_F(SmithyTracingTest, TestMetricEmission) {
    auto provider = Aws::MakeUnique<NoopMeterProvider>(ALLOC_TAG);
    auto meter = provider->GetMeter("scope", {});

    auto counter = meter->CreateCounter("counter", "units", "testcounter");
    counter->add(1l, {});

    auto updown = meter->CreateUpDownCounter("updown", "units", "testupdown");
    updown->add(1l, {});

    auto histogram = meter->CreateHistogram("histogram", "units", "testhistogram");
    histogram->record(1.0f, {});

    auto gauge = meter->CreateGauge("gauge",
        [](Aws::UniquePtr<AsyncMeasurement> measurement) -> void { AWS_UNREFERENCED_PARAM(measurement); },
        "units",
        "testgauge");
    gauge->Stop();
}