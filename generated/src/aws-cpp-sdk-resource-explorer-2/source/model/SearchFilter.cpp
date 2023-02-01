/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-explorer-2/model/SearchFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResourceExplorer2
{
namespace Model
{

SearchFilter::SearchFilter() : 
    m_filterStringHasBeenSet(false)
{
}

SearchFilter::SearchFilter(JsonView jsonValue) : 
    m_filterStringHasBeenSet(false)
{
  *this = jsonValue;
}

SearchFilter& SearchFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FilterString"))
  {
    m_filterString = jsonValue.GetString("FilterString");

    m_filterStringHasBeenSet = true;
  }

  return *this;
}

JsonValue SearchFilter::Jsonize() const
{
  JsonValue payload;

  if(m_filterStringHasBeenSet)
  {
   payload.WithString("FilterString", m_filterString);

  }

  return payload;
}

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
