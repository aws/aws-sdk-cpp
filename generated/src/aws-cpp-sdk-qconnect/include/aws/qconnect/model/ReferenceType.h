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
  enum class ReferenceType
  {
    NOT_SET,
    WEB_CRAWLER,
    KNOWLEDGE_BASE
  };

namespace ReferenceTypeMapper
{
AWS_QCONNECT_API ReferenceType GetReferenceTypeForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForReferenceType(ReferenceType value);
} // namespace ReferenceTypeMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws
