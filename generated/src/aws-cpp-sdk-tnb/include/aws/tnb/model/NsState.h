﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/Tnb_EXPORTS.h>

namespace Aws {
namespace tnb {
namespace Model {
enum class NsState {
  NOT_SET,
  INSTANTIATED,
  NOT_INSTANTIATED,
  UPDATED,
  IMPAIRED,
  UPDATE_FAILED,
  STOPPED,
  DELETED,
  INSTANTIATE_IN_PROGRESS,
  INTENT_TO_UPDATE_IN_PROGRESS,
  UPDATE_IN_PROGRESS,
  TERMINATE_IN_PROGRESS
};

namespace NsStateMapper {
AWS_TNB_API NsState GetNsStateForName(const Aws::String& name);

AWS_TNB_API Aws::String GetNameForNsState(NsState value);
}  // namespace NsStateMapper
}  // namespace Model
}  // namespace tnb
}  // namespace Aws
