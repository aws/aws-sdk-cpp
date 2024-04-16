/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{
  enum class IntegrationStatusInput
  {
    NOT_SET,
    NOT_CONFIGURED
  };

namespace IntegrationStatusInputMapper
{
AWS_WELLARCHITECTED_API IntegrationStatusInput GetIntegrationStatusInputForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForIntegrationStatusInput(IntegrationStatusInput value);
} // namespace IntegrationStatusInputMapper
} // namespace Model
} // namespace WellArchitected
} // namespace Aws
