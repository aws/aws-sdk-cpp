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
  enum class DocumentPermissionType
  {
    NOT_SET,
    Share
  };

namespace DocumentPermissionTypeMapper
{
AWS_SSM_API DocumentPermissionType GetDocumentPermissionTypeForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForDocumentPermissionType(DocumentPermissionType value);
} // namespace DocumentPermissionTypeMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
