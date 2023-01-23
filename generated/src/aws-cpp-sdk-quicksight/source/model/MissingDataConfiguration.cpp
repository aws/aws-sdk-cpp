/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/MissingDataConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

MissingDataConfiguration::MissingDataConfiguration() : 
    m_treatmentOption(MissingDataTreatmentOption::NOT_SET),
    m_treatmentOptionHasBeenSet(false)
{
}

MissingDataConfiguration::MissingDataConfiguration(JsonView jsonValue) : 
    m_treatmentOption(MissingDataTreatmentOption::NOT_SET),
    m_treatmentOptionHasBeenSet(false)
{
  *this = jsonValue;
}

MissingDataConfiguration& MissingDataConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TreatmentOption"))
  {
    m_treatmentOption = MissingDataTreatmentOptionMapper::GetMissingDataTreatmentOptionForName(jsonValue.GetString("TreatmentOption"));

    m_treatmentOptionHasBeenSet = true;
  }

  return *this;
}

JsonValue MissingDataConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_treatmentOptionHasBeenSet)
  {
   payload.WithString("TreatmentOption", MissingDataTreatmentOptionMapper::GetNameForMissingDataTreatmentOption(m_treatmentOption));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
