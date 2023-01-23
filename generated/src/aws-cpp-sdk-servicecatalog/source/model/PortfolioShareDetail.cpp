/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/PortfolioShareDetail.h>
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

PortfolioShareDetail::PortfolioShareDetail() : 
    m_principalIdHasBeenSet(false),
    m_type(DescribePortfolioShareType::NOT_SET),
    m_typeHasBeenSet(false),
    m_accepted(false),
    m_acceptedHasBeenSet(false),
    m_shareTagOptions(false),
    m_shareTagOptionsHasBeenSet(false),
    m_sharePrincipals(false),
    m_sharePrincipalsHasBeenSet(false)
{
}

PortfolioShareDetail::PortfolioShareDetail(JsonView jsonValue) : 
    m_principalIdHasBeenSet(false),
    m_type(DescribePortfolioShareType::NOT_SET),
    m_typeHasBeenSet(false),
    m_accepted(false),
    m_acceptedHasBeenSet(false),
    m_shareTagOptions(false),
    m_shareTagOptionsHasBeenSet(false),
    m_sharePrincipals(false),
    m_sharePrincipalsHasBeenSet(false)
{
  *this = jsonValue;
}

PortfolioShareDetail& PortfolioShareDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PrincipalId"))
  {
    m_principalId = jsonValue.GetString("PrincipalId");

    m_principalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = DescribePortfolioShareTypeMapper::GetDescribePortfolioShareTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Accepted"))
  {
    m_accepted = jsonValue.GetBool("Accepted");

    m_acceptedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShareTagOptions"))
  {
    m_shareTagOptions = jsonValue.GetBool("ShareTagOptions");

    m_shareTagOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SharePrincipals"))
  {
    m_sharePrincipals = jsonValue.GetBool("SharePrincipals");

    m_sharePrincipalsHasBeenSet = true;
  }

  return *this;
}

JsonValue PortfolioShareDetail::Jsonize() const
{
  JsonValue payload;

  if(m_principalIdHasBeenSet)
  {
   payload.WithString("PrincipalId", m_principalId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", DescribePortfolioShareTypeMapper::GetNameForDescribePortfolioShareType(m_type));
  }

  if(m_acceptedHasBeenSet)
  {
   payload.WithBool("Accepted", m_accepted);

  }

  if(m_shareTagOptionsHasBeenSet)
  {
   payload.WithBool("ShareTagOptions", m_shareTagOptions);

  }

  if(m_sharePrincipalsHasBeenSet)
  {
   payload.WithBool("SharePrincipals", m_sharePrincipals);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
