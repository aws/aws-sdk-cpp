/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/ImportJobRequest.h>
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

ImportJobRequest::ImportJobRequest() : 
    m_defineSegment(false),
    m_defineSegmentHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_format(Format::NOT_SET),
    m_formatHasBeenSet(false),
    m_registerEndpoints(false),
    m_registerEndpointsHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_s3UrlHasBeenSet(false),
    m_segmentIdHasBeenSet(false),
    m_segmentNameHasBeenSet(false)
{
}

ImportJobRequest::ImportJobRequest(JsonView jsonValue) : 
    m_defineSegment(false),
    m_defineSegmentHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_format(Format::NOT_SET),
    m_formatHasBeenSet(false),
    m_registerEndpoints(false),
    m_registerEndpointsHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_s3UrlHasBeenSet(false),
    m_segmentIdHasBeenSet(false),
    m_segmentNameHasBeenSet(false)
{
  *this = jsonValue;
}

ImportJobRequest& ImportJobRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DefineSegment"))
  {
    m_defineSegment = jsonValue.GetBool("DefineSegment");

    m_defineSegmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExternalId"))
  {
    m_externalId = jsonValue.GetString("ExternalId");

    m_externalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Format"))
  {
    m_format = FormatMapper::GetFormatForName(jsonValue.GetString("Format"));

    m_formatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegisterEndpoints"))
  {
    m_registerEndpoints = jsonValue.GetBool("RegisterEndpoints");

    m_registerEndpointsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Url"))
  {
    m_s3Url = jsonValue.GetString("S3Url");

    m_s3UrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SegmentId"))
  {
    m_segmentId = jsonValue.GetString("SegmentId");

    m_segmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SegmentName"))
  {
    m_segmentName = jsonValue.GetString("SegmentName");

    m_segmentNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportJobRequest::Jsonize() const
{
  JsonValue payload;

  if(m_defineSegmentHasBeenSet)
  {
   payload.WithBool("DefineSegment", m_defineSegment);

  }

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("ExternalId", m_externalId);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("Format", FormatMapper::GetNameForFormat(m_format));
  }

  if(m_registerEndpointsHasBeenSet)
  {
   payload.WithBool("RegisterEndpoints", m_registerEndpoints);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_s3UrlHasBeenSet)
  {
   payload.WithString("S3Url", m_s3Url);

  }

  if(m_segmentIdHasBeenSet)
  {
   payload.WithString("SegmentId", m_segmentId);

  }

  if(m_segmentNameHasBeenSet)
  {
   payload.WithString("SegmentName", m_segmentName);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
