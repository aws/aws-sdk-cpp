/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MarketplaceCatalog
{
namespace Model
{
  enum class Intent
  {
    NOT_SET,
    VALIDATE,
    APPLY
  };

namespace IntentMapper
{
AWS_MARKETPLACECATALOG_API Intent GetIntentForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForIntent(Intent value);
} // namespace IntentMapper
} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
