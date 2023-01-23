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
    AWS_S3CONTROL_API ListAccessPointsResult();
    AWS_S3CONTROL_API ListAccessPointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API ListAccessPointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Contains identification and configuration information for one or more access
     * points associated with the specified bucket.</p>
     */
    inline const Aws::Vector<AccessPoint>& GetAccessPointList() const{ return m_accessPointList; }

    /**
     * <p>Contains identification and configuration information for one or more access
     * points associated with the specified bucket.</p>
     */
    inline void SetAccessPointList(const Aws::Vector<AccessPoint>& value) { m_accessPointList = value; }

    /**
     * <p>Contains identification and configuration information for one or more access
     * points associated with the specified bucket.</p>
     */
    inline void SetAccessPointList(Aws::Vector<AccessPoint>&& value) { m_accessPointList = std::move(value); }

    /**
     * <p>Contains identification and configuration information for one or more access
     * points associated with the specified bucket.</p>
     */
    inline ListAccessPointsResult& WithAccessPointList(const Aws::Vector<AccessPoint>& value) { SetAccessPointList(value); return *this;}

    /**
     * <p>Contains identification and configuration information for one or more access
     * points associated with the specified bucket.</p>
     */
    inline ListAccessPointsResult& WithAccessPointList(Aws::Vector<AccessPoint>&& value) { SetAccessPointList(std::move(value)); return *this;}

    /**
     * <p>Contains identification and configuration information for one or more access
     * points associated with the specified bucket.</p>
     */
    inline ListAccessPointsResult& AddAccessPointList(const AccessPoint& value) { m_accessPointList.push_back(value); return *this; }

    /**
     * <p>Contains identification and configuration information for one or more access
     * points associated with the specified bucket.</p>
     */
    inline ListAccessPointsResult& AddAccessPointList(AccessPoint&& value) { m_accessPointList.push_back(std::move(value)); return *this; }


    /**
     * <p>If the specified bucket has more access points than can be returned in one
     * call to this API, this field contains a continuation token that you can provide
     * in subsequent calls to this API to retrieve additional access points.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the specified bucket has more access points than can be returned in one
     * call to this API, this field contains a continuation token that you can provide
     * in subsequent calls to this API to retrieve additional access points.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the specified bucket has more access points than can be returned in one
     * call to this API, this field contains a continuation token that you can provide
     * in subsequent calls to this API to retrieve additional access points.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the specified bucket has more access points than can be returned in one
     * call to this API, this field contains a continuation token that you can provide
     * in subsequent calls to this API to retrieve additional access points.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the specified bucket has more access points than can be returned in one
     * call to this API, this field contains a continuation token that you can provide
     * in subsequent calls to this API to retrieve additional access points.</p>
     */
    inline ListAccessPointsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the specified bucket has more access points than can be returned in one
     * call to this API, this field contains a continuation token that you can provide
     * in subsequent calls to this API to retrieve additional access points.</p>
     */
    inline ListAccessPointsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the specified bucket has more access points than can be returned in one
     * call to this API, this field contains a continuation token that you can provide
     * in subsequent calls to this API to retrieve additional access points.</p>
     */
    inline ListAccessPointsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AccessPoint> m_accessPointList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
