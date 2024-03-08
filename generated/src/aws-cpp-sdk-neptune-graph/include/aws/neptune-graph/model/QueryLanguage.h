/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NeptuneGraph
{
namespace Model
{
  enum class QueryLanguage
  {
    NOT_SET,
    OPEN_CYPHER
  };

namespace QueryLanguageMapper
{
AWS_NEPTUNEGRAPH_API QueryLanguage GetQueryLanguageForName(const Aws::String& name);

AWS_NEPTUNEGRAPH_API Aws::String GetNameForQueryLanguage(QueryLanguage value);
} // namespace QueryLanguageMapper
} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
