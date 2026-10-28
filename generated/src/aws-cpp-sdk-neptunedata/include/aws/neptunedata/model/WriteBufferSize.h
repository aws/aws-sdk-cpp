/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptunedata/Neptunedata_EXPORTS.h>

namespace Aws {
namespace neptunedata {
namespace Model {
enum class WriteBufferSize { NOT_SET, LOW, MEDIUM, HIGH };

namespace WriteBufferSizeMapper {
AWS_NEPTUNEDATA_API WriteBufferSize GetWriteBufferSizeForName(const Aws::String& name);

AWS_NEPTUNEDATA_API Aws::String GetNameForWriteBufferSize(WriteBufferSize value);
}  // namespace WriteBufferSizeMapper
}  // namespace Model
}  // namespace neptunedata
}  // namespace Aws
