/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ConstraintDetail.h>
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

ConstraintDetail::ConstraintDetail() : 
    m_constraintIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_portfolioIdHasBeenSet(false)
{
}

ConstraintDetail::ConstraintDetail(JsonView jsonValue) : 
    m_constraintIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_portfolioIdHasBeenSet(false)
{
  *this = jsonValue;
}

ConstraintDetail& ConstraintDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConstraintId"))
  {
    m_constraintId = jsonValue.GetString("ConstraintId");

    m_constraintIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Owner"))
  {
    m_owner = jsonValue.GetString("Owner");

    m_ownerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductId"))
  {
    m_productId = jsonValue.GetString("ProductId");

    m_productIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PortfolioId"))
  {
    m_portfolioId = jsonValue.GetString("PortfolioId");

    m_portfolioIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ConstraintDetail::Jsonize() const
{
  JsonValue payload;

  if(m_constraintIdHasBeenSet)
  {
   payload.WithString("ConstraintId", m_constraintId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("Owner", m_owner);

  }

  if(m_productIdHasBeenSet)
  {
   payload.WithString("ProductId", m_productId);

  }

  if(m_portfolioIdHasBeenSet)
  {
   payload.WithString("PortfolioId", m_portfolioId);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
