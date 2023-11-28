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
  enum class KnowledgeBaseType
  {
    NOT_SET,
    EXTERNAL,
    CUSTOM,
    QUICK_RESPONSES
  };

namespace KnowledgeBaseTypeMapper
{
AWS_QCONNECT_API KnowledgeBaseType GetKnowledgeBaseTypeForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForKnowledgeBaseType(KnowledgeBaseType value);
} // namespace KnowledgeBaseTypeMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws
