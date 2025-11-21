/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/organizations/model/HandshakeConstraintViolationExceptionReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace Organizations {
namespace Model {
namespace HandshakeConstraintViolationExceptionReasonMapper {

static const int ACCOUNT_NUMBER_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ACCOUNT_NUMBER_LIMIT_EXCEEDED");
static const int HANDSHAKE_RATE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("HANDSHAKE_RATE_LIMIT_EXCEEDED");
static const int ALREADY_IN_AN_ORGANIZATION_HASH = HashingUtils::HashString("ALREADY_IN_AN_ORGANIZATION");
static const int ORGANIZATION_ALREADY_HAS_ALL_FEATURES_HASH = HashingUtils::HashString("ORGANIZATION_ALREADY_HAS_ALL_FEATURES");
static const int ORGANIZATION_IS_ALREADY_PENDING_ALL_FEATURES_MIGRATION_HASH =
    HashingUtils::HashString("ORGANIZATION_IS_ALREADY_PENDING_ALL_FEATURES_MIGRATION");
static const int INVITE_DISABLED_DURING_ENABLE_ALL_FEATURES_HASH = HashingUtils::HashString("INVITE_DISABLED_DURING_ENABLE_ALL_FEATURES");
static const int PAYMENT_INSTRUMENT_REQUIRED_HASH = HashingUtils::HashString("PAYMENT_INSTRUMENT_REQUIRED");
static const int ORGANIZATION_FROM_DIFFERENT_SELLER_OF_RECORD_HASH =
    HashingUtils::HashString("ORGANIZATION_FROM_DIFFERENT_SELLER_OF_RECORD");
static const int ORGANIZATION_MEMBERSHIP_CHANGE_RATE_LIMIT_EXCEEDED_HASH =
    HashingUtils::HashString("ORGANIZATION_MEMBERSHIP_CHANGE_RATE_LIMIT_EXCEEDED");
static const int MANAGEMENT_ACCOUNT_EMAIL_NOT_VERIFIED_HASH = HashingUtils::HashString("MANAGEMENT_ACCOUNT_EMAIL_NOT_VERIFIED");
static const int RESPONSIBILITY_TRANSFER_ALREADY_EXISTS_HASH = HashingUtils::HashString("RESPONSIBILITY_TRANSFER_ALREADY_EXISTS");
static const int SOURCE_AND_TARGET_CANNOT_MATCH_HASH = HashingUtils::HashString("SOURCE_AND_TARGET_CANNOT_MATCH");
static const int UNUSED_PREPAYMENT_BALANCE_HASH = HashingUtils::HashString("UNUSED_PREPAYMENT_BALANCE");
static const int LEGACY_PERMISSIONS_STILL_IN_USE_HASH = HashingUtils::HashString("LEGACY_PERMISSIONS_STILL_IN_USE");

HandshakeConstraintViolationExceptionReason GetHandshakeConstraintViolationExceptionReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACCOUNT_NUMBER_LIMIT_EXCEEDED_HASH) {
    return HandshakeConstraintViolationExceptionReason::ACCOUNT_NUMBER_LIMIT_EXCEEDED;
  } else if (hashCode == HANDSHAKE_RATE_LIMIT_EXCEEDED_HASH) {
    return HandshakeConstraintViolationExceptionReason::HANDSHAKE_RATE_LIMIT_EXCEEDED;
  } else if (hashCode == ALREADY_IN_AN_ORGANIZATION_HASH) {
    return HandshakeConstraintViolationExceptionReason::ALREADY_IN_AN_ORGANIZATION;
  } else if (hashCode == ORGANIZATION_ALREADY_HAS_ALL_FEATURES_HASH) {
    return HandshakeConstraintViolationExceptionReason::ORGANIZATION_ALREADY_HAS_ALL_FEATURES;
  } else if (hashCode == ORGANIZATION_IS_ALREADY_PENDING_ALL_FEATURES_MIGRATION_HASH) {
    return HandshakeConstraintViolationExceptionReason::ORGANIZATION_IS_ALREADY_PENDING_ALL_FEATURES_MIGRATION;
  } else if (hashCode == INVITE_DISABLED_DURING_ENABLE_ALL_FEATURES_HASH) {
    return HandshakeConstraintViolationExceptionReason::INVITE_DISABLED_DURING_ENABLE_ALL_FEATURES;
  } else if (hashCode == PAYMENT_INSTRUMENT_REQUIRED_HASH) {
    return HandshakeConstraintViolationExceptionReason::PAYMENT_INSTRUMENT_REQUIRED;
  } else if (hashCode == ORGANIZATION_FROM_DIFFERENT_SELLER_OF_RECORD_HASH) {
    return HandshakeConstraintViolationExceptionReason::ORGANIZATION_FROM_DIFFERENT_SELLER_OF_RECORD;
  } else if (hashCode == ORGANIZATION_MEMBERSHIP_CHANGE_RATE_LIMIT_EXCEEDED_HASH) {
    return HandshakeConstraintViolationExceptionReason::ORGANIZATION_MEMBERSHIP_CHANGE_RATE_LIMIT_EXCEEDED;
  } else if (hashCode == MANAGEMENT_ACCOUNT_EMAIL_NOT_VERIFIED_HASH) {
    return HandshakeConstraintViolationExceptionReason::MANAGEMENT_ACCOUNT_EMAIL_NOT_VERIFIED;
  } else if (hashCode == RESPONSIBILITY_TRANSFER_ALREADY_EXISTS_HASH) {
    return HandshakeConstraintViolationExceptionReason::RESPONSIBILITY_TRANSFER_ALREADY_EXISTS;
  } else if (hashCode == SOURCE_AND_TARGET_CANNOT_MATCH_HASH) {
    return HandshakeConstraintViolationExceptionReason::SOURCE_AND_TARGET_CANNOT_MATCH;
  } else if (hashCode == UNUSED_PREPAYMENT_BALANCE_HASH) {
    return HandshakeConstraintViolationExceptionReason::UNUSED_PREPAYMENT_BALANCE;
  } else if (hashCode == LEGACY_PERMISSIONS_STILL_IN_USE_HASH) {
    return HandshakeConstraintViolationExceptionReason::LEGACY_PERMISSIONS_STILL_IN_USE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HandshakeConstraintViolationExceptionReason>(hashCode);
  }

  return HandshakeConstraintViolationExceptionReason::NOT_SET;
}

Aws::String GetNameForHandshakeConstraintViolationExceptionReason(HandshakeConstraintViolationExceptionReason enumValue) {
  switch (enumValue) {
    case HandshakeConstraintViolationExceptionReason::NOT_SET:
      return {};
    case HandshakeConstraintViolationExceptionReason::ACCOUNT_NUMBER_LIMIT_EXCEEDED:
      return "ACCOUNT_NUMBER_LIMIT_EXCEEDED";
    case HandshakeConstraintViolationExceptionReason::HANDSHAKE_RATE_LIMIT_EXCEEDED:
      return "HANDSHAKE_RATE_LIMIT_EXCEEDED";
    case HandshakeConstraintViolationExceptionReason::ALREADY_IN_AN_ORGANIZATION:
      return "ALREADY_IN_AN_ORGANIZATION";
    case HandshakeConstraintViolationExceptionReason::ORGANIZATION_ALREADY_HAS_ALL_FEATURES:
      return "ORGANIZATION_ALREADY_HAS_ALL_FEATURES";
    case HandshakeConstraintViolationExceptionReason::ORGANIZATION_IS_ALREADY_PENDING_ALL_FEATURES_MIGRATION:
      return "ORGANIZATION_IS_ALREADY_PENDING_ALL_FEATURES_MIGRATION";
    case HandshakeConstraintViolationExceptionReason::INVITE_DISABLED_DURING_ENABLE_ALL_FEATURES:
      return "INVITE_DISABLED_DURING_ENABLE_ALL_FEATURES";
    case HandshakeConstraintViolationExceptionReason::PAYMENT_INSTRUMENT_REQUIRED:
      return "PAYMENT_INSTRUMENT_REQUIRED";
    case HandshakeConstraintViolationExceptionReason::ORGANIZATION_FROM_DIFFERENT_SELLER_OF_RECORD:
      return "ORGANIZATION_FROM_DIFFERENT_SELLER_OF_RECORD";
    case HandshakeConstraintViolationExceptionReason::ORGANIZATION_MEMBERSHIP_CHANGE_RATE_LIMIT_EXCEEDED:
      return "ORGANIZATION_MEMBERSHIP_CHANGE_RATE_LIMIT_EXCEEDED";
    case HandshakeConstraintViolationExceptionReason::MANAGEMENT_ACCOUNT_EMAIL_NOT_VERIFIED:
      return "MANAGEMENT_ACCOUNT_EMAIL_NOT_VERIFIED";
    case HandshakeConstraintViolationExceptionReason::RESPONSIBILITY_TRANSFER_ALREADY_EXISTS:
      return "RESPONSIBILITY_TRANSFER_ALREADY_EXISTS";
    case HandshakeConstraintViolationExceptionReason::SOURCE_AND_TARGET_CANNOT_MATCH:
      return "SOURCE_AND_TARGET_CANNOT_MATCH";
    case HandshakeConstraintViolationExceptionReason::UNUSED_PREPAYMENT_BALANCE:
      return "UNUSED_PREPAYMENT_BALANCE";
    case HandshakeConstraintViolationExceptionReason::LEGACY_PERMISSIONS_STILL_IN_USE:
      return "LEGACY_PERMISSIONS_STILL_IN_USE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HandshakeConstraintViolationExceptionReasonMapper
}  // namespace Model
}  // namespace Organizations
}  // namespace Aws
