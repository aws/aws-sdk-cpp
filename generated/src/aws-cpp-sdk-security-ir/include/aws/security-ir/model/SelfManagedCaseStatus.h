/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityIR
{
namespace Model
{
  enum class SelfManagedCaseStatus
  {
    NOT_SET,
    Submitted,
    Detection_and_Analysis,
    Containment_COMMA_Eradication_and_Recovery,
    Post_incident_Activities
  };

namespace SelfManagedCaseStatusMapper
{
AWS_SECURITYIR_API SelfManagedCaseStatus GetSelfManagedCaseStatusForName(const Aws::String& name);

AWS_SECURITYIR_API Aws::String GetNameForSelfManagedCaseStatus(SelfManagedCaseStatus value);
} // namespace SelfManagedCaseStatusMapper
} // namespace Model
} // namespace SecurityIR
} // namespace Aws
