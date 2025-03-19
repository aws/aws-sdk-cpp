/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/ListStorageLensConfigurationEntry.h>
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
  class ListStorageLensConfigurationsResult
  {
  public:
    AWS_S3CONTROL_API ListStorageLensConfigurationsResult() = default;
    AWS_S3CONTROL_API ListStorageLensConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API ListStorageLensConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>If the request produced more than the maximum number of S3 Storage Lens
     * configuration results, you can pass this value into a subsequent request to
     * retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListStorageLensConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of S3 Storage Lens configurations.</p>
     */
    inline const Aws::Vector<ListStorageLensConfigurationEntry>& GetStorageLensConfigurationList() const { return m_storageLensConfigurationList; }
    template<typename StorageLensConfigurationListT = Aws::Vector<ListStorageLensConfigurationEntry>>
    void SetStorageLensConfigurationList(StorageLensConfigurationListT&& value) { m_storageLensConfigurationListHasBeenSet = true; m_storageLensConfigurationList = std::forward<StorageLensConfigurationListT>(value); }
    template<typename StorageLensConfigurationListT = Aws::Vector<ListStorageLensConfigurationEntry>>
    ListStorageLensConfigurationsResult& WithStorageLensConfigurationList(StorageLensConfigurationListT&& value) { SetStorageLensConfigurationList(std::forward<StorageLensConfigurationListT>(value)); return *this;}
    template<typename StorageLensConfigurationListT = ListStorageLensConfigurationEntry>
    ListStorageLensConfigurationsResult& AddStorageLensConfigurationList(StorageLensConfigurationListT&& value) { m_storageLensConfigurationListHasBeenSet = true; m_storageLensConfigurationList.emplace_back(std::forward<StorageLensConfigurationListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListStorageLensConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const { return m_hostId; }
    template<typename HostIdT = Aws::String>
    void SetHostId(HostIdT&& value) { m_hostIdHasBeenSet = true; m_hostId = std::forward<HostIdT>(value); }
    template<typename HostIdT = Aws::String>
    ListStorageLensConfigurationsResult& WithHostId(HostIdT&& value) { SetHostId(std::forward<HostIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ListStorageLensConfigurationEntry> m_storageLensConfigurationList;
    bool m_storageLensConfigurationListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_hostId;
    bool m_hostIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
