/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLChannel.h>
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

AutoMLChannel::AutoMLChannel() : 
    m_dataSourceHasBeenSet(false),
    m_compressionType(CompressionType::NOT_SET),
    m_compressionTypeHasBeenSet(false),
    m_targetAttributeNameHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_channelType(AutoMLChannelType::NOT_SET),
    m_channelTypeHasBeenSet(false),
    m_sampleWeightAttributeNameHasBeenSet(false)
{
}

AutoMLChannel::AutoMLChannel(JsonView jsonValue) : 
    m_dataSourceHasBeenSet(false),
    m_compressionType(CompressionType::NOT_SET),
    m_compressionTypeHasBeenSet(false),
    m_targetAttributeNameHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_channelType(AutoMLChannelType::NOT_SET),
    m_channelTypeHasBeenSet(false),
    m_sampleWeightAttributeNameHasBeenSet(false)
{
  *this = jsonValue;
}

AutoMLChannel& AutoMLChannel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSource"))
  {
    m_dataSource = jsonValue.GetObject("DataSource");

    m_dataSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompressionType"))
  {
    m_compressionType = CompressionTypeMapper::GetCompressionTypeForName(jsonValue.GetString("CompressionType"));

    m_compressionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetAttributeName"))
  {
    m_targetAttributeName = jsonValue.GetString("TargetAttributeName");

    m_targetAttributeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentType"))
  {
    m_contentType = jsonValue.GetString("ContentType");

    m_contentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChannelType"))
  {
    m_channelType = AutoMLChannelTypeMapper::GetAutoMLChannelTypeForName(jsonValue.GetString("ChannelType"));

    m_channelTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SampleWeightAttributeName"))
  {
    m_sampleWeightAttributeName = jsonValue.GetString("SampleWeightAttributeName");

    m_sampleWeightAttributeNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoMLChannel::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceHasBeenSet)
  {
   payload.WithObject("DataSource", m_dataSource.Jsonize());

  }

  if(m_compressionTypeHasBeenSet)
  {
   payload.WithString("CompressionType", CompressionTypeMapper::GetNameForCompressionType(m_compressionType));
  }

  if(m_targetAttributeNameHasBeenSet)
  {
   payload.WithString("TargetAttributeName", m_targetAttributeName);

  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("ContentType", m_contentType);

  }

  if(m_channelTypeHasBeenSet)
  {
   payload.WithString("ChannelType", AutoMLChannelTypeMapper::GetNameForAutoMLChannelType(m_channelType));
  }

  if(m_sampleWeightAttributeNameHasBeenSet)
  {
   payload.WithString("SampleWeightAttributeName", m_sampleWeightAttributeName);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
