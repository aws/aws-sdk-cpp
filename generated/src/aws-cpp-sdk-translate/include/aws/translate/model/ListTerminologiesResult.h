/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/translate/model/TerminologyProperties.h>
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
  class ListTerminologiesResult
  {
  public:
    AWS_TRANSLATE_API ListTerminologiesResult() = default;
    AWS_TRANSLATE_API ListTerminologiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSLATE_API ListTerminologiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The properties list of the custom terminologies returned on the list
     * request.</p>
     */
    inline const Aws::Vector<TerminologyProperties>& GetTerminologyPropertiesList() const { return m_terminologyPropertiesList; }
    template<typename TerminologyPropertiesListT = Aws::Vector<TerminologyProperties>>
    void SetTerminologyPropertiesList(TerminologyPropertiesListT&& value) { m_terminologyPropertiesListHasBeenSet = true; m_terminologyPropertiesList = std::forward<TerminologyPropertiesListT>(value); }
    template<typename TerminologyPropertiesListT = Aws::Vector<TerminologyProperties>>
    ListTerminologiesResult& WithTerminologyPropertiesList(TerminologyPropertiesListT&& value) { SetTerminologyPropertiesList(std::forward<TerminologyPropertiesListT>(value)); return *this;}
    template<typename TerminologyPropertiesListT = TerminologyProperties>
    ListTerminologiesResult& AddTerminologyPropertiesList(TerminologyPropertiesListT&& value) { m_terminologyPropertiesListHasBeenSet = true; m_terminologyPropertiesList.emplace_back(std::forward<TerminologyPropertiesListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> If the response to the ListTerminologies was truncated, the NextToken
     * fetches the next group of custom terminologies.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTerminologiesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTerminologiesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TerminologyProperties> m_terminologyPropertiesList;
    bool m_terminologyPropertiesListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
