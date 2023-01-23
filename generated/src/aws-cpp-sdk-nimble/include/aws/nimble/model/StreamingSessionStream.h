/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nimble/model/StreamingSessionStreamState.h>
#include <aws/nimble/model/StreamingSessionStreamStatusCode.h>
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
namespace NimbleStudio
{
namespace Model
{

  /**
   * <p>A stream is an active connection to a streaming session, enabling a studio
   * user to control the streaming session using a compatible client. Streaming
   * session streams are compatible with the NICE DCV web client, included in the
   * Nimble Studio portal, or the NICE DCV desktop client.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/StreamingSessionStream">AWS
   * API Reference</a></p>
   */
  class StreamingSessionStream
  {
  public:
    AWS_NIMBLESTUDIO_API StreamingSessionStream();
    AWS_NIMBLESTUDIO_API StreamingSessionStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API StreamingSessionStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ISO timestamp in seconds for when the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The ISO timestamp in seconds for when the resource was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The ISO timestamp in seconds for when the resource was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The ISO timestamp in seconds for when the resource was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The ISO timestamp in seconds for when the resource was created.</p>
     */
    inline StreamingSessionStream& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The ISO timestamp in seconds for when the resource was created.</p>
     */
    inline StreamingSessionStream& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The user ID of the user that created the streaming session stream.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The user ID of the user that created the streaming session stream.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>The user ID of the user that created the streaming session stream.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>The user ID of the user that created the streaming session stream.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>The user ID of the user that created the streaming session stream.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>The user ID of the user that created the streaming session stream.</p>
     */
    inline StreamingSessionStream& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The user ID of the user that created the streaming session stream.</p>
     */
    inline StreamingSessionStream& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The user ID of the user that created the streaming session stream.</p>
     */
    inline StreamingSessionStream& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The ISO timestamp in seconds for when the resource expires.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiresAt() const{ return m_expiresAt; }

    /**
     * <p>The ISO timestamp in seconds for when the resource expires.</p>
     */
    inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }

    /**
     * <p>The ISO timestamp in seconds for when the resource expires.</p>
     */
    inline void SetExpiresAt(const Aws::Utils::DateTime& value) { m_expiresAtHasBeenSet = true; m_expiresAt = value; }

    /**
     * <p>The ISO timestamp in seconds for when the resource expires.</p>
     */
    inline void SetExpiresAt(Aws::Utils::DateTime&& value) { m_expiresAtHasBeenSet = true; m_expiresAt = std::move(value); }

    /**
     * <p>The ISO timestamp in seconds for when the resource expires.</p>
     */
    inline StreamingSessionStream& WithExpiresAt(const Aws::Utils::DateTime& value) { SetExpiresAt(value); return *this;}

    /**
     * <p>The ISO timestamp in seconds for when the resource expires.</p>
     */
    inline StreamingSessionStream& WithExpiresAt(Aws::Utils::DateTime&& value) { SetExpiresAt(std::move(value)); return *this;}


    /**
     * <p>The user ID of the user that owns the streaming session. The user that owns
     * the session will be logging into the session and interacting with the virtual
     * workstation.</p>
     */
    inline const Aws::String& GetOwnedBy() const{ return m_ownedBy; }

    /**
     * <p>The user ID of the user that owns the streaming session. The user that owns
     * the session will be logging into the session and interacting with the virtual
     * workstation.</p>
     */
    inline bool OwnedByHasBeenSet() const { return m_ownedByHasBeenSet; }

    /**
     * <p>The user ID of the user that owns the streaming session. The user that owns
     * the session will be logging into the session and interacting with the virtual
     * workstation.</p>
     */
    inline void SetOwnedBy(const Aws::String& value) { m_ownedByHasBeenSet = true; m_ownedBy = value; }

    /**
     * <p>The user ID of the user that owns the streaming session. The user that owns
     * the session will be logging into the session and interacting with the virtual
     * workstation.</p>
     */
    inline void SetOwnedBy(Aws::String&& value) { m_ownedByHasBeenSet = true; m_ownedBy = std::move(value); }

    /**
     * <p>The user ID of the user that owns the streaming session. The user that owns
     * the session will be logging into the session and interacting with the virtual
     * workstation.</p>
     */
    inline void SetOwnedBy(const char* value) { m_ownedByHasBeenSet = true; m_ownedBy.assign(value); }

