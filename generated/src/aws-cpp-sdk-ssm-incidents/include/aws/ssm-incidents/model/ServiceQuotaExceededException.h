/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-incidents/model/ResourceType.h>
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
   * <p>Request would cause a service quota to be exceeded.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/ServiceQuotaExceededException">AWS
   * API Reference</a></p>
   */
  class ServiceQuotaExceededException
  {
  public:
    AWS_SSMINCIDENTS_API ServiceQuotaExceededException();
    AWS_SSMINCIDENTS_API ServiceQuotaExceededException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API ServiceQuotaExceededException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ServiceQuotaExceededException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ServiceQuotaExceededException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ServiceQuotaExceededException& WithMessage(const char* value) { SetMessage(value); return *this;}


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
    inline ServiceQuotaExceededException& WithQuotaCode(const Aws::String& value) { SetQuotaCode(value); return *this;}

    /**
     * <p>Originating quota code</p>
     */
    inline ServiceQuotaExceededException& WithQuotaCode(Aws::String&& value) { SetQuotaCode(std::move(value)); return *this;}

    /**
     * <p>Originating quota code</p>
     */
    inline ServiceQuotaExceededException& WithQuotaCode(const char* value) { SetQuotaCode(value); return *this;}


    /**
     * <p>The identifier for the requested resource</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }

    /**
     * <p>The identifier for the requested resource</p>
     */
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }

    /**
     * <p>The identifier for the requested resource</p>
     */
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }

    /**
     * <p>The identifier for the requested resource</p>
     */
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }

    /**
     * <p>The identifier for the requested resource</p>
     */
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }

    /**
     * <p>The identifier for the requested resource</p>
     */
    inline ServiceQuotaExceededException& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}

    /**
     * <p>The identifier for the requested resource</p>
     */
    inline ServiceQuotaExceededException& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for the requested resource</p>
     */
    inline ServiceQuotaExceededException& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}


    /**
     * <p>The resource type</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type</p>
     */
    inline ServiceQuotaExceededException& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type</p>
     */
    inline ServiceQuotaExceededException& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


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
    inline ServiceQuotaExceededException& WithServiceCode(const ServiceCode& value) { SetServiceCode(value); return *this;}

    /**
     * <p>Originating service code</p>
     */
    inline ServiceQuotaExceededException& WithServiceCode(ServiceCode&& value) { SetServiceCode(std::move(value)); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_quotaCode;
    bool m_quotaCodeHasBeenSet = false;

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    ServiceCode m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
