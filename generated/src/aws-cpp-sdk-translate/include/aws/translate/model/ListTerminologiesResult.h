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
    AWS_TRANSLATE_API ListTerminologiesResult();
    AWS_TRANSLATE_API ListTerminologiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSLATE_API ListTerminologiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The properties list of the custom terminologies returned on the list
     * request.</p>
     */
    inline const Aws::Vector<TerminologyProperties>& GetTerminologyPropertiesList() const{ return m_terminologyPropertiesList; }
    inline void SetTerminologyPropertiesList(const Aws::Vector<TerminologyProperties>& value) { m_terminologyPropertiesList = value; }
    inline void SetTerminologyPropertiesList(Aws::Vector<TerminologyProperties>&& value) { m_terminologyPropertiesList = std::move(value); }
    inline ListTerminologiesResult& WithTerminologyPropertiesList(const Aws::Vector<TerminologyProperties>& value) { SetTerminologyPropertiesList(value); return *this;}
    inline ListTerminologiesResult& WithTerminologyPropertiesList(Aws::Vector<TerminologyProperties>&& value) { SetTerminologyPropertiesList(std::move(value)); return *this;}
    inline ListTerminologiesResult& AddTerminologyPropertiesList(const TerminologyProperties& value) { m_terminologyPropertiesList.push_back(value); return *this; }
    inline ListTerminologiesResult& AddTerminologyPropertiesList(TerminologyProperties&& value) { m_terminologyPropertiesList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> If the response to the ListTerminologies was truncated, the NextToken
     * fetches the next group of custom terminologies.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListTerminologiesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTerminologiesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTerminologiesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTerminologiesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTerminologiesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTerminologiesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TerminologyProperties> m_terminologyPropertiesList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
