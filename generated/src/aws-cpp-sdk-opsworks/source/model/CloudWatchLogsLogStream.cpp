﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/CloudWatchLogsLogStream.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

CloudWatchLogsLogStream::CloudWatchLogsLogStream(JsonView jsonValue)
{
  *this = jsonValue;
}

CloudWatchLogsLogStream& CloudWatchLogsLogStream::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LogGroupName"))
  {
    m_logGroupName = jsonValue.GetString("LogGroupName");
    m_logGroupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DatetimeFormat"))
  {
    m_datetimeFormat = jsonValue.GetString("DatetimeFormat");
    m_datetimeFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimeZone"))
  {
    m_timeZone = CloudWatchLogsTimeZoneMapper::GetCloudWatchLogsTimeZoneForName(jsonValue.GetString("TimeZone"));
    m_timeZoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("File"))
  {
    m_file = jsonValue.GetString("File");
    m_fileHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FileFingerprintLines"))
  {
    m_fileFingerprintLines = jsonValue.GetString("FileFingerprintLines");
    m_fileFingerprintLinesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MultiLineStartPattern"))
  {
    m_multiLineStartPattern = jsonValue.GetString("MultiLineStartPattern");
    m_multiLineStartPatternHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InitialPosition"))
  {
    m_initialPosition = CloudWatchLogsInitialPositionMapper::GetCloudWatchLogsInitialPositionForName(jsonValue.GetString("InitialPosition"));
    m_initialPositionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Encoding"))
  {
    m_encoding = CloudWatchLogsEncodingMapper::GetCloudWatchLogsEncodingForName(jsonValue.GetString("Encoding"));
    m_encodingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BufferDuration"))
  {
    m_bufferDuration = jsonValue.GetInteger("BufferDuration");
    m_bufferDurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BatchCount"))
  {
    m_batchCount = jsonValue.GetInteger("BatchCount");
    m_batchCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BatchSize"))
  {
    m_batchSize = jsonValue.GetInteger("BatchSize");
    m_batchSizeHasBeenSet = true;
  }
  return *this;
}

JsonValue CloudWatchLogsLogStream::Jsonize() const
{
  JsonValue payload;

  if(m_logGroupNameHasBeenSet)
  {
   payload.WithString("LogGroupName", m_logGroupName);

  }

  if(m_datetimeFormatHasBeenSet)
  {
   payload.WithString("DatetimeFormat", m_datetimeFormat);

  }

  if(m_timeZoneHasBeenSet)
  {
   payload.WithString("TimeZone", CloudWatchLogsTimeZoneMapper::GetNameForCloudWatchLogsTimeZone(m_timeZone));
  }

  if(m_fileHasBeenSet)
  {
   payload.WithString("File", m_file);

  }

  if(m_fileFingerprintLinesHasBeenSet)
  {
   payload.WithString("FileFingerprintLines", m_fileFingerprintLines);

  }

  if(m_multiLineStartPatternHasBeenSet)
  {
   payload.WithString("MultiLineStartPattern", m_multiLineStartPattern);

  }

  if(m_initialPositionHasBeenSet)
  {
   payload.WithString("InitialPosition", CloudWatchLogsInitialPositionMapper::GetNameForCloudWatchLogsInitialPosition(m_initialPosition));
  }

  if(m_encodingHasBeenSet)
  {
   payload.WithString("Encoding", CloudWatchLogsEncodingMapper::GetNameForCloudWatchLogsEncoding(m_encoding));
  }

  if(m_bufferDurationHasBeenSet)
  {
   payload.WithInteger("BufferDuration", m_bufferDuration);

  }

  if(m_batchCountHasBeenSet)
  {
   payload.WithInteger("BatchCount", m_batchCount);

  }

  if(m_batchSizeHasBeenSet)
  {
   payload.WithInteger("BatchSize", m_batchSize);

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
