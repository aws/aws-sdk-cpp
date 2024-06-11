﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/Recipe.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeRecipeResult
  {
  public:
    AWS_PERSONALIZE_API DescribeRecipeResult();
    AWS_PERSONALIZE_API DescribeRecipeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API DescribeRecipeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that describes the recipe.</p>
     */
    inline const Recipe& GetRecipe() const{ return m_recipe; }
    inline void SetRecipe(const Recipe& value) { m_recipe = value; }
    inline void SetRecipe(Recipe&& value) { m_recipe = std::move(value); }
    inline DescribeRecipeResult& WithRecipe(const Recipe& value) { SetRecipe(value); return *this;}
    inline DescribeRecipeResult& WithRecipe(Recipe&& value) { SetRecipe(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeRecipeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeRecipeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeRecipeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Recipe m_recipe;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
