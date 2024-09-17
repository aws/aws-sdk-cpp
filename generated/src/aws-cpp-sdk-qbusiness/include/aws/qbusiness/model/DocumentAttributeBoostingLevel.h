/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QBusiness
{
namespace Model
{
  enum class DocumentAttributeBoostingLevel
  {
    NOT_SET,
    NONE,
    LOW,
    MEDIUM,
    HIGH,
    VERY_HIGH
  };

namespace DocumentAttributeBoostingLevelMapper
{
AWS_QBUSINESS_API DocumentAttributeBoostingLevel GetDocumentAttributeBoostingLevelForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForDocumentAttributeBoostingLevel(DocumentAttributeBoostingLevel value);
} // namespace DocumentAttributeBoostingLevelMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
