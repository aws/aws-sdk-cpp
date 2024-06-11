﻿/**
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
  class DeleteStreamingImageRequest : public NimbleStudioRequest
  {
  public:
    AWS_NIMBLESTUDIO_API DeleteStreamingImageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteStreamingImage"; }

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
    inline DeleteStreamingImageRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline DeleteStreamingImageRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline DeleteStreamingImageRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The streaming image ID.</p>
     */
    inline const Aws::String& GetStreamingImageId() const{ return m_streamingImageId; }
    inline bool StreamingImageIdHasBeenSet() const { return m_streamingImageIdHasBeenSet; }
    inline void SetStreamingImageId(const Aws::String& value) { m_streamingImageIdHasBeenSet = true; m_streamingImageId = value; }
    inline void SetStreamingImageId(Aws::String&& value) { m_streamingImageIdHasBeenSet = true; m_streamingImageId = std::move(value); }
    inline void SetStreamingImageId(const char* value) { m_streamingImageIdHasBeenSet = true; m_streamingImageId.assign(value); }
    inline DeleteStreamingImageRequest& WithStreamingImageId(const Aws::String& value) { SetStreamingImageId(value); return *this;}
    inline DeleteStreamingImageRequest& WithStreamingImageId(Aws::String&& value) { SetStreamingImageId(std::move(value)); return *this;}
    inline DeleteStreamingImageRequest& WithStreamingImageId(const char* value) { SetStreamingImageId(value); return *this;}
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
    inline DeleteStreamingImageRequest& WithStudioId(const Aws::String& value) { SetStudioId(value); return *this;}
    inline DeleteStreamingImageRequest& WithStudioId(Aws::String&& value) { SetStudioId(std::move(value)); return *this;}
    inline DeleteStreamingImageRequest& WithStudioId(const char* value) { SetStudioId(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_streamingImageId;
    bool m_streamingImageIdHasBeenSet = false;

    Aws::String m_studioId;
    bool m_studioIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
