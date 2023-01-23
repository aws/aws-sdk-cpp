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


    /**
     * <p>The list of Multi-Region Access Points associated with the user.</p>
     */
    inline const Aws::Vector<MultiRegionAccessPointReport>& GetAccessPoints() const{ return m_accessPoints; }

    /**
     * <p>The list of Multi-Region Access Points associated with the user.</p>
     */
    inline void SetAccessPoints(const Aws::Vector<MultiRegionAccessPointReport>& value) { m_accessPoints = value; }

    /**
     * <p>The list of Multi-Region Access Points associated with the user.</p>
     */
    inline void SetAccessPoints(Aws::Vector<MultiRegionAccessPointReport>&& value) { m_accessPoints = std::move(value); }

    /**
     * <p>The list of Multi-Region Access Points associated with the user.</p>
     */
    inline ListMultiRegionAccessPointsResult& WithAccessPoints(const Aws::Vector<MultiRegionAccessPointReport>& value) { SetAccessPoints(value); return *this;}

    /**
     * <p>The list of Multi-Region Access Points associated with the user.</p>
     */
    inline ListMultiRegionAccessPointsResult& WithAccessPoints(Aws::Vector<MultiRegionAccessPointReport>&& value) { SetAccessPoints(std::move(value)); return *this;}

    /**
     * <p>The list of Multi-Region Access Points associated with the user.</p>
     */
    inline ListMultiRegionAccessPointsResult& AddAccessPoints(const MultiRegionAccessPointReport& value) { m_accessPoints.push_back(value); return *this; }

    /**
     * <p>The list of Multi-Region Access Points associated with the user.</p>
     */
    inline ListMultiRegionAccessPointsResult& AddAccessPoints(MultiRegionAccessPointReport&& value) { m_accessPoints.push_back(std::move(value)); return *this; }


    /**
     * <p>If the specified bucket has more Multi-Region Access Points than can be
     * returned in one call to this action, this field contains a continuation token.
     * You can use this token tin subsequent calls to this action to retrieve
     * additional Multi-Region Access Points.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the specified bucket has more Multi-Region Access Points than can be
     * returned in one call to this action, this field contains a continuation token.
     * You can use this token tin subsequent calls to this action to retrieve
     * additional Multi-Region Access Points.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the specified bucket has more Multi-Region Access Points than can be
     * returned in one call to this action, this field contains a continuation token.
     * You can use this token tin subsequent calls to this action to retrieve
     * additional Multi-Region Access Points.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the specified bucket has more Multi-Region Access Points than can be
     * returned in one call to this action, this field contains a continuation token.
     * You can use this token tin subsequent calls to this action to retrieve
     * additional Multi-Region Access Points.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the specified bucket has more Multi-Region Access Points than can be
     * returned in one call to this action, this field contains a continuation token.
     * You can use this token tin subsequent calls to this action to retrieve
     * additional Multi-Region Access Points.</p>
     */
    inline ListMultiRegionAccessPointsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the specified bucket has more Multi-Region Access Points than can be
     * returned in one call to this action, this field contains a continuation token.
     * You can use this token tin subsequent calls to this action to retrieve
     * additional Multi-Region Access Points.</p>
     */
    inline ListMultiRegionAccessPointsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the specified bucket has more Multi-Region Access Points than can be
     * returned in one call to this action, this field contains a continuation token.
     * You can use this token tin subsequent calls to this action to retrieve
     * additional Multi-Region Access Points.</p>
     */
    inline ListMultiRegionAccessPointsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<MultiRegionAccessPointReport> m_accessPoints;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
