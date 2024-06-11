/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/servicecatalog-appregistry/AppRegistryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog-appregistry/model/ResourceType.h>
#include <utility>

namespace Aws
{
namespace AppRegistry
{
namespace Model
{

  /**
   */
  class DisassociateResourceRequest : public AppRegistryRequest
  {
  public:
    AWS_APPREGISTRY_API DisassociateResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateResource"; }

    AWS_APPREGISTRY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name or ID of the application.</p>
     */
    inline const Aws::String& GetApplication() const{ return m_application; }
    inline bool ApplicationHasBeenSet() const { return m_applicationHasBeenSet; }
    inline void SetApplication(const Aws::String& value) { m_applicationHasBeenSet = true; m_application = value; }
    inline void SetApplication(Aws::String&& value) { m_applicationHasBeenSet = true; m_application = std::move(value); }
    inline void SetApplication(const char* value) { m_applicationHasBeenSet = true; m_application.assign(value); }
    inline DisassociateResourceRequest& WithApplication(const Aws::String& value) { SetApplication(value); return *this;}
    inline DisassociateResourceRequest& WithApplication(Aws::String&& value) { SetApplication(std::move(value)); return *this;}
    inline DisassociateResourceRequest& WithApplication(const char* value) { SetApplication(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the resource that is being disassociated.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline DisassociateResourceRequest& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline DisassociateResourceRequest& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ID of the resource.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }
    inline DisassociateResourceRequest& WithResource(const Aws::String& value) { SetResource(value); return *this;}
    inline DisassociateResourceRequest& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}
    inline DisassociateResourceRequest& WithResource(const char* value) { SetResource(value); return *this;}
    ///@}
  private:

    Aws::String m_application;
    bool m_applicationHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
