/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mailmanager/model/RuleClientCertificateAttribute.h>

using namespace Aws::Utils;

namespace Aws {
namespace MailManager {
namespace Model {
namespace RuleClientCertificateAttributeMapper {

static const int CN_HASH = HashingUtils::HashString("CN");
static const int SAN_RFC822_NAME_HASH = HashingUtils::HashString("SAN_RFC822_NAME");
static const int SAN_DNS_NAME_HASH = HashingUtils::HashString("SAN_DNS_NAME");
static const int SAN_DIRECTORY_NAME_HASH = HashingUtils::HashString("SAN_DIRECTORY_NAME");
static const int SAN_UNIFORM_RESOURCE_IDENTIFIER_HASH = HashingUtils::HashString("SAN_UNIFORM_RESOURCE_IDENTIFIER");
static const int SAN_IP_ADDRESS_HASH = HashingUtils::HashString("SAN_IP_ADDRESS");
static const int SAN_REGISTERED_ID_HASH = HashingUtils::HashString("SAN_REGISTERED_ID");
static const int SERIAL_NUMBER_HASH = HashingUtils::HashString("SERIAL_NUMBER");

RuleClientCertificateAttribute GetRuleClientCertificateAttributeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CN_HASH) {
    return RuleClientCertificateAttribute::CN;
  } else if (hashCode == SAN_RFC822_NAME_HASH) {
    return RuleClientCertificateAttribute::SAN_RFC822_NAME;
  } else if (hashCode == SAN_DNS_NAME_HASH) {
    return RuleClientCertificateAttribute::SAN_DNS_NAME;
  } else if (hashCode == SAN_DIRECTORY_NAME_HASH) {
    return RuleClientCertificateAttribute::SAN_DIRECTORY_NAME;
  } else if (hashCode == SAN_UNIFORM_RESOURCE_IDENTIFIER_HASH) {
    return RuleClientCertificateAttribute::SAN_UNIFORM_RESOURCE_IDENTIFIER;
  } else if (hashCode == SAN_IP_ADDRESS_HASH) {
    return RuleClientCertificateAttribute::SAN_IP_ADDRESS;
  } else if (hashCode == SAN_REGISTERED_ID_HASH) {
    return RuleClientCertificateAttribute::SAN_REGISTERED_ID;
  } else if (hashCode == SERIAL_NUMBER_HASH) {
    return RuleClientCertificateAttribute::SERIAL_NUMBER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RuleClientCertificateAttribute>(hashCode);
  }

  return RuleClientCertificateAttribute::NOT_SET;
}

Aws::String GetNameForRuleClientCertificateAttribute(RuleClientCertificateAttribute enumValue) {
  switch (enumValue) {
    case RuleClientCertificateAttribute::NOT_SET:
      return {};
    case RuleClientCertificateAttribute::CN:
      return "CN";
    case RuleClientCertificateAttribute::SAN_RFC822_NAME:
      return "SAN_RFC822_NAME";
    case RuleClientCertificateAttribute::SAN_DNS_NAME:
      return "SAN_DNS_NAME";
    case RuleClientCertificateAttribute::SAN_DIRECTORY_NAME:
      return "SAN_DIRECTORY_NAME";
    case RuleClientCertificateAttribute::SAN_UNIFORM_RESOURCE_IDENTIFIER:
      return "SAN_UNIFORM_RESOURCE_IDENTIFIER";
    case RuleClientCertificateAttribute::SAN_IP_ADDRESS:
      return "SAN_IP_ADDRESS";
    case RuleClientCertificateAttribute::SAN_REGISTERED_ID:
      return "SAN_REGISTERED_ID";
    case RuleClientCertificateAttribute::SERIAL_NUMBER:
      return "SERIAL_NUMBER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RuleClientCertificateAttributeMapper
}  // namespace Model
}  // namespace MailManager
}  // namespace Aws
