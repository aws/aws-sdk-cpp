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
  enum class DocumentParameterType
  {
    NOT_SET,
    String,
    StringList
  };

namespace DocumentParameterTypeMapper
{
AWS_SSM_API DocumentParameterType GetDocumentParameterTypeForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForDocumentParameterType(DocumentParameterType value);
} // namespace DocumentParameterTypeMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
