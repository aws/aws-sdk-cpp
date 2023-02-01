/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>The server encountered an unexpected condition that prevented it from
   * fulfilling the request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/InternalServerException">AWS
   * API Reference</a></p>
   */
  class InternalServerException
  {
  public:
    AWS_MGN_API InternalServerException();
    AWS_MGN_API InternalServerException(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API InternalServerException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline InternalServerException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline InternalServerException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline InternalServerException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The server encountered an unexpected condition that prevented it from
     * fulfilling the request. The request will be retried again after x seconds.</p>
     */
    inline long long GetRetryAfterSeconds() const{ return m_retryAfterSeconds; }

    /**
     * <p>The server encountered an unexpected condition that prevented it from
     * fulfilling the request. The request will be retried again after x seconds.</p>
     */
    inline bool RetryAfterSecondsHasBeenSet() const { return m_retryAfterSecondsHasBeenSet; }

    /**
     * <p>The server encountered an unexpected condition that prevented it from
     * fulfilling the request. The request will be retried again after x seconds.</p>
     */
    inline void SetRetryAfterSeconds(long long value) { m_retryAfterSecondsHasBeenSet = true; m_retryAfterSeconds = value; }

    /**
     * <p>The server encountered an unexpected condition that prevented it from
     * fulfilling the request. The request will be retried again after x seconds.</p>
     */
    inline InternalServerException& WithRetryAfterSeconds(long long value) { SetRetryAfterSeconds(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    long long m_retryAfterSeconds;
    bool m_retryAfterSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
