/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SESV2
{
namespace Model
{
  enum class ReputationEntityFilterKey
  {
    NOT_SET,
    ENTITY_TYPE,
    REPUTATION_IMPACT,
    SENDING_STATUS,
    ENTITY_REFERENCE_PREFIX
  };

namespace ReputationEntityFilterKeyMapper
{
AWS_SESV2_API ReputationEntityFilterKey GetReputationEntityFilterKeyForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForReputationEntityFilterKey(ReputationEntityFilterKey value);
} // namespace ReputationEntityFilterKeyMapper
} // namespace Model
} // namespace SESV2
} // namespace Aws
