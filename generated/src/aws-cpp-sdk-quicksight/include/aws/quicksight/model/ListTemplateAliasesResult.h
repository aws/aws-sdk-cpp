/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/TemplateAlias.h>
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
namespace QuickSight
{
namespace Model
{
  class ListTemplateAliasesResult
  {
  public:
    AWS_QUICKSIGHT_API ListTemplateAliasesResult();
    AWS_QUICKSIGHT_API ListTemplateAliasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListTemplateAliasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure containing the list of the template's aliases.</p>
     */
    inline const Aws::Vector<TemplateAlias>& GetTemplateAliasList() const{ return m_templateAliasList; }
    inline void SetTemplateAliasList(const Aws::Vector<TemplateAlias>& value) { m_templateAliasList = value; }
    inline void SetTemplateAliasList(Aws::Vector<TemplateAlias>&& value) { m_templateAliasList = std::move(value); }
    inline ListTemplateAliasesResult& WithTemplateAliasList(const Aws::Vector<TemplateAlias>& value) { SetTemplateAliasList(value); return *this;}
    inline ListTemplateAliasesResult& WithTemplateAliasList(Aws::Vector<TemplateAlias>&& value) { SetTemplateAliasList(std::move(value)); return *this;}
    inline ListTemplateAliasesResult& AddTemplateAliasList(const TemplateAlias& value) { m_templateAliasList.push_back(value); return *this; }
    inline ListTemplateAliasesResult& AddTemplateAliasList(TemplateAlias&& value) { m_templateAliasList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline ListTemplateAliasesResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTemplateAliasesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTemplateAliasesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTemplateAliasesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListTemplateAliasesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTemplateAliasesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTemplateAliasesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::Vector<TemplateAlias> m_templateAliasList;

    int m_status;

    Aws::String m_requestId;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
