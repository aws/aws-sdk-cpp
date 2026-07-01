/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatch {
namespace Model {

/**
 * <p>An evaluation window that advances each time the alarm is evaluated, forming
 * a rolling time window. This is the default evaluation window. A sliding window
 * has no additional configuration options.</p> <p>Choose a sliding window when you
 * need the fastest detection and the calendar boundaries of the data don't matter,
 * such as for continuous performance, latency, or resource-exhaustion
 * monitoring.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/SlidingWindow">AWS
 * API Reference</a></p>
 */
class SlidingWindow {
 public:
  AWS_CLOUDWATCH_API SlidingWindow() = default;
  AWS_CLOUDWATCH_API SlidingWindow(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API SlidingWindow& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
