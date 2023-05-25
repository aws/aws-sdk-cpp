/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/Extraction.h>
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

Extraction::Extraction() : 
    m_lendingDocumentHasBeenSet(false),
    m_expenseDocumentHasBeenSet(false),
    m_identityDocumentHasBeenSet(false)
{
}

Extraction::Extraction(JsonView jsonValue) : 
    m_lendingDocumentHasBeenSet(false),
    m_expenseDocumentHasBeenSet(false),
    m_identityDocumentHasBeenSet(false)
{
  *this = jsonValue;
}

Extraction& Extraction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LendingDocument"))
  {
    m_lendingDocument = jsonValue.GetObject("LendingDocument");

    m_lendingDocumentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpenseDocument"))
  {
    m_expenseDocument = jsonValue.GetObject("ExpenseDocument");

    m_expenseDocumentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentityDocument"))
  {
    m_identityDocument = jsonValue.GetObject("IdentityDocument");

    m_identityDocumentHasBeenSet = true;
  }

  return *this;
}

JsonValue Extraction::Jsonize() const
{
  JsonValue payload;

  if(m_lendingDocumentHasBeenSet)
  {
   payload.WithObject("LendingDocument", m_lendingDocument.Jsonize());

  }

  if(m_expenseDocumentHasBeenSet)
  {
   payload.WithObject("ExpenseDocument", m_expenseDocument.Jsonize());

  }

  if(m_identityDocumentHasBeenSet)
  {
   payload.WithObject("IdentityDocument", m_identityDocument.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
