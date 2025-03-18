/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/ListCallerAccessGrantsEntry.h>
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
  class ListCallerAccessGrantsResult
  {
  public:
    AWS_S3CONTROL_API ListCallerAccessGrantsResult() = default;
    AWS_S3CONTROL_API ListCallerAccessGrantsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API ListCallerAccessGrantsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A pagination token that you can use to request the next page of results. Pass
     * this value into a subsequent <code>List Caller Access Grants</code> request in
     * order to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCallerAccessGrantsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the caller's access grants that were created using S3 Access Grants
     * and that grant the caller access to the S3 data of the Amazon Web Services
     * account ID that was specified in the request. </p>
     */
    inline const Aws::Vector<ListCallerAccessGrantsEntry>& GetCallerAccessGrantsList() const { return m_callerAccessGrantsList; }
    template<typename CallerAccessGrantsListT = Aws::Vector<ListCallerAccessGrantsEntry>>
    void SetCallerAccessGrantsList(CallerAccessGrantsListT&& value) { m_callerAccessGrantsListHasBeenSet = true; m_callerAccessGrantsList = std::forward<CallerAccessGrantsListT>(value); }
    template<typename CallerAccessGrantsListT = Aws::Vector<ListCallerAccessGrantsEntry>>
    ListCallerAccessGrantsResult& WithCallerAccessGrantsList(CallerAccessGrantsListT&& value) { SetCallerAccessGrantsList(std::forward<CallerAccessGrantsListT>(value)); return *this;}
    template<typename CallerAccessGrantsListT = ListCallerAccessGrantsEntry>
    ListCallerAccessGrantsResult& AddCallerAccessGrantsList(CallerAccessGrantsListT&& value) { m_callerAccessGrantsListHasBeenSet = true; m_callerAccessGrantsList.emplace_back(std::forward<CallerAccessGrantsListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCallerAccessGrantsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const { return m_hostId; }
    template<typename HostIdT = Aws::String>
    void SetHostId(HostIdT&& value) { m_hostIdHasBeenSet = true; m_hostId = std::forward<HostIdT>(value); }
    template<typename HostIdT = Aws::String>
    ListCallerAccessGrantsResult& WithHostId(HostIdT&& value) { SetHostId(std::forward<HostIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ListCallerAccessGrantsEntry> m_callerAccessGrantsList;
    bool m_callerAccessGrantsListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_hostId;
    bool m_hostIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
