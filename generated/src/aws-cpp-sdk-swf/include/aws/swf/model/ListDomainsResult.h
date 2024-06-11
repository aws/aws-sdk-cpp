﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/DomainInfo.h>
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
namespace SWF
{
namespace Model
{
  /**
   * <p>Contains a paginated collection of DomainInfo structures.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DomainInfos">AWS API
   * Reference</a></p>
   */
  class ListDomainsResult
  {
  public:
    AWS_SWF_API ListDomainsResult();
    AWS_SWF_API ListDomainsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SWF_API ListDomainsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of DomainInfo structures.</p>
     */
    inline const Aws::Vector<DomainInfo>& GetDomainInfos() const{ return m_domainInfos; }
    inline void SetDomainInfos(const Aws::Vector<DomainInfo>& value) { m_domainInfos = value; }
    inline void SetDomainInfos(Aws::Vector<DomainInfo>&& value) { m_domainInfos = std::move(value); }
    inline ListDomainsResult& WithDomainInfos(const Aws::Vector<DomainInfo>& value) { SetDomainInfos(value); return *this;}
    inline ListDomainsResult& WithDomainInfos(Aws::Vector<DomainInfo>&& value) { SetDomainInfos(std::move(value)); return *this;}
    inline ListDomainsResult& AddDomainInfos(const DomainInfo& value) { m_domainInfos.push_back(value); return *this; }
    inline ListDomainsResult& AddDomainInfos(DomainInfo&& value) { m_domainInfos.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }
    inline ListDomainsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline ListDomainsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline ListDomainsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDomainsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDomainsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDomainsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DomainInfo> m_domainInfos;

    Aws::String m_nextPageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
