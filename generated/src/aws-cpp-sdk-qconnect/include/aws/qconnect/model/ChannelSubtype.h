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
  enum class ChannelSubtype
  {
    NOT_SET,
    EMAIL,
    SMS
  };

namespace ChannelSubtypeMapper
{
AWS_QCONNECT_API ChannelSubtype GetChannelSubtypeForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForChannelSubtype(ChannelSubtype value);
} // namespace ChannelSubtypeMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws
