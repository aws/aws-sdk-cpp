/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/ExportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

ExportJobRequest::ExportJobRequest() : 
    m_roleArnHasBeenSet(false),
    m_s3UrlPrefixHasBeenSet(false),
    m_segmentIdHasBeenSet(false),
    m_segmentVersion(0),
    m_segmentVersionHasBeenSet(false)
{
}

ExportJobRequest::ExportJobRequest(JsonView jsonValue) : 
    m_roleArnHasBeenSet(false),
    m_s3UrlPrefixHasBeenSet(false),
    m_segmentIdHasBeenSet(false),
    m_segmentVersion(0),
    m_segmentVersionHasBeenSet(false)
{
  *this = jsonValue;
}

ExportJobRequest& ExportJobRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3UrlPrefix"))
  {
    m_s3UrlPrefix = jsonValue.GetString("S3UrlPrefix");

    m_s3UrlPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SegmentId"))
  {
    m_segmentId = jsonValue.GetString("SegmentId");

    m_segmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SegmentVersion"))
  {
    m_segmentVersion = jsonValue.GetInteger("SegmentVersion");

    m_segmentVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportJobRequest::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_s3UrlPrefixHasBeenSet)
  {
   payload.WithString("S3UrlPrefix", m_s3UrlPrefix);

  }

  if(m_segmentIdHasBeenSet)
  {
   payload.WithString("SegmentId", m_segmentId);

  }

  if(m_segmentVersionHasBeenSet)
  {
   payload.WithInteger("SegmentVersion", m_segmentVersion);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
