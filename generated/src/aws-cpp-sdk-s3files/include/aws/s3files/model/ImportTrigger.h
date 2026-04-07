/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3files/S3Files_EXPORTS.h>

namespace Aws {
namespace S3Files {
namespace Model {
enum class ImportTrigger { NOT_SET, ON_DIRECTORY_FIRST_ACCESS, ON_FILE_ACCESS };

namespace ImportTriggerMapper {
AWS_S3FILES_API ImportTrigger GetImportTriggerForName(const Aws::String& name);

AWS_S3FILES_API Aws::String GetNameForImportTrigger(ImportTrigger value);
}  // namespace ImportTriggerMapper
}  // namespace Model
}  // namespace S3Files
}  // namespace Aws
