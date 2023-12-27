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
    AWS_S3CONTROL_API ListAccessGrantsInstancesResult();
    AWS_S3CONTROL_API ListAccessGrantsInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API ListAccessGrantsInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A pagination token to request the next page of results. Pass this value into
     * a subsequent <code>List Access Grants Instances</code> request in order to
     * retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token to request the next page of results. Pass this value into
     * a subsequent <code>List Access Grants Instances</code> request in order to
     * retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token to request the next page of results. Pass this value into
     * a subsequent <code>List Access Grants Instances</code> request in order to
     * retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token to request the next page of results. Pass this value into
     * a subsequent <code>List Access Grants Instances</code> request in order to
     * retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token to request the next page of results. Pass this value into
     * a subsequent <code>List Access Grants Instances</code> request in order to
     * retrieve the next page of results.</p>
     */
    inline ListAccessGrantsInstancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token to request the next page of results. Pass this value into
     * a subsequent <code>List Access Grants Instances</code> request in order to
     * retrieve the next page of results.</p>
     */
    inline ListAccessGrantsInstancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token to request the next page of results. Pass this value into
     * a subsequent <code>List Access Grants Instances</code> request in order to
     * retrieve the next page of results.</p>
     */
    inline ListAccessGrantsInstancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A container for a list of S3 Access Grants instances.</p>
     */
    inline const Aws::Vector<ListAccessGrantsInstanceEntry>& GetAccessGrantsInstancesList() const{ return m_accessGrantsInstancesList; }

    /**
     * <p>A container for a list of S3 Access Grants instances.</p>
     */
    inline void SetAccessGrantsInstancesList(const Aws::Vector<ListAccessGrantsInstanceEntry>& value) { m_accessGrantsInstancesList = value; }

    /**
     * <p>A container for a list of S3 Access Grants instances.</p>
     */
    inline void SetAccessGrantsInstancesList(Aws::Vector<ListAccessGrantsInstanceEntry>&& value) { m_accessGrantsInstancesList = std::move(value); }

    /**
     * <p>A container for a list of S3 Access Grants instances.</p>
     */
    inline ListAccessGrantsInstancesResult& WithAccessGrantsInstancesList(const Aws::Vector<ListAccessGrantsInstanceEntry>& value) { SetAccessGrantsInstancesList(value); return *this;}

    /**
     * <p>A container for a list of S3 Access Grants instances.</p>
     */
    inline ListAccessGrantsInstancesResult& WithAccessGrantsInstancesList(Aws::Vector<ListAccessGrantsInstanceEntry>&& value) { SetAccessGrantsInstancesList(std::move(value)); return *this;}

    /**
     * <p>A container for a list of S3 Access Grants instances.</p>
     */
    inline ListAccessGrantsInstancesResult& AddAccessGrantsInstancesList(const ListAccessGrantsInstanceEntry& value) { m_accessGrantsInstancesList.push_back(value); return *this; }

    /**
     * <p>A container for a list of S3 Access Grants instances.</p>
     */
    inline ListAccessGrantsInstancesResult& AddAccessGrantsInstancesList(ListAccessGrantsInstanceEntry&& value) { m_accessGrantsInstancesList.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAccessGrantsInstancesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAccessGrantsInstancesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAccessGrantsInstancesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<ListAccessGrantsInstanceEntry> m_accessGrantsInstancesList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
