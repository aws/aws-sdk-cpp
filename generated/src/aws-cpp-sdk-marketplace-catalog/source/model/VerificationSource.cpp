/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-catalog/model/VerificationSource.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {
namespace VerificationSourceMapper {

static const int AWS_VERIFIED_HASH = HashingUtils::HashString("AWS_VERIFIED");
static const int SELF_ATTESTED_HASH = HashingUtils::HashString("SELF_ATTESTED");

VerificationSource GetVerificationSourceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_VERIFIED_HASH) {
    return VerificationSource::AWS_VERIFIED;
  } else if (hashCode == SELF_ATTESTED_HASH) {
    return VerificationSource::SELF_ATTESTED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<VerificationSource>(hashCode);
  }

  return VerificationSource::NOT_SET;
}

Aws::String GetNameForVerificationSource(VerificationSource enumValue) {
  switch (enumValue) {
    case VerificationSource::NOT_SET:
      return {};
    case VerificationSource::AWS_VERIFIED:
      return "AWS_VERIFIED";
    case VerificationSource::SELF_ATTESTED:
      return "SELF_ATTESTED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace VerificationSourceMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
