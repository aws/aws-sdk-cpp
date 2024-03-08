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
  enum class ApplicationTagStatus
  {
    NOT_SET,
    IN_PROGRESS,
    SUCCESS,
    FAILURE
  };

namespace ApplicationTagStatusMapper
{
AWS_APPREGISTRY_API ApplicationTagStatus GetApplicationTagStatusForName(const Aws::String& name);

AWS_APPREGISTRY_API Aws::String GetNameForApplicationTagStatus(ApplicationTagStatus value);
} // namespace ApplicationTagStatusMapper
} // namespace Model
} // namespace AppRegistry
} // namespace Aws
