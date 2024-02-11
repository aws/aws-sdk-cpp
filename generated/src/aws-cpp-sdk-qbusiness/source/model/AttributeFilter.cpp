/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/AttributeFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

AttributeFilter::AttributeFilter() : 
    m_andAllFiltersHasBeenSet(false),
    m_containsAllHasBeenSet(false),
    m_containsAnyHasBeenSet(false),
    m_equalsToHasBeenSet(false),
    m_greaterThanHasBeenSet(false),
    m_greaterThanOrEqualsHasBeenSet(false),
    m_lessThanHasBeenSet(false),
    m_lessThanOrEqualsHasBeenSet(false),
    m_notFilterHasBeenSet(false),
    m_orAllFiltersHasBeenSet(false)
{
}

AttributeFilter::AttributeFilter(JsonView jsonValue) : 
    m_andAllFiltersHasBeenSet(false),
    m_containsAllHasBeenSet(false),
    m_containsAnyHasBeenSet(false),
    m_equalsToHasBeenSet(false),
    m_greaterThanHasBeenSet(false),
    m_greaterThanOrEqualsHasBeenSet(false),
    m_lessThanHasBeenSet(false),
    m_lessThanOrEqualsHasBeenSet(false),
    m_notFilterHasBeenSet(false),
    m_orAllFiltersHasBeenSet(false)
{
  *this = jsonValue;
}

const AttributeFilter& AttributeFilter::GetNotFilter() const{ return *m_notFilter; }
bool AttributeFilter::NotFilterHasBeenSet() const { return m_notFilterHasBeenSet; }
void AttributeFilter::SetNotFilter(const AttributeFilter& value) { m_notFilterHasBeenSet = true; m_notFilter = Aws::MakeShared<AttributeFilter>("AttributeFilter", value); }
void AttributeFilter::SetNotFilter(AttributeFilter&& value) { m_notFilterHasBeenSet = true; m_notFilter = Aws::MakeShared<AttributeFilter>("AttributeFilter", std::move(value)); }
AttributeFilter& AttributeFilter::WithNotFilter(const AttributeFilter& value) { SetNotFilter(value); return *this;}
AttributeFilter& AttributeFilter::WithNotFilter(AttributeFilter&& value) { SetNotFilter(std::move(value)); return *this;}

AttributeFilter& AttributeFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("andAllFilters"))
  {
    Aws::Utils::Array<JsonView> andAllFiltersJsonList = jsonValue.GetArray("andAllFilters");
    for(unsigned andAllFiltersIndex = 0; andAllFiltersIndex < andAllFiltersJsonList.GetLength(); ++andAllFiltersIndex)
    {
      m_andAllFilters.push_back(andAllFiltersJsonList[andAllFiltersIndex].AsObject());
    }
    m_andAllFiltersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("containsAll"))
  {
    m_containsAll = jsonValue.GetObject("containsAll");

    m_containsAllHasBeenSet = true;
  }

  if(jsonValue.ValueExists("containsAny"))
  {
    m_containsAny = jsonValue.GetObject("containsAny");

    m_containsAnyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("equalsTo"))
  {
    m_equalsTo = jsonValue.GetObject("equalsTo");

    m_equalsToHasBeenSet = true;
  }

  if(jsonValue.ValueExists("greaterThan"))
  {
    m_greaterThan = jsonValue.GetObject("greaterThan");

    m_greaterThanHasBeenSet = true;
  }

  if(jsonValue.ValueExists("greaterThanOrEquals"))
  {
    m_greaterThanOrEquals = jsonValue.GetObject("greaterThanOrEquals");

    m_greaterThanOrEqualsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lessThan"))
  {
    m_lessThan = jsonValue.GetObject("lessThan");

    m_lessThanHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lessThanOrEquals"))
  {
    m_lessThanOrEquals = jsonValue.GetObject("lessThanOrEquals");

    m_lessThanOrEqualsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("notFilter"))
  {
    m_notFilter = Aws::MakeShared<AttributeFilter>("AttributeFilter", jsonValue.GetObject("notFilter"));

    m_notFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("orAllFilters"))
  {
    Aws::Utils::Array<JsonView> orAllFiltersJsonList = jsonValue.GetArray("orAllFilters");
    for(unsigned orAllFiltersIndex = 0; orAllFiltersIndex < orAllFiltersJsonList.GetLength(); ++orAllFiltersIndex)
    {
      m_orAllFilters.push_back(orAllFiltersJsonList[orAllFiltersIndex].AsObject());
    }
    m_orAllFiltersHasBeenSet = true;
  }

  return *this;
}

JsonValue AttributeFilter::Jsonize() const
{
  JsonValue payload;

  if(m_andAllFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> andAllFiltersJsonList(m_andAllFilters.size());
   for(unsigned andAllFiltersIndex = 0; andAllFiltersIndex < andAllFiltersJsonList.GetLength(); ++andAllFiltersIndex)
   {
     andAllFiltersJsonList[andAllFiltersIndex].AsObject(m_andAllFilters[andAllFiltersIndex].Jsonize());
   }
   payload.WithArray("andAllFilters", std::move(andAllFiltersJsonList));

  }

  if(m_containsAllHasBeenSet)
  {
   payload.WithObject("containsAll", m_containsAll.Jsonize());

  }

  if(m_containsAnyHasBeenSet)
  {
   payload.WithObject("containsAny", m_containsAny.Jsonize());

  }

  if(m_equalsToHasBeenSet)
  {
   payload.WithObject("equalsTo", m_equalsTo.Jsonize());

  }

  if(m_greaterThanHasBeenSet)
  {
   payload.WithObject("greaterThan", m_greaterThan.Jsonize());

  }

  if(m_greaterThanOrEqualsHasBeenSet)
  {
   payload.WithObject("greaterThanOrEquals", m_greaterThanOrEquals.Jsonize());

  }

  if(m_lessThanHasBeenSet)
  {
   payload.WithObject("lessThan", m_lessThan.Jsonize());

  }

  if(m_lessThanOrEqualsHasBeenSet)
  {
   payload.WithObject("lessThanOrEquals", m_lessThanOrEquals.Jsonize());

  }

  if(m_notFilterHasBeenSet)
  {
   payload.WithObject("notFilter", m_notFilter->Jsonize());

  }

  if(m_orAllFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> orAllFiltersJsonList(m_orAllFilters.size());
   for(unsigned orAllFiltersIndex = 0; orAllFiltersIndex < orAllFiltersJsonList.GetLength(); ++orAllFiltersIndex)
   {
     orAllFiltersJsonList[orAllFiltersIndex].AsObject(m_orAllFilters[orAllFiltersIndex].Jsonize());
   }
   payload.WithArray("orAllFilters", std::move(orAllFiltersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
