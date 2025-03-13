/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/VerificationDetails.h>
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

VerificationDetails::VerificationDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

VerificationDetails& VerificationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dateOfBirth"))
  {
    m_dateOfBirth = jsonValue.GetString("dateOfBirth");
    m_dateOfBirthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("taxRegistrationDocuments"))
  {
    Aws::Utils::Array<JsonView> taxRegistrationDocumentsJsonList = jsonValue.GetArray("taxRegistrationDocuments");
    for(unsigned taxRegistrationDocumentsIndex = 0; taxRegistrationDocumentsIndex < taxRegistrationDocumentsJsonList.GetLength(); ++taxRegistrationDocumentsIndex)
    {
      m_taxRegistrationDocuments.push_back(taxRegistrationDocumentsJsonList[taxRegistrationDocumentsIndex].AsObject());
    }
    m_taxRegistrationDocumentsHasBeenSet = true;
  }
  return *this;
}

JsonValue VerificationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_dateOfBirthHasBeenSet)
  {
   payload.WithString("dateOfBirth", m_dateOfBirth);

  }

  if(m_taxRegistrationDocumentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> taxRegistrationDocumentsJsonList(m_taxRegistrationDocuments.size());
   for(unsigned taxRegistrationDocumentsIndex = 0; taxRegistrationDocumentsIndex < taxRegistrationDocumentsJsonList.GetLength(); ++taxRegistrationDocumentsIndex)
   {
     taxRegistrationDocumentsJsonList[taxRegistrationDocumentsIndex].AsObject(m_taxRegistrationDocuments[taxRegistrationDocumentsIndex].Jsonize());
   }
   payload.WithArray("taxRegistrationDocuments", std::move(taxRegistrationDocumentsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
