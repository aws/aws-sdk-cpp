/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3control/model/S3AnnotationDirective.h>

using namespace Aws::Utils;

namespace Aws {
namespace S3Control {
namespace Model {
namespace S3AnnotationDirectiveMapper {

static const int COPY_HASH = HashingUtils::HashString("COPY");
static const int EXCLUDE_HASH = HashingUtils::HashString("EXCLUDE");

S3AnnotationDirective GetS3AnnotationDirectiveForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == COPY_HASH) {
    return S3AnnotationDirective::COPY;
  } else if (hashCode == EXCLUDE_HASH) {
    return S3AnnotationDirective::EXCLUDE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<S3AnnotationDirective>(hashCode);
  }

  return S3AnnotationDirective::NOT_SET;
}

Aws::String GetNameForS3AnnotationDirective(S3AnnotationDirective enumValue) {
  switch (enumValue) {
    case S3AnnotationDirective::NOT_SET:
      return {};
    case S3AnnotationDirective::COPY:
      return "COPY";
    case S3AnnotationDirective::EXCLUDE:
      return "EXCLUDE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace S3AnnotationDirectiveMapper
}  // namespace Model
}  // namespace S3Control
}  // namespace Aws
