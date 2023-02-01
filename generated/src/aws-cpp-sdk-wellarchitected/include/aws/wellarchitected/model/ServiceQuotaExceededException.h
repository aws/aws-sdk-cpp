/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
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
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>The user has reached their resource quota.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ServiceQuotaExceededException">AWS
   * API Reference</a></p>
   */
  class ServiceQuotaExceededException
  {
  public:
    AWS_WELLARCHITECTED_API ServiceQuotaExceededException();
    AWS_WELLARCHITECTED_API ServiceQuotaExceededException(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API ServiceQuotaExceededException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ServiceQuotaExceededException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ServiceQuotaExceededException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ServiceQuotaExceededException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    
    inline ServiceQuotaExceededException& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    
    inline ServiceQuotaExceededException& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    
    inline ServiceQuotaExceededException& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    
    inline ServiceQuotaExceededException& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    
    inline ServiceQuotaExceededException& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    
    inline ServiceQuotaExceededException& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    
    inline const Aws::String& GetQuotaCode() const{ return m_quotaCode; }

    
    inline bool QuotaCodeHasBeenSet() const { return m_quotaCodeHasBeenSet; }

    
    inline void SetQuotaCode(const Aws::String& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = value; }

    
    inline void SetQuotaCode(Aws::String&& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = std::move(value); }

    
    inline void SetQuotaCode(const char* value) { m_quotaCodeHasBeenSet = true; m_quotaCode.assign(value); }

    
    inline ServiceQuotaExceededException& WithQuotaCode(const Aws::String& value) { SetQuotaCode(value); return *this;}

    
    inline ServiceQuotaExceededException& WithQuotaCode(Aws::String&& value) { SetQuotaCode(std::move(value)); return *this;}

    
    inline ServiceQuotaExceededException& WithQuotaCode(const char* value) { SetQuotaCode(value); return *this;}


    
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }

    
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }

    
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }

    
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }

    
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }

    
    inline ServiceQuotaExceededException& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}

    
    inline ServiceQuotaExceededException& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}

    
    inline ServiceQuotaExceededException& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_quotaCode;
    bool m_quotaCodeHasBeenSet = false;

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
