/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/AccountDetails.h>
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

AccountDetails::AccountDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

AccountDetails& AccountDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accountMetaData"))
  {
    m_accountMetaData = jsonValue.GetObject("accountMetaData");
    m_accountMetaDataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("taxInheritanceDetails"))
  {
    m_taxInheritanceDetails = jsonValue.GetObject("taxInheritanceDetails");
    m_taxInheritanceDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("taxRegistration"))
  {
    m_taxRegistration = jsonValue.GetObject("taxRegistration");
    m_taxRegistrationHasBeenSet = true;
  }
  return *this;
}

JsonValue AccountDetails::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_accountMetaDataHasBeenSet)
  {
   payload.WithObject("accountMetaData", m_accountMetaData.Jsonize());

  }

  if(m_taxInheritanceDetailsHasBeenSet)
  {
   payload.WithObject("taxInheritanceDetails", m_taxInheritanceDetails.Jsonize());

  }

  if(m_taxRegistrationHasBeenSet)
  {
   payload.WithObject("taxRegistration", m_taxRegistration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
