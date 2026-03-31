/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/polly/Polly_EXPORTS.h>

namespace Aws {
namespace Polly {
namespace Model {
enum class QuotaCode { NOT_SET, input_stream_inbound_event_timeout, input_stream_timeout };

namespace QuotaCodeMapper {
AWS_POLLY_API QuotaCode GetQuotaCodeForName(const Aws::String& name);

AWS_POLLY_API Aws::String GetNameForQuotaCode(QuotaCode value);
}  // namespace QuotaCodeMapper
}  // namespace Model
}  // namespace Polly
}  // namespace Aws
