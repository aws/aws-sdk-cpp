/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/FilePaths.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

FilePaths::FilePaths() : 
    m_filePathHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_hashHasBeenSet(false)
{
}

FilePaths::FilePaths(JsonView jsonValue) : 
    m_filePathHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_hashHasBeenSet(false)
{
  *this = jsonValue;
}

FilePaths& FilePaths::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FilePath"))
  {
    m_filePath = jsonValue.GetString("FilePath");

    m_filePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileName"))
  {
    m_fileName = jsonValue.GetString("FileName");

    m_fileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Hash"))
  {
    m_hash = jsonValue.GetString("Hash");

    m_hashHasBeenSet = true;
  }

  return *this;
}

JsonValue FilePaths::Jsonize() const
{
  JsonValue payload;

  if(m_filePathHasBeenSet)
  {
   payload.WithString("FilePath", m_filePath);

  }

  if(m_fileNameHasBeenSet)
  {
   payload.WithString("FileName", m_fileName);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_hashHasBeenSet)
  {
   payload.WithString("Hash", m_hash);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
