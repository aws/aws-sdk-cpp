/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/Severity.h>
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

Severity::Severity() : 
    m_product(0.0),
    m_productHasBeenSet(false),
    m_label(SeverityLabel::NOT_SET),
    m_labelHasBeenSet(false),
    m_normalized(0),
    m_normalizedHasBeenSet(false),
    m_originalHasBeenSet(false)
{
}

Severity::Severity(JsonView jsonValue) : 
    m_product(0.0),
    m_productHasBeenSet(false),
    m_label(SeverityLabel::NOT_SET),
    m_labelHasBeenSet(false),
    m_normalized(0),
    m_normalizedHasBeenSet(false),
    m_originalHasBeenSet(false)
{
  *this = jsonValue;
}

Severity& Severity::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("Normalized"))
  {
    m_normalized = jsonValue.GetInteger("Normalized");

    m_normalizedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Original"))
  {
    m_original = jsonValue.GetString("Original");

    m_originalHasBeenSet = true;
  }

  return *this;
}

JsonValue Severity::Jsonize() const
{
  JsonValue payload;

  if(m_productHasBeenSet)
  {
   payload.WithDouble("Product", m_product);

  }

  if(m_labelHasBeenSet)
  {
   payload.WithString("Label", SeverityLabelMapper::GetNameForSeverityLabel(m_label));
  }

  if(m_normalizedHasBeenSet)
  {
   payload.WithInteger("Normalized", m_normalized);

  }

  if(m_originalHasBeenSet)
  {
   payload.WithString("Original", m_original);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
