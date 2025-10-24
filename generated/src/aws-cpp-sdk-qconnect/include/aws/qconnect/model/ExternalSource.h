/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnect_EXPORTS.h>

namespace Aws {
namespace QConnect {
namespace Model {
enum class ExternalSource { NOT_SET, AMAZON_CONNECT };

namespace ExternalSourceMapper {
AWS_QCONNECT_API ExternalSource GetExternalSourceForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForExternalSource(ExternalSource value);
}  // namespace ExternalSourceMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
