/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{
  enum class SegmentActionServiceInsertion
  {
    NOT_SET,
    send_via,
    send_to
  };

namespace SegmentActionServiceInsertionMapper
{
AWS_NETWORKMANAGER_API SegmentActionServiceInsertion GetSegmentActionServiceInsertionForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForSegmentActionServiceInsertion(SegmentActionServiceInsertion value);
} // namespace SegmentActionServiceInsertionMapper
} // namespace Model
} // namespace NetworkManager
} // namespace Aws
