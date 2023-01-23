/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/servicecatalog-appregistry/AppRegistryRequest.h>
#include <aws/servicecatalog-appregistry/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppRegistry
{
namespace Model
{

  /**
   */
  class SyncResourceRequest : public AppRegistryRequest
  {
  public:
    AWS_APPREGISTRY_API SyncResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SyncResource"; }

    AWS_APPREGISTRY_API Aws::String SerializePayload() const override;


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
    inline SyncResourceRequest& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource of which the application will be associated.</p>
     */
    inline SyncResourceRequest& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>An entity you can work with and specify with a name or ID. Examples include
     * an Amazon EC2 instance, an Amazon Web Services CloudFormation stack, or an
     * Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }

    /**
     * <p>An entity you can work with and specify with a name or ID. Examples include
     * an Amazon EC2 instance, an Amazon Web Services CloudFormation stack, or an
     * Amazon S3 bucket.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>An entity you can work with and specify with a name or ID. Examples include
     * an Amazon EC2 instance, an Amazon Web Services CloudFormation stack, or an
     * Amazon S3 bucket.</p>
     */
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>An entity you can work with and specify with a name or ID. Examples include
     * an Amazon EC2 instance, an Amazon Web Services CloudFormation stack, or an
     * Amazon S3 bucket.</p>
     */
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>An entity you can work with and specify with a name or ID. Examples include
     * an Amazon EC2 instance, an Amazon Web Services CloudFormation stack, or an
     * Amazon S3 bucket.</p>
     */
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }

    /**
     * <p>An entity you can work with and specify with a name or ID. Examples include
     * an Amazon EC2 instance, an Amazon Web Services CloudFormation stack, or an
     * Amazon S3 bucket.</p>
     */
    inline SyncResourceRequest& WithResource(const Aws::String& value) { SetResource(value); return *this;}

    /**
     * <p>An entity you can work with and specify with a name or ID. Examples include
     * an Amazon EC2 instance, an Amazon Web Services CloudFormation stack, or an
     * Amazon S3 bucket.</p>
     */
    inline SyncResourceRequest& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}

    /**
     * <p>An entity you can work with and specify with a name or ID. Examples include
     * an Amazon EC2 instance, an Amazon Web Services CloudFormation stack, or an
     * Amazon S3 bucket.</p>
     */
    inline SyncResourceRequest& WithResource(const char* value) { SetResource(value); return *this;}

  private:

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
