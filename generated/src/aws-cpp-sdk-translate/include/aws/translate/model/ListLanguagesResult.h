/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/translate/model/DisplayLanguageCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/translate/model/Language.h>
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
  class ListLanguagesResult
  {
  public:
    AWS_TRANSLATE_API ListLanguagesResult() = default;
    AWS_TRANSLATE_API ListLanguagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSLATE_API ListLanguagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of supported languages.</p>
     */
    inline const Aws::Vector<Language>& GetLanguages() const { return m_languages; }
    template<typename LanguagesT = Aws::Vector<Language>>
    void SetLanguages(LanguagesT&& value) { m_languagesHasBeenSet = true; m_languages = std::forward<LanguagesT>(value); }
    template<typename LanguagesT = Aws::Vector<Language>>
    ListLanguagesResult& WithLanguages(LanguagesT&& value) { SetLanguages(std::forward<LanguagesT>(value)); return *this;}
    template<typename LanguagesT = Language>
    ListLanguagesResult& AddLanguages(LanguagesT&& value) { m_languagesHasBeenSet = true; m_languages.emplace_back(std::forward<LanguagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The language code passed in with the request.</p>
     */
    inline DisplayLanguageCode GetDisplayLanguageCode() const { return m_displayLanguageCode; }
    inline void SetDisplayLanguageCode(DisplayLanguageCode value) { m_displayLanguageCodeHasBeenSet = true; m_displayLanguageCode = value; }
    inline ListLanguagesResult& WithDisplayLanguageCode(DisplayLanguageCode value) { SetDisplayLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> If the response does not include all remaining results, use the NextToken in
     * the next request to fetch the next group of supported languages.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLanguagesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLanguagesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Language> m_languages;
    bool m_languagesHasBeenSet = false;

    DisplayLanguageCode m_displayLanguageCode{DisplayLanguageCode::NOT_SET};
    bool m_displayLanguageCodeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
