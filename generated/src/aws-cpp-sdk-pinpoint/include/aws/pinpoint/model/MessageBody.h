/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides information about an API request or response.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/MessageBody">AWS
   * API Reference</a></p>
   */
  class MessageBody
  {
  public:
    AWS_PINPOINT_API MessageBody() = default;
    AWS_PINPOINT_API MessageBody(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API MessageBody& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The message that's returned from the API.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    MessageBody& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the request or response.</p>
     */
    inline const Aws::String& GetRequestID() const { return m_requestID; }
    inline bool RequestIDHasBeenSet() const { return m_requestIDHasBeenSet; }
    template<typename RequestIDT = Aws::String>
    void SetRequestID(RequestIDT&& value) { m_requestIDHasBeenSet = true; m_requestID = std::forward<RequestIDT>(value); }
    template<typename RequestIDT = Aws::String>
    MessageBody& WithRequestID(RequestIDT&& value) { SetRequestID(std::forward<RequestIDT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_requestID;
    bool m_requestIDHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
