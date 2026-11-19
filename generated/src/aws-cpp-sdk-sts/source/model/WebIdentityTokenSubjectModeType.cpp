/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sts/model/WebIdentityTokenSubjectModeType.h>

using namespace Aws::Utils;

namespace Aws {
namespace STS {
namespace Model {
namespace WebIdentityTokenSubjectModeTypeMapper {

static const int AWSIdentity_HASH = HashingUtils::HashString("AWSIdentity");
static const int OriginIdentity_HASH = HashingUtils::HashString("OriginIdentity");

WebIdentityTokenSubjectModeType GetWebIdentityTokenSubjectModeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWSIdentity_HASH) {
    return WebIdentityTokenSubjectModeType::AWSIdentity;
  } else if (hashCode == OriginIdentity_HASH) {
    return WebIdentityTokenSubjectModeType::OriginIdentity;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<WebIdentityTokenSubjectModeType>(hashCode);
  }

  return WebIdentityTokenSubjectModeType::NOT_SET;
}

Aws::String GetNameForWebIdentityTokenSubjectModeType(WebIdentityTokenSubjectModeType enumValue) {
  switch (enumValue) {
    case WebIdentityTokenSubjectModeType::NOT_SET:
      return {};
    case WebIdentityTokenSubjectModeType::AWSIdentity:
      return "AWSIdentity";
    case WebIdentityTokenSubjectModeType::OriginIdentity:
      return "OriginIdentity";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WebIdentityTokenSubjectModeTypeMapper
}  // namespace Model
}  // namespace STS
}  // namespace Aws
