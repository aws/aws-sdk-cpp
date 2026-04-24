/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/memory/stl/AWSArray.h>
#include <aws/core/monitoring/HttpClientMetrics.h>

namespace Aws
{
    namespace Monitoring
    {
        static const char HTTP_CLIENT_METRICS_DESTINATION_IP[] = "DestinationIp";
        static const char HTTP_CLIENT_METRICS_ACQUIRE_CONNECTION_LATENCY[] = "AcquireConnectionLatency";
        static const char HTTP_CLIENT_METRICS_CONNECTION_REUSED[] = "ConnectionReused";
        static const char HTTP_CLIENT_METRICS_CONNECTION_LATENCY[] = "ConnectLatency";
        static const char HTTP_CLIENT_METRICS_REQUEST_LATENCY[] = "RequestLatency";
        static const char HTTP_CLIENT_METRICS_DNS_LATENCY[] = "DnsLatency";
        static const char HTTP_CLIENT_METRICS_TCP_LATENCY[] = "TcpLatency";
        static const char HTTP_CLIENT_METRICS_SSL_LATENCY[] = "SslLatency";
        static const char HTTP_CLIENT_METRICS_DOWNLOAD_SPEED[] = "DownloadSpeed";
        static const char HTTP_CLIENT_METRICS_THROUGHPUT[] = "Throughput";
        static const char HTTP_CLIENT_METRICS_UPLOAD_SPEED[] = "UploadSpeed";
        static const char HTTP_CLIENT_METRICS_TIME_TO_FIRST_BYTE[] = "TimeToFirstByte";
        static const char HTTP_CLIENT_METRICS_TIME_TO_CONNECT[] = "TimeToConnect";
        static const char HTTP_CLIENT_METRICS_UNKNOWN[] = "Unknown";

        static const Aws::Array<std::pair<HttpClientMetricsType, const char*>, 14> httpClientMetricsNames =
        {{
            std::pair<HttpClientMetricsType, const char *>(HttpClientMetricsType::DestinationIp, HTTP_CLIENT_METRICS_DESTINATION_IP),
            std::pair<HttpClientMetricsType, const char *>(HttpClientMetricsType::AcquireConnectionLatency, HTTP_CLIENT_METRICS_ACQUIRE_CONNECTION_LATENCY),
            std::pair<HttpClientMetricsType, const char *>(HttpClientMetricsType::ConnectionReused, HTTP_CLIENT_METRICS_CONNECTION_REUSED),
            std::pair<HttpClientMetricsType, const char *>(HttpClientMetricsType::ConnectLatency, HTTP_CLIENT_METRICS_CONNECTION_LATENCY),
            std::pair<HttpClientMetricsType, const char *>(HttpClientMetricsType::RequestLatency, HTTP_CLIENT_METRICS_REQUEST_LATENCY),
            std::pair<HttpClientMetricsType, const char *>(HttpClientMetricsType::DnsLatency, HTTP_CLIENT_METRICS_DNS_LATENCY),
            std::pair<HttpClientMetricsType, const char *>(HttpClientMetricsType::TcpLatency, HTTP_CLIENT_METRICS_TCP_LATENCY),
            std::pair<HttpClientMetricsType, const char *>(HttpClientMetricsType::SslLatency, HTTP_CLIENT_METRICS_SSL_LATENCY),
            std::pair<HttpClientMetricsType, const char *>(HttpClientMetricsType::DownloadSpeed, HTTP_CLIENT_METRICS_DOWNLOAD_SPEED),
            std::pair<HttpClientMetricsType, const char *>(HttpClientMetricsType::Throughput, HTTP_CLIENT_METRICS_THROUGHPUT),
            std::pair<HttpClientMetricsType, const char *>(HttpClientMetricsType::UploadSpeed, HTTP_CLIENT_METRICS_UPLOAD_SPEED),
            std::pair<HttpClientMetricsType, const char *>(HttpClientMetricsType::Unknown, HTTP_CLIENT_METRICS_UNKNOWN),
            std::pair<HttpClientMetricsType, const char *>(HttpClientMetricsType::TimeToFirstByte, HTTP_CLIENT_METRICS_TIME_TO_FIRST_BYTE),
            std::pair<HttpClientMetricsType, const char *>(HttpClientMetricsType::TimeToConnect, HTTP_CLIENT_METRICS_TIME_TO_CONNECT),
        }};

        HttpClientMetricsType GetHttpClientMetricTypeByName(const Aws::String& name)
        {
             auto it = std::find_if(httpClientMetricsNames.begin(), httpClientMetricsNames.end(), [&](const std::pair<HttpClientMetricsType, const char *>& pair) { return name == pair.second; });
             if (it == httpClientMetricsNames.end())
             {
                 return HttpClientMetricsType::Unknown;
             }
             return it->first;
        }

        Aws::String GetHttpClientMetricNameByType(HttpClientMetricsType type)
        {
            assert(static_cast<unsigned>(type) < httpClientMetricsNames.size());
            if (static_cast<unsigned>(type) >= httpClientMetricsNames.size())
                return HTTP_CLIENT_METRICS_UNKNOWN;

            assert(httpClientMetricsNames[static_cast<int>(type)].first == type);
            return Aws::String(httpClientMetricsNames[static_cast<int>(type)].second);
        }

    }
}
