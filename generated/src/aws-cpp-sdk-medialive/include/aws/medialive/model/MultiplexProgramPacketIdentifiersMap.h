/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{

  /**
   * Packet identifiers map for a given Multiplex program.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MultiplexProgramPacketIdentifiersMap">AWS
   * API Reference</a></p>
   */
  class MultiplexProgramPacketIdentifiersMap
  {
  public:
    AWS_MEDIALIVE_API MultiplexProgramPacketIdentifiersMap();
    AWS_MEDIALIVE_API MultiplexProgramPacketIdentifiersMap(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MultiplexProgramPacketIdentifiersMap& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::Vector<int>& GetAudioPids() const{ return m_audioPids; }

    
    inline bool AudioPidsHasBeenSet() const { return m_audioPidsHasBeenSet; }

    
    inline void SetAudioPids(const Aws::Vector<int>& value) { m_audioPidsHasBeenSet = true; m_audioPids = value; }

    
    inline void SetAudioPids(Aws::Vector<int>&& value) { m_audioPidsHasBeenSet = true; m_audioPids = std::move(value); }

    
    inline MultiplexProgramPacketIdentifiersMap& WithAudioPids(const Aws::Vector<int>& value) { SetAudioPids(value); return *this;}

    
    inline MultiplexProgramPacketIdentifiersMap& WithAudioPids(Aws::Vector<int>&& value) { SetAudioPids(std::move(value)); return *this;}

    
    inline MultiplexProgramPacketIdentifiersMap& AddAudioPids(int value) { m_audioPidsHasBeenSet = true; m_audioPids.push_back(value); return *this; }


    
    inline const Aws::Vector<int>& GetDvbSubPids() const{ return m_dvbSubPids; }

    
    inline bool DvbSubPidsHasBeenSet() const { return m_dvbSubPidsHasBeenSet; }

    
    inline void SetDvbSubPids(const Aws::Vector<int>& value) { m_dvbSubPidsHasBeenSet = true; m_dvbSubPids = value; }

    
    inline void SetDvbSubPids(Aws::Vector<int>&& value) { m_dvbSubPidsHasBeenSet = true; m_dvbSubPids = std::move(value); }

    
    inline MultiplexProgramPacketIdentifiersMap& WithDvbSubPids(const Aws::Vector<int>& value) { SetDvbSubPids(value); return *this;}

    
    inline MultiplexProgramPacketIdentifiersMap& WithDvbSubPids(Aws::Vector<int>&& value) { SetDvbSubPids(std::move(value)); return *this;}

    
    inline MultiplexProgramPacketIdentifiersMap& AddDvbSubPids(int value) { m_dvbSubPidsHasBeenSet = true; m_dvbSubPids.push_back(value); return *this; }


    
    inline int GetDvbTeletextPid() const{ return m_dvbTeletextPid; }

    
    inline bool DvbTeletextPidHasBeenSet() const { return m_dvbTeletextPidHasBeenSet; }

    
    inline void SetDvbTeletextPid(int value) { m_dvbTeletextPidHasBeenSet = true; m_dvbTeletextPid = value; }

    
    inline MultiplexProgramPacketIdentifiersMap& WithDvbTeletextPid(int value) { SetDvbTeletextPid(value); return *this;}


    
    inline int GetEtvPlatformPid() const{ return m_etvPlatformPid; }

    
    inline bool EtvPlatformPidHasBeenSet() const { return m_etvPlatformPidHasBeenSet; }

    
    inline void SetEtvPlatformPid(int value) { m_etvPlatformPidHasBeenSet = true; m_etvPlatformPid = value; }

    
    inline MultiplexProgramPacketIdentifiersMap& WithEtvPlatformPid(int value) { SetEtvPlatformPid(value); return *this;}


    
    inline int GetEtvSignalPid() const{ return m_etvSignalPid; }

    
    inline bool EtvSignalPidHasBeenSet() const { return m_etvSignalPidHasBeenSet; }

    
    inline void SetEtvSignalPid(int value) { m_etvSignalPidHasBeenSet = true; m_etvSignalPid = value; }

    
    inline MultiplexProgramPacketIdentifiersMap& WithEtvSignalPid(int value) { SetEtvSignalPid(value); return *this;}


    
    inline const Aws::Vector<int>& GetKlvDataPids() const{ return m_klvDataPids; }

    
    inline bool KlvDataPidsHasBeenSet() const { return m_klvDataPidsHasBeenSet; }

    
    inline void SetKlvDataPids(const Aws::Vector<int>& value) { m_klvDataPidsHasBeenSet = true; m_klvDataPids = value; }

    
    inline void SetKlvDataPids(Aws::Vector<int>&& value) { m_klvDataPidsHasBeenSet = true; m_klvDataPids = std::move(value); }

    
    inline MultiplexProgramPacketIdentifiersMap& WithKlvDataPids(const Aws::Vector<int>& value) { SetKlvDataPids(value); return *this;}

    
    inline MultiplexProgramPacketIdentifiersMap& WithKlvDataPids(Aws::Vector<int>&& value) { SetKlvDataPids(std::move(value)); return *this;}

    
    inline MultiplexProgramPacketIdentifiersMap& AddKlvDataPids(int value) { m_klvDataPidsHasBeenSet = true; m_klvDataPids.push_back(value); return *this; }


    
    inline int GetPcrPid() const{ return m_pcrPid; }

    
    inline bool PcrPidHasBeenSet() const { return m_pcrPidHasBeenSet; }

    
    inline void SetPcrPid(int value) { m_pcrPidHasBeenSet = true; m_pcrPid = value; }

    
    inline MultiplexProgramPacketIdentifiersMap& WithPcrPid(int value) { SetPcrPid(value); return *this;}


    
    inline int GetPmtPid() const{ return m_pmtPid; }

    
    inline bool PmtPidHasBeenSet() const { return m_pmtPidHasBeenSet; }

    
    inline void SetPmtPid(int value) { m_pmtPidHasBeenSet = true; m_pmtPid = value; }

    
    inline MultiplexProgramPacketIdentifiersMap& WithPmtPid(int value) { SetPmtPid(value); return *this;}


    
    inline int GetPrivateMetadataPid() const{ return m_privateMetadataPid; }

    
    inline bool PrivateMetadataPidHasBeenSet() const { return m_privateMetadataPidHasBeenSet; }

    
    inline void SetPrivateMetadataPid(int value) { m_privateMetadataPidHasBeenSet = true; m_privateMetadataPid = value; }

    
    inline MultiplexProgramPacketIdentifiersMap& WithPrivateMetadataPid(int value) { SetPrivateMetadataPid(value); return *this;}


    
    inline const Aws::Vector<int>& GetScte27Pids() const{ return m_scte27Pids; }

    
    inline bool Scte27PidsHasBeenSet() const { return m_scte27PidsHasBeenSet; }

    
    inline void SetScte27Pids(const Aws::Vector<int>& value) { m_scte27PidsHasBeenSet = true; m_scte27Pids = value; }

    
    inline void SetScte27Pids(Aws::Vector<int>&& value) { m_scte27PidsHasBeenSet = true; m_scte27Pids = std::move(value); }

    
    inline MultiplexProgramPacketIdentifiersMap& WithScte27Pids(const Aws::Vector<int>& value) { SetScte27Pids(value); return *this;}

    
    inline MultiplexProgramPacketIdentifiersMap& WithScte27Pids(Aws::Vector<int>&& value) { SetScte27Pids(std::move(value)); return *this;}

    
    inline MultiplexProgramPacketIdentifiersMap& AddScte27Pids(int value) { m_scte27PidsHasBeenSet = true; m_scte27Pids.push_back(value); return *this; }


    
    inline int GetScte35Pid() const{ return m_scte35Pid; }

    
    inline bool Scte35PidHasBeenSet() const { return m_scte35PidHasBeenSet; }

    
    inline void SetScte35Pid(int value) { m_scte35PidHasBeenSet = true; m_scte35Pid = value; }

    
    inline MultiplexProgramPacketIdentifiersMap& WithScte35Pid(int value) { SetScte35Pid(value); return *this;}


    
    inline int GetTimedMetadataPid() const{ return m_timedMetadataPid; }

    
    inline bool TimedMetadataPidHasBeenSet() const { return m_timedMetadataPidHasBeenSet; }

    
    inline void SetTimedMetadataPid(int value) { m_timedMetadataPidHasBeenSet = true; m_timedMetadataPid = value; }

    
    inline MultiplexProgramPacketIdentifiersMap& WithTimedMetadataPid(int value) { SetTimedMetadataPid(value); return *this;}


    
    inline int GetVideoPid() const{ return m_videoPid; }

    
    inline bool VideoPidHasBeenSet() const { return m_videoPidHasBeenSet; }

    
    inline void SetVideoPid(int value) { m_videoPidHasBeenSet = true; m_videoPid = value; }

    
    inline MultiplexProgramPacketIdentifiersMap& WithVideoPid(int value) { SetVideoPid(value); return *this;}

  private:

    Aws::Vector<int> m_audioPids;
    bool m_audioPidsHasBeenSet = false;

    Aws::Vector<int> m_dvbSubPids;
    bool m_dvbSubPidsHasBeenSet = false;

    int m_dvbTeletextPid;
    bool m_dvbTeletextPidHasBeenSet = false;

    int m_etvPlatformPid;
    bool m_etvPlatformPidHasBeenSet = false;

    int m_etvSignalPid;
    bool m_etvSignalPidHasBeenSet = false;

    Aws::Vector<int> m_klvDataPids;
    bool m_klvDataPidsHasBeenSet = false;

    int m_pcrPid;
    bool m_pcrPidHasBeenSet = false;

    int m_pmtPid;
    bool m_pmtPidHasBeenSet = false;

    int m_privateMetadataPid;
    bool m_privateMetadataPidHasBeenSet = false;

    Aws::Vector<int> m_scte27Pids;
    bool m_scte27PidsHasBeenSet = false;

    int m_scte35Pid;
    bool m_scte35PidHasBeenSet = false;

    int m_timedMetadataPid;
    bool m_timedMetadataPidHasBeenSet = false;

    int m_videoPid;
    bool m_videoPidHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
