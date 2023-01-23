/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/model/ResourceType.h>
#include <aws/sagemaker/model/SuggestionQuery.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class GetSearchSuggestionsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API GetSearchSuggestionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSearchSuggestions"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the Amazon SageMaker resource to search for.</p>
     */
    inline const ResourceType& GetResource() const{ return m_resource; }

    /**
     * <p>The name of the Amazon SageMaker resource to search for.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>The name of the Amazon SageMaker resource to search for.</p>
     */
    inline void SetResource(const ResourceType& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The name of the Amazon SageMaker resource to search for.</p>
     */
    inline void SetResource(ResourceType&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The name of the Amazon SageMaker resource to search for.</p>
     */
    inline GetSearchSuggestionsRequest& WithResource(const ResourceType& value) { SetResource(value); return *this;}

    /**
     * <p>The name of the Amazon SageMaker resource to search for.</p>
     */
    inline GetSearchSuggestionsRequest& WithResource(ResourceType&& value) { SetResource(std::move(value)); return *this;}


    /**
     * <p>Limits the property names that are included in the response.</p>
     */
    inline const SuggestionQuery& GetSuggestionQuery() const{ return m_suggestionQuery; }

    /**
     * <p>Limits the property names that are included in the response.</p>
     */
    inline bool SuggestionQueryHasBeenSet() const { return m_suggestionQueryHasBeenSet; }

    /**
     * <p>Limits the property names that are included in the response.</p>
     */
    inline void SetSuggestionQuery(const SuggestionQuery& value) { m_suggestionQueryHasBeenSet = true; m_suggestionQuery = value; }

    /**
     * <p>Limits the property names that are included in the response.</p>
     */
    inline void SetSuggestionQuery(SuggestionQuery&& value) { m_suggestionQueryHasBeenSet = true; m_suggestionQuery = std::move(value); }

    /**
     * <p>Limits the property names that are included in the response.</p>
     */
    inline GetSearchSuggestionsRequest& WithSuggestionQuery(const SuggestionQuery& value) { SetSuggestionQuery(value); return *this;}

    /**
     * <p>Limits the property names that are included in the response.</p>
     */
    inline GetSearchSuggestionsRequest& WithSuggestionQuery(SuggestionQuery&& value) { SetSuggestionQuery(std::move(value)); return *this;}

  private:

    ResourceType m_resource;
    bool m_resourceHasBeenSet = false;

    SuggestionQuery m_suggestionQuery;
    bool m_suggestionQueryHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
