/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/SeverityUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

SeverityUpdate::SeverityUpdate() : 
    m_normalized(0),
    m_normalizedHasBeenSet(false),
    m_product(0.0),
    m_productHasBeenSet(false),
    m_label(SeverityLabel::NOT_SET),
    m_labelHasBeenSet(false)
{
}

SeverityUpdate::SeverityUpdate(JsonView jsonValue) : 
    m_normalized(0),
    m_normalizedHasBeenSet(false),
    m_product(0.0),
    m_productHasBeenSet(false),
    m_label(SeverityLabel::NOT_SET),
    m_labelHasBeenSet(false)
{
  *this = jsonValue;
}

SeverityUpdate& SeverityUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Normalized"))
  {
    m_normalized = jsonValue.GetInteger("Normalized");

    m_normalizedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Product"))
  {
    m_product = jsonValue.GetDouble("Product");

    m_productHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Label"))
  {
    m_label = SeverityLabelMapper::GetSeverityLabelForName(jsonValue.GetString("Label"));

    m_labelHasBeenSet = true;
  }

  return *this;
}

JsonValue SeverityUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_normalizedHasBeenSet)
  {
   payload.WithInteger("Normalized", m_normalized);

  }

  if(m_productHasBeenSet)
  {
   payload.WithDouble("Product", m_product);

  }

  if(m_labelHasBeenSet)
  {
   payload.WithString("Label", SeverityLabelMapper::GetNameForSeverityLabel(m_label));
  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
