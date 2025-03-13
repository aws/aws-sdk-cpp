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
    AWS_SAGEMAKER_API GetSearchSuggestionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSearchSuggestions"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the SageMaker resource to search for.</p>
     */
    inline ResourceType GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    inline void SetResource(ResourceType value) { m_resourceHasBeenSet = true; m_resource = value; }
    inline GetSearchSuggestionsRequest& WithResource(ResourceType value) { SetResource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Limits the property names that are included in the response.</p>
     */
    inline const SuggestionQuery& GetSuggestionQuery() const { return m_suggestionQuery; }
    inline bool SuggestionQueryHasBeenSet() const { return m_suggestionQueryHasBeenSet; }
    template<typename SuggestionQueryT = SuggestionQuery>
    void SetSuggestionQuery(SuggestionQueryT&& value) { m_suggestionQueryHasBeenSet = true; m_suggestionQuery = std::forward<SuggestionQueryT>(value); }
    template<typename SuggestionQueryT = SuggestionQuery>
    GetSearchSuggestionsRequest& WithSuggestionQuery(SuggestionQueryT&& value) { SetSuggestionQuery(std::forward<SuggestionQueryT>(value)); return *this;}
    ///@}
  private:

    ResourceType m_resource{ResourceType::NOT_SET};
    bool m_resourceHasBeenSet = false;

    SuggestionQuery m_suggestionQuery;
    bool m_suggestionQueryHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
