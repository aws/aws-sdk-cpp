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
    AWS_S3CONTROL_API ListCallerAccessGrantsResult();
    AWS_S3CONTROL_API ListCallerAccessGrantsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API ListCallerAccessGrantsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A pagination token that you can use to request the next page of results. Pass
     * this value into a subsequent <code>List Caller Access Grants</code> request in
     * order to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCallerAccessGrantsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCallerAccessGrantsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCallerAccessGrantsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the caller's access grants that were created using S3 Access Grants
     * and that grant the caller access to the S3 data of the Amazon Web Services
     * account ID that was specified in the request. </p>
     */
    inline const Aws::Vector<ListCallerAccessGrantsEntry>& GetCallerAccessGrantsList() const{ return m_callerAccessGrantsList; }
    inline void SetCallerAccessGrantsList(const Aws::Vector<ListCallerAccessGrantsEntry>& value) { m_callerAccessGrantsList = value; }
    inline void SetCallerAccessGrantsList(Aws::Vector<ListCallerAccessGrantsEntry>&& value) { m_callerAccessGrantsList = std::move(value); }
    inline ListCallerAccessGrantsResult& WithCallerAccessGrantsList(const Aws::Vector<ListCallerAccessGrantsEntry>& value) { SetCallerAccessGrantsList(value); return *this;}
    inline ListCallerAccessGrantsResult& WithCallerAccessGrantsList(Aws::Vector<ListCallerAccessGrantsEntry>&& value) { SetCallerAccessGrantsList(std::move(value)); return *this;}
    inline ListCallerAccessGrantsResult& AddCallerAccessGrantsList(const ListCallerAccessGrantsEntry& value) { m_callerAccessGrantsList.push_back(value); return *this; }
    inline ListCallerAccessGrantsResult& AddCallerAccessGrantsList(ListCallerAccessGrantsEntry&& value) { m_callerAccessGrantsList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCallerAccessGrantsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCallerAccessGrantsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCallerAccessGrantsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }
    inline void SetHostId(const Aws::String& value) { m_hostId = value; }
    inline void SetHostId(Aws::String&& value) { m_hostId = std::move(value); }
    inline void SetHostId(const char* value) { m_hostId.assign(value); }
    inline ListCallerAccessGrantsResult& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}
    inline ListCallerAccessGrantsResult& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}
    inline ListCallerAccessGrantsResult& WithHostId(const char* value) { SetHostId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ListCallerAccessGrantsEntry> m_callerAccessGrantsList;

    Aws::String m_requestId;

    Aws::String m_hostId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
