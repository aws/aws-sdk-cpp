/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/MessageTemplateAttachment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

MessageTemplateAttachment::MessageTemplateAttachment(JsonView jsonValue)
{
  *this = jsonValue;
}

MessageTemplateAttachment& MessageTemplateAttachment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("contentDisposition"))
  {
    m_contentDisposition = ContentDispositionMapper::GetContentDispositionForName(jsonValue.GetString("contentDisposition"));
    m_contentDispositionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("uploadedTime"))
  {
    m_uploadedTime = jsonValue.GetString("uploadedTime");
    m_uploadedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");
    m_urlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("urlExpiry"))
  {
    m_urlExpiry = jsonValue.GetString("urlExpiry");
    m_urlExpiryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("attachmentId"))
  {
    m_attachmentId = jsonValue.GetString("attachmentId");
    m_attachmentIdHasBeenSet = true;
  }
  return *this;
}

JsonValue MessageTemplateAttachment::Jsonize() const
{
  JsonValue payload;

  if(m_contentDispositionHasBeenSet)
  {
   payload.WithString("contentDisposition", ContentDispositionMapper::GetNameForContentDisposition(m_contentDisposition));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_uploadedTimeHasBeenSet)
  {
   payload.WithString("uploadedTime", m_uploadedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  if(m_urlExpiryHasBeenSet)
  {
   payload.WithString("urlExpiry", m_urlExpiry.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_attachmentIdHasBeenSet)
  {
   payload.WithString("attachmentId", m_attachmentId);

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
