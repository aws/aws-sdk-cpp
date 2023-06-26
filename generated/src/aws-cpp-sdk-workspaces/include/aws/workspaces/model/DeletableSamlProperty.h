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
  enum class DeletableSamlProperty
  {
    NOT_SET,
    SAML_PROPERTIES_USER_ACCESS_URL,
    SAML_PROPERTIES_RELAY_STATE_PARAMETER_NAME
  };

namespace DeletableSamlPropertyMapper
{
AWS_WORKSPACES_API DeletableSamlProperty GetDeletableSamlPropertyForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForDeletableSamlProperty(DeletableSamlProperty value);
} // namespace DeletableSamlPropertyMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
