/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/SortArtifactsBy.h>
#include <aws/sagemaker/model/SortOrder.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListArtifactsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListArtifactsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListArtifacts"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A filter that returns only artifacts with the specified source URI.</p>
     */
    inline const Aws::String& GetSourceUri() const{ return m_sourceUri; }
    inline bool SourceUriHasBeenSet() const { return m_sourceUriHasBeenSet; }
    inline void SetSourceUri(const Aws::String& value) { m_sourceUriHasBeenSet = true; m_sourceUri = value; }
    inline void SetSourceUri(Aws::String&& value) { m_sourceUriHasBeenSet = true; m_sourceUri = std::move(value); }
    inline void SetSourceUri(const char* value) { m_sourceUriHasBeenSet = true; m_sourceUri.assign(value); }
    inline ListArtifactsRequest& WithSourceUri(const Aws::String& value) { SetSourceUri(value); return *this;}
    inline ListArtifactsRequest& WithSourceUri(Aws::String&& value) { SetSourceUri(std::move(value)); return *this;}
    inline ListArtifactsRequest& WithSourceUri(const char* value) { SetSourceUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only artifacts of the specified type.</p>
     */
    inline const Aws::String& GetArtifactType() const{ return m_artifactType; }
    inline bool ArtifactTypeHasBeenSet() const { return m_artifactTypeHasBeenSet; }
    inline void SetArtifactType(const Aws::String& value) { m_artifactTypeHasBeenSet = true; m_artifactType = value; }
    inline void SetArtifactType(Aws::String&& value) { m_artifactTypeHasBeenSet = true; m_artifactType = std::move(value); }
    inline void SetArtifactType(const char* value) { m_artifactTypeHasBeenSet = true; m_artifactType.assign(value); }
    inline ListArtifactsRequest& WithArtifactType(const Aws::String& value) { SetArtifactType(value); return *this;}
    inline ListArtifactsRequest& WithArtifactType(Aws::String&& value) { SetArtifactType(std::move(value)); return *this;}
    inline ListArtifactsRequest& WithArtifactType(const char* value) { SetArtifactType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only artifacts created on or after the specified
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const{ return m_createdAfter; }
    inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }
    inline void SetCreatedAfter(const Aws::Utils::DateTime& value) { m_createdAfterHasBeenSet = true; m_createdAfter = value; }
    inline void SetCreatedAfter(Aws::Utils::DateTime&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = std::move(value); }
    inline ListArtifactsRequest& WithCreatedAfter(const Aws::Utils::DateTime& value) { SetCreatedAfter(value); return *this;}
    inline ListArtifactsRequest& WithCreatedAfter(Aws::Utils::DateTime&& value) { SetCreatedAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only artifacts created on or before the specified
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const{ return m_createdBefore; }
    inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }
    inline void SetCreatedBefore(const Aws::Utils::DateTime& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = value; }
    inline void SetCreatedBefore(Aws::Utils::DateTime&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = std::move(value); }
    inline ListArtifactsRequest& WithCreatedBefore(const Aws::Utils::DateTime& value) { SetCreatedBefore(value); return *this;}
    inline ListArtifactsRequest& WithCreatedBefore(Aws::Utils::DateTime&& value) { SetCreatedBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The property used to sort results. The default value is
     * <code>CreationTime</code>.</p>
     */
    inline const SortArtifactsBy& GetSortBy() const{ return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(const SortArtifactsBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline void SetSortBy(SortArtifactsBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }
    inline ListArtifactsRequest& WithSortBy(const SortArtifactsBy& value) { SetSortBy(value); return *this;}
    inline ListArtifactsRequest& WithSortBy(SortArtifactsBy&& value) { SetSortBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort order. The default value is <code>Descending</code>.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }
    inline ListArtifactsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}
    inline ListArtifactsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the previous call to <code>ListArtifacts</code> didn't return the full set
     * of artifacts, the call returns a token for getting the next set of
     * artifacts.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListArtifactsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListArtifactsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListArtifactsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of artifacts to return in the response. The default value
     * is 10.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListArtifactsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_sourceUri;
    bool m_sourceUriHasBeenSet = false;

    Aws::String m_artifactType;
    bool m_artifactTypeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAfter;
    bool m_createdAfterHasBeenSet = false;

    Aws::Utils::DateTime m_createdBefore;
    bool m_createdBeforeHasBeenSet = false;

    SortArtifactsBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
