/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppRegistry
{
namespace Model
{
  enum class AssociationOption
  {
    NOT_SET,
    APPLY_APPLICATION_TAG,
    SKIP_APPLICATION_TAG
  };

namespace AssociationOptionMapper
{
AWS_APPREGISTRY_API AssociationOption GetAssociationOptionForName(const Aws::String& name);

AWS_APPREGISTRY_API Aws::String GetNameForAssociationOption(AssociationOption value);
} // namespace AssociationOptionMapper
} // namespace Model
} // namespace AppRegistry
} // namespace Aws
