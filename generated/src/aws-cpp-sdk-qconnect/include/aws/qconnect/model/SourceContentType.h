/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QConnect
{
namespace Model
{
  enum class SourceContentType
  {
    NOT_SET,
    KNOWLEDGE_CONTENT
  };

namespace SourceContentTypeMapper
{
AWS_QCONNECT_API SourceContentType GetSourceContentTypeForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForSourceContentType(SourceContentType value);
} // namespace SourceContentTypeMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws
