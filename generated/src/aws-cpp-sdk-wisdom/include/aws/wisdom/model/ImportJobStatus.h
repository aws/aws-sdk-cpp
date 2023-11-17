/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectWisdomService
{
namespace Model
{
  enum class ImportJobStatus
  {
    NOT_SET,
    START_IN_PROGRESS,
    FAILED,
    COMPLETE,
    DELETE_IN_PROGRESS,
    DELETE_FAILED,
    DELETED
  };

namespace ImportJobStatusMapper
{
AWS_CONNECTWISDOMSERVICE_API ImportJobStatus GetImportJobStatusForName(const Aws::String& name);

AWS_CONNECTWISDOMSERVICE_API Aws::String GetNameForImportJobStatus(ImportJobStatus value);
} // namespace ImportJobStatusMapper
} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
