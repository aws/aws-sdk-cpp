/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/ListAccessGrantsInstanceEntry.h>
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
  class ListAccessGrantsInstancesResult
  {
  public:
    AWS_S3CONTROL_API ListAccessGrantsInstancesResult() = default;
    AWS_S3CONTROL_API ListAccessGrantsInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API ListAccessGrantsInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A pagination token to request the next page of results. Pass this value into
     * a subsequent <code>List Access Grants Instances</code> request in order to
     * retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAccessGrantsInstancesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container for a list of S3 Access Grants instances.</p>
     */
    inline const Aws::Vector<ListAccessGrantsInstanceEntry>& GetAccessGrantsInstancesList() const { return m_accessGrantsInstancesList; }
    template<typename AccessGrantsInstancesListT = Aws::Vector<ListAccessGrantsInstanceEntry>>
    void SetAccessGrantsInstancesList(AccessGrantsInstancesListT&& value) { m_accessGrantsInstancesListHasBeenSet = true; m_accessGrantsInstancesList = std::forward<AccessGrantsInstancesListT>(value); }
    template<typename AccessGrantsInstancesListT = Aws::Vector<ListAccessGrantsInstanceEntry>>
    ListAccessGrantsInstancesResult& WithAccessGrantsInstancesList(AccessGrantsInstancesListT&& value) { SetAccessGrantsInstancesList(std::forward<AccessGrantsInstancesListT>(value)); return *this;}
    template<typename AccessGrantsInstancesListT = ListAccessGrantsInstanceEntry>
    ListAccessGrantsInstancesResult& AddAccessGrantsInstancesList(AccessGrantsInstancesListT&& value) { m_accessGrantsInstancesListHasBeenSet = true; m_accessGrantsInstancesList.emplace_back(std::forward<AccessGrantsInstancesListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAccessGrantsInstancesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const { return m_hostId; }
    template<typename HostIdT = Aws::String>
    void SetHostId(HostIdT&& value) { m_hostIdHasBeenSet = true; m_hostId = std::forward<HostIdT>(value); }
    template<typename HostIdT = Aws::String>
    ListAccessGrantsInstancesResult& WithHostId(HostIdT&& value) { SetHostId(std::forward<HostIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ListAccessGrantsInstanceEntry> m_accessGrantsInstancesList;
    bool m_accessGrantsInstancesListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_hostId;
    bool m_hostIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
