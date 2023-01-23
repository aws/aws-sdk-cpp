/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MigrationHubOrchestrator
{
namespace Model
{
  enum class TemplateStatus
  {
    NOT_SET,
    CREATED
  };

namespace TemplateStatusMapper
{
AWS_MIGRATIONHUBORCHESTRATOR_API TemplateStatus GetTemplateStatusForName(const Aws::String& name);

AWS_MIGRATIONHUBORCHESTRATOR_API Aws::String GetNameForTemplateStatus(TemplateStatus value);
} // namespace TemplateStatusMapper
} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
