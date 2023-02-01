/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds-data/RDSDataService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RDSDataService
{
namespace Model
{
  enum class RecordsFormatType
  {
    NOT_SET,
    NONE,
    JSON
  };

namespace RecordsFormatTypeMapper
{
AWS_RDSDATASERVICE_API RecordsFormatType GetRecordsFormatTypeForName(const Aws::String& name);

AWS_RDSDATASERVICE_API Aws::String GetNameForRecordsFormatType(RecordsFormatType value);
} // namespace RecordsFormatTypeMapper
} // namespace Model
} // namespace RDSDataService
} // namespace Aws
