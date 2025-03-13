/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/TaxExemptionDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TaxSettings
{
namespace Model
{

TaxExemptionDetails::TaxExemptionDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

TaxExemptionDetails& TaxExemptionDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("heritageObtainedDetails"))
  {
    m_heritageObtainedDetails = jsonValue.GetBool("heritageObtainedDetails");
    m_heritageObtainedDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("heritageObtainedParentEntity"))
  {
    m_heritageObtainedParentEntity = jsonValue.GetString("heritageObtainedParentEntity");
    m_heritageObtainedParentEntityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("heritageObtainedReason"))
  {
    m_heritageObtainedReason = jsonValue.GetString("heritageObtainedReason");
    m_heritageObtainedReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("taxExemptions"))
  {
    Aws::Utils::Array<JsonView> taxExemptionsJsonList = jsonValue.GetArray("taxExemptions");
    for(unsigned taxExemptionsIndex = 0; taxExemptionsIndex < taxExemptionsJsonList.GetLength(); ++taxExemptionsIndex)
    {
      m_taxExemptions.push_back(taxExemptionsJsonList[taxExemptionsIndex].AsObject());
    }
    m_taxExemptionsHasBeenSet = true;
  }
  return *this;
}

JsonValue TaxExemptionDetails::Jsonize() const
{
  JsonValue payload;

  if(m_heritageObtainedDetailsHasBeenSet)
  {
   payload.WithBool("heritageObtainedDetails", m_heritageObtainedDetails);

  }

  if(m_heritageObtainedParentEntityHasBeenSet)
  {
   payload.WithString("heritageObtainedParentEntity", m_heritageObtainedParentEntity);

  }

  if(m_heritageObtainedReasonHasBeenSet)
  {
   payload.WithString("heritageObtainedReason", m_heritageObtainedReason);

  }

  if(m_taxExemptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> taxExemptionsJsonList(m_taxExemptions.size());
   for(unsigned taxExemptionsIndex = 0; taxExemptionsIndex < taxExemptionsJsonList.GetLength(); ++taxExemptionsIndex)
   {
     taxExemptionsJsonList[taxExemptionsIndex].AsObject(m_taxExemptions[taxExemptionsIndex].Jsonize());
   }
   payload.WithArray("taxExemptions", std::move(taxExemptionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
