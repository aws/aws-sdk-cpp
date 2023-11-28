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
  enum class QueryResultType
  {
    NOT_SET,
    KNOWLEDGE_CONTENT,
    GENERATIVE_ANSWER
  };

namespace QueryResultTypeMapper
{
AWS_QCONNECT_API QueryResultType GetQueryResultTypeForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForQueryResultType(QueryResultType value);
} // namespace QueryResultTypeMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws
