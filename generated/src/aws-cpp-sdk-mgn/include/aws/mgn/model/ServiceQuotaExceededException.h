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
   * <p>The request could not be completed because its exceeded the service
   * quota.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ServiceQuotaExceededException">AWS
   * API Reference</a></p>
   */
  class ServiceQuotaExceededException
  {
  public:
    AWS_MGN_API ServiceQuotaExceededException();
    AWS_MGN_API ServiceQuotaExceededException(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API ServiceQuotaExceededException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetCode() const{ return m_code; }

    
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    
    inline ServiceQuotaExceededException& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    
    inline ServiceQuotaExceededException& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    
    inline ServiceQuotaExceededException& WithCode(const char* value) { SetCode(value); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ServiceQuotaExceededException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ServiceQuotaExceededException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ServiceQuotaExceededException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Exceeded the service quota code.</p>
     */
    inline const Aws::String& GetQuotaCode() const{ return m_quotaCode; }

    /**
     * <p>Exceeded the service quota code.</p>
     */
    inline bool QuotaCodeHasBeenSet() const { return m_quotaCodeHasBeenSet; }

    /**
     * <p>Exceeded the service quota code.</p>
     */
    inline void SetQuotaCode(const Aws::String& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = value; }

    /**
     * <p>Exceeded the service quota code.</p>
     */
    inline void SetQuotaCode(Aws::String&& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = std::move(value); }

    /**
     * <p>Exceeded the service quota code.</p>
     */
    inline void SetQuotaCode(const char* value) { m_quotaCodeHasBeenSet = true; m_quotaCode.assign(value); }

    /**
     * <p>Exceeded the service quota code.</p>
     */
    inline ServiceQuotaExceededException& WithQuotaCode(const Aws::String& value) { SetQuotaCode(value); return *this;}

    /**
     * <p>Exceeded the service quota code.</p>
     */
    inline ServiceQuotaExceededException& WithQuotaCode(Aws::String&& value) { SetQuotaCode(std::move(value)); return *this;}

    /**
     * <p>Exceeded the service quota code.</p>
     */
    inline ServiceQuotaExceededException& WithQuotaCode(const char* value) { SetQuotaCode(value); return *this;}


    /**
     * <p>Exceeded the service quota value.</p>
     */
    inline int GetQuotaValue() const{ return m_quotaValue; }

    /**
     * <p>Exceeded the service quota value.</p>
     */
    inline bool QuotaValueHasBeenSet() const { return m_quotaValueHasBeenSet; }

    /**
     * <p>Exceeded the service quota value.</p>
     */
    inline void SetQuotaValue(int value) { m_quotaValueHasBeenSet = true; m_quotaValue = value; }

    /**
     * <p>Exceeded the service quota value.</p>
     */
    inline ServiceQuotaExceededException& WithQuotaValue(int value) { SetQuotaValue(value); return *this;}


    /**
     * <p>Exceeded the service quota resource ID.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>Exceeded the service quota resource ID.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>Exceeded the service quota resource ID.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>Exceeded the service quota resource ID.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>Exceeded the service quota resource ID.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>Exceeded the service quota resource ID.</p>
     */
    inline ServiceQuotaExceededException& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>Exceeded the service quota resource ID.</p>
     */
    inline ServiceQuotaExceededException& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>Exceeded the service quota resource ID.</p>
     */
    inline ServiceQuotaExceededException& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>Exceeded the service quota resource type.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Exceeded the service quota resource type.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Exceeded the service quota resource type.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Exceeded the service quota resource type.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Exceeded the service quota resource type.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>Exceeded the service quota resource type.</p>
     */
    inline ServiceQuotaExceededException& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>Exceeded the service quota resource type.</p>
     */
    inline ServiceQuotaExceededException& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>Exceeded the service quota resource type.</p>
     */
    inline ServiceQuotaExceededException& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>Exceeded the service quota service code.</p>
     */
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }

    /**
     * <p>Exceeded the service quota service code.</p>
     */
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }

    /**
     * <p>Exceeded the service quota service code.</p>
     */
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }

    /**
     * <p>Exceeded the service quota service code.</p>
     */
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }

    /**
     * <p>Exceeded the service quota service code.</p>
     */
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }

    /**
     * <p>Exceeded the service quota service code.</p>
     */
    inline ServiceQuotaExceededException& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}

    /**
     * <p>Exceeded the service quota service code.</p>
     */
    inline ServiceQuotaExceededException& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}

    /**
     * <p>Exceeded the service quota service code.</p>
     */
    inline ServiceQuotaExceededException& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_quotaCode;
    bool m_quotaCodeHasBeenSet = false;

    int m_quotaValue;
    bool m_quotaValueHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
