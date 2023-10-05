/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{
  enum class ApplicationAssociatedResourceType
  {
    NOT_SET,
    WORKSPACE,
    BUNDLE,
    IMAGE
  };

namespace ApplicationAssociatedResourceTypeMapper
{
AWS_WORKSPACES_API ApplicationAssociatedResourceType GetApplicationAssociatedResourceTypeForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForApplicationAssociatedResourceType(ApplicationAssociatedResourceType value);
} // namespace ApplicationAssociatedResourceTypeMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
