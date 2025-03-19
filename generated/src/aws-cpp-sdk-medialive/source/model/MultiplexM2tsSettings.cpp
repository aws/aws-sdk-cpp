/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MultiplexM2tsSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

MultiplexM2tsSettings::MultiplexM2tsSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

MultiplexM2tsSettings& MultiplexM2tsSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("absentInputAudioBehavior"))
  {
    m_absentInputAudioBehavior = M2tsAbsentInputAudioBehaviorMapper::GetM2tsAbsentInputAudioBehaviorForName(jsonValue.GetString("absentInputAudioBehavior"));
    m_absentInputAudioBehaviorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arib"))
  {
    m_arib = M2tsAribMapper::GetM2tsAribForName(jsonValue.GetString("arib"));
    m_aribHasBeenSet = true;
  }
  if(jsonValue.ValueExists("audioBufferModel"))
  {
    m_audioBufferModel = M2tsAudioBufferModelMapper::GetM2tsAudioBufferModelForName(jsonValue.GetString("audioBufferModel"));
    m_audioBufferModelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("audioFramesPerPes"))
  {
    m_audioFramesPerPes = jsonValue.GetInteger("audioFramesPerPes");
    m_audioFramesPerPesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("audioStreamType"))
  {
    m_audioStreamType = M2tsAudioStreamTypeMapper::GetM2tsAudioStreamTypeForName(jsonValue.GetString("audioStreamType"));
    m_audioStreamTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ccDescriptor"))
  {
    m_ccDescriptor = M2tsCcDescriptorMapper::GetM2tsCcDescriptorForName(jsonValue.GetString("ccDescriptor"));
    m_ccDescriptorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ebif"))
  {
    m_ebif = M2tsEbifControlMapper::GetM2tsEbifControlForName(jsonValue.GetString("ebif"));
    m_ebifHasBeenSet = true;
  }
  if(jsonValue.ValueExists("esRateInPes"))
  {
    m_esRateInPes = M2tsEsRateInPesMapper::GetM2tsEsRateInPesForName(jsonValue.GetString("esRateInPes"));
    m_esRateInPesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("klv"))
  {
    m_klv = M2tsKlvMapper::GetM2tsKlvForName(jsonValue.GetString("klv"));
    m_klvHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nielsenId3Behavior"))
  {
    m_nielsenId3Behavior = M2tsNielsenId3BehaviorMapper::GetM2tsNielsenId3BehaviorForName(jsonValue.GetString("nielsenId3Behavior"));
    m_nielsenId3BehaviorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pcrControl"))
  {
    m_pcrControl = M2tsPcrControlMapper::GetM2tsPcrControlForName(jsonValue.GetString("pcrControl"));
    m_pcrControlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pcrPeriod"))
  {
    m_pcrPeriod = jsonValue.GetInteger("pcrPeriod");
    m_pcrPeriodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scte35Control"))
  {
    m_scte35Control = M2tsScte35ControlMapper::GetM2tsScte35ControlForName(jsonValue.GetString("scte35Control"));
    m_scte35ControlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scte35PrerollPullupMilliseconds"))
  {
    m_scte35PrerollPullupMilliseconds = jsonValue.GetDouble("scte35PrerollPullupMilliseconds");
    m_scte35PrerollPullupMillisecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue MultiplexM2tsSettings::Jsonize() const
{
  JsonValue payload;

  if(m_absentInputAudioBehaviorHasBeenSet)
  {
   payload.WithString("absentInputAudioBehavior", M2tsAbsentInputAudioBehaviorMapper::GetNameForM2tsAbsentInputAudioBehavior(m_absentInputAudioBehavior));
  }

  if(m_aribHasBeenSet)
  {
   payload.WithString("arib", M2tsAribMapper::GetNameForM2tsArib(m_arib));
  }

  if(m_audioBufferModelHasBeenSet)
  {
   payload.WithString("audioBufferModel", M2tsAudioBufferModelMapper::GetNameForM2tsAudioBufferModel(m_audioBufferModel));
  }

  if(m_audioFramesPerPesHasBeenSet)
  {
   payload.WithInteger("audioFramesPerPes", m_audioFramesPerPes);

  }

  if(m_audioStreamTypeHasBeenSet)
  {
   payload.WithString("audioStreamType", M2tsAudioStreamTypeMapper::GetNameForM2tsAudioStreamType(m_audioStreamType));
  }

  if(m_ccDescriptorHasBeenSet)
  {
   payload.WithString("ccDescriptor", M2tsCcDescriptorMapper::GetNameForM2tsCcDescriptor(m_ccDescriptor));
  }

  if(m_ebifHasBeenSet)
  {
   payload.WithString("ebif", M2tsEbifControlMapper::GetNameForM2tsEbifControl(m_ebif));
  }

  if(m_esRateInPesHasBeenSet)
  {
   payload.WithString("esRateInPes", M2tsEsRateInPesMapper::GetNameForM2tsEsRateInPes(m_esRateInPes));
  }

  if(m_klvHasBeenSet)
  {
   payload.WithString("klv", M2tsKlvMapper::GetNameForM2tsKlv(m_klv));
  }

  if(m_nielsenId3BehaviorHasBeenSet)
  {
   payload.WithString("nielsenId3Behavior", M2tsNielsenId3BehaviorMapper::GetNameForM2tsNielsenId3Behavior(m_nielsenId3Behavior));
  }

  if(m_pcrControlHasBeenSet)
  {
   payload.WithString("pcrControl", M2tsPcrControlMapper::GetNameForM2tsPcrControl(m_pcrControl));
  }

  if(m_pcrPeriodHasBeenSet)
  {
   payload.WithInteger("pcrPeriod", m_pcrPeriod);

  }

  if(m_scte35ControlHasBeenSet)
  {
   payload.WithString("scte35Control", M2tsScte35ControlMapper::GetNameForM2tsScte35Control(m_scte35Control));
  }

  if(m_scte35PrerollPullupMillisecondsHasBeenSet)
  {
   payload.WithDouble("scte35PrerollPullupMilliseconds", m_scte35PrerollPullupMilliseconds);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
