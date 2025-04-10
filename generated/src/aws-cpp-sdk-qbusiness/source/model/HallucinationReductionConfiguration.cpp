/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/HallucinationReductionConfiguration.h>
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

HallucinationReductionConfiguration::HallucinationReductionConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

HallucinationReductionConfiguration& HallucinationReductionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("hallucinationReductionControl"))
  {
    m_hallucinationReductionControl = HallucinationReductionControlMapper::GetHallucinationReductionControlForName(jsonValue.GetString("hallucinationReductionControl"));
    m_hallucinationReductionControlHasBeenSet = true;
  }
  return *this;
}

JsonValue HallucinationReductionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_hallucinationReductionControlHasBeenSet)
  {
   payload.WithString("hallucinationReductionControl", HallucinationReductionControlMapper::GetNameForHallucinationReductionControl(m_hallucinationReductionControl));
  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
