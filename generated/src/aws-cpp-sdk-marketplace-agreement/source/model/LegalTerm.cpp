/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-agreement/model/LegalTerm.h>
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

LegalTerm::LegalTerm() : 
    m_documentsHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

LegalTerm::LegalTerm(JsonView jsonValue) : 
    m_documentsHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

LegalTerm& LegalTerm::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("documents"))
  {
    Aws::Utils::Array<JsonView> documentsJsonList = jsonValue.GetArray("documents");
    for(unsigned documentsIndex = 0; documentsIndex < documentsJsonList.GetLength(); ++documentsIndex)
    {
      m_documents.push_back(documentsJsonList[documentsIndex].AsObject());
    }
    m_documentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue LegalTerm::Jsonize() const
{
  JsonValue payload;

  if(m_documentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> documentsJsonList(m_documents.size());
   for(unsigned documentsIndex = 0; documentsIndex < documentsJsonList.GetLength(); ++documentsIndex)
   {
     documentsJsonList[documentsIndex].AsObject(m_documents[documentsIndex].Jsonize());
   }
   payload.WithArray("documents", std::move(documentsJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace AgreementService
} // namespace Aws
