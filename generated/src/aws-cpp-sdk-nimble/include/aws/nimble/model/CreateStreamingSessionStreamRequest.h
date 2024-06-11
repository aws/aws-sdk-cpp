/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/NimbleStudioRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateStreamingSessionStreamRequest : public NimbleStudioRequest
  {
  public:
    AWS_NIMBLESTUDIO_API CreateStreamingSessionStreamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStreamingSessionStream"; }

    AWS_NIMBLESTUDIO_API Aws::String SerializePayload() const override;

    AWS_NIMBLESTUDIO_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the Amazon Web Services SDK
     * automatically generates a client token and uses it for the request to ensure
     * idempotency.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateStreamingSessionStreamRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateStreamingSessionStreamRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateStreamingSessionStreamRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiration time in seconds.</p>
     */
    inline int GetExpirationInSeconds() const{ return m_expirationInSeconds; }
    inline bool ExpirationInSecondsHasBeenSet() const { return m_expirationInSecondsHasBeenSet; }
    inline void SetExpirationInSeconds(int value) { m_expirationInSecondsHasBeenSet = true; m_expirationInSeconds = value; }
    inline CreateStreamingSessionStreamRequest& WithExpirationInSeconds(int value) { SetExpirationInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The streaming session ID.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline CreateStreamingSessionStreamRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline CreateStreamingSessionStreamRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline CreateStreamingSessionStreamRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The studio ID. </p>
     */
    inline const Aws::String& GetStudioId() const{ return m_studioId; }
    inline bool StudioIdHasBeenSet() const { return m_studioIdHasBeenSet; }
    inline void SetStudioId(const Aws::String& value) { m_studioIdHasBeenSet = true; m_studioId = value; }
    inline void SetStudioId(Aws::String&& value) { m_studioIdHasBeenSet = true; m_studioId = std::move(value); }
    inline void SetStudioId(const char* value) { m_studioIdHasBeenSet = true; m_studioId.assign(value); }
    inline CreateStreamingSessionStreamRequest& WithStudioId(const Aws::String& value) { SetStudioId(value); return *this;}
    inline CreateStreamingSessionStreamRequest& WithStudioId(Aws::String&& value) { SetStudioId(std::move(value)); return *this;}
    inline CreateStreamingSessionStreamRequest& WithStudioId(const char* value) { SetStudioId(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    int m_expirationInSeconds;
    bool m_expirationInSecondsHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_studioId;
    bool m_studioIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
