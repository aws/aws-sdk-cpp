/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Outposts
{
namespace Model
{
  enum class CatalogItemClass
  {
    NOT_SET,
    RACK,
    SERVER
  };

namespace CatalogItemClassMapper
{
AWS_OUTPOSTS_API CatalogItemClass GetCatalogItemClassForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForCatalogItemClass(CatalogItemClass value);
} // namespace CatalogItemClassMapper
} // namespace Model
} // namespace Outposts
} // namespace Aws
