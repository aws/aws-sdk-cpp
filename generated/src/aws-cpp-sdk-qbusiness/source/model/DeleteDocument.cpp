/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/DeleteDocument.h>
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

DeleteDocument::DeleteDocument() : 
    m_documentIdHasBeenSet(false)
{
}

DeleteDocument::DeleteDocument(JsonView jsonValue) : 
    m_documentIdHasBeenSet(false)
{
  *this = jsonValue;
}

DeleteDocument& DeleteDocument::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("documentId"))
  {
    m_documentId = jsonValue.GetString("documentId");

    m_documentIdHasBeenSet = true;
  }

  return *this;
}

JsonValue DeleteDocument::Jsonize() const
{
  JsonValue payload;

  if(m_documentIdHasBeenSet)
  {
   payload.WithString("documentId", m_documentId);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
