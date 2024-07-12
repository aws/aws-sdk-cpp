/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicSortClause.h>
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

TopicSortClause::TopicSortClause() : 
    m_operandHasBeenSet(false),
    m_sortDirection(TopicSortDirection::NOT_SET),
    m_sortDirectionHasBeenSet(false)
{
}

TopicSortClause::TopicSortClause(JsonView jsonValue)
  : TopicSortClause()
{
  *this = jsonValue;
}

TopicSortClause& TopicSortClause::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Operand"))
  {
    m_operand = jsonValue.GetObject("Operand");

    m_operandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SortDirection"))
  {
    m_sortDirection = TopicSortDirectionMapper::GetTopicSortDirectionForName(jsonValue.GetString("SortDirection"));

    m_sortDirectionHasBeenSet = true;
  }

  return *this;
}

JsonValue TopicSortClause::Jsonize() const
{
  JsonValue payload;

  if(m_operandHasBeenSet)
  {
   payload.WithObject("Operand", m_operand.Jsonize());

  }

  if(m_sortDirectionHasBeenSet)
  {
   payload.WithString("SortDirection", TopicSortDirectionMapper::GetNameForTopicSortDirection(m_sortDirection));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
