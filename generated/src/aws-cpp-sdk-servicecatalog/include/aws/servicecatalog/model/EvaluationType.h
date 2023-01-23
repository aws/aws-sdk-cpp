/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{
  enum class EvaluationType
  {
    NOT_SET,
    STATIC_,
    DYNAMIC
  };

namespace EvaluationTypeMapper
{
AWS_SERVICECATALOG_API EvaluationType GetEvaluationTypeForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForEvaluationType(EvaluationType value);
} // namespace EvaluationTypeMapper
} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
