/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QConnect
{
namespace Model
{
  enum class Origin
  {
    NOT_SET,
    SYSTEM,
    CUSTOMER
  };

namespace OriginMapper
{
AWS_QCONNECT_API Origin GetOriginForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForOrigin(Origin value);
} // namespace OriginMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws
