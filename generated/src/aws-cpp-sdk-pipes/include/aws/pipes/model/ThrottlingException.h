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
   * <p>An action was throttled.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/ThrottlingException">AWS
   * API Reference</a></p>
   */
  class ThrottlingException
  {
  public:
    AWS_PIPES_API ThrottlingException();
    AWS_PIPES_API ThrottlingException(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API ThrottlingException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ThrottlingException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ThrottlingException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ThrottlingException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The identifier of the quota that caused the exception.</p>
     */
    inline const Aws::String& GetQuotaCode() const{ return m_quotaCode; }

    /**
     * <p>The identifier of the quota that caused the exception.</p>
     */
    inline bool QuotaCodeHasBeenSet() const { return m_quotaCodeHasBeenSet; }

    /**
     * <p>The identifier of the quota that caused the exception.</p>
     */
    inline void SetQuotaCode(const Aws::String& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = value; }

    /**
     * <p>The identifier of the quota that caused the exception.</p>
     */
    inline void SetQuotaCode(Aws::String&& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = std::move(value); }

    /**
     * <p>The identifier of the quota that caused the exception.</p>
     */
    inline void SetQuotaCode(const char* value) { m_quotaCodeHasBeenSet = true; m_quotaCode.assign(value); }

    /**
     * <p>The identifier of the quota that caused the exception.</p>
     */
    inline ThrottlingException& WithQuotaCode(const Aws::String& value) { SetQuotaCode(value); return *this;}

    /**
     * <p>The identifier of the quota that caused the exception.</p>
     */
    inline ThrottlingException& WithQuotaCode(Aws::String&& value) { SetQuotaCode(std::move(value)); return *this;}

    /**
     * <p>The identifier of the quota that caused the exception.</p>
     */
    inline ThrottlingException& WithQuotaCode(const char* value) { SetQuotaCode(value); return *this;}


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
    inline ThrottlingException& WithRetryAfterSeconds(int value) { SetRetryAfterSeconds(value); return *this;}


    /**
     * <p>The identifier of the service that caused the exception.</p>
     */
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }

    /**
     * <p>The identifier of the service that caused the exception.</p>
     */
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }

    /**
     * <p>The identifier of the service that caused the exception.</p>
     */
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }

    /**
     * <p>The identifier of the service that caused the exception.</p>
     */
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }

    /**
     * <p>The identifier of the service that caused the exception.</p>
     */
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }

    /**
     * <p>The identifier of the service that caused the exception.</p>
     */
    inline ThrottlingException& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}

    /**
     * <p>The identifier of the service that caused the exception.</p>
     */
    inline ThrottlingException& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}

    /**
     * <p>The identifier of the service that caused the exception.</p>
     */
    inline ThrottlingException& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_quotaCode;
    bool m_quotaCodeHasBeenSet = false;

    int m_retryAfterSeconds;
    bool m_retryAfterSecondsHasBeenSet = false;

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
