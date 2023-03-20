/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkDocs
{
namespace Model
{
  enum class PrincipalRoleType
  {
    NOT_SET,
    VIEWER,
    CONTRIBUTOR,
    OWNER,
    COOWNER
  };

namespace PrincipalRoleTypeMapper
{
AWS_WORKDOCS_API PrincipalRoleType GetPrincipalRoleTypeForName(const Aws::String& name);

AWS_WORKDOCS_API Aws::String GetNameForPrincipalRoleType(PrincipalRoleType value);
} // namespace PrincipalRoleTypeMapper
} // namespace Model
} // namespace WorkDocs
} // namespace Aws
