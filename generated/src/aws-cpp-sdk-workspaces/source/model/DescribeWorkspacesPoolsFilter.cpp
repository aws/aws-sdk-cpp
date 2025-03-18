/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DescribeWorkspacesPoolsFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

DescribeWorkspacesPoolsFilter::DescribeWorkspacesPoolsFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

DescribeWorkspacesPoolsFilter& DescribeWorkspacesPoolsFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = DescribeWorkspacesPoolsFilterNameMapper::GetDescribeWorkspacesPoolsFilterNameForName(jsonValue.GetString("Name"));
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("Values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Operator"))
  {
    m_operator = DescribeWorkspacesPoolsFilterOperatorMapper::GetDescribeWorkspacesPoolsFilterOperatorForName(jsonValue.GetString("Operator"));
    m_operatorHasBeenSet = true;
  }
  return *this;
}

JsonValue DescribeWorkspacesPoolsFilter::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", DescribeWorkspacesPoolsFilterNameMapper::GetNameForDescribeWorkspacesPoolsFilterName(m_name));
  }

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
   }
   payload.WithArray("Values", std::move(valuesJsonList));

  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("Operator", DescribeWorkspacesPoolsFilterOperatorMapper::GetNameForDescribeWorkspacesPoolsFilterOperator(m_operator));
  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
