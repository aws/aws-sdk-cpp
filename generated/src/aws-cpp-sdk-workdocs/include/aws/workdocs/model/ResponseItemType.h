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
  enum class ResponseItemType
  {
    NOT_SET,
    DOCUMENT,
    FOLDER,
    COMMENT,
    DOCUMENT_VERSION
  };

namespace ResponseItemTypeMapper
{
AWS_WORKDOCS_API ResponseItemType GetResponseItemTypeForName(const Aws::String& name);

AWS_WORKDOCS_API Aws::String GetNameForResponseItemType(ResponseItemType value);
} // namespace ResponseItemTypeMapper
} // namespace Model
} // namespace WorkDocs
} // namespace Aws
