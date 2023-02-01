/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Rekognition
{
namespace Model
{
  enum class DatasetStatusMessageCode
  {
    NOT_SET,
    SUCCESS,
    SERVICE_ERROR,
    CLIENT_ERROR
  };

namespace DatasetStatusMessageCodeMapper
{
AWS_REKOGNITION_API DatasetStatusMessageCode GetDatasetStatusMessageCodeForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForDatasetStatusMessageCode(DatasetStatusMessageCode value);
} // namespace DatasetStatusMessageCodeMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws
