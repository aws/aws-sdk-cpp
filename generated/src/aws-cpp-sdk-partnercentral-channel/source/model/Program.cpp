/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-channel/model/Program.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {
namespace ProgramMapper {

static const int SOLUTION_PROVIDER_HASH = HashingUtils::HashString("SOLUTION_PROVIDER");
static const int DISTRIBUTION_HASH = HashingUtils::HashString("DISTRIBUTION");
static const int DISTRIBUTION_SELLER_HASH = HashingUtils::HashString("DISTRIBUTION_SELLER");

Program GetProgramForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SOLUTION_PROVIDER_HASH) {
    return Program::SOLUTION_PROVIDER;
  } else if (hashCode == DISTRIBUTION_HASH) {
    return Program::DISTRIBUTION;
  } else if (hashCode == DISTRIBUTION_SELLER_HASH) {
    return Program::DISTRIBUTION_SELLER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Program>(hashCode);
  }

  return Program::NOT_SET;
}

Aws::String GetNameForProgram(Program enumValue) {
  switch (enumValue) {
    case Program::NOT_SET:
      return {};
    case Program::SOLUTION_PROVIDER:
      return "SOLUTION_PROVIDER";
    case Program::DISTRIBUTION:
      return "DISTRIBUTION";
    case Program::DISTRIBUTION_SELLER:
      return "DISTRIBUTION_SELLER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProgramMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
