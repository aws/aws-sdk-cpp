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
    AWS_MEDIALIVE_API MultiplexProgramPacketIdentifiersMap() = default;
    AWS_MEDIALIVE_API MultiplexProgramPacketIdentifiersMap(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MultiplexProgramPacketIdentifiersMap& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::Vector<int>& GetAudioPids() const { return m_audioPids; }
    inline bool AudioPidsHasBeenSet() const { return m_audioPidsHasBeenSet; }
    template<typename AudioPidsT = Aws::Vector<int>>
    void SetAudioPids(AudioPidsT&& value) { m_audioPidsHasBeenSet = true; m_audioPids = std::forward<AudioPidsT>(value); }
    template<typename AudioPidsT = Aws::Vector<int>>
    MultiplexProgramPacketIdentifiersMap& WithAudioPids(AudioPidsT&& value) { SetAudioPids(std::forward<AudioPidsT>(value)); return *this;}
    inline MultiplexProgramPacketIdentifiersMap& AddAudioPids(int value) { m_audioPidsHasBeenSet = true; m_audioPids.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetDvbSubPids() const { return m_dvbSubPids; }
    inline bool DvbSubPidsHasBeenSet() const { return m_dvbSubPidsHasBeenSet; }
    template<typename DvbSubPidsT = Aws::Vector<int>>
    void SetDvbSubPids(DvbSubPidsT&& value) { m_dvbSubPidsHasBeenSet = true; m_dvbSubPids = std::forward<DvbSubPidsT>(value); }
    template<typename DvbSubPidsT = Aws::Vector<int>>
    MultiplexProgramPacketIdentifiersMap& WithDvbSubPids(DvbSubPidsT&& value) { SetDvbSubPids(std::forward<DvbSubPidsT>(value)); return *this;}
    inline MultiplexProgramPacketIdentifiersMap& AddDvbSubPids(int value) { m_dvbSubPidsHasBeenSet = true; m_dvbSubPids.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline int GetDvbTeletextPid() const { return m_dvbTeletextPid; }
    inline bool DvbTeletextPidHasBeenSet() const { return m_dvbTeletextPidHasBeenSet; }
    inline void SetDvbTeletextPid(int value) { m_dvbTeletextPidHasBeenSet = true; m_dvbTeletextPid = value; }
    inline MultiplexProgramPacketIdentifiersMap& WithDvbTeletextPid(int value) { SetDvbTeletextPid(value); return *this;}
    ///@}

    ///@{
    
    inline int GetEtvPlatformPid() const { return m_etvPlatformPid; }
    inline bool EtvPlatformPidHasBeenSet() const { return m_etvPlatformPidHasBeenSet; }
    inline void SetEtvPlatformPid(int value) { m_etvPlatformPidHasBeenSet = true; m_etvPlatformPid = value; }
    inline MultiplexProgramPacketIdentifiersMap& WithEtvPlatformPid(int value) { SetEtvPlatformPid(value); return *this;}
    ///@}

    ///@{
    
    inline int GetEtvSignalPid() const { return m_etvSignalPid; }
    inline bool EtvSignalPidHasBeenSet() const { return m_etvSignalPidHasBeenSet; }
    inline void SetEtvSignalPid(int value) { m_etvSignalPidHasBeenSet = true; m_etvSignalPid = value; }
    inline MultiplexProgramPacketIdentifiersMap& WithEtvSignalPid(int value) { SetEtvSignalPid(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetKlvDataPids() const { return m_klvDataPids; }
    inline bool KlvDataPidsHasBeenSet() const { return m_klvDataPidsHasBeenSet; }
    template<typename KlvDataPidsT = Aws::Vector<int>>
    void SetKlvDataPids(KlvDataPidsT&& value) { m_klvDataPidsHasBeenSet = true; m_klvDataPids = std::forward<KlvDataPidsT>(value); }
    template<typename KlvDataPidsT = Aws::Vector<int>>
    MultiplexProgramPacketIdentifiersMap& WithKlvDataPids(KlvDataPidsT&& value) { SetKlvDataPids(std::forward<KlvDataPidsT>(value)); return *this;}
    inline MultiplexProgramPacketIdentifiersMap& AddKlvDataPids(int value) { m_klvDataPidsHasBeenSet = true; m_klvDataPids.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline int GetPcrPid() const { return m_pcrPid; }
    inline bool PcrPidHasBeenSet() const { return m_pcrPidHasBeenSet; }
    inline void SetPcrPid(int value) { m_pcrPidHasBeenSet = true; m_pcrPid = value; }
    inline MultiplexProgramPacketIdentifiersMap& WithPcrPid(int value) { SetPcrPid(value); return *this;}
    ///@}

    ///@{
    
    inline int GetPmtPid() const { return m_pmtPid; }
    inline bool PmtPidHasBeenSet() const { return m_pmtPidHasBeenSet; }
    inline void SetPmtPid(int value) { m_pmtPidHasBeenSet = true; m_pmtPid = value; }
    inline MultiplexProgramPacketIdentifiersMap& WithPmtPid(int value) { SetPmtPid(value); return *this;}
    ///@}

    ///@{
    
    inline int GetPrivateMetadataPid() const { return m_privateMetadataPid; }
    inline bool PrivateMetadataPidHasBeenSet() const { return m_privateMetadataPidHasBeenSet; }
    inline void SetPrivateMetadataPid(int value) { m_privateMetadataPidHasBeenSet = true; m_privateMetadataPid = value; }
    inline MultiplexProgramPacketIdentifiersMap& WithPrivateMetadataPid(int value) { SetPrivateMetadataPid(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetScte27Pids() const { return m_scte27Pids; }
    inline bool Scte27PidsHasBeenSet() const { return m_scte27PidsHasBeenSet; }
    template<typename Scte27PidsT = Aws::Vector<int>>
    void SetScte27Pids(Scte27PidsT&& value) { m_scte27PidsHasBeenSet = true; m_scte27Pids = std::forward<Scte27PidsT>(value); }
    template<typename Scte27PidsT = Aws::Vector<int>>
    MultiplexProgramPacketIdentifiersMap& WithScte27Pids(Scte27PidsT&& value) { SetScte27Pids(std::forward<Scte27PidsT>(value)); return *this;}
    inline MultiplexProgramPacketIdentifiersMap& AddScte27Pids(int value) { m_scte27PidsHasBeenSet = true; m_scte27Pids.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline int GetScte35Pid() const { return m_scte35Pid; }
    inline bool Scte35PidHasBeenSet() const { return m_scte35PidHasBeenSet; }
    inline void SetScte35Pid(int value) { m_scte35PidHasBeenSet = true; m_scte35Pid = value; }
    inline MultiplexProgramPacketIdentifiersMap& WithScte35Pid(int value) { SetScte35Pid(value); return *this;}
    ///@}

    ///@{
    
    inline int GetTimedMetadataPid() const { return m_timedMetadataPid; }
    inline bool TimedMetadataPidHasBeenSet() const { return m_timedMetadataPidHasBeenSet; }
    inline void SetTimedMetadataPid(int value) { m_timedMetadataPidHasBeenSet = true; m_timedMetadataPid = value; }
    inline MultiplexProgramPacketIdentifiersMap& WithTimedMetadataPid(int value) { SetTimedMetadataPid(value); return *this;}
    ///@}

    ///@{
    
    inline int GetVideoPid() const { return m_videoPid; }
    inline bool VideoPidHasBeenSet() const { return m_videoPidHasBeenSet; }
    inline void SetVideoPid(int value) { m_videoPidHasBeenSet = true; m_videoPid = value; }
    inline MultiplexProgramPacketIdentifiersMap& WithVideoPid(int value) { SetVideoPid(value); return *this;}
    ///@}

    ///@{
    
    inline int GetAribCaptionsPid() const { return m_aribCaptionsPid; }
    inline bool AribCaptionsPidHasBeenSet() const { return m_aribCaptionsPidHasBeenSet; }
    inline void SetAribCaptionsPid(int value) { m_aribCaptionsPidHasBeenSet = true; m_aribCaptionsPid = value; }
    inline MultiplexProgramPacketIdentifiersMap& WithAribCaptionsPid(int value) { SetAribCaptionsPid(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetDvbTeletextPids() const { return m_dvbTeletextPids; }
    inline bool DvbTeletextPidsHasBeenSet() const { return m_dvbTeletextPidsHasBeenSet; }
    template<typename DvbTeletextPidsT = Aws::Vector<int>>
    void SetDvbTeletextPids(DvbTeletextPidsT&& value) { m_dvbTeletextPidsHasBeenSet = true; m_dvbTeletextPids = std::forward<DvbTeletextPidsT>(value); }
    template<typename DvbTeletextPidsT = Aws::Vector<int>>
    MultiplexProgramPacketIdentifiersMap& WithDvbTeletextPids(DvbTeletextPidsT&& value) { SetDvbTeletextPids(std::forward<DvbTeletextPidsT>(value)); return *this;}
    inline MultiplexProgramPacketIdentifiersMap& AddDvbTeletextPids(int value) { m_dvbTeletextPidsHasBeenSet = true; m_dvbTeletextPids.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline int GetEcmPid() const { return m_ecmPid; }
    inline bool EcmPidHasBeenSet() const { return m_ecmPidHasBeenSet; }
    inline void SetEcmPid(int value) { m_ecmPidHasBeenSet = true; m_ecmPid = value; }
    inline MultiplexProgramPacketIdentifiersMap& WithEcmPid(int value) { SetEcmPid(value); return *this;}
    ///@}

    ///@{
    
    inline int GetSmpte2038Pid() const { return m_smpte2038Pid; }
    inline bool Smpte2038PidHasBeenSet() const { return m_smpte2038PidHasBeenSet; }
    inline void SetSmpte2038Pid(int value) { m_smpte2038PidHasBeenSet = true; m_smpte2038Pid = value; }
    inline MultiplexProgramPacketIdentifiersMap& WithSmpte2038Pid(int value) { SetSmpte2038Pid(value); return *this;}
    ///@}
  private:

    Aws::Vector<int> m_audioPids;
    bool m_audioPidsHasBeenSet = false;

    Aws::Vector<int> m_dvbSubPids;
    bool m_dvbSubPidsHasBeenSet = false;

    int m_dvbTeletextPid{0};
    bool m_dvbTeletextPidHasBeenSet = false;

    int m_etvPlatformPid{0};
    bool m_etvPlatformPidHasBeenSet = false;

    int m_etvSignalPid{0};
    bool m_etvSignalPidHasBeenSet = false;

    Aws::Vector<int> m_klvDataPids;
    bool m_klvDataPidsHasBeenSet = false;

    int m_pcrPid{0};
    bool m_pcrPidHasBeenSet = false;

    int m_pmtPid{0};
    bool m_pmtPidHasBeenSet = false;

    int m_privateMetadataPid{0};
    bool m_privateMetadataPidHasBeenSet = false;

    Aws::Vector<int> m_scte27Pids;
    bool m_scte27PidsHasBeenSet = false;

    int m_scte35Pid{0};
    bool m_scte35PidHasBeenSet = false;

    int m_timedMetadataPid{0};
    bool m_timedMetadataPidHasBeenSet = false;

    int m_videoPid{0};
    bool m_videoPidHasBeenSet = false;

    int m_aribCaptionsPid{0};
    bool m_aribCaptionsPidHasBeenSet = false;

    Aws::Vector<int> m_dvbTeletextPids;
    bool m_dvbTeletextPidsHasBeenSet = false;

    int m_ecmPid{0};
    bool m_ecmPidHasBeenSet = false;

    int m_smpte2038Pid{0};
    bool m_smpte2038PidHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
