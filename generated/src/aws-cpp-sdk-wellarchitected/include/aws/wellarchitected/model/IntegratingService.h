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
  enum class IntegratingService
  {
    NOT_SET,
    JIRA
  };

namespace IntegratingServiceMapper
{
AWS_WELLARCHITECTED_API IntegratingService GetIntegratingServiceForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForIntegratingService(IntegratingService value);
} // namespace IntegratingServiceMapper
} // namespace Model
} // namespace WellArchitected
} // namespace Aws
