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
    AWS_PINPOINT_API MessageResponse() = default;
    AWS_PINPOINT_API MessageResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API MessageResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the application that was used to send the
     * message.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    MessageResponse& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map that contains a multipart response for each address that the message
     * was sent to. In the map, the endpoint ID is the key and the result is the
     * value.</p>
     */
    inline const Aws::Map<Aws::String, EndpointMessageResult>& GetEndpointResult() const { return m_endpointResult; }
    inline bool EndpointResultHasBeenSet() const { return m_endpointResultHasBeenSet; }
    template<typename EndpointResultT = Aws::Map<Aws::String, EndpointMessageResult>>
    void SetEndpointResult(EndpointResultT&& value) { m_endpointResultHasBeenSet = true; m_endpointResult = std::forward<EndpointResultT>(value); }
    template<typename EndpointResultT = Aws::Map<Aws::String, EndpointMessageResult>>
    MessageResponse& WithEndpointResult(EndpointResultT&& value) { SetEndpointResult(std::forward<EndpointResultT>(value)); return *this;}
    template<typename EndpointResultKeyT = Aws::String, typename EndpointResultValueT = EndpointMessageResult>
    MessageResponse& AddEndpointResult(EndpointResultKeyT&& key, EndpointResultValueT&& value) {
      m_endpointResultHasBeenSet = true; m_endpointResult.emplace(std::forward<EndpointResultKeyT>(key), std::forward<EndpointResultValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The identifier for the original request that the message was delivered
     * for.</p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    MessageResponse& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map that contains a multipart response for each address (email address,
     * phone number, or push notification token) that the message was sent to. In the
     * map, the address is the key and the result is the value.</p>
     */
    inline const Aws::Map<Aws::String, MessageResult>& GetResult() const { return m_result; }
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
    template<typename ResultT = Aws::Map<Aws::String, MessageResult>>
    void SetResult(ResultT&& value) { m_resultHasBeenSet = true; m_result = std::forward<ResultT>(value); }
    template<typename ResultT = Aws::Map<Aws::String, MessageResult>>
    MessageResponse& WithResult(ResultT&& value) { SetResult(std::forward<ResultT>(value)); return *this;}
    template<typename ResultKeyT = Aws::String, typename ResultValueT = MessageResult>
    MessageResponse& AddResult(ResultKeyT&& key, ResultValueT&& value) {
      m_resultHasBeenSet = true; m_result.emplace(std::forward<ResultKeyT>(key), std::forward<ResultValueT>(value)); return *this;
    }
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
