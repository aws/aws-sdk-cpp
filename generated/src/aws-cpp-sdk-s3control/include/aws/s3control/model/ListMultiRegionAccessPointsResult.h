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
    AWS_S3CONTROL_API ListMultiRegionAccessPointsResult();
    AWS_S3CONTROL_API ListMultiRegionAccessPointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API ListMultiRegionAccessPointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The list of Multi-Region Access Points associated with the user.</p>
     */
    inline const Aws::Vector<MultiRegionAccessPointReport>& GetAccessPoints() const{ return m_accessPoints; }
    inline void SetAccessPoints(const Aws::Vector<MultiRegionAccessPointReport>& value) { m_accessPoints = value; }
    inline void SetAccessPoints(Aws::Vector<MultiRegionAccessPointReport>&& value) { m_accessPoints = std::move(value); }
    inline ListMultiRegionAccessPointsResult& WithAccessPoints(const Aws::Vector<MultiRegionAccessPointReport>& value) { SetAccessPoints(value); return *this;}
    inline ListMultiRegionAccessPointsResult& WithAccessPoints(Aws::Vector<MultiRegionAccessPointReport>&& value) { SetAccessPoints(std::move(value)); return *this;}
    inline ListMultiRegionAccessPointsResult& AddAccessPoints(const MultiRegionAccessPointReport& value) { m_accessPoints.push_back(value); return *this; }
    inline ListMultiRegionAccessPointsResult& AddAccessPoints(MultiRegionAccessPointReport&& value) { m_accessPoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the specified bucket has more Multi-Region Access Points than can be
     * returned in one call to this action, this field contains a continuation token.
     * You can use this token tin subsequent calls to this action to retrieve
     * additional Multi-Region Access Points.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListMultiRegionAccessPointsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListMultiRegionAccessPointsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListMultiRegionAccessPointsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListMultiRegionAccessPointsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListMultiRegionAccessPointsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListMultiRegionAccessPointsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }
    inline void SetHostId(const Aws::String& value) { m_hostId = value; }
    inline void SetHostId(Aws::String&& value) { m_hostId = std::move(value); }
    inline void SetHostId(const char* value) { m_hostId.assign(value); }
    inline ListMultiRegionAccessPointsResult& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}
    inline ListMultiRegionAccessPointsResult& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}
    inline ListMultiRegionAccessPointsResult& WithHostId(const char* value) { SetHostId(value); return *this;}
    ///@}
  private:

    Aws::Vector<MultiRegionAccessPointReport> m_accessPoints;

    Aws::String m_nextToken;

    Aws::String m_requestId;

    Aws::String m_hostId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
