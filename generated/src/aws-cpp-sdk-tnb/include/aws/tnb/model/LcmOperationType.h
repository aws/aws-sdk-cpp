/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace tnb
{
namespace Model
{
  enum class LcmOperationType
  {
    NOT_SET,
    INSTANTIATE,
    UPDATE,
    TERMINATE
  };

namespace LcmOperationTypeMapper
{
AWS_TNB_API LcmOperationType GetLcmOperationTypeForName(const Aws::String& name);

AWS_TNB_API Aws::String GetNameForLcmOperationType(LcmOperationType value);
} // namespace LcmOperationTypeMapper
} // namespace Model
} // namespace tnb
} // namespace Aws
