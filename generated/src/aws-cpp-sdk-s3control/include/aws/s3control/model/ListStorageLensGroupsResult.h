/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/ListStorageLensGroupEntry.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{
  class ListStorageLensGroupsResult
  {
  public:
    AWS_S3CONTROL_API ListStorageLensGroupsResult();
    AWS_S3CONTROL_API ListStorageLensGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API ListStorageLensGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p> If <code>NextToken</code> is returned, there are more Storage Lens groups
     * results available. The value of <code>NextToken</code> is a unique pagination
     * token for each page. Make the call again using the returned token to retrieve
     * the next page. Keep all other arguments unchanged. Each pagination token expires
     * after 24 hours. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> If <code>NextToken</code> is returned, there are more Storage Lens groups
     * results available. The value of <code>NextToken</code> is a unique pagination
     * token for each page. Make the call again using the returned token to retrieve
     * the next page. Keep all other arguments unchanged. Each pagination token expires
     * after 24 hours. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> If <code>NextToken</code> is returned, there are more Storage Lens groups
     * results available. The value of <code>NextToken</code> is a unique pagination
     * token for each page. Make the call again using the returned token to retrieve
     * the next page. Keep all other arguments unchanged. Each pagination token expires
     * after 24 hours. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> If <code>NextToken</code> is returned, there are more Storage Lens groups
     * results available. The value of <code>NextToken</code> is a unique pagination
     * token for each page. Make the call again using the returned token to retrieve
     * the next page. Keep all other arguments unchanged. Each pagination token expires
     * after 24 hours. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> If <code>NextToken</code> is returned, there are more Storage Lens groups
     * results available. The value of <code>NextToken</code> is a unique pagination
     * token for each page. Make the call again using the returned token to retrieve
     * the next page. Keep all other arguments unchanged. Each pagination token expires
     * after 24 hours. </p>
     */
    inline ListStorageLensGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> If <code>NextToken</code> is returned, there are more Storage Lens groups
     * results available. The value of <code>NextToken</code> is a unique pagination
     * token for each page. Make the call again using the returned token to retrieve
     * the next page. Keep all other arguments unchanged. Each pagination token expires
     * after 24 hours. </p>
     */
    inline ListStorageLensGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> If <code>NextToken</code> is returned, there are more Storage Lens groups
     * results available. The value of <code>NextToken</code> is a unique pagination
     * token for each page. Make the call again using the returned token to retrieve
     * the next page. Keep all other arguments unchanged. Each pagination token expires
     * after 24 hours. </p>
     */
    inline ListStorageLensGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> The list of Storage Lens groups that exist in the specified home Region.
     * </p>
     */
    inline const Aws::Vector<ListStorageLensGroupEntry>& GetStorageLensGroupList() const{ return m_storageLensGroupList; }

    /**
     * <p> The list of Storage Lens groups that exist in the specified home Region.
     * </p>
     */
    inline void SetStorageLensGroupList(const Aws::Vector<ListStorageLensGroupEntry>& value) { m_storageLensGroupList = value; }

    /**
     * <p> The list of Storage Lens groups that exist in the specified home Region.
     * </p>
     */
    inline void SetStorageLensGroupList(Aws::Vector<ListStorageLensGroupEntry>&& value) { m_storageLensGroupList = std::move(value); }

    /**
     * <p> The list of Storage Lens groups that exist in the specified home Region.
     * </p>
     */
    inline ListStorageLensGroupsResult& WithStorageLensGroupList(const Aws::Vector<ListStorageLensGroupEntry>& value) { SetStorageLensGroupList(value); return *this;}

    /**
     * <p> The list of Storage Lens groups that exist in the specified home Region.
     * </p>
     */
    inline ListStorageLensGroupsResult& WithStorageLensGroupList(Aws::Vector<ListStorageLensGroupEntry>&& value) { SetStorageLensGroupList(std::move(value)); return *this;}

    /**
     * <p> The list of Storage Lens groups that exist in the specified home Region.
     * </p>
     */
    inline ListStorageLensGroupsResult& AddStorageLensGroupList(const ListStorageLensGroupEntry& value) { m_storageLensGroupList.push_back(value); return *this; }

    /**
     * <p> The list of Storage Lens groups that exist in the specified home Region.
     * </p>
     */
    inline ListStorageLensGroupsResult& AddStorageLensGroupList(ListStorageLensGroupEntry&& value) { m_storageLensGroupList.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListStorageLensGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListStorageLensGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListStorageLensGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<ListStorageLensGroupEntry> m_storageLensGroupList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
