/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/SrtCallerDecryptionRequest.h>
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
   * Configures the connection for a source that uses SRT as the connection protocol.
   * In terms of establishing the connection, MediaLive is always the caller and the
   * upstream system is always the listener. In terms of transmission of the source
   * content, MediaLive is always the receiver and the upstream system is always the
   * sender.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/SrtCallerSourceRequest">AWS
   * API Reference</a></p>
   */
  class SrtCallerSourceRequest
  {
  public:
    AWS_MEDIALIVE_API SrtCallerSourceRequest();
    AWS_MEDIALIVE_API SrtCallerSourceRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API SrtCallerSourceRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const SrtCallerDecryptionRequest& GetDecryption() const{ return m_decryption; }
    inline bool DecryptionHasBeenSet() const { return m_decryptionHasBeenSet; }
    inline void SetDecryption(const SrtCallerDecryptionRequest& value) { m_decryptionHasBeenSet = true; m_decryption = value; }
    inline void SetDecryption(SrtCallerDecryptionRequest&& value) { m_decryptionHasBeenSet = true; m_decryption = std::move(value); }
    inline SrtCallerSourceRequest& WithDecryption(const SrtCallerDecryptionRequest& value) { SetDecryption(value); return *this;}
    inline SrtCallerSourceRequest& WithDecryption(SrtCallerDecryptionRequest&& value) { SetDecryption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The preferred latency (in milliseconds) for implementing packet loss and
     * recovery. Packet recovery is a key feature of SRT. Obtain this value from the
     * operator at the upstream system.
     */
    inline int GetMinimumLatency() const{ return m_minimumLatency; }
    inline bool MinimumLatencyHasBeenSet() const { return m_minimumLatencyHasBeenSet; }
    inline void SetMinimumLatency(int value) { m_minimumLatencyHasBeenSet = true; m_minimumLatency = value; }
    inline SrtCallerSourceRequest& WithMinimumLatency(int value) { SetMinimumLatency(value); return *this;}
    ///@}

    ///@{
    /**
     * The IP address at the upstream system (the listener) that MediaLive (the caller)
     * will connect to.
     */
    inline const Aws::String& GetSrtListenerAddress() const{ return m_srtListenerAddress; }
    inline bool SrtListenerAddressHasBeenSet() const { return m_srtListenerAddressHasBeenSet; }
    inline void SetSrtListenerAddress(const Aws::String& value) { m_srtListenerAddressHasBeenSet = true; m_srtListenerAddress = value; }
    inline void SetSrtListenerAddress(Aws::String&& value) { m_srtListenerAddressHasBeenSet = true; m_srtListenerAddress = std::move(value); }
    inline void SetSrtListenerAddress(const char* value) { m_srtListenerAddressHasBeenSet = true; m_srtListenerAddress.assign(value); }
    inline SrtCallerSourceRequest& WithSrtListenerAddress(const Aws::String& value) { SetSrtListenerAddress(value); return *this;}
    inline SrtCallerSourceRequest& WithSrtListenerAddress(Aws::String&& value) { SetSrtListenerAddress(std::move(value)); return *this;}
    inline SrtCallerSourceRequest& WithSrtListenerAddress(const char* value) { SetSrtListenerAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * The port at the upstream system (the listener) that MediaLive (the caller) will
     * connect to.
     */
    inline const Aws::String& GetSrtListenerPort() const{ return m_srtListenerPort; }
    inline bool SrtListenerPortHasBeenSet() const { return m_srtListenerPortHasBeenSet; }
    inline void SetSrtListenerPort(const Aws::String& value) { m_srtListenerPortHasBeenSet = true; m_srtListenerPort = value; }
    inline void SetSrtListenerPort(Aws::String&& value) { m_srtListenerPortHasBeenSet = true; m_srtListenerPort = std::move(value); }
    inline void SetSrtListenerPort(const char* value) { m_srtListenerPortHasBeenSet = true; m_srtListenerPort.assign(value); }
    inline SrtCallerSourceRequest& WithSrtListenerPort(const Aws::String& value) { SetSrtListenerPort(value); return *this;}
    inline SrtCallerSourceRequest& WithSrtListenerPort(Aws::String&& value) { SetSrtListenerPort(std::move(value)); return *this;}
    inline SrtCallerSourceRequest& WithSrtListenerPort(const char* value) { SetSrtListenerPort(value); return *this;}
    ///@}

    ///@{
    /**
     * This value is required if the upstream system uses this identifier because
     * without it, the SRT handshake between MediaLive (the caller) and the upstream
     * system (the listener) might fail.
     */
    inline const Aws::String& GetStreamId() const{ return m_streamId; }
    inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }
    inline void SetStreamId(const Aws::String& value) { m_streamIdHasBeenSet = true; m_streamId = value; }
    inline void SetStreamId(Aws::String&& value) { m_streamIdHasBeenSet = true; m_streamId = std::move(value); }
    inline void SetStreamId(const char* value) { m_streamIdHasBeenSet = true; m_streamId.assign(value); }
    inline SrtCallerSourceRequest& WithStreamId(const Aws::String& value) { SetStreamId(value); return *this;}
    inline SrtCallerSourceRequest& WithStreamId(Aws::String&& value) { SetStreamId(std::move(value)); return *this;}
    inline SrtCallerSourceRequest& WithStreamId(const char* value) { SetStreamId(value); return *this;}
    ///@}
  private:

    SrtCallerDecryptionRequest m_decryption;
    bool m_decryptionHasBeenSet = false;

    int m_minimumLatency;
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
