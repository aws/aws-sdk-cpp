/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/CaseAttachmentAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityIR
{
namespace Model
{

CaseAttachmentAttributes::CaseAttachmentAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

CaseAttachmentAttributes& CaseAttachmentAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attachmentId"))
  {
    m_attachmentId = jsonValue.GetString("attachmentId");
    m_attachmentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fileName"))
  {
    m_fileName = jsonValue.GetString("fileName");
    m_fileNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("attachmentStatus"))
  {
    m_attachmentStatus = CaseAttachmentStatusMapper::GetCaseAttachmentStatusForName(jsonValue.GetString("attachmentStatus"));
    m_attachmentStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creator"))
  {
    m_creator = jsonValue.GetString("creator");
    m_creatorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetDouble("createdDate");
    m_createdDateHasBeenSet = true;
  }
  return *this;
}

JsonValue CaseAttachmentAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_attachmentIdHasBeenSet)
  {
   payload.WithString("attachmentId", m_attachmentId);

  }

  if(m_fileNameHasBeenSet)
  {
   payload.WithString("fileName", m_fileName);

  }

  if(m_attachmentStatusHasBeenSet)
  {
   payload.WithString("attachmentStatus", CaseAttachmentStatusMapper::GetNameForCaseAttachmentStatus(m_attachmentStatus));
  }

  if(m_creatorHasBeenSet)
  {
   payload.WithString("creator", m_creator);

  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithDouble("createdDate", m_createdDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
