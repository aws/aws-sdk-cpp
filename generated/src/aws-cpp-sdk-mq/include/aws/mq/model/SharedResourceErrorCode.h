/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mq/MQ_EXPORTS.h>

namespace Aws {
namespace MQ {
namespace Model {
enum class SharedResourceErrorCode {
  NOT_SET,
  QUOTA_EXCEEDED,
  SHARE_NOT_FOUND,
  INVITE_FAILED,
  SETUP_INCOMPLETE,
  INTERNAL_ERROR,
  AZ_MISMATCH,
  RESOURCE_CONFIGURATION_NOT_FOUND
};

namespace SharedResourceErrorCodeMapper {
AWS_MQ_API SharedResourceErrorCode GetSharedResourceErrorCodeForName(const Aws::String& name);

AWS_MQ_API Aws::String GetNameForSharedResourceErrorCode(SharedResourceErrorCode value);
}  // namespace SharedResourceErrorCodeMapper
}  // namespace Model
}  // namespace MQ
}  // namespace Aws
