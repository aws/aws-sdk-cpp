/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/route53/model/TagResourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type containing information about a request for a list of the tags
   * that are associated with an individual resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListTagsForResourceRequest">AWS
   * API Reference</a></p>
   */
  class ListTagsForResourceRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API ListTagsForResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTagsForResource"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;


    /**
     * <p>The type of the resource.</p> <ul> <li> <p>The resource type for health
     * checks is <code>healthcheck</code>.</p> </li> <li> <p>The resource type for
     * hosted zones is <code>hostedzone</code>.</p> </li> </ul>
     */
    inline const TagResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of the resource.</p> <ul> <li> <p>The resource type for health
     * checks is <code>healthcheck</code>.</p> </li> <li> <p>The resource type for
     * hosted zones is <code>hostedzone</code>.</p> </li> </ul>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of the resource.</p> <ul> <li> <p>The resource type for health
     * checks is <code>healthcheck</code>.</p> </li> <li> <p>The resource type for
     * hosted zones is <code>hostedzone</code>.</p> </li> </ul>
     */
    inline void SetResourceType(const TagResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of the resource.</p> <ul> <li> <p>The resource type for health
     * checks is <code>healthcheck</code>.</p> </li> <li> <p>The resource type for
     * hosted zones is <code>hostedzone</code>.</p> </li> </ul>
     */
    inline void SetResourceType(TagResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of the resource.</p> <ul> <li> <p>The resource type for health
     * checks is <code>healthcheck</code>.</p> </li> <li> <p>The resource type for
     * hosted zones is <code>hostedzone</code>.</p> </li> </ul>
     */
    inline ListTagsForResourceRequest& WithResourceType(const TagResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of the resource.</p> <ul> <li> <p>The resource type for health
     * checks is <code>healthcheck</code>.</p> </li> <li> <p>The resource type for
     * hosted zones is <code>hostedzone</code>.</p> </li> </ul>
     */
    inline ListTagsForResourceRequest& WithResourceType(TagResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The ID of the resource for which you want to retrieve tags.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the resource for which you want to retrieve tags.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the resource for which you want to retrieve tags.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the resource for which you want to retrieve tags.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the resource for which you want to retrieve tags.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the resource for which you want to retrieve tags.</p>
     */
    inline ListTagsForResourceRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the resource for which you want to retrieve tags.</p>
     */
    inline ListTagsForResourceRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource for which you want to retrieve tags.</p>
     */
    inline ListTagsForResourceRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}

  private:

    TagResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
