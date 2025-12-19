/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/model/PutMetricStreamRequest.h>

#include <utility>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String PutMetricStreamRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_includeFiltersHasBeenSet) {
    mapSize++;
  }
  if (m_excludeFiltersHasBeenSet) {
    mapSize++;
  }
  if (m_firehoseArnHasBeenSet) {
    mapSize++;
  }
  if (m_roleArnHasBeenSet) {
    mapSize++;
  }
  if (m_outputFormatHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_statisticsConfigurationsHasBeenSet) {
    mapSize++;
  }
  if (m_includeLinkedAccountsMetricsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_includeFiltersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IncludeFilters"));
    encoder.WriteArrayStart(m_includeFilters.size());
    for (const auto& item_0 : m_includeFilters) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_excludeFiltersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ExcludeFilters"));
    encoder.WriteArrayStart(m_excludeFilters.size());
    for (const auto& item_0 : m_excludeFilters) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_firehoseArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FirehoseArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_firehoseArn.c_str()));
  }

  if (m_roleArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RoleArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_roleArn.c_str()));
  }

  if (m_outputFormatHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OutputFormat"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(MetricStreamOutputFormatMapper::GetNameForMetricStreamOutputFormat(m_outputFormat).c_str()));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_statisticsConfigurationsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StatisticsConfigurations"));
    encoder.WriteArrayStart(m_statisticsConfigurations.size());
    for (const auto& item_0 : m_statisticsConfigurations) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_includeLinkedAccountsMetricsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IncludeLinkedAccountsMetrics"));
    encoder.WriteBool(m_includeLinkedAccountsMetrics);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection PutMetricStreamRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
