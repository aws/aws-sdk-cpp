/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
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
namespace PcaConnectorAd
{
namespace Model
{

  /**
   * <p>Request would cause a service quota to be exceeded.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/ServiceQuotaExceededException">AWS
   * API Reference</a></p>
   */
  class ServiceQuotaExceededException
  {
  public:
    AWS_PCACONNECTORAD_API ServiceQuotaExceededException();
    AWS_PCACONNECTORAD_API ServiceQuotaExceededException(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API ServiceQuotaExceededException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ServiceQuotaExceededException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ServiceQuotaExceededException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ServiceQuotaExceededException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The code associated with the service quota.</p>
     */
    inline const Aws::String& GetQuotaCode() const{ return m_quotaCode; }

    /**
     * <p>The code associated with the service quota.</p>
     */
    inline bool QuotaCodeHasBeenSet() const { return m_quotaCodeHasBeenSet; }

    /**
     * <p>The code associated with the service quota.</p>
     */
    inline void SetQuotaCode(const Aws::String& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = value; }

    /**
     * <p>The code associated with the service quota.</p>
     */
    inline void SetQuotaCode(Aws::String&& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = std::move(value); }

    /**
     * <p>The code associated with the service quota.</p>
     */
    inline void SetQuotaCode(const char* value) { m_quotaCodeHasBeenSet = true; m_quotaCode.assign(value); }

    /**
     * <p>The code associated with the service quota.</p>
     */
    inline ServiceQuotaExceededException& WithQuotaCode(const Aws::String& value) { SetQuotaCode(value); return *this;}

    /**
     * <p>The code associated with the service quota.</p>
     */
    inline ServiceQuotaExceededException& WithQuotaCode(Aws::String&& value) { SetQuotaCode(std::move(value)); return *this;}

    /**
     * <p>The code associated with the service quota.</p>
     */
    inline ServiceQuotaExceededException& WithQuotaCode(const char* value) { SetQuotaCode(value); return *this;}


    /**
     * <p>The identifier of the Amazon Web Services resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The identifier of the Amazon Web Services resource.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Web Services resource.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The identifier of the Amazon Web Services resource.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Web Services resource.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Web Services resource.</p>
     */
    inline ServiceQuotaExceededException& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services resource.</p>
     */
    inline ServiceQuotaExceededException& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services resource.</p>
     */
    inline ServiceQuotaExceededException& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The resource type, which can be one of <code>Connector</code>,
     * <code>Template</code>, <code>TemplateGroupAccessControlEntry</code>,
     * <code>ServicePrincipalName</code>, or <code>DirectoryRegistration</code>.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type, which can be one of <code>Connector</code>,
     * <code>Template</code>, <code>TemplateGroupAccessControlEntry</code>,
     * <code>ServicePrincipalName</code>, or <code>DirectoryRegistration</code>.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type, which can be one of <code>Connector</code>,
     * <code>Template</code>, <code>TemplateGroupAccessControlEntry</code>,
     * <code>ServicePrincipalName</code>, or <code>DirectoryRegistration</code>.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type, which can be one of <code>Connector</code>,
     * <code>Template</code>, <code>TemplateGroupAccessControlEntry</code>,
     * <code>ServicePrincipalName</code>, or <code>DirectoryRegistration</code>.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type, which can be one of <code>Connector</code>,
     * <code>Template</code>, <code>TemplateGroupAccessControlEntry</code>,
     * <code>ServicePrincipalName</code>, or <code>DirectoryRegistration</code>.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The resource type, which can be one of <code>Connector</code>,
     * <code>Template</code>, <code>TemplateGroupAccessControlEntry</code>,
     * <code>ServicePrincipalName</code>, or <code>DirectoryRegistration</code>.</p>
     */
    inline ServiceQuotaExceededException& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type, which can be one of <code>Connector</code>,
     * <code>Template</code>, <code>TemplateGroupAccessControlEntry</code>,
     * <code>ServicePrincipalName</code>, or <code>DirectoryRegistration</code>.</p>
     */
    inline ServiceQuotaExceededException& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The resource type, which can be one of <code>Connector</code>,
     * <code>Template</code>, <code>TemplateGroupAccessControlEntry</code>,
     * <code>ServicePrincipalName</code>, or <code>DirectoryRegistration</code>.</p>
     */
    inline ServiceQuotaExceededException& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>Identifies the originating service.</p>
     */
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }

    /**
     * <p>Identifies the originating service.</p>
     */
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }

    /**
     * <p>Identifies the originating service.</p>
     */
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }

    /**
     * <p>Identifies the originating service.</p>
     */
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }

    /**
     * <p>Identifies the originating service.</p>
     */
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }

    /**
     * <p>Identifies the originating service.</p>
     */
    inline ServiceQuotaExceededException& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}

    /**
     * <p>Identifies the originating service.</p>
     */
    inline ServiceQuotaExceededException& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}

    /**
     * <p>Identifies the originating service.</p>
     */
    inline ServiceQuotaExceededException& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_quotaCode;
    bool m_quotaCodeHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
