/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/SrtCallerDecryption.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * The configuration for a source that uses SRT as the connection protocol. In
   * terms of establishing the connection, MediaLive is always caller and the
   * upstream system is always the listener. In terms of transmission of the source
   * content, MediaLive is always the receiver and the upstream system is always the
   * sender.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/SrtCallerSource">AWS
   * API Reference</a></p>
   */
  class SrtCallerSource
  {
  public:
    AWS_MEDIALIVE_API SrtCallerSource() = default;
    AWS_MEDIALIVE_API SrtCallerSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API SrtCallerSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const SrtCallerDecryption& GetDecryption() const { return m_decryption; }
    inline bool DecryptionHasBeenSet() const { return m_decryptionHasBeenSet; }
    template<typename DecryptionT = SrtCallerDecryption>
    void SetDecryption(DecryptionT&& value) { m_decryptionHasBeenSet = true; m_decryption = std::forward<DecryptionT>(value); }
    template<typename DecryptionT = SrtCallerDecryption>
    SrtCallerSource& WithDecryption(DecryptionT&& value) { SetDecryption(std::forward<DecryptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The preferred latency (in milliseconds) for implementing packet loss and
     * recovery. Packet recovery is a key feature of SRT.
     */
    inline int GetMinimumLatency() const { return m_minimumLatency; }
    inline bool MinimumLatencyHasBeenSet() const { return m_minimumLatencyHasBeenSet; }
    inline void SetMinimumLatency(int value) { m_minimumLatencyHasBeenSet = true; m_minimumLatency = value; }
    inline SrtCallerSource& WithMinimumLatency(int value) { SetMinimumLatency(value); return *this;}
    ///@}

    ///@{
    /**
     * The IP address at the upstream system (the listener) that MediaLive (the caller)
     * connects to.
     */
    inline const Aws::String& GetSrtListenerAddress() const { return m_srtListenerAddress; }
    inline bool SrtListenerAddressHasBeenSet() const { return m_srtListenerAddressHasBeenSet; }
    template<typename SrtListenerAddressT = Aws::String>
    void SetSrtListenerAddress(SrtListenerAddressT&& value) { m_srtListenerAddressHasBeenSet = true; m_srtListenerAddress = std::forward<SrtListenerAddressT>(value); }
    template<typename SrtListenerAddressT = Aws::String>
    SrtCallerSource& WithSrtListenerAddress(SrtListenerAddressT&& value) { SetSrtListenerAddress(std::forward<SrtListenerAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The port at the upstream system (the listener) that MediaLive (the caller)
     * connects to.
     */
    inline const Aws::String& GetSrtListenerPort() const { return m_srtListenerPort; }
    inline bool SrtListenerPortHasBeenSet() const { return m_srtListenerPortHasBeenSet; }
    template<typename SrtListenerPortT = Aws::String>
    void SetSrtListenerPort(SrtListenerPortT&& value) { m_srtListenerPortHasBeenSet = true; m_srtListenerPort = std::forward<SrtListenerPortT>(value); }
    template<typename SrtListenerPortT = Aws::String>
    SrtCallerSource& WithSrtListenerPort(SrtListenerPortT&& value) { SetSrtListenerPort(std::forward<SrtListenerPortT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The stream ID, if the upstream system uses this identifier.
     */
    inline const Aws::String& GetStreamId() const { return m_streamId; }
    inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }
    template<typename StreamIdT = Aws::String>
    void SetStreamId(StreamIdT&& value) { m_streamIdHasBeenSet = true; m_streamId = std::forward<StreamIdT>(value); }
    template<typename StreamIdT = Aws::String>
    SrtCallerSource& WithStreamId(StreamIdT&& value) { SetStreamId(std::forward<StreamIdT>(value)); return *this;}
    ///@}
  private:

    SrtCallerDecryption m_decryption;
    bool m_decryptionHasBeenSet = false;

    int m_minimumLatency{0};
    bool m_minimumLatencyHasBeenSet = false;

    Aws::String m_srtListenerAddress;
    bool m_srtListenerAddressHasBeenSet = false;

    Aws::String m_srtListenerPort;
    bool m_srtListenerPortHasBeenSet = false;

    Aws::String m_streamId;
    bool m_streamIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
