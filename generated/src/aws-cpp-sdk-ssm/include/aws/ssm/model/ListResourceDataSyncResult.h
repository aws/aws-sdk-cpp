/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ResourceDataSyncItem.h>
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
namespace SSM
{
namespace Model
{
  class ListResourceDataSyncResult
  {
  public:
    AWS_SSM_API ListResourceDataSyncResult();
    AWS_SSM_API ListResourceDataSyncResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API ListResourceDataSyncResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of your current resource data sync configurations and their
     * statuses.</p>
     */
    inline const Aws::Vector<ResourceDataSyncItem>& GetResourceDataSyncItems() const{ return m_resourceDataSyncItems; }
    inline void SetResourceDataSyncItems(const Aws::Vector<ResourceDataSyncItem>& value) { m_resourceDataSyncItems = value; }
    inline void SetResourceDataSyncItems(Aws::Vector<ResourceDataSyncItem>&& value) { m_resourceDataSyncItems = std::move(value); }
    inline ListResourceDataSyncResult& WithResourceDataSyncItems(const Aws::Vector<ResourceDataSyncItem>& value) { SetResourceDataSyncItems(value); return *this;}
    inline ListResourceDataSyncResult& WithResourceDataSyncItems(Aws::Vector<ResourceDataSyncItem>&& value) { SetResourceDataSyncItems(std::move(value)); return *this;}
    inline ListResourceDataSyncResult& AddResourceDataSyncItems(const ResourceDataSyncItem& value) { m_resourceDataSyncItems.push_back(value); return *this; }
    inline ListResourceDataSyncResult& AddResourceDataSyncItems(ResourceDataSyncItem&& value) { m_resourceDataSyncItems.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListResourceDataSyncResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListResourceDataSyncResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListResourceDataSyncResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListResourceDataSyncResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListResourceDataSyncResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListResourceDataSyncResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ResourceDataSyncItem> m_resourceDataSyncItems;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
