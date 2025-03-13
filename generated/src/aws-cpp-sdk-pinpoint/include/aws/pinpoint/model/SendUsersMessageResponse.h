/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pinpoint/model/EndpointMessageResult.h>
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
   * <p>Provides information about which users and endpoints a message was sent
   * to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SendUsersMessageResponse">AWS
   * API Reference</a></p>
   */
  class SendUsersMessageResponse
  {
  public:
    AWS_PINPOINT_API SendUsersMessageResponse() = default;
    AWS_PINPOINT_API SendUsersMessageResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API SendUsersMessageResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    SendUsersMessageResponse& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier that was assigned to the message request.</p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SendUsersMessageResponse& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that indicates which endpoints the message was sent to, for each
     * user. The object lists user IDs and, for each user ID, provides the endpoint IDs
     * that the message was sent to. For each endpoint ID, it provides an
     * EndpointMessageResult object.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, EndpointMessageResult>>& GetResult() const { return m_result; }
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
    template<typename ResultT = Aws::Map<Aws::String, Aws::Map<Aws::String, EndpointMessageResult>>>
    void SetResult(ResultT&& value) { m_resultHasBeenSet = true; m_result = std::forward<ResultT>(value); }
    template<typename ResultT = Aws::Map<Aws::String, Aws::Map<Aws::String, EndpointMessageResult>>>
    SendUsersMessageResponse& WithResult(ResultT&& value) { SetResult(std::forward<ResultT>(value)); return *this;}
    template<typename ResultKeyT = Aws::String, typename ResultValueT = Aws::Map<Aws::String, EndpointMessageResult>>
    SendUsersMessageResponse& AddResult(ResultKeyT&& key, ResultValueT&& value) {
      m_resultHasBeenSet = true; m_result.emplace(std::forward<ResultKeyT>(key), std::forward<ResultValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Map<Aws::String, EndpointMessageResult>> m_result;
    bool m_resultHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
