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
    AWS_S3CONTROL_API ListStorageLensGroupsResult() = default;
    AWS_S3CONTROL_API ListStorageLensGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API ListStorageLensGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p> If <code>NextToken</code> is returned, there are more Storage Lens groups
     * results available. The value of <code>NextToken</code> is a unique pagination
     * token for each page. Make the call again using the returned token to retrieve
     * the next page. Keep all other arguments unchanged. Each pagination token expires
     * after 24 hours. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListStorageLensGroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of Storage Lens groups that exist in the specified home Region.
     * </p>
     */
    inline const Aws::Vector<ListStorageLensGroupEntry>& GetStorageLensGroupList() const { return m_storageLensGroupList; }
    template<typename StorageLensGroupListT = Aws::Vector<ListStorageLensGroupEntry>>
    void SetStorageLensGroupList(StorageLensGroupListT&& value) { m_storageLensGroupListHasBeenSet = true; m_storageLensGroupList = std::forward<StorageLensGroupListT>(value); }
    template<typename StorageLensGroupListT = Aws::Vector<ListStorageLensGroupEntry>>
    ListStorageLensGroupsResult& WithStorageLensGroupList(StorageLensGroupListT&& value) { SetStorageLensGroupList(std::forward<StorageLensGroupListT>(value)); return *this;}
    template<typename StorageLensGroupListT = ListStorageLensGroupEntry>
    ListStorageLensGroupsResult& AddStorageLensGroupList(StorageLensGroupListT&& value) { m_storageLensGroupListHasBeenSet = true; m_storageLensGroupList.emplace_back(std::forward<StorageLensGroupListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListStorageLensGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const { return m_hostId; }
    template<typename HostIdT = Aws::String>
    void SetHostId(HostIdT&& value) { m_hostIdHasBeenSet = true; m_hostId = std::forward<HostIdT>(value); }
    template<typename HostIdT = Aws::String>
    ListStorageLensGroupsResult& WithHostId(HostIdT&& value) { SetHostId(std::forward<HostIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ListStorageLensGroupEntry> m_storageLensGroupList;
    bool m_storageLensGroupListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_hostId;
    bool m_hostIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
