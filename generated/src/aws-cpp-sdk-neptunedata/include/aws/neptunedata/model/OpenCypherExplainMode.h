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
  enum class OpenCypherExplainMode
  {
    NOT_SET,
    static_,
    dynamic,
    details
  };

namespace OpenCypherExplainModeMapper
{
AWS_NEPTUNEDATA_API OpenCypherExplainMode GetOpenCypherExplainModeForName(const Aws::String& name);

AWS_NEPTUNEDATA_API Aws::String GetNameForOpenCypherExplainMode(OpenCypherExplainMode value);
} // namespace OpenCypherExplainModeMapper
} // namespace Model
} // namespace neptunedata
} // namespace Aws
