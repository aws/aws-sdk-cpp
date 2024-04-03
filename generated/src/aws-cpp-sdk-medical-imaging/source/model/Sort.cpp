/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/Sort.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MedicalImaging
{
namespace Model
{

Sort::Sort() : 
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false),
    m_sortField(SortField::NOT_SET),
    m_sortFieldHasBeenSet(false)
{
}

Sort::Sort(JsonView jsonValue) : 
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false),
    m_sortField(SortField::NOT_SET),
    m_sortFieldHasBeenSet(false)
{
  *this = jsonValue;
}

Sort& Sort::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sortOrder"))
  {
    m_sortOrder = SortOrderMapper::GetSortOrderForName(jsonValue.GetString("sortOrder"));

    m_sortOrderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sortField"))
  {
    m_sortField = SortFieldMapper::GetSortFieldForName(jsonValue.GetString("sortField"));

    m_sortFieldHasBeenSet = true;
  }

  return *this;
}

JsonValue Sort::Jsonize() const
{
  JsonValue payload;

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("sortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  if(m_sortFieldHasBeenSet)
  {
   payload.WithString("sortField", SortFieldMapper::GetNameForSortField(m_sortField));
  }

  return payload;
}

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
