/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Omics
{
namespace Model
{
  enum class RunExport
  {
    NOT_SET,
    DEFINITION
  };

namespace RunExportMapper
{
AWS_OMICS_API RunExport GetRunExportForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForRunExport(RunExport value);
} // namespace RunExportMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
