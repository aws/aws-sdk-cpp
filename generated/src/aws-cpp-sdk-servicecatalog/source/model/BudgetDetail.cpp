/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/BudgetDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

BudgetDetail::BudgetDetail() : 
    m_budgetNameHasBeenSet(false)
{
}

BudgetDetail::BudgetDetail(JsonView jsonValue) : 
    m_budgetNameHasBeenSet(false)
{
  *this = jsonValue;
}

BudgetDetail& BudgetDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BudgetName"))
  {
    m_budgetName = jsonValue.GetString("BudgetName");

    m_budgetNameHasBeenSet = true;
  }

  return *this;
}

JsonValue BudgetDetail::Jsonize() const
{
  JsonValue payload;

  if(m_budgetNameHasBeenSet)
  {
   payload.WithString("BudgetName", m_budgetName);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
