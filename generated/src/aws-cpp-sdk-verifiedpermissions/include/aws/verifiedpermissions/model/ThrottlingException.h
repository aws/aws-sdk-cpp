﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
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
namespace VerifiedPermissions
{
namespace Model
{

  /**
   * <p>The request failed because it exceeded a throttling quota.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/ThrottlingException">AWS
   * API Reference</a></p>
   */
  class ThrottlingException
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API ThrottlingException();
    AWS_VERIFIEDPERMISSIONS_API ThrottlingException(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API ThrottlingException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline ThrottlingException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline ThrottlingException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline ThrottlingException& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code for the Amazon Web Service that owns the quota.</p>
     */
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }
    inline ThrottlingException& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}
    inline ThrottlingException& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}
    inline ThrottlingException& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quota code recognized by the Amazon Web Services Service Quotas
     * service.</p>
     */
    inline const Aws::String& GetQuotaCode() const{ return m_quotaCode; }
    inline bool QuotaCodeHasBeenSet() const { return m_quotaCodeHasBeenSet; }
    inline void SetQuotaCode(const Aws::String& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = value; }
    inline void SetQuotaCode(Aws::String&& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = std::move(value); }
    inline void SetQuotaCode(const char* value) { m_quotaCodeHasBeenSet = true; m_quotaCode.assign(value); }
    inline ThrottlingException& WithQuotaCode(const Aws::String& value) { SetQuotaCode(value); return *this;}
    inline ThrottlingException& WithQuotaCode(Aws::String&& value) { SetQuotaCode(std::move(value)); return *this;}
    inline ThrottlingException& WithQuotaCode(const char* value) { SetQuotaCode(value); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;

    Aws::String m_quotaCode;
    bool m_quotaCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
