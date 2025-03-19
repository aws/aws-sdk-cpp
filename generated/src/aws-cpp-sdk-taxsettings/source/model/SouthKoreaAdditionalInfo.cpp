/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/SouthKoreaAdditionalInfo.h>
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

SouthKoreaAdditionalInfo::SouthKoreaAdditionalInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

SouthKoreaAdditionalInfo& SouthKoreaAdditionalInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("businessRepresentativeName"))
  {
    m_businessRepresentativeName = jsonValue.GetString("businessRepresentativeName");
    m_businessRepresentativeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("itemOfBusiness"))
  {
    m_itemOfBusiness = jsonValue.GetString("itemOfBusiness");
    m_itemOfBusinessHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lineOfBusiness"))
  {
    m_lineOfBusiness = jsonValue.GetString("lineOfBusiness");
    m_lineOfBusinessHasBeenSet = true;
  }
  return *this;
}

JsonValue SouthKoreaAdditionalInfo::Jsonize() const
{
  JsonValue payload;

  if(m_businessRepresentativeNameHasBeenSet)
  {
   payload.WithString("businessRepresentativeName", m_businessRepresentativeName);

  }

  if(m_itemOfBusinessHasBeenSet)
  {
   payload.WithString("itemOfBusiness", m_itemOfBusiness);

  }

  if(m_lineOfBusinessHasBeenSet)
  {
   payload.WithString("lineOfBusiness", m_lineOfBusiness);

  }

  return payload;
}

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
