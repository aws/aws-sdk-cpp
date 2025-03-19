/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/translate/model/TextTranslationJobProperties.h>
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
namespace Translate
{
namespace Model
{
  class ListTextTranslationJobsResult
  {
  public:
    AWS_TRANSLATE_API ListTextTranslationJobsResult() = default;
    AWS_TRANSLATE_API ListTextTranslationJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSLATE_API ListTextTranslationJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline const Aws::Vector<TextTranslationJobProperties>& GetTextTranslationJobPropertiesList() const { return m_textTranslationJobPropertiesList; }
    template<typename TextTranslationJobPropertiesListT = Aws::Vector<TextTranslationJobProperties>>
    void SetTextTranslationJobPropertiesList(TextTranslationJobPropertiesListT&& value) { m_textTranslationJobPropertiesListHasBeenSet = true; m_textTranslationJobPropertiesList = std::forward<TextTranslationJobPropertiesListT>(value); }
    template<typename TextTranslationJobPropertiesListT = Aws::Vector<TextTranslationJobProperties>>
    ListTextTranslationJobsResult& WithTextTranslationJobPropertiesList(TextTranslationJobPropertiesListT&& value) { SetTextTranslationJobPropertiesList(std::forward<TextTranslationJobPropertiesListT>(value)); return *this;}
    template<typename TextTranslationJobPropertiesListT = TextTranslationJobProperties>
    ListTextTranslationJobsResult& AddTextTranslationJobPropertiesList(TextTranslationJobPropertiesListT&& value) { m_textTranslationJobPropertiesListHasBeenSet = true; m_textTranslationJobPropertiesList.emplace_back(std::forward<TextTranslationJobPropertiesListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTextTranslationJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTextTranslationJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TextTranslationJobProperties> m_textTranslationJobPropertiesList;
    bool m_textTranslationJobPropertiesListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
