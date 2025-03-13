/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MultiplexProgramPacketIdentifiersMap.h>
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

MultiplexProgramPacketIdentifiersMap::MultiplexProgramPacketIdentifiersMap(JsonView jsonValue)
{
  *this = jsonValue;
}

MultiplexProgramPacketIdentifiersMap& MultiplexProgramPacketIdentifiersMap::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audioPids"))
  {
    Aws::Utils::Array<JsonView> audioPidsJsonList = jsonValue.GetArray("audioPids");
    for(unsigned audioPidsIndex = 0; audioPidsIndex < audioPidsJsonList.GetLength(); ++audioPidsIndex)
    {
      m_audioPids.push_back(audioPidsJsonList[audioPidsIndex].AsInteger());
    }
    m_audioPidsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dvbSubPids"))
  {
    Aws::Utils::Array<JsonView> dvbSubPidsJsonList = jsonValue.GetArray("dvbSubPids");
    for(unsigned dvbSubPidsIndex = 0; dvbSubPidsIndex < dvbSubPidsJsonList.GetLength(); ++dvbSubPidsIndex)
    {
      m_dvbSubPids.push_back(dvbSubPidsJsonList[dvbSubPidsIndex].AsInteger());
    }
    m_dvbSubPidsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dvbTeletextPid"))
  {
    m_dvbTeletextPid = jsonValue.GetInteger("dvbTeletextPid");
    m_dvbTeletextPidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("etvPlatformPid"))
  {
    m_etvPlatformPid = jsonValue.GetInteger("etvPlatformPid");
    m_etvPlatformPidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("etvSignalPid"))
  {
    m_etvSignalPid = jsonValue.GetInteger("etvSignalPid");
    m_etvSignalPidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("klvDataPids"))
  {
    Aws::Utils::Array<JsonView> klvDataPidsJsonList = jsonValue.GetArray("klvDataPids");
    for(unsigned klvDataPidsIndex = 0; klvDataPidsIndex < klvDataPidsJsonList.GetLength(); ++klvDataPidsIndex)
    {
      m_klvDataPids.push_back(klvDataPidsJsonList[klvDataPidsIndex].AsInteger());
    }
    m_klvDataPidsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pcrPid"))
  {
    m_pcrPid = jsonValue.GetInteger("pcrPid");
    m_pcrPidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pmtPid"))
  {
    m_pmtPid = jsonValue.GetInteger("pmtPid");
    m_pmtPidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("privateMetadataPid"))
  {
    m_privateMetadataPid = jsonValue.GetInteger("privateMetadataPid");
    m_privateMetadataPidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scte27Pids"))
  {
    Aws::Utils::Array<JsonView> scte27PidsJsonList = jsonValue.GetArray("scte27Pids");
    for(unsigned scte27PidsIndex = 0; scte27PidsIndex < scte27PidsJsonList.GetLength(); ++scte27PidsIndex)
    {
      m_scte27Pids.push_back(scte27PidsJsonList[scte27PidsIndex].AsInteger());
    }
    m_scte27PidsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scte35Pid"))
  {
    m_scte35Pid = jsonValue.GetInteger("scte35Pid");
    m_scte35PidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timedMetadataPid"))
  {
    m_timedMetadataPid = jsonValue.GetInteger("timedMetadataPid");
    m_timedMetadataPidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("videoPid"))
  {
    m_videoPid = jsonValue.GetInteger("videoPid");
    m_videoPidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("aribCaptionsPid"))
  {
    m_aribCaptionsPid = jsonValue.GetInteger("aribCaptionsPid");
    m_aribCaptionsPidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dvbTeletextPids"))
  {
    Aws::Utils::Array<JsonView> dvbTeletextPidsJsonList = jsonValue.GetArray("dvbTeletextPids");
    for(unsigned dvbTeletextPidsIndex = 0; dvbTeletextPidsIndex < dvbTeletextPidsJsonList.GetLength(); ++dvbTeletextPidsIndex)
    {
      m_dvbTeletextPids.push_back(dvbTeletextPidsJsonList[dvbTeletextPidsIndex].AsInteger());
    }
    m_dvbTeletextPidsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ecmPid"))
  {
    m_ecmPid = jsonValue.GetInteger("ecmPid");
    m_ecmPidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("smpte2038Pid"))
  {
    m_smpte2038Pid = jsonValue.GetInteger("smpte2038Pid");
    m_smpte2038PidHasBeenSet = true;
  }
  return *this;
}

JsonValue MultiplexProgramPacketIdentifiersMap::Jsonize() const
{
  JsonValue payload;

  if(m_audioPidsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> audioPidsJsonList(m_audioPids.size());
   for(unsigned audioPidsIndex = 0; audioPidsIndex < audioPidsJsonList.GetLength(); ++audioPidsIndex)
   {
     audioPidsJsonList[audioPidsIndex].AsInteger(m_audioPids[audioPidsIndex]);
   }
   payload.WithArray("audioPids", std::move(audioPidsJsonList));

  }

  if(m_dvbSubPidsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dvbSubPidsJsonList(m_dvbSubPids.size());
   for(unsigned dvbSubPidsIndex = 0; dvbSubPidsIndex < dvbSubPidsJsonList.GetLength(); ++dvbSubPidsIndex)
   {
     dvbSubPidsJsonList[dvbSubPidsIndex].AsInteger(m_dvbSubPids[dvbSubPidsIndex]);
   }
   payload.WithArray("dvbSubPids", std::move(dvbSubPidsJsonList));

  }

  if(m_dvbTeletextPidHasBeenSet)
  {
   payload.WithInteger("dvbTeletextPid", m_dvbTeletextPid);

  }

  if(m_etvPlatformPidHasBeenSet)
  {
   payload.WithInteger("etvPlatformPid", m_etvPlatformPid);

  }

  if(m_etvSignalPidHasBeenSet)
  {
   payload.WithInteger("etvSignalPid", m_etvSignalPid);

  }

  if(m_klvDataPidsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> klvDataPidsJsonList(m_klvDataPids.size());
   for(unsigned klvDataPidsIndex = 0; klvDataPidsIndex < klvDataPidsJsonList.GetLength(); ++klvDataPidsIndex)
   {
     klvDataPidsJsonList[klvDataPidsIndex].AsInteger(m_klvDataPids[klvDataPidsIndex]);
   }
   payload.WithArray("klvDataPids", std::move(klvDataPidsJsonList));

  }

  if(m_pcrPidHasBeenSet)
  {
   payload.WithInteger("pcrPid", m_pcrPid);

  }

  if(m_pmtPidHasBeenSet)
  {
   payload.WithInteger("pmtPid", m_pmtPid);

  }

  if(m_privateMetadataPidHasBeenSet)
  {
   payload.WithInteger("privateMetadataPid", m_privateMetadataPid);

  }

  if(m_scte27PidsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scte27PidsJsonList(m_scte27Pids.size());
   for(unsigned scte27PidsIndex = 0; scte27PidsIndex < scte27PidsJsonList.GetLength(); ++scte27PidsIndex)
   {
     scte27PidsJsonList[scte27PidsIndex].AsInteger(m_scte27Pids[scte27PidsIndex]);
   }
   payload.WithArray("scte27Pids", std::move(scte27PidsJsonList));

  }

  if(m_scte35PidHasBeenSet)
  {
   payload.WithInteger("scte35Pid", m_scte35Pid);

  }

  if(m_timedMetadataPidHasBeenSet)
  {
   payload.WithInteger("timedMetadataPid", m_timedMetadataPid);

  }

  if(m_videoPidHasBeenSet)
  {
   payload.WithInteger("videoPid", m_videoPid);

  }

  if(m_aribCaptionsPidHasBeenSet)
  {
   payload.WithInteger("aribCaptionsPid", m_aribCaptionsPid);

  }

  if(m_dvbTeletextPidsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dvbTeletextPidsJsonList(m_dvbTeletextPids.size());
   for(unsigned dvbTeletextPidsIndex = 0; dvbTeletextPidsIndex < dvbTeletextPidsJsonList.GetLength(); ++dvbTeletextPidsIndex)
   {
     dvbTeletextPidsJsonList[dvbTeletextPidsIndex].AsInteger(m_dvbTeletextPids[dvbTeletextPidsIndex]);
   }
   payload.WithArray("dvbTeletextPids", std::move(dvbTeletextPidsJsonList));

  }

  if(m_ecmPidHasBeenSet)
  {
   payload.WithInteger("ecmPid", m_ecmPid);

  }

  if(m_smpte2038PidHasBeenSet)
  {
   payload.WithInteger("smpte2038Pid", m_smpte2038Pid);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
