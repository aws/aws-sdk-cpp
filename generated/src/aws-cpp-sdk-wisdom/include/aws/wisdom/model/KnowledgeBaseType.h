/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectWisdomService
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
AWS_CONNECTWISDOMSERVICE_API KnowledgeBaseType GetKnowledgeBaseTypeForName(const Aws::String& name);

AWS_CONNECTWISDOMSERVICE_API Aws::String GetNameForKnowledgeBaseType(KnowledgeBaseType value);
} // namespace KnowledgeBaseTypeMapper
} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
