/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/AccessPoint.h>
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
  class ListAccessPointsResult
  {
  public:
    AWS_S3CONTROL_API ListAccessPointsResult() = default;
    AWS_S3CONTROL_API ListAccessPointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API ListAccessPointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Contains identification and configuration information for one or more access
     * points associated with the specified bucket.</p>
     */
    inline const Aws::Vector<AccessPoint>& GetAccessPointList() const { return m_accessPointList; }
    template<typename AccessPointListT = Aws::Vector<AccessPoint>>
    void SetAccessPointList(AccessPointListT&& value) { m_accessPointListHasBeenSet = true; m_accessPointList = std::forward<AccessPointListT>(value); }
    template<typename AccessPointListT = Aws::Vector<AccessPoint>>
    ListAccessPointsResult& WithAccessPointList(AccessPointListT&& value) { SetAccessPointList(std::forward<AccessPointListT>(value)); return *this;}
    template<typename AccessPointListT = AccessPoint>
    ListAccessPointsResult& AddAccessPointList(AccessPointListT&& value) { m_accessPointListHasBeenSet = true; m_accessPointList.emplace_back(std::forward<AccessPointListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the specified bucket has more access points than can be returned in one
     * call to this API, this field contains a continuation token that you can provide
     * in subsequent calls to this API to retrieve additional access points.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAccessPointsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAccessPointsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const { return m_hostId; }
    template<typename HostIdT = Aws::String>
    void SetHostId(HostIdT&& value) { m_hostIdHasBeenSet = true; m_hostId = std::forward<HostIdT>(value); }
    template<typename HostIdT = Aws::String>
    ListAccessPointsResult& WithHostId(HostIdT&& value) { SetHostId(std::forward<HostIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AccessPoint> m_accessPointList;
    bool m_accessPointListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_hostId;
    bool m_hostIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
