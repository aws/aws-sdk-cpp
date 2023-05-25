/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/personalize/model/RecipeProvider.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/Domain.h>
#include <utility>

namespace Aws
{
namespace Personalize
{
namespace Model
{

  /**
   */
  class ListRecipesRequest : public PersonalizeRequest
  {
  public:
    AWS_PERSONALIZE_API ListRecipesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRecipes"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The default is <code>SERVICE</code>.</p>
     */
    inline const RecipeProvider& GetRecipeProvider() const{ return m_recipeProvider; }

    /**
     * <p>The default is <code>SERVICE</code>.</p>
     */
    inline bool RecipeProviderHasBeenSet() const { return m_recipeProviderHasBeenSet; }

    /**
     * <p>The default is <code>SERVICE</code>.</p>
     */
    inline void SetRecipeProvider(const RecipeProvider& value) { m_recipeProviderHasBeenSet = true; m_recipeProvider = value; }

    /**
     * <p>The default is <code>SERVICE</code>.</p>
     */
    inline void SetRecipeProvider(RecipeProvider&& value) { m_recipeProviderHasBeenSet = true; m_recipeProvider = std::move(value); }

    /**
     * <p>The default is <code>SERVICE</code>.</p>
     */
    inline ListRecipesRequest& WithRecipeProvider(const RecipeProvider& value) { SetRecipeProvider(value); return *this;}

    /**
     * <p>The default is <code>SERVICE</code>.</p>
     */
    inline ListRecipesRequest& WithRecipeProvider(RecipeProvider&& value) { SetRecipeProvider(std::move(value)); return *this;}


    /**
     * <p>A token returned from the previous call to <code>ListRecipes</code> for
     * getting the next set of recipes (if they exist).</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token returned from the previous call to <code>ListRecipes</code> for
     * getting the next set of recipes (if they exist).</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token returned from the previous call to <code>ListRecipes</code> for
     * getting the next set of recipes (if they exist).</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token returned from the previous call to <code>ListRecipes</code> for
     * getting the next set of recipes (if they exist).</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token returned from the previous call to <code>ListRecipes</code> for
     * getting the next set of recipes (if they exist).</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token returned from the previous call to <code>ListRecipes</code> for
     * getting the next set of recipes (if they exist).</p>
     */
    inline ListRecipesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token returned from the previous call to <code>ListRecipes</code> for
     * getting the next set of recipes (if they exist).</p>
     */
    inline ListRecipesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token returned from the previous call to <code>ListRecipes</code> for
     * getting the next set of recipes (if they exist).</p>
     */
    inline ListRecipesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of recipes to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of recipes to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of recipes to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of recipes to return.</p>
     */
    inline ListRecipesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> Filters returned recipes by domain for a Domain dataset group. Only recipes
     * (Domain dataset group use cases) for this domain are included in the response.
     * If you don't specify a domain, all recipes are returned. </p>
     */
    inline const Domain& GetDomain() const{ return m_domain; }

    /**
     * <p> Filters returned recipes by domain for a Domain dataset group. Only recipes
     * (Domain dataset group use cases) for this domain are included in the response.
     * If you don't specify a domain, all recipes are returned. </p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p> Filters returned recipes by domain for a Domain dataset group. Only recipes
     * (Domain dataset group use cases) for this domain are included in the response.
     * If you don't specify a domain, all recipes are returned. </p>
     */
    inline void SetDomain(const Domain& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p> Filters returned recipes by domain for a Domain dataset group. Only recipes
     * (Domain dataset group use cases) for this domain are included in the response.
     * If you don't specify a domain, all recipes are returned. </p>
     */
    inline void SetDomain(Domain&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p> Filters returned recipes by domain for a Domain dataset group. Only recipes
     * (Domain dataset group use cases) for this domain are included in the response.
     * If you don't specify a domain, all recipes are returned. </p>
     */
    inline ListRecipesRequest& WithDomain(const Domain& value) { SetDomain(value); return *this;}

    /**
     * <p> Filters returned recipes by domain for a Domain dataset group. Only recipes
     * (Domain dataset group use cases) for this domain are included in the response.
     * If you don't specify a domain, all recipes are returned. </p>
     */
    inline ListRecipesRequest& WithDomain(Domain&& value) { SetDomain(std::move(value)); return *this;}

  private:

    RecipeProvider m_recipeProvider;
    bool m_recipeProviderHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Domain m_domain;
    bool m_domainHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
