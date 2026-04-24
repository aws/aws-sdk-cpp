/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/DNSRecordType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace DNSRecordTypeMapper {

static const int TXT_HASH = HashingUtils::HashString("TXT");

DNSRecordType GetDNSRecordTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TXT_HASH) {
    return DNSRecordType::TXT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DNSRecordType>(hashCode);
  }

  return DNSRecordType::NOT_SET;
}

Aws::String GetNameForDNSRecordType(DNSRecordType enumValue) {
  switch (enumValue) {
    case DNSRecordType::NOT_SET:
      return {};
    case DNSRecordType::TXT:
      return "TXT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DNSRecordTypeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
