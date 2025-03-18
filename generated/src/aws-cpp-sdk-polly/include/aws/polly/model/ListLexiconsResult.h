/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/polly/model/LexiconDescription.h>
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
  class ListLexiconsResult
  {
  public:
    AWS_POLLY_API ListLexiconsResult() = default;
    AWS_POLLY_API ListLexiconsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_POLLY_API ListLexiconsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of lexicon names and attributes.</p>
     */
    inline const Aws::Vector<LexiconDescription>& GetLexicons() const { return m_lexicons; }
    template<typename LexiconsT = Aws::Vector<LexiconDescription>>
    void SetLexicons(LexiconsT&& value) { m_lexiconsHasBeenSet = true; m_lexicons = std::forward<LexiconsT>(value); }
    template<typename LexiconsT = Aws::Vector<LexiconDescription>>
    ListLexiconsResult& WithLexicons(LexiconsT&& value) { SetLexicons(std::forward<LexiconsT>(value)); return *this;}
    template<typename LexiconsT = LexiconDescription>
    ListLexiconsResult& AddLexicons(LexiconsT&& value) { m_lexiconsHasBeenSet = true; m_lexicons.emplace_back(std::forward<LexiconsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to use in the next request to continue the listing of
     * lexicons. <code>NextToken</code> is returned only if the response is
     * truncated.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLexiconsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLexiconsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LexiconDescription> m_lexicons;
    bool m_lexiconsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws
