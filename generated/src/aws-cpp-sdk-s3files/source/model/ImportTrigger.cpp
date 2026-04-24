/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3files/model/ImportTrigger.h>

using namespace Aws::Utils;

namespace Aws {
namespace S3Files {
namespace Model {
namespace ImportTriggerMapper {

static const int ON_DIRECTORY_FIRST_ACCESS_HASH = HashingUtils::HashString("ON_DIRECTORY_FIRST_ACCESS");
static const int ON_FILE_ACCESS_HASH = HashingUtils::HashString("ON_FILE_ACCESS");

ImportTrigger GetImportTriggerForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ON_DIRECTORY_FIRST_ACCESS_HASH) {
    return ImportTrigger::ON_DIRECTORY_FIRST_ACCESS;
  } else if (hashCode == ON_FILE_ACCESS_HASH) {
    return ImportTrigger::ON_FILE_ACCESS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ImportTrigger>(hashCode);
  }

  return ImportTrigger::NOT_SET;
}

Aws::String GetNameForImportTrigger(ImportTrigger enumValue) {
  switch (enumValue) {
    case ImportTrigger::NOT_SET:
      return {};
    case ImportTrigger::ON_DIRECTORY_FIRST_ACCESS:
      return "ON_DIRECTORY_FIRST_ACCESS";
    case ImportTrigger::ON_FILE_ACCESS:
      return "ON_FILE_ACCESS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ImportTriggerMapper
}  // namespace Model
}  // namespace S3Files
}  // namespace Aws
