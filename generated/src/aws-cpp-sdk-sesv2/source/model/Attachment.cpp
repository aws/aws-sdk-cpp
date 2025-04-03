/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/Attachment.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

Attachment::Attachment(JsonView jsonValue)
{
  *this = jsonValue;
}

Attachment& Attachment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RawContent"))
  {
    m_rawContent = HashingUtils::Base64Decode(jsonValue.GetString("RawContent"));
    m_rawContentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ContentDisposition"))
  {
    m_contentDisposition = AttachmentContentDispositionMapper::GetAttachmentContentDispositionForName(jsonValue.GetString("ContentDisposition"));
    m_contentDispositionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FileName"))
  {
    m_fileName = jsonValue.GetString("FileName");
    m_fileNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ContentDescription"))
  {
    m_contentDescription = jsonValue.GetString("ContentDescription");
    m_contentDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ContentId"))
  {
    m_contentId = jsonValue.GetString("ContentId");
    m_contentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ContentTransferEncoding"))
  {
    m_contentTransferEncoding = AttachmentContentTransferEncodingMapper::GetAttachmentContentTransferEncodingForName(jsonValue.GetString("ContentTransferEncoding"));
    m_contentTransferEncodingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ContentType"))
  {
    m_contentType = jsonValue.GetString("ContentType");
    m_contentTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue Attachment::Jsonize() const
{
  JsonValue payload;

  if(m_rawContentHasBeenSet)
  {
   payload.WithString("RawContent", HashingUtils::Base64Encode(m_rawContent));
  }

  if(m_contentDispositionHasBeenSet)
  {
   payload.WithString("ContentDisposition", AttachmentContentDispositionMapper::GetNameForAttachmentContentDisposition(m_contentDisposition));
  }

  if(m_fileNameHasBeenSet)
  {
   payload.WithString("FileName", m_fileName);

  }

  if(m_contentDescriptionHasBeenSet)
  {
   payload.WithString("ContentDescription", m_contentDescription);

  }

  if(m_contentIdHasBeenSet)
  {
   payload.WithString("ContentId", m_contentId);

  }

  if(m_contentTransferEncodingHasBeenSet)
  {
   payload.WithString("ContentTransferEncoding", AttachmentContentTransferEncodingMapper::GetNameForAttachmentContentTransferEncoding(m_contentTransferEncoding));
  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("ContentType", m_contentType);

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
