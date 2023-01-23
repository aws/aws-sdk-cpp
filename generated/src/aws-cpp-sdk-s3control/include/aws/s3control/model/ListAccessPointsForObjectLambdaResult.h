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
    AWS_S3CONTROL_API ListAccessPointsForObjectLambdaResult();
    AWS_S3CONTROL_API ListAccessPointsForObjectLambdaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API ListAccessPointsForObjectLambdaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Returns list of Object Lambda Access Points.</p>
     */
    inline const Aws::Vector<ObjectLambdaAccessPoint>& GetObjectLambdaAccessPointList() const{ return m_objectLambdaAccessPointList; }

    /**
     * <p>Returns list of Object Lambda Access Points.</p>
     */
    inline void SetObjectLambdaAccessPointList(const Aws::Vector<ObjectLambdaAccessPoint>& value) { m_objectLambdaAccessPointList = value; }

    /**
     * <p>Returns list of Object Lambda Access Points.</p>
     */
    inline void SetObjectLambdaAccessPointList(Aws::Vector<ObjectLambdaAccessPoint>&& value) { m_objectLambdaAccessPointList = std::move(value); }

    /**
     * <p>Returns list of Object Lambda Access Points.</p>
     */
    inline ListAccessPointsForObjectLambdaResult& WithObjectLambdaAccessPointList(const Aws::Vector<ObjectLambdaAccessPoint>& value) { SetObjectLambdaAccessPointList(value); return *this;}

    /**
     * <p>Returns list of Object Lambda Access Points.</p>
     */
    inline ListAccessPointsForObjectLambdaResult& WithObjectLambdaAccessPointList(Aws::Vector<ObjectLambdaAccessPoint>&& value) { SetObjectLambdaAccessPointList(std::move(value)); return *this;}

    /**
     * <p>Returns list of Object Lambda Access Points.</p>
     */
    inline ListAccessPointsForObjectLambdaResult& AddObjectLambdaAccessPointList(const ObjectLambdaAccessPoint& value) { m_objectLambdaAccessPointList.push_back(value); return *this; }

    /**
     * <p>Returns list of Object Lambda Access Points.</p>
     */
    inline ListAccessPointsForObjectLambdaResult& AddObjectLambdaAccessPointList(ObjectLambdaAccessPoint&& value) { m_objectLambdaAccessPointList.push_back(std::move(value)); return *this; }


    /**
     * <p>If the list has more access points than can be returned in one call to this
     * API, this field contains a continuation token that you can provide in subsequent
     * calls to this API to retrieve additional access points.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the list has more access points than can be returned in one call to this
     * API, this field contains a continuation token that you can provide in subsequent
     * calls to this API to retrieve additional access points.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the list has more access points than can be returned in one call to this
     * API, this field contains a continuation token that you can provide in subsequent
     * calls to this API to retrieve additional access points.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the list has more access points than can be returned in one call to this
     * API, this field contains a continuation token that you can provide in subsequent
     * calls to this API to retrieve additional access points.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the list has more access points than can be returned in one call to this
     * API, this field contains a continuation token that you can provide in subsequent
     * calls to this API to retrieve additional access points.</p>
     */
    inline ListAccessPointsForObjectLambdaResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the list has more access points than can be returned in one call to this
     * API, this field contains a continuation token that you can provide in subsequent
     * calls to this API to retrieve additional access points.</p>
     */
    inline ListAccessPointsForObjectLambdaResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the list has more access points than can be returned in one call to this
     * API, this field contains a continuation token that you can provide in subsequent
     * calls to this API to retrieve additional access points.</p>
     */
    inline ListAccessPointsForObjectLambdaResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ObjectLambdaAccessPoint> m_objectLambdaAccessPointList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
