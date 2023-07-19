/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MedicalImaging
{
namespace Model
{
  enum class Operator
  {
    NOT_SET,
    EQUAL,
    BETWEEN
  };

namespace OperatorMapper
{
AWS_MEDICALIMAGING_API Operator GetOperatorForName(const Aws::String& name);

AWS_MEDICALIMAGING_API Aws::String GetNameForOperator(Operator value);
} // namespace OperatorMapper
} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
