/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class AppNetworkAccessType
  {
    NOT_SET,
    PublicInternetOnly,
    VpcOnly
  };

namespace AppNetworkAccessTypeMapper
{
AWS_SAGEMAKER_API AppNetworkAccessType GetAppNetworkAccessTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAppNetworkAccessType(AppNetworkAccessType value);
} // namespace AppNetworkAccessTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
