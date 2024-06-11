/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pinpoint/model/EndpointMessageResult.h>
#include <aws/pinpoint/model/MessageResult.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides information about the results of a request to send a message to an
   * endpoint address.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/MessageResponse">AWS
   * API Reference</a></p>
   */
  class MessageResponse
  {
  public:
    AWS_PINPOINT_API MessageResponse();
    AWS_PINPOINT_API MessageResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API MessageResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the application that was used to send the
     * message.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline MessageResponse& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline MessageResponse& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline MessageResponse& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map that contains a multipart response for each address that the message
     * was sent to. In the map, the endpoint ID is the key and the result is the
     * value.</p>
     */
    inline const Aws::Map<Aws::String, EndpointMessageResult>& GetEndpointResult() const{ return m_endpointResult; }
    inline bool EndpointResultHasBeenSet() const { return m_endpointResultHasBeenSet; }
    inline void SetEndpointResult(const Aws::Map<Aws::String, EndpointMessageResult>& value) { m_endpointResultHasBeenSet = true; m_endpointResult = value; }
    inline void SetEndpointResult(Aws::Map<Aws::String, EndpointMessageResult>&& value) { m_endpointResultHasBeenSet = true; m_endpointResult = std::move(value); }
    inline MessageResponse& WithEndpointResult(const Aws::Map<Aws::String, EndpointMessageResult>& value) { SetEndpointResult(value); return *this;}
    inline MessageResponse& WithEndpointResult(Aws::Map<Aws::String, EndpointMessageResult>&& value) { SetEndpointResult(std::move(value)); return *this;}
    inline MessageResponse& AddEndpointResult(const Aws::String& key, const EndpointMessageResult& value) { m_endpointResultHasBeenSet = true; m_endpointResult.emplace(key, value); return *this; }
    inline MessageResponse& AddEndpointResult(Aws::String&& key, const EndpointMessageResult& value) { m_endpointResultHasBeenSet = true; m_endpointResult.emplace(std::move(key), value); return *this; }
    inline MessageResponse& AddEndpointResult(const Aws::String& key, EndpointMessageResult&& value) { m_endpointResultHasBeenSet = true; m_endpointResult.emplace(key, std::move(value)); return *this; }
    inline MessageResponse& AddEndpointResult(Aws::String&& key, EndpointMessageResult&& value) { m_endpointResultHasBeenSet = true; m_endpointResult.emplace(std::move(key), std::move(value)); return *this; }
    inline MessageResponse& AddEndpointResult(const char* key, EndpointMessageResult&& value) { m_endpointResultHasBeenSet = true; m_endpointResult.emplace(key, std::move(value)); return *this; }
    inline MessageResponse& AddEndpointResult(const char* key, const EndpointMessageResult& value) { m_endpointResultHasBeenSet = true; m_endpointResult.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier for the original request that the message was delivered
     * for.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline MessageResponse& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline MessageResponse& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline MessageResponse& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map that contains a multipart response for each address (email address,
     * phone number, or push notification token) that the message was sent to. In the
     * map, the address is the key and the result is the value.</p>
     */
    inline const Aws::Map<Aws::String, MessageResult>& GetResult() const{ return m_result; }
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
    inline void SetResult(const Aws::Map<Aws::String, MessageResult>& value) { m_resultHasBeenSet = true; m_result = value; }
    inline void SetResult(Aws::Map<Aws::String, MessageResult>&& value) { m_resultHasBeenSet = true; m_result = std::move(value); }
    inline MessageResponse& WithResult(const Aws::Map<Aws::String, MessageResult>& value) { SetResult(value); return *this;}
    inline MessageResponse& WithResult(Aws::Map<Aws::String, MessageResult>&& value) { SetResult(std::move(value)); return *this;}
    inline MessageResponse& AddResult(const Aws::String& key, const MessageResult& value) { m_resultHasBeenSet = true; m_result.emplace(key, value); return *this; }
    inline MessageResponse& AddResult(Aws::String&& key, const MessageResult& value) { m_resultHasBeenSet = true; m_result.emplace(std::move(key), value); return *this; }
    inline MessageResponse& AddResult(const Aws::String& key, MessageResult&& value) { m_resultHasBeenSet = true; m_result.emplace(key, std::move(value)); return *this; }
    inline MessageResponse& AddResult(Aws::String&& key, MessageResult&& value) { m_resultHasBeenSet = true; m_result.emplace(std::move(key), std::move(value)); return *this; }
    inline MessageResponse& AddResult(const char* key, MessageResult&& value) { m_resultHasBeenSet = true; m_result.emplace(key, std::move(value)); return *this; }
    inline MessageResponse& AddResult(const char* key, const MessageResult& value) { m_resultHasBeenSet = true; m_result.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::Map<Aws::String, EndpointMessageResult> m_endpointResult;
    bool m_endpointResultHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::Map<Aws::String, MessageResult> m_result;
    bool m_resultHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
