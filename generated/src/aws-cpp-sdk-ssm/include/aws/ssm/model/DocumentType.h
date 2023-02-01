/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class DocumentType
  {
    NOT_SET,
    Command,
    Policy,
    Automation,
    Session,
    Package,
    ApplicationConfiguration,
    ApplicationConfigurationSchema,
    DeploymentStrategy,
    ChangeCalendar,
    Automation_ChangeTemplate,
    ProblemAnalysis,
    ProblemAnalysisTemplate,
    CloudFormation,
    ConformancePackTemplate,
    QuickSetup
  };

namespace DocumentTypeMapper
{
AWS_SSM_API DocumentType GetDocumentTypeForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForDocumentType(DocumentType value);
} // namespace DocumentTypeMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
