/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class GetFaceLivenessSessionResultsRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API GetFaceLivenessSessionResultsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFaceLivenessSessionResults"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique 128-bit UUID. This is used to uniquely identify the session and also
     * acts as an idempotency token for all operations associated with the session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>A unique 128-bit UUID. This is used to uniquely identify the session and also
     * acts as an idempotency token for all operations associated with the session.</p>
     */
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }

    /**
     * <p>A unique 128-bit UUID. This is used to uniquely identify the session and also
     * acts as an idempotency token for all operations associated with the session.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    /**
     * <p>A unique 128-bit UUID. This is used to uniquely identify the session and also
     * acts as an idempotency token for all operations associated with the session.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }

    /**
     * <p>A unique 128-bit UUID. This is used to uniquely identify the session and also
     * acts as an idempotency token for all operations associated with the session.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    /**
     * <p>A unique 128-bit UUID. This is used to uniquely identify the session and also
     * acts as an idempotency token for all operations associated with the session.</p>
     */
    inline GetFaceLivenessSessionResultsRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>A unique 128-bit UUID. This is used to uniquely identify the session and also
     * acts as an idempotency token for all operations associated with the session.</p>
     */
    inline GetFaceLivenessSessionResultsRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>A unique 128-bit UUID. This is used to uniquely identify the session and also
     * acts as an idempotency token for all operations associated with the session.</p>
     */
    inline GetFaceLivenessSessionResultsRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}

  private:

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
