/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SnapshotJobS3Result.h>
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

SnapshotJobS3Result::SnapshotJobS3Result() : 
    m_s3DestinationConfigurationHasBeenSet(false),
    m_s3UriHasBeenSet(false),
    m_errorInfoHasBeenSet(false)
{
}

SnapshotJobS3Result::SnapshotJobS3Result(JsonView jsonValue) : 
    m_s3DestinationConfigurationHasBeenSet(false),
    m_s3UriHasBeenSet(false),
    m_errorInfoHasBeenSet(false)
{
  *this = jsonValue;
}

SnapshotJobS3Result& SnapshotJobS3Result::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3DestinationConfiguration"))
  {
    m_s3DestinationConfiguration = jsonValue.GetObject("S3DestinationConfiguration");

    m_s3DestinationConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Uri"))
  {
    m_s3Uri = jsonValue.GetString("S3Uri");

    m_s3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorInfo"))
  {
    Aws::Utils::Array<JsonView> errorInfoJsonList = jsonValue.GetArray("ErrorInfo");
    for(unsigned errorInfoIndex = 0; errorInfoIndex < errorInfoJsonList.GetLength(); ++errorInfoIndex)
    {
      m_errorInfo.push_back(errorInfoJsonList[errorInfoIndex].AsObject());
    }
    m_errorInfoHasBeenSet = true;
  }

  return *this;
}

JsonValue SnapshotJobS3Result::Jsonize() const
{
  JsonValue payload;

  if(m_s3DestinationConfigurationHasBeenSet)
  {
   payload.WithObject("S3DestinationConfiguration", m_s3DestinationConfiguration.Jsonize());

  }

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("S3Uri", m_s3Uri);

  }

  if(m_errorInfoHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> errorInfoJsonList(m_errorInfo.size());
   for(unsigned errorInfoIndex = 0; errorInfoIndex < errorInfoJsonList.GetLength(); ++errorInfoIndex)
   {
     errorInfoJsonList[errorInfoIndex].AsObject(m_errorInfo[errorInfoIndex].Jsonize());
   }
   payload.WithArray("ErrorInfo", std::move(errorInfoJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
