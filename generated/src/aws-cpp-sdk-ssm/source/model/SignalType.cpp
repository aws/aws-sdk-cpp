﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ssm/model/SignalType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SSM {
namespace Model {
namespace SignalTypeMapper {

static const int Approve_HASH = HashingUtils::HashString("Approve");
static const int Reject_HASH = HashingUtils::HashString("Reject");
static const int StartStep_HASH = HashingUtils::HashString("StartStep");
static const int StopStep_HASH = HashingUtils::HashString("StopStep");
static const int Resume_HASH = HashingUtils::HashString("Resume");
static const int Revoke_HASH = HashingUtils::HashString("Revoke");

SignalType GetSignalTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Approve_HASH) {
    return SignalType::Approve;
  } else if (hashCode == Reject_HASH) {
    return SignalType::Reject;
  } else if (hashCode == StartStep_HASH) {
    return SignalType::StartStep;
  } else if (hashCode == StopStep_HASH) {
    return SignalType::StopStep;
  } else if (hashCode == Resume_HASH) {
    return SignalType::Resume;
  } else if (hashCode == Revoke_HASH) {
    return SignalType::Revoke;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SignalType>(hashCode);
  }

  return SignalType::NOT_SET;
}

Aws::String GetNameForSignalType(SignalType enumValue) {
  switch (enumValue) {
    case SignalType::NOT_SET:
      return {};
    case SignalType::Approve:
      return "Approve";
    case SignalType::Reject:
      return "Reject";
    case SignalType::StartStep:
      return "StartStep";
    case SignalType::StopStep:
      return "StopStep";
    case SignalType::Resume:
      return "Resume";
    case SignalType::Revoke:
      return "Revoke";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SignalTypeMapper
}  // namespace Model
}  // namespace SSM
}  // namespace Aws
