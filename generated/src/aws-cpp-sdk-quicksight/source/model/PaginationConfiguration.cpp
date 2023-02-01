/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PaginationConfiguration.h>
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

PaginationConfiguration::PaginationConfiguration() : 
    m_pageSize(0),
    m_pageSizeHasBeenSet(false),
    m_pageNumber(0),
    m_pageNumberHasBeenSet(false)
{
}

PaginationConfiguration::PaginationConfiguration(JsonView jsonValue) : 
    m_pageSize(0),
    m_pageSizeHasBeenSet(false),
    m_pageNumber(0),
    m_pageNumberHasBeenSet(false)
{
  *this = jsonValue;
}

PaginationConfiguration& PaginationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PageSize"))
  {
    m_pageSize = jsonValue.GetInt64("PageSize");

    m_pageSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PageNumber"))
  {
    m_pageNumber = jsonValue.GetInt64("PageNumber");

    m_pageNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue PaginationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_pageSizeHasBeenSet)
  {
   payload.WithInt64("PageSize", m_pageSize);

  }

  if(m_pageNumberHasBeenSet)
  {
   payload.WithInt64("PageNumber", m_pageNumber);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
