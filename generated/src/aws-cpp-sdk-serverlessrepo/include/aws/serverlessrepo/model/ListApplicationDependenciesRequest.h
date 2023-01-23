/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/serverlessrepo/ServerlessApplicationRepositoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ServerlessApplicationRepository
{
namespace Model
{

  /**
   */
  class ListApplicationDependenciesRequest : public ServerlessApplicationRepositoryRequest
  {
  public:
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API ListApplicationDependenciesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListApplicationDependencies"; }

    AWS_SERVERLESSAPPLICATIONREPOSITORY_API Aws::String SerializePayload() const override;

    AWS_SERVERLESSAPPLICATIONREPOSITORY_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline ListApplicationDependenciesRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline ListApplicationDependenciesRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline ListApplicationDependenciesRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The total number of items to return.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The total number of items to return.</p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>The total number of items to return.</p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The total number of items to return.</p>
     */
    inline ListApplicationDependenciesRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}


    /**
     * <p>A token to specify where to start paginating.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to specify where to start paginating.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token to specify where to start paginating.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token to specify where to start paginating.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token to specify where to start paginating.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token to specify where to start paginating.</p>
     */
    inline ListApplicationDependenciesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to specify where to start paginating.</p>
     */
    inline ListApplicationDependenciesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to specify where to start paginating.</p>
     */
    inline ListApplicationDependenciesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The semantic version of the application to get.</p>
     */
    inline const Aws::String& GetSemanticVersion() const{ return m_semanticVersion; }

    /**
     * <p>The semantic version of the application to get.</p>
     */
    inline bool SemanticVersionHasBeenSet() const { return m_semanticVersionHasBeenSet; }

    /**
     * <p>The semantic version of the application to get.</p>
     */
    inline void SetSemanticVersion(const Aws::String& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = value; }

    /**
     * <p>The semantic version of the application to get.</p>
     */
    inline void SetSemanticVersion(Aws::String&& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = std::move(value); }

    /**
     * <p>The semantic version of the application to get.</p>
     */
    inline void SetSemanticVersion(const char* value) { m_semanticVersionHasBeenSet = true; m_semanticVersion.assign(value); }

    /**
     * <p>The semantic version of the application to get.</p>
     */
    inline ListApplicationDependenciesRequest& WithSemanticVersion(const Aws::String& value) { SetSemanticVersion(value); return *this;}

    /**
     * <p>The semantic version of the application to get.</p>
     */
    inline ListApplicationDependenciesRequest& WithSemanticVersion(Aws::String&& value) { SetSemanticVersion(std::move(value)); return *this;}

    /**
     * <p>The semantic version of the application to get.</p>
     */
    inline ListApplicationDependenciesRequest& WithSemanticVersion(const char* value) { SetSemanticVersion(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    int m_maxItems;
    bool m_maxItemsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_semanticVersion;
    bool m_semanticVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
