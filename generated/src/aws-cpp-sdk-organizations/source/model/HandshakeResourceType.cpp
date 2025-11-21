/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/organizations/model/HandshakeResourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Organizations {
namespace Model {
namespace HandshakeResourceTypeMapper {

static const int ACCOUNT_HASH = HashingUtils::HashString("ACCOUNT");
static const int ORGANIZATION_HASH = HashingUtils::HashString("ORGANIZATION");
static const int ORGANIZATION_FEATURE_SET_HASH = HashingUtils::HashString("ORGANIZATION_FEATURE_SET");
static const int EMAIL_HASH = HashingUtils::HashString("EMAIL");
static const int MASTER_EMAIL_HASH = HashingUtils::HashString("MASTER_EMAIL");
static const int MASTER_NAME_HASH = HashingUtils::HashString("MASTER_NAME");
static const int NOTES_HASH = HashingUtils::HashString("NOTES");
static const int PARENT_HANDSHAKE_HASH = HashingUtils::HashString("PARENT_HANDSHAKE");
static const int RESPONSIBILITY_TRANSFER_HASH = HashingUtils::HashString("RESPONSIBILITY_TRANSFER");
static const int TRANSFER_START_TIMESTAMP_HASH = HashingUtils::HashString("TRANSFER_START_TIMESTAMP");
static const int TRANSFER_TYPE_HASH = HashingUtils::HashString("TRANSFER_TYPE");
static const int MANAGEMENT_ACCOUNT_HASH = HashingUtils::HashString("MANAGEMENT_ACCOUNT");
static const int MANAGEMENT_EMAIL_HASH = HashingUtils::HashString("MANAGEMENT_EMAIL");
static const int MANAGEMENT_NAME_HASH = HashingUtils::HashString("MANAGEMENT_NAME");

HandshakeResourceType GetHandshakeResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACCOUNT_HASH) {
    return HandshakeResourceType::ACCOUNT;
  } else if (hashCode == ORGANIZATION_HASH) {
    return HandshakeResourceType::ORGANIZATION;
  } else if (hashCode == ORGANIZATION_FEATURE_SET_HASH) {
    return HandshakeResourceType::ORGANIZATION_FEATURE_SET;
  } else if (hashCode == EMAIL_HASH) {
    return HandshakeResourceType::EMAIL;
  } else if (hashCode == MASTER_EMAIL_HASH) {
    return HandshakeResourceType::MASTER_EMAIL;
  } else if (hashCode == MASTER_NAME_HASH) {
    return HandshakeResourceType::MASTER_NAME;
  } else if (hashCode == NOTES_HASH) {
    return HandshakeResourceType::NOTES;
  } else if (hashCode == PARENT_HANDSHAKE_HASH) {
    return HandshakeResourceType::PARENT_HANDSHAKE;
  } else if (hashCode == RESPONSIBILITY_TRANSFER_HASH) {
    return HandshakeResourceType::RESPONSIBILITY_TRANSFER;
  } else if (hashCode == TRANSFER_START_TIMESTAMP_HASH) {
    return HandshakeResourceType::TRANSFER_START_TIMESTAMP;
  } else if (hashCode == TRANSFER_TYPE_HASH) {
    return HandshakeResourceType::TRANSFER_TYPE;
  } else if (hashCode == MANAGEMENT_ACCOUNT_HASH) {
    return HandshakeResourceType::MANAGEMENT_ACCOUNT;
  } else if (hashCode == MANAGEMENT_EMAIL_HASH) {
    return HandshakeResourceType::MANAGEMENT_EMAIL;
  } else if (hashCode == MANAGEMENT_NAME_HASH) {
    return HandshakeResourceType::MANAGEMENT_NAME;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HandshakeResourceType>(hashCode);
  }

  return HandshakeResourceType::NOT_SET;
}

Aws::String GetNameForHandshakeResourceType(HandshakeResourceType enumValue) {
  switch (enumValue) {
    case HandshakeResourceType::NOT_SET:
      return {};
    case HandshakeResourceType::ACCOUNT:
      return "ACCOUNT";
    case HandshakeResourceType::ORGANIZATION:
      return "ORGANIZATION";
    case HandshakeResourceType::ORGANIZATION_FEATURE_SET:
      return "ORGANIZATION_FEATURE_SET";
    case HandshakeResourceType::EMAIL:
      return "EMAIL";
    case HandshakeResourceType::MASTER_EMAIL:
      return "MASTER_EMAIL";
    case HandshakeResourceType::MASTER_NAME:
      return "MASTER_NAME";
    case HandshakeResourceType::NOTES:
      return "NOTES";
    case HandshakeResourceType::PARENT_HANDSHAKE:
      return "PARENT_HANDSHAKE";
    case HandshakeResourceType::RESPONSIBILITY_TRANSFER:
      return "RESPONSIBILITY_TRANSFER";
    case HandshakeResourceType::TRANSFER_START_TIMESTAMP:
      return "TRANSFER_START_TIMESTAMP";
    case HandshakeResourceType::TRANSFER_TYPE:
      return "TRANSFER_TYPE";
    case HandshakeResourceType::MANAGEMENT_ACCOUNT:
      return "MANAGEMENT_ACCOUNT";
    case HandshakeResourceType::MANAGEMENT_EMAIL:
      return "MANAGEMENT_EMAIL";
    case HandshakeResourceType::MANAGEMENT_NAME:
      return "MANAGEMENT_NAME";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HandshakeResourceTypeMapper
}  // namespace Model
}  // namespace Organizations
}  // namespace Aws
