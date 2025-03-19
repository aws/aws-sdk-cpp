/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/ProbeInputFile.h>
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

ProbeInputFile::ProbeInputFile(JsonView jsonValue)
{
  *this = jsonValue;
}

ProbeInputFile& ProbeInputFile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fileUrl"))
  {
    m_fileUrl = jsonValue.GetString("fileUrl");
    m_fileUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue ProbeInputFile::Jsonize() const
{
  JsonValue payload;

  if(m_fileUrlHasBeenSet)
  {
   payload.WithString("fileUrl", m_fileUrl);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