    /**
     * <p>The user ID of the user that owns the streaming session. The user that owns
     * the session will be logging into the session and interacting with the virtual
     * workstation.</p>
     */
    inline StreamingSessionStream& WithOwnedBy(const Aws::String& value) { SetOwnedBy(value); return *this;}

    /**
     * <p>The user ID of the user that owns the streaming session. The user that owns
     * the session will be logging into the session and interacting with the virtual
     * workstation.</p>
     */
    inline StreamingSessionStream& WithOwnedBy(Aws::String&& value) { SetOwnedBy(std::move(value)); return *this;}

    /**
     * <p>The user ID of the user that owns the streaming session. The user that owns
     * the session will be logging into the session and interacting with the virtual
     * workstation.</p>
     */
    inline StreamingSessionStream& WithOwnedBy(const char* value) { SetOwnedBy(value); return *this;}


    /**
     * <p>The current state.</p>
     */
    inline const StreamingSessionStreamState& GetState() const{ return m_state; }

    /**
     * <p>The current state.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state.</p>
     */
    inline void SetState(const StreamingSessionStreamState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state.</p>
     */
    inline void SetState(StreamingSessionStreamState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state.</p>
     */
    inline StreamingSessionStream& WithState(const StreamingSessionStreamState& value) { SetState(value); return *this;}

    /**
     * <p>The current state.</p>
     */
    inline StreamingSessionStream& WithState(StreamingSessionStreamState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The streaming session stream status code.</p>
     */
    inline const StreamingSessionStreamStatusCode& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The streaming session stream status code.</p>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>The streaming session stream status code.</p>
     */
    inline void SetStatusCode(const StreamingSessionStreamStatusCode& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>The streaming session stream status code.</p>
     */
    inline void SetStatusCode(StreamingSessionStreamStatusCode&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

    /**
     * <p>The streaming session stream status code.</p>
     */
    inline StreamingSessionStream& WithStatusCode(const StreamingSessionStreamStatusCode& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The streaming session stream status code.</p>
     */
    inline StreamingSessionStream& WithStatusCode(StreamingSessionStreamStatusCode&& value) { SetStatusCode(std::move(value)); return *this;}


    /**
     * <p>The stream ID.</p>
     */
    inline const Aws::String& GetStreamId() const{ return m_streamId; }

    /**
     * <p>The stream ID.</p>
     */
    inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }

    /**
     * <p>The stream ID.</p>
     */
    inline void SetStreamId(const Aws::String& value) { m_streamIdHasBeenSet = true; m_streamId = value; }

    /**
     * <p>The stream ID.</p>
     */
    inline void SetStreamId(Aws::String&& value) { m_streamIdHasBeenSet = true; m_streamId = std::move(value); }

    /**
     * <p>The stream ID.</p>
     */
    inline void SetStreamId(const char* value) { m_streamIdHasBeenSet = true; m_streamId.assign(value); }

    /**
     * <p>The stream ID.</p>
     */
    inline StreamingSessionStream& WithStreamId(const Aws::String& value) { SetStreamId(value); return *this;}

    /**
     * <p>The stream ID.</p>
     */
    inline StreamingSessionStream& WithStreamId(Aws::String&& value) { SetStreamId(std::move(value)); return *this;}

    /**
     * <p>The stream ID.</p>
     */
    inline StreamingSessionStream& WithStreamId(const char* value) { SetStreamId(value); return *this;}


    /**
     * <p>The URL to connect to this stream using the DCV client.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The URL to connect to this stream using the DCV client.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The URL to connect to this stream using the DCV client.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The URL to connect to this stream using the DCV client.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The URL to connect to this stream using the DCV client.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The URL to connect to this stream using the DCV client.</p>
     */
    inline StreamingSessionStream& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL to connect to this stream using the DCV client.</p>
     */
    inline StreamingSessionStream& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The URL to connect to this stream using the DCV client.</p>
     */
    inline StreamingSessionStream& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_expiresAt;
    bool m_expiresAtHasBeenSet = false;

    Aws::String m_ownedBy;
    bool m_ownedByHasBeenSet = false;

    StreamingSessionStreamState m_state;
    bool m_stateHasBeenSet = false;

    StreamingSessionStreamStatusCode m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_streamId;
    bool m_streamIdHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
