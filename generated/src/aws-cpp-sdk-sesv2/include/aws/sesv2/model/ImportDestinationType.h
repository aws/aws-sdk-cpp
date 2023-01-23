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
  enum class ImportDestinationType
  {
    NOT_SET,
    SUPPRESSION_LIST,
    CONTACT_LIST
  };

namespace ImportDestinationTypeMapper
{
AWS_SESV2_API ImportDestinationType GetImportDestinationTypeForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForImportDestinationType(ImportDestinationType value);
} // namespace ImportDestinationTypeMapper
} // namespace Model
} // namespace SESV2
} // namespace Aws
