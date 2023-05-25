/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-incidents/model/ServiceCode.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>The request was denied due to request throttling.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/ThrottlingException">AWS
   * API Reference</a></p>
   */
  class ThrottlingException
  {
  public:
    AWS_SSMINCIDENTS_API ThrottlingException();
    AWS_SSMINCIDENTS_API ThrottlingException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API ThrottlingException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ThrottlingException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ThrottlingException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ThrottlingException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Originating quota code</p>
     */
    inline const Aws::String& GetQuotaCode() const{ return m_quotaCode; }

    /**
     * <p>Originating quota code</p>
     */
    inline bool QuotaCodeHasBeenSet() const { return m_quotaCodeHasBeenSet; }

    /**
     * <p>Originating quota code</p>
     */
    inline void SetQuotaCode(const Aws::String& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = value; }

    /**
     * <p>Originating quota code</p>
     */
    inline void SetQuotaCode(Aws::String&& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = std::move(value); }

    /**
     * <p>Originating quota code</p>
     */
    inline void SetQuotaCode(const char* value) { m_quotaCodeHasBeenSet = true; m_quotaCode.assign(value); }

    /**
     * <p>Originating quota code</p>
     */
    inline ThrottlingException& WithQuotaCode(const Aws::String& value) { SetQuotaCode(value); return *this;}

    /**
     * <p>Originating quota code</p>
     */
    inline ThrottlingException& WithQuotaCode(Aws::String&& value) { SetQuotaCode(std::move(value)); return *this;}

    /**
     * <p>Originating quota code</p>
     */
    inline ThrottlingException& WithQuotaCode(const char* value) { SetQuotaCode(value); return *this;}


    /**
     * <p>Originating service code</p>
     */
    inline const ServiceCode& GetServiceCode() const{ return m_serviceCode; }

    /**
     * <p>Originating service code</p>
     */
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }

    /**
     * <p>Originating service code</p>
     */
    inline void SetServiceCode(const ServiceCode& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }

    /**
     * <p>Originating service code</p>
     */
    inline void SetServiceCode(ServiceCode&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }

    /**
     * <p>Originating service code</p>
     */
    inline ThrottlingException& WithServiceCode(const ServiceCode& value) { SetServiceCode(value); return *this;}

    /**
     * <p>Originating service code</p>
     */
    inline ThrottlingException& WithServiceCode(ServiceCode&& value) { SetServiceCode(std::move(value)); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_quotaCode;
    bool m_quotaCodeHasBeenSet = false;

    ServiceCode m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
