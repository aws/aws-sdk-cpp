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
  enum class Format
  {
    NOT_SET,
    csv,
    opencypher,
    ntriples,
    nquads,
    rdfxml,
    turtle
  };

namespace FormatMapper
{
AWS_NEPTUNEDATA_API Format GetFormatForName(const Aws::String& name);

AWS_NEPTUNEDATA_API Aws::String GetNameForFormat(Format value);
} // namespace FormatMapper
} // namespace Model
} // namespace neptunedata
} // namespace Aws
