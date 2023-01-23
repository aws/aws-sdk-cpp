/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore-data/MediaStoreData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaStoreData
{
namespace Model
{
  enum class ItemType
  {
    NOT_SET,
    OBJECT,
    FOLDER
  };

namespace ItemTypeMapper
{
AWS_MEDIASTOREDATA_API ItemType GetItemTypeForName(const Aws::String& name);

AWS_MEDIASTOREDATA_API Aws::String GetNameForItemType(ItemType value);
} // namespace ItemTypeMapper
} // namespace Model
} // namespace MediaStoreData
} // namespace Aws
