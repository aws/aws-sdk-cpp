/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3/model/AnnotationDirective.h>

using namespace Aws::Utils;

namespace Aws {
namespace S3 {
namespace Model {
namespace AnnotationDirectiveMapper {

static const int COPY_HASH = HashingUtils::HashString("COPY");
static const int EXCLUDE_HASH = HashingUtils::HashString("EXCLUDE");

AnnotationDirective GetAnnotationDirectiveForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == COPY_HASH) {
    return AnnotationDirective::COPY;
  } else if (hashCode == EXCLUDE_HASH) {
    return AnnotationDirective::EXCLUDE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AnnotationDirective>(hashCode);
  }

  return AnnotationDirective::NOT_SET;
}

Aws::String GetNameForAnnotationDirective(AnnotationDirective enumValue) {
  switch (enumValue) {
    case AnnotationDirective::NOT_SET:
      return {};
    case AnnotationDirective::COPY:
      return "COPY";
    case AnnotationDirective::EXCLUDE:
      return "EXCLUDE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AnnotationDirectiveMapper
}  // namespace Model
}  // namespace S3
}  // namespace Aws
