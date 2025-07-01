/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace odb
{
namespace Model
{
  enum class PreferenceType
  {
    NOT_SET,
    NO_PREFERENCE,
    CUSTOM_PREFERENCE
  };

namespace PreferenceTypeMapper
{
AWS_ODB_API PreferenceType GetPreferenceTypeForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForPreferenceType(PreferenceType value);
} // namespace PreferenceTypeMapper
} // namespace Model
} // namespace odb
} // namespace Aws
