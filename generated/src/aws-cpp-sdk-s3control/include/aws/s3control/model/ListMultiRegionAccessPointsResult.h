/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/MultiRegionAccessPointReport.h>
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
  class ListMultiRegionAccessPointsResult
  {
  public:
    AWS_S3CONTROL_API ListMultiRegionAccessPointsResult() = default;
    AWS_S3CONTROL_API ListMultiRegionAccessPointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API ListMultiRegionAccessPointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The list of Multi-Region Access Points associated with the user.</p>
     */
    inline const Aws::Vector<MultiRegionAccessPointReport>& GetAccessPoints() const { return m_accessPoints; }
    template<typename AccessPointsT = Aws::Vector<MultiRegionAccessPointReport>>
    void SetAccessPoints(AccessPointsT&& value) { m_accessPointsHasBeenSet = true; m_accessPoints = std::forward<AccessPointsT>(value); }
    template<typename AccessPointsT = Aws::Vector<MultiRegionAccessPointReport>>
    ListMultiRegionAccessPointsResult& WithAccessPoints(AccessPointsT&& value) { SetAccessPoints(std::forward<AccessPointsT>(value)); return *this;}
    template<typename AccessPointsT = MultiRegionAccessPointReport>
    ListMultiRegionAccessPointsResult& AddAccessPoints(AccessPointsT&& value) { m_accessPointsHasBeenSet = true; m_accessPoints.emplace_back(std::forward<AccessPointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the specified bucket has more Multi-Region Access Points than can be
     * returned in one call to this action, this field contains a continuation token.
     * You can use this token tin subsequent calls to this action to retrieve
     * additional Multi-Region Access Points.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMultiRegionAccessPointsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMultiRegionAccessPointsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const { return m_hostId; }
    template<typename HostIdT = Aws::String>
    void SetHostId(HostIdT&& value) { m_hostIdHasBeenSet = true; m_hostId = std::forward<HostIdT>(value); }
    template<typename HostIdT = Aws::String>
    ListMultiRegionAccessPointsResult& WithHostId(HostIdT&& value) { SetHostId(std::forward<HostIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MultiRegionAccessPointReport> m_accessPoints;
    bool m_accessPointsHasBeenSet = false;

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
