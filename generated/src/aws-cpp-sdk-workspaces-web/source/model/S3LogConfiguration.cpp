/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/S3LogConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

S3LogConfiguration::S3LogConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

S3LogConfiguration& S3LogConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucket"))
  {
    m_bucket = jsonValue.GetString("bucket");
    m_bucketHasBeenSet = true;
  }
  if(jsonValue.ValueExists("keyPrefix"))
  {
    m_keyPrefix = jsonValue.GetString("keyPrefix");
    m_keyPrefixHasBeenSet = true;
  }
  if(jsonValue.ValueExists("bucketOwner"))
  {
    m_bucketOwner = jsonValue.GetString("bucketOwner");
    m_bucketOwnerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logFileFormat"))
  {
    m_logFileFormat = LogFileFormatMapper::GetLogFileFormatForName(jsonValue.GetString("logFileFormat"));
    m_logFileFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("folderStructure"))
  {
    m_folderStructure = FolderStructureMapper::GetFolderStructureForName(jsonValue.GetString("folderStructure"));
    m_folderStructureHasBeenSet = true;
  }
  return *this;
}

JsonValue S3LogConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_bucketHasBeenSet)
  {
   payload.WithString("bucket", m_bucket);

  }

  if(m_keyPrefixHasBeenSet)
  {
   payload.WithString("keyPrefix", m_keyPrefix);

  }

  if(m_bucketOwnerHasBeenSet)
  {
   payload.WithString("bucketOwner", m_bucketOwner);

  }

  if(m_logFileFormatHasBeenSet)
  {
   payload.WithString("logFileFormat", LogFileFormatMapper::GetNameForLogFileFormat(m_logFileFormat));
  }

  if(m_folderStructureHasBeenSet)
  {
   payload.WithString("folderStructure", FolderStructureMapper::GetNameForFolderStructure(m_folderStructure));
  }

  return payload;
}

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
