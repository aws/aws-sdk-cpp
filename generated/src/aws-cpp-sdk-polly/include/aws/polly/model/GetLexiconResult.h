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
    AWS_POLLY_API GetLexiconResult();
    AWS_POLLY_API GetLexiconResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_POLLY_API GetLexiconResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lexicon object that provides name and the string content of the lexicon. </p>
     */
    inline const Lexicon& GetLexicon() const{ return m_lexicon; }
    inline void SetLexicon(const Lexicon& value) { m_lexicon = value; }
    inline void SetLexicon(Lexicon&& value) { m_lexicon = std::move(value); }
    inline GetLexiconResult& WithLexicon(const Lexicon& value) { SetLexicon(value); return *this;}
    inline GetLexiconResult& WithLexicon(Lexicon&& value) { SetLexicon(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata of the lexicon, including phonetic alphabetic used, language code,
     * lexicon ARN, number of lexemes defined in the lexicon, and size of lexicon in
     * bytes.</p>
     */
    inline const LexiconAttributes& GetLexiconAttributes() const{ return m_lexiconAttributes; }
    inline void SetLexiconAttributes(const LexiconAttributes& value) { m_lexiconAttributes = value; }
    inline void SetLexiconAttributes(LexiconAttributes&& value) { m_lexiconAttributes = std::move(value); }
    inline GetLexiconResult& WithLexiconAttributes(const LexiconAttributes& value) { SetLexiconAttributes(value); return *this;}
    inline GetLexiconResult& WithLexiconAttributes(LexiconAttributes&& value) { SetLexiconAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetLexiconResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetLexiconResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetLexiconResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Lexicon m_lexicon;

    LexiconAttributes m_lexiconAttributes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws
