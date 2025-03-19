/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/AttachmentInputEvent.h>
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

AttachmentInputEvent::AttachmentInputEvent(JsonView jsonValue)
{
  *this = jsonValue;
}

AttachmentInputEvent& AttachmentInputEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attachment"))
  {
    m_attachment = jsonValue.GetObject("attachment");
    m_attachmentHasBeenSet = true;
  }
  return *this;
}

JsonValue AttachmentInputEvent::Jsonize() const
{
  JsonValue payload;

  if(m_attachmentHasBeenSet)
  {
   payload.WithObject("attachment", m_attachment.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
