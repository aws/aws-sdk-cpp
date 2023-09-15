/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AllSheetsFilterScopeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

AllSheetsFilterScopeConfiguration::AllSheetsFilterScopeConfiguration()
{
}

AllSheetsFilterScopeConfiguration::AllSheetsFilterScopeConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

AllSheetsFilterScopeConfiguration& AllSheetsFilterScopeConfiguration::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue AllSheetsFilterScopeConfiguration::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
