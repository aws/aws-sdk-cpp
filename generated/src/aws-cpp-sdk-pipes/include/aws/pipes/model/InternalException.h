/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>This exception occurs due to unexpected causes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/InternalException">AWS
   * API Reference</a></p>
   */
  class InternalException
  {
  public:
    AWS_PIPES_API InternalException();
    AWS_PIPES_API InternalException(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API InternalException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline InternalException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline InternalException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline InternalException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The number of seconds to wait before retrying the action that caused the
     * exception.</p>
     */
    inline int GetRetryAfterSeconds() const{ return m_retryAfterSeconds; }

    /**
     * <p>The number of seconds to wait before retrying the action that caused the
     * exception.</p>
     */
    inline bool RetryAfterSecondsHasBeenSet() const { return m_retryAfterSecondsHasBeenSet; }

    /**
     * <p>The number of seconds to wait before retrying the action that caused the
     * exception.</p>
     */
    inline void SetRetryAfterSeconds(int value) { m_retryAfterSecondsHasBeenSet = true; m_retryAfterSeconds = value; }

    /**
     * <p>The number of seconds to wait before retrying the action that caused the
     * exception.</p>
     */
    inline InternalException& WithRetryAfterSeconds(int value) { SetRetryAfterSeconds(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    int m_retryAfterSeconds;
    bool m_retryAfterSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
