/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/TurkeyAdditionalInfo.h>
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

TurkeyAdditionalInfo::TurkeyAdditionalInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

TurkeyAdditionalInfo& TurkeyAdditionalInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("industries"))
  {
    m_industries = IndustriesMapper::GetIndustriesForName(jsonValue.GetString("industries"));
    m_industriesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kepEmailId"))
  {
    m_kepEmailId = jsonValue.GetString("kepEmailId");
    m_kepEmailIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("secondaryTaxId"))
  {
    m_secondaryTaxId = jsonValue.GetString("secondaryTaxId");
    m_secondaryTaxIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("taxOffice"))
  {
    m_taxOffice = jsonValue.GetString("taxOffice");
    m_taxOfficeHasBeenSet = true;
  }
  return *this;
}

JsonValue TurkeyAdditionalInfo::Jsonize() const
{
  JsonValue payload;

  if(m_industriesHasBeenSet)
  {
   payload.WithString("industries", IndustriesMapper::GetNameForIndustries(m_industries));
  }

  if(m_kepEmailIdHasBeenSet)
  {
   payload.WithString("kepEmailId", m_kepEmailId);

  }

  if(m_secondaryTaxIdHasBeenSet)
  {
   payload.WithString("secondaryTaxId", m_secondaryTaxId);

  }

  if(m_taxOfficeHasBeenSet)
  {
   payload.WithString("taxOffice", m_taxOffice);

  }

  return payload;
}

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
