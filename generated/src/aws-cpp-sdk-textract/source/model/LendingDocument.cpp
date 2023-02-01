/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/LendingDocument.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Textract
{
namespace Model
{

LendingDocument::LendingDocument() : 
    m_lendingFieldsHasBeenSet(false),
    m_signatureDetectionsHasBeenSet(false)
{
}

LendingDocument::LendingDocument(JsonView jsonValue) : 
    m_lendingFieldsHasBeenSet(false),
    m_signatureDetectionsHasBeenSet(false)
{
  *this = jsonValue;
}

LendingDocument& LendingDocument::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LendingFields"))
  {
    Aws::Utils::Array<JsonView> lendingFieldsJsonList = jsonValue.GetArray("LendingFields");
    for(unsigned lendingFieldsIndex = 0; lendingFieldsIndex < lendingFieldsJsonList.GetLength(); ++lendingFieldsIndex)
    {
      m_lendingFields.push_back(lendingFieldsJsonList[lendingFieldsIndex].AsObject());
    }
    m_lendingFieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SignatureDetections"))
  {
    Aws::Utils::Array<JsonView> signatureDetectionsJsonList = jsonValue.GetArray("SignatureDetections");
    for(unsigned signatureDetectionsIndex = 0; signatureDetectionsIndex < signatureDetectionsJsonList.GetLength(); ++signatureDetectionsIndex)
    {
      m_signatureDetections.push_back(signatureDetectionsJsonList[signatureDetectionsIndex].AsObject());
    }
    m_signatureDetectionsHasBeenSet = true;
  }

  return *this;
}

JsonValue LendingDocument::Jsonize() const
{
  JsonValue payload;

  if(m_lendingFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lendingFieldsJsonList(m_lendingFields.size());
   for(unsigned lendingFieldsIndex = 0; lendingFieldsIndex < lendingFieldsJsonList.GetLength(); ++lendingFieldsIndex)
   {
     lendingFieldsJsonList[lendingFieldsIndex].AsObject(m_lendingFields[lendingFieldsIndex].Jsonize());
   }
   payload.WithArray("LendingFields", std::move(lendingFieldsJsonList));

  }

  if(m_signatureDetectionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> signatureDetectionsJsonList(m_signatureDetections.size());
   for(unsigned signatureDetectionsIndex = 0; signatureDetectionsIndex < signatureDetectionsJsonList.GetLength(); ++signatureDetectionsIndex)
   {
     signatureDetectionsJsonList[signatureDetectionsIndex].AsObject(m_signatureDetections[signatureDetectionsIndex].Jsonize());
   }
   payload.WithArray("SignatureDetections", std::move(signatureDetectionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
