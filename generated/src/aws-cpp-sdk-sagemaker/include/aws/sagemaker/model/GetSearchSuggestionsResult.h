/**
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
    AWS_SAGEMAKER_API GetSearchSuggestionsResult() = default;
    AWS_SAGEMAKER_API GetSearchSuggestionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API GetSearchSuggestionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of property names for a <code>Resource</code> that match a
     * <code>SuggestionQuery</code>.</p>
     */
    inline const Aws::Vector<PropertyNameSuggestion>& GetPropertyNameSuggestions() const { return m_propertyNameSuggestions; }
    template<typename PropertyNameSuggestionsT = Aws::Vector<PropertyNameSuggestion>>
    void SetPropertyNameSuggestions(PropertyNameSuggestionsT&& value) { m_propertyNameSuggestionsHasBeenSet = true; m_propertyNameSuggestions = std::forward<PropertyNameSuggestionsT>(value); }
    template<typename PropertyNameSuggestionsT = Aws::Vector<PropertyNameSuggestion>>
    GetSearchSuggestionsResult& WithPropertyNameSuggestions(PropertyNameSuggestionsT&& value) { SetPropertyNameSuggestions(std::forward<PropertyNameSuggestionsT>(value)); return *this;}
    template<typename PropertyNameSuggestionsT = PropertyNameSuggestion>
    GetSearchSuggestionsResult& AddPropertyNameSuggestions(PropertyNameSuggestionsT&& value) { m_propertyNameSuggestionsHasBeenSet = true; m_propertyNameSuggestions.emplace_back(std::forward<PropertyNameSuggestionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSearchSuggestionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PropertyNameSuggestion> m_propertyNameSuggestions;
    bool m_propertyNameSuggestionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
