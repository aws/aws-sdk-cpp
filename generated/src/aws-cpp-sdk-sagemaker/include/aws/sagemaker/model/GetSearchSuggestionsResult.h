﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/PropertyNameSuggestion.h>
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
namespace SageMaker
{
namespace Model
{
  class GetSearchSuggestionsResult
  {
  public:
    AWS_SAGEMAKER_API GetSearchSuggestionsResult();
    AWS_SAGEMAKER_API GetSearchSuggestionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API GetSearchSuggestionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of property names for a <code>Resource</code> that match a
     * <code>SuggestionQuery</code>.</p>
     */
    inline const Aws::Vector<PropertyNameSuggestion>& GetPropertyNameSuggestions() const{ return m_propertyNameSuggestions; }

    /**
     * <p>A list of property names for a <code>Resource</code> that match a
     * <code>SuggestionQuery</code>.</p>
     */
    inline void SetPropertyNameSuggestions(const Aws::Vector<PropertyNameSuggestion>& value) { m_propertyNameSuggestions = value; }

    /**
     * <p>A list of property names for a <code>Resource</code> that match a
     * <code>SuggestionQuery</code>.</p>
     */
    inline void SetPropertyNameSuggestions(Aws::Vector<PropertyNameSuggestion>&& value) { m_propertyNameSuggestions = std::move(value); }

    /**
     * <p>A list of property names for a <code>Resource</code> that match a
     * <code>SuggestionQuery</code>.</p>
     */
    inline GetSearchSuggestionsResult& WithPropertyNameSuggestions(const Aws::Vector<PropertyNameSuggestion>& value) { SetPropertyNameSuggestions(value); return *this;}

    /**
     * <p>A list of property names for a <code>Resource</code> that match a
     * <code>SuggestionQuery</code>.</p>
     */
    inline GetSearchSuggestionsResult& WithPropertyNameSuggestions(Aws::Vector<PropertyNameSuggestion>&& value) { SetPropertyNameSuggestions(std::move(value)); return *this;}

    /**
     * <p>A list of property names for a <code>Resource</code> that match a
     * <code>SuggestionQuery</code>.</p>
     */
    inline GetSearchSuggestionsResult& AddPropertyNameSuggestions(const PropertyNameSuggestion& value) { m_propertyNameSuggestions.push_back(value); return *this; }

    /**
     * <p>A list of property names for a <code>Resource</code> that match a
     * <code>SuggestionQuery</code>.</p>
     */
    inline GetSearchSuggestionsResult& AddPropertyNameSuggestions(PropertyNameSuggestion&& value) { m_propertyNameSuggestions.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSearchSuggestionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSearchSuggestionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSearchSuggestionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<PropertyNameSuggestion> m_propertyNameSuggestions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
