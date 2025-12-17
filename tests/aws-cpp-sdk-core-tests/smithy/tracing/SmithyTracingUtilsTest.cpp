/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <smithy/tracing/NoopTracerProvider.h>
#include <smithy/tracing/NoopMeterProvider.h>
#include "smithy/tracing/TracingUtils.h"

using namespace smithy::components::tracing;

static const char *ALLOC_TAG = "SMITHY_TRACING_ALLOC";

class SmithyTracingUtilsTest : public Aws::Testing::AwsCppSdkGTestSuite {
};

TEST_F(SmithyTracingUtilsTest, TestMakeCallWithTiming) {
    auto provider = Aws::MakeUnique<NoopMeterProvider>(ALLOC_TAG);
    auto meter = provider->GetMeter("scope", {});

    auto value = TracingUtils::MakeCallWithTiming<int>(
        []() { return 42; },
        TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
        *meter,
        { { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE } },
        "test duration metric"
    );

    ASSERT_EQ(value, 42);
}

class NullMeter : public NoopMeter {
public:
    Aws::UniquePtr<Histogram> CreateHistogram(Aws::String name, Aws::String units, Aws::String description) const override {
        AWS_UNREFERENCED_PARAM(name);
        AWS_UNREFERENCED_PARAM(units);
        AWS_UNREFERENCED_PARAM(description);

        return nullptr;
    }
};

TEST_F(SmithyTracingUtilsTest, TestMakeCallWithTimingNullHistogram) {
    auto meter = Aws::MakeUnique<NullMeter>(ALLOC_TAG);

    auto value = TracingUtils::MakeCallWithTiming<int>(
        []() { return 42; },
        TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
        *meter,
        { { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE } },
        "test duration metric"
    );

    ASSERT_EQ(value, 42);
}
