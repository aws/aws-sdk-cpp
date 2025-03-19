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
#include <aws/servicecatalog-appregistry/model/ResourceItemStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace AppRegistry
{
namespace Model
{

  /**
   */
  class GetAssociatedResourceRequest : public AppRegistryRequest
  {
  public:
    AWS_APPREGISTRY_API GetAssociatedResourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAssociatedResource"; }

    AWS_APPREGISTRY_API Aws::String SerializePayload() const override;

    AWS_APPREGISTRY_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p> The name, ID, or ARN of the application. </p>
     */
    inline const Aws::String& GetApplication() const { return m_application; }
    inline bool ApplicationHasBeenSet() const { return m_applicationHasBeenSet; }
    template<typename ApplicationT = Aws::String>
    void SetApplication(ApplicationT&& value) { m_applicationHasBeenSet = true; m_application = std::forward<ApplicationT>(value); }
    template<typename ApplicationT = Aws::String>
    GetAssociatedResourceRequest& WithApplication(ApplicationT&& value) { SetApplication(std::forward<ApplicationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource associated with the application.</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline GetAssociatedResourceRequest& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ID of the resource associated with the application.</p>
     */
    inline const Aws::String& GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    template<typename ResourceT = Aws::String>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = Aws::String>
    GetAssociatedResourceRequest& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A unique pagination token for each page of results. Make the call again with
     * the returned token to retrieve the next page of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetAssociatedResourceRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> States whether an application tag is applied, not applied, in the process of
     * being applied, or skipped. </p>
     */
    inline const Aws::Vector<ResourceItemStatus>& GetResourceTagStatus() const { return m_resourceTagStatus; }
    inline bool ResourceTagStatusHasBeenSet() const { return m_resourceTagStatusHasBeenSet; }
    template<typename ResourceTagStatusT = Aws::Vector<ResourceItemStatus>>
    void SetResourceTagStatus(ResourceTagStatusT&& value) { m_resourceTagStatusHasBeenSet = true; m_resourceTagStatus = std::forward<ResourceTagStatusT>(value); }
    template<typename ResourceTagStatusT = Aws::Vector<ResourceItemStatus>>
    GetAssociatedResourceRequest& WithResourceTagStatus(ResourceTagStatusT&& value) { SetResourceTagStatus(std::forward<ResourceTagStatusT>(value)); return *this;}
    inline GetAssociatedResourceRequest& AddResourceTagStatus(ResourceItemStatus value) { m_resourceTagStatusHasBeenSet = true; m_resourceTagStatus.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The maximum number of results to return. If the parameter is omitted, it
     * defaults to 25. The value is optional. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetAssociatedResourceRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_application;
    bool m_applicationHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ResourceItemStatus> m_resourceTagStatus;
    bool m_resourceTagStatusHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
