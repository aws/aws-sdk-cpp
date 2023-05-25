/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/FindingProviderSeverity.h>
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

FindingProviderSeverity::FindingProviderSeverity() : 
    m_label(SeverityLabel::NOT_SET),
    m_labelHasBeenSet(false),
    m_originalHasBeenSet(false)
{
}

FindingProviderSeverity::FindingProviderSeverity(JsonView jsonValue) : 
    m_label(SeverityLabel::NOT_SET),
    m_labelHasBeenSet(false),
    m_originalHasBeenSet(false)
{
  *this = jsonValue;
}

FindingProviderSeverity& FindingProviderSeverity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Label"))
  {
    m_label = SeverityLabelMapper::GetSeverityLabelForName(jsonValue.GetString("Label"));

    m_labelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Original"))
  {
    m_original = jsonValue.GetString("Original");

    m_originalHasBeenSet = true;
  }

  return *this;
}

JsonValue FindingProviderSeverity::Jsonize() const
{
  JsonValue payload;

  if(m_labelHasBeenSet)
  {
   payload.WithString("Label", SeverityLabelMapper::GetNameForSeverityLabel(m_label));
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
