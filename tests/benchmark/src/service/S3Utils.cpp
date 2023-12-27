/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <service/S3Utils.h>
#include <aws/s3/S3ClientConfiguration.h>
#ifdef USE_OTLP
#include <smithy/tracing/impl/opentelemetry/OtelTelemetryProvider.h>
#include <opentelemetry/exporters/ostream/span_exporter_factory.h>
#include <opentelemetry/exporters/ostream/metric_exporter.h>
#include <opentelemetry/exporters/otlp/otlp_http_exporter_factory.h>
#include <opentelemetry/exporters/otlp/otlp_http_exporter_options.h>
#include <opentelemetry/exporters/otlp/otlp_http_metric_exporter_factory.h>
#include <opentelemetry/exporters/otlp/otlp_http_metric_exporter_options.h>
#endif

using namespace Benchmark;
using namespace Aws::S3;
#ifdef USE_OTLP
using namespace smithy::components::tracing;
using namespace opentelemetry::exporter::otlp;
#endif

const char* ALLOC_TAG = "S3_BENCHMARK";

std::unique_ptr<Aws::S3::S3Client> S3Utils::makeClient(const std::map<std::string, std::string> &cliDimensions) {
    S3ClientConfiguration configuration;
    if (cliDimensions.find("TelemetryHost") != cliDimensions.end() &&
        cliDimensions.find("TelemetryPort") != cliDimensions.end())
    {
#ifdef USE_OTLP
        auto host = cliDimensions.at("TelemetryHost") + ":" + cliDimensions.at("TelemetryPort");
        OtlpHttpExporterOptions opts;
        opts.url = "http://" + host + "/v1/traces";
        auto spanExporter = OtlpHttpExporterFactory::Create(opts);

        OtlpHttpMetricExporterOptions metricOptions;
        metricOptions.url =  "http://" + host + "/v1/metrics";
        metricOptions.aggregation_temporality = opentelemetry::sdk::metrics::AggregationTemporality::kDelta; // or kCumulative
        auto metricExporter = OtlpHttpMetricExporterFactory::Create(metricOptions);

        configuration.telemetryProvider = OtelTelemetryProvider::CreateOtelProvider(
            std::move(spanExporter),
            std::move(metricExporter));
#endif
    }
    return std::unique_ptr<S3Client>(new S3Client(configuration));
}

std::string Benchmark::S3Utils::getBucketPrefix(const std::map<std::string, std::string> &cliDimensions) {
    if (cliDimensions.find("BucketType") != cliDimensions.end() &&
        cliDimensions.at("BucketType") == "S3Express") {
        //Use the bucket suffix for s3 express if it is present in the dimensions of the test.
        //right now we only support testing in us-east-1.
        return "--use1-az2--x-s3";
    }
    return "";
}

std::vector<Dimension> Benchmark::S3Utils::getMetricDimensions(
    const std::map<std::string, std::string> &cliDimensions,
    const std::vector<Dimension> &metricDimensions) {
    std::vector<Dimension> metricsDims(metricDimensions);
    if (cliDimensions.find("BucketType") != cliDimensions.end() &&
        cliDimensions.at("BucketType") == "S3Express") {
        metricsDims.push_back({"S3Express", "On"});
    } else {
        metricsDims.push_back({"S3Express", "Off"});
    }
    return metricsDims;
}
