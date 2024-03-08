/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-agreement/model/Constraints.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AgreementService
{
namespace Model
{

Constraints::Constraints() : 
    m_multipleDimensionSelectionHasBeenSet(false),
    m_quantityConfigurationHasBeenSet(false)
{
}

Constraints::Constraints(JsonView jsonValue) : 
    m_multipleDimensionSelectionHasBeenSet(false),
    m_quantityConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

Constraints& Constraints::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("multipleDimensionSelection"))
  {
    m_multipleDimensionSelection = jsonValue.GetString("multipleDimensionSelection");

    m_multipleDimensionSelectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("quantityConfiguration"))
  {
    m_quantityConfiguration = jsonValue.GetString("quantityConfiguration");

    m_quantityConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue Constraints::Jsonize() const
{
  JsonValue payload;

  if(m_multipleDimensionSelectionHasBeenSet)
  {
   payload.WithString("multipleDimensionSelection", m_multipleDimensionSelection);

  }

  if(m_quantityConfigurationHasBeenSet)
  {
   payload.WithString("quantityConfiguration", m_quantityConfiguration);

  }

  return payload;
}

} // namespace Model
} // namespace AgreementService
} // namespace Aws
