/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLJobChannel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

AutoMLJobChannel::AutoMLJobChannel() : 
    m_channelType(AutoMLChannelType::NOT_SET),
    m_channelTypeHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_compressionType(CompressionType::NOT_SET),
    m_compressionTypeHasBeenSet(false),
    m_dataSourceHasBeenSet(false)
{
}

AutoMLJobChannel::AutoMLJobChannel(JsonView jsonValue) : 
    m_channelType(AutoMLChannelType::NOT_SET),
    m_channelTypeHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_compressionType(CompressionType::NOT_SET),
    m_compressionTypeHasBeenSet(false),
    m_dataSourceHasBeenSet(false)
{
  *this = jsonValue;
}

AutoMLJobChannel& AutoMLJobChannel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ChannelType"))
  {
    m_channelType = AutoMLChannelTypeMapper::GetAutoMLChannelTypeForName(jsonValue.GetString("ChannelType"));

    m_channelTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentType"))
  {
    m_contentType = jsonValue.GetString("ContentType");

    m_contentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompressionType"))
  {
    m_compressionType = CompressionTypeMapper::GetCompressionTypeForName(jsonValue.GetString("CompressionType"));

    m_compressionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSource"))
  {
    m_dataSource = jsonValue.GetObject("DataSource");

    m_dataSourceHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoMLJobChannel::Jsonize() const
{
  JsonValue payload;

  if(m_channelTypeHasBeenSet)
  {
   payload.WithString("ChannelType", AutoMLChannelTypeMapper::GetNameForAutoMLChannelType(m_channelType));
  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("ContentType", m_contentType);

  }

  if(m_compressionTypeHasBeenSet)
  {
   payload.WithString("CompressionType", CompressionTypeMapper::GetNameForCompressionType(m_compressionType));
  }

  if(m_dataSourceHasBeenSet)
  {
   payload.WithObject("DataSource", m_dataSource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
