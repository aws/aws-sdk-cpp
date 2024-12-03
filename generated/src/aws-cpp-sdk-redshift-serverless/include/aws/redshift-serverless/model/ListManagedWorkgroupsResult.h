/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift-serverless/model/ManagedWorkgroupListItem.h>
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
namespace RedshiftServerless
{
namespace Model
{
  class ListManagedWorkgroupsResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API ListManagedWorkgroupsResult();
    AWS_REDSHIFTSERVERLESS_API ListManagedWorkgroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API ListManagedWorkgroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The returned array of managed workgroups.</p>
     */
    inline const Aws::Vector<ManagedWorkgroupListItem>& GetManagedWorkgroups() const{ return m_managedWorkgroups; }
    inline void SetManagedWorkgroups(const Aws::Vector<ManagedWorkgroupListItem>& value) { m_managedWorkgroups = value; }
    inline void SetManagedWorkgroups(Aws::Vector<ManagedWorkgroupListItem>&& value) { m_managedWorkgroups = std::move(value); }
    inline ListManagedWorkgroupsResult& WithManagedWorkgroups(const Aws::Vector<ManagedWorkgroupListItem>& value) { SetManagedWorkgroups(value); return *this;}
    inline ListManagedWorkgroupsResult& WithManagedWorkgroups(Aws::Vector<ManagedWorkgroupListItem>&& value) { SetManagedWorkgroups(std::move(value)); return *this;}
    inline ListManagedWorkgroupsResult& AddManagedWorkgroups(const ManagedWorkgroupListItem& value) { m_managedWorkgroups.push_back(value); return *this; }
    inline ListManagedWorkgroupsResult& AddManagedWorkgroups(ManagedWorkgroupListItem&& value) { m_managedWorkgroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If nextToken is returned, there are more results available. The value of
     * nextToken is a unique pagination token for each page. To retrieve the next page,
     * make the call again using the returned token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListManagedWorkgroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListManagedWorkgroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListManagedWorkgroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListManagedWorkgroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListManagedWorkgroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListManagedWorkgroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ManagedWorkgroupListItem> m_managedWorkgroups;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
