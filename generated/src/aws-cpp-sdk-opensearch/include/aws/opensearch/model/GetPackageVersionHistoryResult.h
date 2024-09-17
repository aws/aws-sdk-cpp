/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/PackageVersionHistory.h>
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
namespace OpenSearchService
{
namespace Model
{
  /**
   * <p>Container for response returned by <code>GetPackageVersionHistory</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/GetPackageVersionHistoryResponse">AWS
   * API Reference</a></p>
   */
  class GetPackageVersionHistoryResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API GetPackageVersionHistoryResult();
    AWS_OPENSEARCHSERVICE_API GetPackageVersionHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API GetPackageVersionHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the package.</p>
     */
    inline const Aws::String& GetPackageID() const{ return m_packageID; }
    inline void SetPackageID(const Aws::String& value) { m_packageID = value; }
    inline void SetPackageID(Aws::String&& value) { m_packageID = std::move(value); }
    inline void SetPackageID(const char* value) { m_packageID.assign(value); }
    inline GetPackageVersionHistoryResult& WithPackageID(const Aws::String& value) { SetPackageID(value); return *this;}
    inline GetPackageVersionHistoryResult& WithPackageID(Aws::String&& value) { SetPackageID(std::move(value)); return *this;}
    inline GetPackageVersionHistoryResult& WithPackageID(const char* value) { SetPackageID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of package versions, along with their creation time and commit
     * message.</p>
     */
    inline const Aws::Vector<PackageVersionHistory>& GetPackageVersionHistoryList() const{ return m_packageVersionHistoryList; }
    inline void SetPackageVersionHistoryList(const Aws::Vector<PackageVersionHistory>& value) { m_packageVersionHistoryList = value; }
    inline void SetPackageVersionHistoryList(Aws::Vector<PackageVersionHistory>&& value) { m_packageVersionHistoryList = std::move(value); }
    inline GetPackageVersionHistoryResult& WithPackageVersionHistoryList(const Aws::Vector<PackageVersionHistory>& value) { SetPackageVersionHistoryList(value); return *this;}
    inline GetPackageVersionHistoryResult& WithPackageVersionHistoryList(Aws::Vector<PackageVersionHistory>&& value) { SetPackageVersionHistoryList(std::move(value)); return *this;}
    inline GetPackageVersionHistoryResult& AddPackageVersionHistoryList(const PackageVersionHistory& value) { m_packageVersionHistoryList.push_back(value); return *this; }
    inline GetPackageVersionHistoryResult& AddPackageVersionHistoryList(PackageVersionHistory&& value) { m_packageVersionHistoryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Send the request again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetPackageVersionHistoryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetPackageVersionHistoryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetPackageVersionHistoryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetPackageVersionHistoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetPackageVersionHistoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetPackageVersionHistoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_packageID;

    Aws::Vector<PackageVersionHistory> m_packageVersionHistoryList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
