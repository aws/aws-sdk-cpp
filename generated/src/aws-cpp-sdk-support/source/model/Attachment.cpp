/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/model/Attachment.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Support
{
namespace Model
{

Attachment::Attachment() : 
    m_fileNameHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

Attachment::Attachment(JsonView jsonValue) : 
    m_fileNameHasBeenSet(false),
    m_dataHasBeenSet(false)
{
  *this = jsonValue;
}

Attachment& Attachment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fileName"))
  {
    m_fileName = jsonValue.GetString("fileName");

    m_fileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("data"))
  {
    m_data = HashingUtils::Base64Decode(jsonValue.GetString("data"));
    m_dataHasBeenSet = true;
  }

  return *this;
}

JsonValue Attachment::Jsonize() const
{
  JsonValue payload;

  if(m_fileNameHasBeenSet)
  {
   payload.WithString("fileName", m_fileName);

  }

  if(m_dataHasBeenSet)
  {
   payload.WithString("data", HashingUtils::Base64Encode(m_data));
  }

  return payload;
}

} // namespace Model
} // namespace Support
} // namespace Aws
