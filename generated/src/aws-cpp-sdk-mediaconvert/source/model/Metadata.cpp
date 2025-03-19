/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Metadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

Metadata::Metadata(JsonView jsonValue)
{
  *this = jsonValue;
}

Metadata& Metadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eTag"))
  {
    m_eTag = jsonValue.GetString("eTag");
    m_eTagHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fileSize"))
  {
    m_fileSize = jsonValue.GetInt64("fileSize");
    m_fileSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastModified"))
  {
    m_lastModified = jsonValue.GetDouble("lastModified");
    m_lastModifiedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mimeType"))
  {
    m_mimeType = jsonValue.GetString("mimeType");
    m_mimeTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue Metadata::Jsonize() const
{
  JsonValue payload;

  if(m_eTagHasBeenSet)
  {
   payload.WithString("eTag", m_eTag);

  }

  if(m_fileSizeHasBeenSet)
  {
   payload.WithInt64("fileSize", m_fileSize);

  }

  if(m_lastModifiedHasBeenSet)
  {
   payload.WithDouble("lastModified", m_lastModified.SecondsWithMSPrecision());
  }

  if(m_mimeTypeHasBeenSet)
  {
   payload.WithString("mimeType", m_mimeType);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
