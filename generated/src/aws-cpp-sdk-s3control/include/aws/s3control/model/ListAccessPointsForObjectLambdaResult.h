/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/ObjectLambdaAccessPoint.h>
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
  class ListAccessPointsForObjectLambdaResult
  {
  public:
    AWS_S3CONTROL_API ListAccessPointsForObjectLambdaResult() = default;
    AWS_S3CONTROL_API ListAccessPointsForObjectLambdaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API ListAccessPointsForObjectLambdaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Returns list of Object Lambda Access Points.</p>
     */
    inline const Aws::Vector<ObjectLambdaAccessPoint>& GetObjectLambdaAccessPointList() const { return m_objectLambdaAccessPointList; }
    template<typename ObjectLambdaAccessPointListT = Aws::Vector<ObjectLambdaAccessPoint>>
    void SetObjectLambdaAccessPointList(ObjectLambdaAccessPointListT&& value) { m_objectLambdaAccessPointListHasBeenSet = true; m_objectLambdaAccessPointList = std::forward<ObjectLambdaAccessPointListT>(value); }
    template<typename ObjectLambdaAccessPointListT = Aws::Vector<ObjectLambdaAccessPoint>>
    ListAccessPointsForObjectLambdaResult& WithObjectLambdaAccessPointList(ObjectLambdaAccessPointListT&& value) { SetObjectLambdaAccessPointList(std::forward<ObjectLambdaAccessPointListT>(value)); return *this;}
    template<typename ObjectLambdaAccessPointListT = ObjectLambdaAccessPoint>
    ListAccessPointsForObjectLambdaResult& AddObjectLambdaAccessPointList(ObjectLambdaAccessPointListT&& value) { m_objectLambdaAccessPointListHasBeenSet = true; m_objectLambdaAccessPointList.emplace_back(std::forward<ObjectLambdaAccessPointListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the list has more access points than can be returned in one call to this
     * API, this field contains a continuation token that you can provide in subsequent
     * calls to this API to retrieve additional access points.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAccessPointsForObjectLambdaResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAccessPointsForObjectLambdaResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const { return m_hostId; }
    template<typename HostIdT = Aws::String>
    void SetHostId(HostIdT&& value) { m_hostIdHasBeenSet = true; m_hostId = std::forward<HostIdT>(value); }
    template<typename HostIdT = Aws::String>
    ListAccessPointsForObjectLambdaResult& WithHostId(HostIdT&& value) { SetHostId(std::forward<HostIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ObjectLambdaAccessPoint> m_objectLambdaAccessPointList;
    bool m_objectLambdaAccessPointListHasBeenSet = false;

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
