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
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/MethodNotAllowedException">AWS
   * API Reference</a></p>
   */
  class MethodNotAllowedException
  {
  public:
    AWS_PINPOINT_API MethodNotAllowedException();
    AWS_PINPOINT_API MethodNotAllowedException(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API MethodNotAllowedException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The message that's returned from the API.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message that's returned from the API.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The message that's returned from the API.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message that's returned from the API.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The message that's returned from the API.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The message that's returned from the API.</p>
     */
    inline MethodNotAllowedException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message that's returned from the API.</p>
     */
    inline MethodNotAllowedException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The message that's returned from the API.</p>
     */
    inline MethodNotAllowedException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The unique identifier for the request or response.</p>
     */
    inline const Aws::String& GetRequestID() const{ return m_requestID; }

    /**
     * <p>The unique identifier for the request or response.</p>
     */
    inline bool RequestIDHasBeenSet() const { return m_requestIDHasBeenSet; }

    /**
     * <p>The unique identifier for the request or response.</p>
     */
    inline void SetRequestID(const Aws::String& value) { m_requestIDHasBeenSet = true; m_requestID = value; }

    /**
     * <p>The unique identifier for the request or response.</p>
     */
    inline void SetRequestID(Aws::String&& value) { m_requestIDHasBeenSet = true; m_requestID = std::move(value); }

    /**
     * <p>The unique identifier for the request or response.</p>
     */
    inline void SetRequestID(const char* value) { m_requestIDHasBeenSet = true; m_requestID.assign(value); }

    /**
     * <p>The unique identifier for the request or response.</p>
     */
    inline MethodNotAllowedException& WithRequestID(const Aws::String& value) { SetRequestID(value); return *this;}

    /**
     * <p>The unique identifier for the request or response.</p>
     */
    inline MethodNotAllowedException& WithRequestID(Aws::String&& value) { SetRequestID(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the request or response.</p>
     */
    inline MethodNotAllowedException& WithRequestID(const char* value) { SetRequestID(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_requestID;
    bool m_requestIDHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
