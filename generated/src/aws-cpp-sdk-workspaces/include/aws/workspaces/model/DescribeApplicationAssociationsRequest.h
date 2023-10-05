/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/ApplicationAssociatedResourceType.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class DescribeApplicationAssociationsRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API DescribeApplicationAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeApplicationAssociations"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The maximum number of associations to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of associations to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of associations to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of associations to return.</p>
     */
    inline DescribeApplicationAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline DescribeApplicationAssociationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline DescribeApplicationAssociationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline DescribeApplicationAssociationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The identifier of the specified application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The identifier of the specified application.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The identifier of the specified application.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The identifier of the specified application.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The identifier of the specified application.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The identifier of the specified application.</p>
     */
    inline DescribeApplicationAssociationsRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The identifier of the specified application.</p>
     */
    inline DescribeApplicationAssociationsRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the specified application.</p>
     */
    inline DescribeApplicationAssociationsRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The resource type of the associated resources.</p>
     */
    inline const Aws::Vector<ApplicationAssociatedResourceType>& GetAssociatedResourceTypes() const{ return m_associatedResourceTypes; }

    /**
     * <p>The resource type of the associated resources.</p>
     */
    inline bool AssociatedResourceTypesHasBeenSet() const { return m_associatedResourceTypesHasBeenSet; }

    /**
     * <p>The resource type of the associated resources.</p>
     */
    inline void SetAssociatedResourceTypes(const Aws::Vector<ApplicationAssociatedResourceType>& value) { m_associatedResourceTypesHasBeenSet = true; m_associatedResourceTypes = value; }

    /**
     * <p>The resource type of the associated resources.</p>
     */
    inline void SetAssociatedResourceTypes(Aws::Vector<ApplicationAssociatedResourceType>&& value) { m_associatedResourceTypesHasBeenSet = true; m_associatedResourceTypes = std::move(value); }

    /**
     * <p>The resource type of the associated resources.</p>
     */
    inline DescribeApplicationAssociationsRequest& WithAssociatedResourceTypes(const Aws::Vector<ApplicationAssociatedResourceType>& value) { SetAssociatedResourceTypes(value); return *this;}

    /**
     * <p>The resource type of the associated resources.</p>
     */
    inline DescribeApplicationAssociationsRequest& WithAssociatedResourceTypes(Aws::Vector<ApplicationAssociatedResourceType>&& value) { SetAssociatedResourceTypes(std::move(value)); return *this;}

    /**
     * <p>The resource type of the associated resources.</p>
     */
    inline DescribeApplicationAssociationsRequest& AddAssociatedResourceTypes(const ApplicationAssociatedResourceType& value) { m_associatedResourceTypesHasBeenSet = true; m_associatedResourceTypes.push_back(value); return *this; }

    /**
     * <p>The resource type of the associated resources.</p>
     */
    inline DescribeApplicationAssociationsRequest& AddAssociatedResourceTypes(ApplicationAssociatedResourceType&& value) { m_associatedResourceTypesHasBeenSet = true; m_associatedResourceTypes.push_back(std::move(value)); return *this; }

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::Vector<ApplicationAssociatedResourceType> m_associatedResourceTypes;
    bool m_associatedResourceTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
