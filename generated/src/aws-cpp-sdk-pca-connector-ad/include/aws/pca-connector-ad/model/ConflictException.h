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
   * <p>This request cannot be completed for one of the following reasons because the
   * requested resource was being concurrently modified by another
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/ConflictException">AWS
   * API Reference</a></p>
   */
  class ConflictException
  {
  public:
    AWS_PCACONNECTORAD_API ConflictException();
    AWS_PCACONNECTORAD_API ConflictException(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API ConflictException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ConflictException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ConflictException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ConflictException& WithMessage(const char* value) { SetMessage(value); return *this;}


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
    inline ConflictException& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services resource.</p>
     */
    inline ConflictException& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services resource.</p>
     */
    inline ConflictException& WithResourceId(const char* value) { SetResourceId(value); return *this;}


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
    inline ConflictException& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type, which can be one of <code>Connector</code>,
     * <code>Template</code>, <code>TemplateGroupAccessControlEntry</code>,
     * <code>ServicePrincipalName</code>, or <code>DirectoryRegistration</code>.</p>
     */
    inline ConflictException& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The resource type, which can be one of <code>Connector</code>,
     * <code>Template</code>, <code>TemplateGroupAccessControlEntry</code>,
     * <code>ServicePrincipalName</code>, or <code>DirectoryRegistration</code>.</p>
     */
    inline ConflictException& WithResourceType(const char* value) { SetResourceType(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
