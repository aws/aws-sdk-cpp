/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/RecipeSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Personalize
{
namespace Model
{
  class ListRecipesResult
  {
  public:
    AWS_PERSONALIZE_API ListRecipesResult() = default;
    AWS_PERSONALIZE_API ListRecipesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API ListRecipesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of available recipes.</p>
     */
    inline const Aws::Vector<RecipeSummary>& GetRecipes() const { return m_recipes; }
    template<typename RecipesT = Aws::Vector<RecipeSummary>>
    void SetRecipes(RecipesT&& value) { m_recipesHasBeenSet = true; m_recipes = std::forward<RecipesT>(value); }
    template<typename RecipesT = Aws::Vector<RecipeSummary>>
    ListRecipesResult& WithRecipes(RecipesT&& value) { SetRecipes(std::forward<RecipesT>(value)); return *this;}
    template<typename RecipesT = RecipeSummary>
    ListRecipesResult& AddRecipes(RecipesT&& value) { m_recipesHasBeenSet = true; m_recipes.emplace_back(std::forward<RecipesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token for getting the next set of recipes.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRecipesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRecipesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RecipeSummary> m_recipes;
    bool m_recipesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
