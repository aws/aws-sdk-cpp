/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace neptunedata
{
namespace Model
{
  enum class Encoding
  {
    NOT_SET,
    gzip
  };

namespace EncodingMapper
{
AWS_NEPTUNEDATA_API Encoding GetEncodingForName(const Aws::String& name);

AWS_NEPTUNEDATA_API Aws::String GetNameForEncoding(Encoding value);
} // namespace EncodingMapper
} // namespace Model
} // namespace neptunedata
} // namespace Aws
