/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/servicecatalog-appregistry/AppRegistryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog-appregistry/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog-appregistry/model/AssociationOption.h>
#include <utility>

namespace Aws
{
namespace AppRegistry
{
namespace Model
{

  /**
   */
  class AssociateResourceRequest : public AppRegistryRequest
  {
  public:
    AWS_APPREGISTRY_API AssociateResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateResource"; }

    AWS_APPREGISTRY_API Aws::String SerializePayload() const override;


    /**
     * <p> The name, ID, or ARN of the application. </p>
     */
    inline const Aws::String& GetApplication() const{ return m_application; }

    /**
     * <p> The name, ID, or ARN of the application. </p>
     */
    inline bool ApplicationHasBeenSet() const { return m_applicationHasBeenSet; }

    /**
     * <p> The name, ID, or ARN of the application. </p>
     */
    inline void SetApplication(const Aws::String& value) { m_applicationHasBeenSet = true; m_application = value; }

    /**
     * <p> The name, ID, or ARN of the application. </p>
     */
    inline void SetApplication(Aws::String&& value) { m_applicationHasBeenSet = true; m_application = std::move(value); }

    /**
     * <p> The name, ID, or ARN of the application. </p>
     */
    inline void SetApplication(const char* value) { m_applicationHasBeenSet = true; m_application.assign(value); }

    /**
     * <p> The name, ID, or ARN of the application. </p>
     */
    inline AssociateResourceRequest& WithApplication(const Aws::String& value) { SetApplication(value); return *this;}

    /**
     * <p> The name, ID, or ARN of the application. </p>
     */
    inline AssociateResourceRequest& WithApplication(Aws::String&& value) { SetApplication(std::move(value)); return *this;}

    /**
     * <p> The name, ID, or ARN of the application. </p>
     */
    inline AssociateResourceRequest& WithApplication(const char* value) { SetApplication(value); return *this;}


    /**
     * <p>The type of resource of which the application will be associated.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource of which the application will be associated.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resource of which the application will be associated.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource of which the application will be associated.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource of which the application will be associated.</p>
     */
    inline AssociateResourceRequest& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource of which the application will be associated.</p>
     */
    inline AssociateResourceRequest& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The name or ID of the resource of which the application will be
     * associated.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }

    /**
     * <p>The name or ID of the resource of which the application will be
     * associated.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>The name or ID of the resource of which the application will be
     * associated.</p>
     */
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The name or ID of the resource of which the application will be
     * associated.</p>
     */
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The name or ID of the resource of which the application will be
     * associated.</p>
     */
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }

    /**
     * <p>The name or ID of the resource of which the application will be
     * associated.</p>
     */
    inline AssociateResourceRequest& WithResource(const Aws::String& value) { SetResource(value); return *this;}

    /**
     * <p>The name or ID of the resource of which the application will be
     * associated.</p>
     */
    inline AssociateResourceRequest& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}

    /**
     * <p>The name or ID of the resource of which the application will be
     * associated.</p>
     */
    inline AssociateResourceRequest& WithResource(const char* value) { SetResource(value); return *this;}


    /**
     * <p> Determines whether an application tag is applied or skipped. </p>
     */
    inline const Aws::Vector<AssociationOption>& GetOptions() const{ return m_options; }

    /**
     * <p> Determines whether an application tag is applied or skipped. </p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p> Determines whether an application tag is applied or skipped. </p>
     */
    inline void SetOptions(const Aws::Vector<AssociationOption>& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p> Determines whether an application tag is applied or skipped. </p>
     */
    inline void SetOptions(Aws::Vector<AssociationOption>&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p> Determines whether an application tag is applied or skipped. </p>
     */
    inline AssociateResourceRequest& WithOptions(const Aws::Vector<AssociationOption>& value) { SetOptions(value); return *this;}

    /**
     * <p> Determines whether an application tag is applied or skipped. </p>
     */
    inline AssociateResourceRequest& WithOptions(Aws::Vector<AssociationOption>&& value) { SetOptions(std::move(value)); return *this;}

    /**
     * <p> Determines whether an application tag is applied or skipped. </p>
     */
    inline AssociateResourceRequest& AddOptions(const AssociationOption& value) { m_optionsHasBeenSet = true; m_options.push_back(value); return *this; }

    /**
     * <p> Determines whether an application tag is applied or skipped. </p>
     */
    inline AssociateResourceRequest& AddOptions(AssociationOption&& value) { m_optionsHasBeenSet = true; m_options.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_application;
    bool m_applicationHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;

    Aws::Vector<AssociationOption> m_options;
    bool m_optionsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
