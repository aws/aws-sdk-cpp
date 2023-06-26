/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mobile/Mobile_EXPORTS.h>
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
namespace Mobile
{
namespace Model
{

  /**
   * <p> Too many requests have been received for this AWS account in too short a
   * time. The request should be retried after some time delay. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/TooManyRequestsException">AWS
   * API Reference</a></p>
   */
  class TooManyRequestsException
  {
  public:
    AWS_MOBILE_API TooManyRequestsException();
    AWS_MOBILE_API TooManyRequestsException(Aws::Utils::Json::JsonView jsonValue);
    AWS_MOBILE_API TooManyRequestsException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MOBILE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetRetryAfterSeconds() const{ return m_retryAfterSeconds; }

    
    inline bool RetryAfterSecondsHasBeenSet() const { return m_retryAfterSecondsHasBeenSet; }

    
    inline void SetRetryAfterSeconds(const Aws::String& value) { m_retryAfterSecondsHasBeenSet = true; m_retryAfterSeconds = value; }

    
    inline void SetRetryAfterSeconds(Aws::String&& value) { m_retryAfterSecondsHasBeenSet = true; m_retryAfterSeconds = std::move(value); }

    
    inline void SetRetryAfterSeconds(const char* value) { m_retryAfterSecondsHasBeenSet = true; m_retryAfterSeconds.assign(value); }

    
    inline TooManyRequestsException& WithRetryAfterSeconds(const Aws::String& value) { SetRetryAfterSeconds(value); return *this;}

    
    inline TooManyRequestsException& WithRetryAfterSeconds(Aws::String&& value) { SetRetryAfterSeconds(std::move(value)); return *this;}

    
    inline TooManyRequestsException& WithRetryAfterSeconds(const char* value) { SetRetryAfterSeconds(value); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline TooManyRequestsException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline TooManyRequestsException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline TooManyRequestsException& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_retryAfterSeconds;
    bool m_retryAfterSecondsHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Mobile
} // namespace Aws
