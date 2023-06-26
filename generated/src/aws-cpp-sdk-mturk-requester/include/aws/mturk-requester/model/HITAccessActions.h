/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MTurk
{
namespace Model
{
  enum class HITAccessActions
  {
    NOT_SET,
    Accept,
    PreviewAndAccept,
    DiscoverPreviewAndAccept
  };

namespace HITAccessActionsMapper
{
AWS_MTURK_API HITAccessActions GetHITAccessActionsForName(const Aws::String& name);

AWS_MTURK_API Aws::String GetNameForHITAccessActions(HITAccessActions value);
} // namespace HITAccessActionsMapper
} // namespace Model
} // namespace MTurk
} // namespace Aws
