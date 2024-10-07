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
  enum class KnowledgeBaseSearchType
  {
    NOT_SET,
    HYBRID,
    SEMANTIC
  };

namespace KnowledgeBaseSearchTypeMapper
{
AWS_QCONNECT_API KnowledgeBaseSearchType GetKnowledgeBaseSearchTypeForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForKnowledgeBaseSearchType(KnowledgeBaseSearchType value);
} // namespace KnowledgeBaseSearchTypeMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws
