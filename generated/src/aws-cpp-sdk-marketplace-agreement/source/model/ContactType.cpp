/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-agreement/model/ContactType.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {
namespace ContactTypeMapper {

static const int ACCEPTOR_HASH = HashingUtils::HashString("ACCEPTOR");

ContactType GetContactTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACCEPTOR_HASH) {
    return ContactType::ACCEPTOR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContactType>(hashCode);
  }

  return ContactType::NOT_SET;
}

Aws::String GetNameForContactType(ContactType enumValue) {
  switch (enumValue) {
    case ContactType::NOT_SET:
      return {};
    case ContactType::ACCEPTOR:
      return "ACCEPTOR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContactTypeMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
