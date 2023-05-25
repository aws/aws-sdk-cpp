/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/NimbleStudioRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nimble/model/VolumeRetentionMode.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

  /**
   */
  class StopStreamingSessionRequest : public NimbleStudioRequest
  {
  public:
    AWS_NIMBLESTUDIO_API StopStreamingSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopStreamingSession"; }

    AWS_NIMBLESTUDIO_API Aws::String SerializePayload() const override;

    AWS_NIMBLESTUDIO_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the Amazon Web Services SDK
     * automatically generates a client token and uses it for the request to ensure
     * idempotency.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the Amazon Web Services SDK
     * automatically generates a client token and uses it for the request to ensure
     * idempotency.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the Amazon Web Services SDK
     * automatically generates a client token and uses it for the request to ensure
     * idempotency.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the Amazon Web Services SDK
     * automatically generates a client token and uses it for the request to ensure
     * idempotency.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the Amazon Web Services SDK
     * automatically generates a client token and uses it for the request to ensure
     * idempotency.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the Amazon Web Services SDK
     * automatically generates a client token and uses it for the request to ensure
     * idempotency.</p>
     */
    inline StopStreamingSessionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the Amazon Web Services SDK
     * automatically generates a client token and uses it for the request to ensure
     * idempotency.</p>
     */
    inline StopStreamingSessionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the Amazon Web Services SDK
     * automatically generates a client token and uses it for the request to ensure
     * idempotency.</p>
     */
    inline StopStreamingSessionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The streaming session ID for the
     * <code>StopStreamingSessionRequest</code>.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>The streaming session ID for the
     * <code>StopStreamingSessionRequest</code>.</p>
     */
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }

    /**
     * <p>The streaming session ID for the
     * <code>StopStreamingSessionRequest</code>.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    /**
     * <p>The streaming session ID for the
     * <code>StopStreamingSessionRequest</code>.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }

    /**
     * <p>The streaming session ID for the
     * <code>StopStreamingSessionRequest</code>.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    /**
     * <p>The streaming session ID for the
     * <code>StopStreamingSessionRequest</code>.</p>
     */
    inline StopStreamingSessionRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>The streaming session ID for the
     * <code>StopStreamingSessionRequest</code>.</p>
     */
    inline StopStreamingSessionRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>The streaming session ID for the
     * <code>StopStreamingSessionRequest</code>.</p>
     */
    inline StopStreamingSessionRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    /**
     * <p>The studioId for the StopStreamingSessionRequest.</p>
     */
    inline const Aws::String& GetStudioId() const{ return m_studioId; }

    /**
     * <p>The studioId for the StopStreamingSessionRequest.</p>
     */
    inline bool StudioIdHasBeenSet() const { return m_studioIdHasBeenSet; }

    /**
     * <p>The studioId for the StopStreamingSessionRequest.</p>
     */
    inline void SetStudioId(const Aws::String& value) { m_studioIdHasBeenSet = true; m_studioId = value; }

    /**
     * <p>The studioId for the StopStreamingSessionRequest.</p>
     */
    inline void SetStudioId(Aws::String&& value) { m_studioIdHasBeenSet = true; m_studioId = std::move(value); }

    /**
     * <p>The studioId for the StopStreamingSessionRequest.</p>
     */
    inline void SetStudioId(const char* value) { m_studioIdHasBeenSet = true; m_studioId.assign(value); }

    /**
     * <p>The studioId for the StopStreamingSessionRequest.</p>
     */
    inline StopStreamingSessionRequest& WithStudioId(const Aws::String& value) { SetStudioId(value); return *this;}

    /**
     * <p>The studioId for the StopStreamingSessionRequest.</p>
     */
    inline StopStreamingSessionRequest& WithStudioId(Aws::String&& value) { SetStudioId(std::move(value)); return *this;}

    /**
     * <p>The studioId for the StopStreamingSessionRequest.</p>
     */
    inline StopStreamingSessionRequest& WithStudioId(const char* value) { SetStudioId(value); return *this;}


    /**
     * <p>Adds additional instructions to a streaming session stop action to either
     * retain the EBS volumes or delete the EBS volumes.</p>
     */
    inline const VolumeRetentionMode& GetVolumeRetentionMode() const{ return m_volumeRetentionMode; }

    /**
     * <p>Adds additional instructions to a streaming session stop action to either
     * retain the EBS volumes or delete the EBS volumes.</p>
     */
    inline bool VolumeRetentionModeHasBeenSet() const { return m_volumeRetentionModeHasBeenSet; }

    /**
     * <p>Adds additional instructions to a streaming session stop action to either
     * retain the EBS volumes or delete the EBS volumes.</p>
     */
    inline void SetVolumeRetentionMode(const VolumeRetentionMode& value) { m_volumeRetentionModeHasBeenSet = true; m_volumeRetentionMode = value; }

    /**
     * <p>Adds additional instructions to a streaming session stop action to either
     * retain the EBS volumes or delete the EBS volumes.</p>
     */
    inline void SetVolumeRetentionMode(VolumeRetentionMode&& value) { m_volumeRetentionModeHasBeenSet = true; m_volumeRetentionMode = std::move(value); }

    /**
     * <p>Adds additional instructions to a streaming session stop action to either
     * retain the EBS volumes or delete the EBS volumes.</p>
     */
    inline StopStreamingSessionRequest& WithVolumeRetentionMode(const VolumeRetentionMode& value) { SetVolumeRetentionMode(value); return *this;}

    /**
     * <p>Adds additional instructions to a streaming session stop action to either
     * retain the EBS volumes or delete the EBS volumes.</p>
     */
    inline StopStreamingSessionRequest& WithVolumeRetentionMode(VolumeRetentionMode&& value) { SetVolumeRetentionMode(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_studioId;
    bool m_studioIdHasBeenSet = false;

    VolumeRetentionMode m_volumeRetentionMode;
    bool m_volumeRetentionModeHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
