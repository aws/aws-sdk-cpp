/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <smithy/tracing/RootTraceProbe.h>

using namespace smithy::components::tracing;

void RootTraceProbe::dispatchEvents(const Aws::Vector<TraceEvent>& events) {
    for (auto& probe : traceProbes) {
        probe->dispatchEvents(events);
    }
}

void RootTraceProbe::registerProbe(Aws::UniquePtr<TraceProbe> probe) {
    traceProbes.emplace_back(std::move(probe));
}
