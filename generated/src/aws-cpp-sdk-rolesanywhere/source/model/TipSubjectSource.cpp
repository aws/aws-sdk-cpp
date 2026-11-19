/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rolesanywhere/model/TipSubjectSource.h>

using namespace Aws::Utils;

namespace Aws {
namespace RolesAnywhere {
namespace Model {
namespace TipSubjectSourceMapper {

static const int x509SAN_URI_HASH = HashingUtils::HashString("x509SAN/URI");
static const int x509Subject_CN_HASH = HashingUtils::HashString("x509Subject/CN");

TipSubjectSource GetTipSubjectSourceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == x509SAN_URI_HASH) {
    return TipSubjectSource::x509SAN_URI;
  } else if (hashCode == x509Subject_CN_HASH) {
    return TipSubjectSource::x509Subject_CN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TipSubjectSource>(hashCode);
  }

  return TipSubjectSource::NOT_SET;
}

Aws::String GetNameForTipSubjectSource(TipSubjectSource enumValue) {
  switch (enumValue) {
    case TipSubjectSource::NOT_SET:
      return {};
    case TipSubjectSource::x509SAN_URI:
      return "x509SAN/URI";
    case TipSubjectSource::x509Subject_CN:
      return "x509Subject/CN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TipSubjectSourceMapper
}  // namespace Model
}  // namespace RolesAnywhere
}  // namespace Aws
