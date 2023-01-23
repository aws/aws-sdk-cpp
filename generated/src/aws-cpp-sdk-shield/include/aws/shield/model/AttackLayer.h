/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Shield
{
namespace Model
{
  enum class AttackLayer
  {
    NOT_SET,
    NETWORK,
    APPLICATION
  };

namespace AttackLayerMapper
{
AWS_SHIELD_API AttackLayer GetAttackLayerForName(const Aws::String& name);

AWS_SHIELD_API Aws::String GetNameForAttackLayer(AttackLayer value);
} // namespace AttackLayerMapper
} // namespace Model
} // namespace Shield
} // namespace Aws
