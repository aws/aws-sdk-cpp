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
  enum class CaseStatus
  {
    NOT_SET,
    Submitted,
    Acknowledged,
    Detection_and_Analysis,
    Containment_COMMA_Eradication_and_Recovery,
    Post_incident_Activities,
    Ready_to_Close,
    Closed
  };

namespace CaseStatusMapper
{
AWS_SECURITYIR_API CaseStatus GetCaseStatusForName(const Aws::String& name);

AWS_SECURITYIR_API Aws::String GetNameForCaseStatus(CaseStatus value);
} // namespace CaseStatusMapper
} // namespace Model
} // namespace SecurityIR
} // namespace Aws
