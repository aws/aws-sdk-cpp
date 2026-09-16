/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/model/MetricMathAnomalyDetector.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatch {
namespace Model {

MetricMathAnomalyDetector::MetricMathAnomalyDetector(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

MetricMathAnomalyDetector& MetricMathAnomalyDetector::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  AWS_UNREFERENCED_PARAM(decoder);
  return *this;
}

void MetricMathAnomalyDetector::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  size_t mapSize = 0;
  encoder.WriteMapStart(mapSize);
}

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
