/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/Attachment.h>
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

Attachment::Attachment(JsonView jsonValue)
{
  *this = jsonValue;
}

Attachment& Attachment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attachmentId"))
  {
    m_attachmentId = jsonValue.GetString("attachmentId");
    m_attachmentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("conversationId"))
  {
    m_conversationId = jsonValue.GetString("conversationId");
    m_conversationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("copyFrom"))
  {
    m_copyFrom = jsonValue.GetObject("copyFrom");
    m_copyFromHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fileType"))
  {
    m_fileType = jsonValue.GetString("fileType");
    m_fileTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fileSize"))
  {
    m_fileSize = jsonValue.GetInteger("fileSize");
    m_fileSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("md5chksum"))
  {
    m_md5chksum = jsonValue.GetString("md5chksum");
    m_md5chksumHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = AttachmentStatusMapper::GetAttachmentStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetObject("error");
    m_errorHasBeenSet = true;
  }
  return *this;
}

JsonValue Attachment::Jsonize() const
{
  JsonValue payload;

  if(m_attachmentIdHasBeenSet)
  {
   payload.WithString("attachmentId", m_attachmentId);

  }

  if(m_conversationIdHasBeenSet)
  {
   payload.WithString("conversationId", m_conversationId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_copyFromHasBeenSet)
  {
   payload.WithObject("copyFrom", m_copyFrom.Jsonize());

  }

  if(m_fileTypeHasBeenSet)
  {
   payload.WithString("fileType", m_fileType);

  }

  if(m_fileSizeHasBeenSet)
  {
   payload.WithInteger("fileSize", m_fileSize);

  }

  if(m_md5chksumHasBeenSet)
  {
   payload.WithString("md5chksum", m_md5chksum);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", AttachmentStatusMapper::GetNameForAttachmentStatus(m_status));
  }

  if(m_errorHasBeenSet)
  {
   payload.WithObject("error", m_error.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
