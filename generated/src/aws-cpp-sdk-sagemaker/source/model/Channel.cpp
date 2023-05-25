/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/Channel.h>
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

Channel::Channel() : 
    m_channelNameHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_compressionType(CompressionType::NOT_SET),
    m_compressionTypeHasBeenSet(false),
    m_recordWrapperType(RecordWrapper::NOT_SET),
    m_recordWrapperTypeHasBeenSet(false),
    m_inputMode(TrainingInputMode::NOT_SET),
    m_inputModeHasBeenSet(false),
    m_shuffleConfigHasBeenSet(false)
{
}

Channel::Channel(JsonView jsonValue) : 
    m_channelNameHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_compressionType(CompressionType::NOT_SET),
    m_compressionTypeHasBeenSet(false),
    m_recordWrapperType(RecordWrapper::NOT_SET),
    m_recordWrapperTypeHasBeenSet(false),
    m_inputMode(TrainingInputMode::NOT_SET),
    m_inputModeHasBeenSet(false),
    m_shuffleConfigHasBeenSet(false)
{
  *this = jsonValue;
}

Channel& Channel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ChannelName"))
  {
    m_channelName = jsonValue.GetString("ChannelName");

    m_channelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSource"))
  {
    m_dataSource = jsonValue.GetObject("DataSource");

    m_dataSourceHasBeenSet = true;
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

  if(jsonValue.ValueExists("RecordWrapperType"))
  {
    m_recordWrapperType = RecordWrapperMapper::GetRecordWrapperForName(jsonValue.GetString("RecordWrapperType"));

    m_recordWrapperTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputMode"))
  {
    m_inputMode = TrainingInputModeMapper::GetTrainingInputModeForName(jsonValue.GetString("InputMode"));

    m_inputModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShuffleConfig"))
  {
    m_shuffleConfig = jsonValue.GetObject("ShuffleConfig");

    m_shuffleConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue Channel::Jsonize() const
{
  JsonValue payload;

  if(m_channelNameHasBeenSet)
  {
   payload.WithString("ChannelName", m_channelName);

  }

  if(m_dataSourceHasBeenSet)
  {
   payload.WithObject("DataSource", m_dataSource.Jsonize());

  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("ContentType", m_contentType);

  }

  if(m_compressionTypeHasBeenSet)
  {
   payload.WithString("CompressionType", CompressionTypeMapper::GetNameForCompressionType(m_compressionType));
  }

  if(m_recordWrapperTypeHasBeenSet)
  {
   payload.WithString("RecordWrapperType", RecordWrapperMapper::GetNameForRecordWrapper(m_recordWrapperType));
  }

  if(m_inputModeHasBeenSet)
  {
   payload.WithString("InputMode", TrainingInputModeMapper::GetNameForTrainingInputMode(m_inputMode));
  }

  if(m_shuffleConfigHasBeenSet)
  {
   payload.WithObject("ShuffleConfig", m_shuffleConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
