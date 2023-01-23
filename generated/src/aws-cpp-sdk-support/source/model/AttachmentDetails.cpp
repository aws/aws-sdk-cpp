/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/model/AttachmentDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Support
{
namespace Model
{

AttachmentDetails::AttachmentDetails() : 
    m_attachmentIdHasBeenSet(false),
    m_fileNameHasBeenSet(false)
{
}

AttachmentDetails::AttachmentDetails(JsonView jsonValue) : 
    m_attachmentIdHasBeenSet(false),
    m_fileNameHasBeenSet(false)
{
  *this = jsonValue;
}

AttachmentDetails& AttachmentDetails::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue AttachmentDetails::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace Support
} // namespace Aws
