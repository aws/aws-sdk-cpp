/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/RelatedItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

RelatedItem::RelatedItem() : 
    m_generatedIdHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_titleHasBeenSet(false)
{
}

RelatedItem::RelatedItem(JsonView jsonValue) : 
    m_generatedIdHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_titleHasBeenSet(false)
{
  *this = jsonValue;
}

RelatedItem& RelatedItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("generatedId"))
  {
    m_generatedId = jsonValue.GetString("generatedId");

    m_generatedIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("identifier"))
  {
    m_identifier = jsonValue.GetObject("identifier");

    m_identifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");

    m_titleHasBeenSet = true;
  }

  return *this;
}

JsonValue RelatedItem::Jsonize() const
{
  JsonValue payload;

  if(m_generatedIdHasBeenSet)
  {
   payload.WithString("generatedId", m_generatedId);

  }

  if(m_identifierHasBeenSet)
  {
   payload.WithObject("identifier", m_identifier.Jsonize());

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
