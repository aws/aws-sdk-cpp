/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SnapshotJobResultFileGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

SnapshotJobResultFileGroup::SnapshotJobResultFileGroup() : 
    m_filesHasBeenSet(false),
    m_s3ResultsHasBeenSet(false)
{
}

SnapshotJobResultFileGroup::SnapshotJobResultFileGroup(JsonView jsonValue) : 
    m_filesHasBeenSet(false),
    m_s3ResultsHasBeenSet(false)
{
  *this = jsonValue;
}

SnapshotJobResultFileGroup& SnapshotJobResultFileGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Files"))
  {
    Aws::Utils::Array<JsonView> filesJsonList = jsonValue.GetArray("Files");
    for(unsigned filesIndex = 0; filesIndex < filesJsonList.GetLength(); ++filesIndex)
    {
      m_files.push_back(filesJsonList[filesIndex].AsObject());
    }
    m_filesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Results"))
  {
    Aws::Utils::Array<JsonView> s3ResultsJsonList = jsonValue.GetArray("S3Results");
    for(unsigned s3ResultsIndex = 0; s3ResultsIndex < s3ResultsJsonList.GetLength(); ++s3ResultsIndex)
    {
      m_s3Results.push_back(s3ResultsJsonList[s3ResultsIndex].AsObject());
    }
    m_s3ResultsHasBeenSet = true;
  }

  return *this;
}

JsonValue SnapshotJobResultFileGroup::Jsonize() const
{
  JsonValue payload;

  if(m_filesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filesJsonList(m_files.size());
   for(unsigned filesIndex = 0; filesIndex < filesJsonList.GetLength(); ++filesIndex)
   {
     filesJsonList[filesIndex].AsObject(m_files[filesIndex].Jsonize());
   }
   payload.WithArray("Files", std::move(filesJsonList));

  }

  if(m_s3ResultsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> s3ResultsJsonList(m_s3Results.size());
   for(unsigned s3ResultsIndex = 0; s3ResultsIndex < s3ResultsJsonList.GetLength(); ++s3ResultsIndex)
   {
     s3ResultsJsonList[s3ResultsIndex].AsObject(m_s3Results[s3ResultsIndex].Jsonize());
   }
   payload.WithArray("S3Results", std::move(s3ResultsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
