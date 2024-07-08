/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QApps
{
namespace Model
{
  enum class DocumentScope
  {
    NOT_SET,
    APPLICATION,
    SESSION
  };

namespace DocumentScopeMapper
{
AWS_QAPPS_API DocumentScope GetDocumentScopeForName(const Aws::String& name);

AWS_QAPPS_API Aws::String GetNameForDocumentScope(DocumentScope value);
} // namespace DocumentScopeMapper
} // namespace Model
} // namespace QApps
} // namespace Aws
