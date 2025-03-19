/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/polly/model/Lexicon.h>
#include <aws/polly/model/LexiconAttributes.h>
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
namespace Polly
{
namespace Model
{
  class GetLexiconResult
  {
  public:
    AWS_POLLY_API GetLexiconResult() = default;
    AWS_POLLY_API GetLexiconResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_POLLY_API GetLexiconResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lexicon object that provides name and the string content of the lexicon. </p>
     */
    inline const Lexicon& GetLexicon() const { return m_lexicon; }
    template<typename LexiconT = Lexicon>
    void SetLexicon(LexiconT&& value) { m_lexiconHasBeenSet = true; m_lexicon = std::forward<LexiconT>(value); }
    template<typename LexiconT = Lexicon>
    GetLexiconResult& WithLexicon(LexiconT&& value) { SetLexicon(std::forward<LexiconT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata of the lexicon, including phonetic alphabetic used, language code,
     * lexicon ARN, number of lexemes defined in the lexicon, and size of lexicon in
     * bytes.</p>
     */
    inline const LexiconAttributes& GetLexiconAttributes() const { return m_lexiconAttributes; }
    template<typename LexiconAttributesT = LexiconAttributes>
    void SetLexiconAttributes(LexiconAttributesT&& value) { m_lexiconAttributesHasBeenSet = true; m_lexiconAttributes = std::forward<LexiconAttributesT>(value); }
    template<typename LexiconAttributesT = LexiconAttributes>
    GetLexiconResult& WithLexiconAttributes(LexiconAttributesT&& value) { SetLexiconAttributes(std::forward<LexiconAttributesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetLexiconResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Lexicon m_lexicon;
    bool m_lexiconHasBeenSet = false;

    LexiconAttributes m_lexiconAttributes;
    bool m_lexiconAttributesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws
