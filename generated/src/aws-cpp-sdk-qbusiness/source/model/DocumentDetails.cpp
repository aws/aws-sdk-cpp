/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/DocumentDetails.h>
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

DocumentDetails::DocumentDetails() : 
    m_createdAtHasBeenSet(false),
    m_documentIdHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_status(DocumentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

DocumentDetails::DocumentDetails(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_documentIdHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_status(DocumentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentDetails& DocumentDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("documentId"))
  {
    m_documentId = jsonValue.GetString("documentId");

    m_documentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetObject("error");

    m_errorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = DocumentStatusMapper::GetDocumentStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentDetails::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_documentIdHasBeenSet)
  {
   payload.WithString("documentId", m_documentId);

  }

  if(m_errorHasBeenSet)
  {
   payload.WithObject("error", m_error.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", DocumentStatusMapper::GetNameForDocumentStatus(m_status));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
