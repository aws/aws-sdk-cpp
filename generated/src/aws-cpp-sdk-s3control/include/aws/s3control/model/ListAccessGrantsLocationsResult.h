/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/ListAccessGrantsLocationsEntry.h>
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
  class ListAccessGrantsLocationsResult
  {
  public:
    AWS_S3CONTROL_API ListAccessGrantsLocationsResult();
    AWS_S3CONTROL_API ListAccessGrantsLocationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API ListAccessGrantsLocationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A pagination token to request the next page of results. Pass this value into
     * a subsequent <code>List Access Grants Locations</code> request in order to
     * retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAccessGrantsLocationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAccessGrantsLocationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAccessGrantsLocationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container for a list of registered locations in an S3 Access Grants
     * instance.</p>
     */
    inline const Aws::Vector<ListAccessGrantsLocationsEntry>& GetAccessGrantsLocationsList() const{ return m_accessGrantsLocationsList; }
    inline void SetAccessGrantsLocationsList(const Aws::Vector<ListAccessGrantsLocationsEntry>& value) { m_accessGrantsLocationsList = value; }
    inline void SetAccessGrantsLocationsList(Aws::Vector<ListAccessGrantsLocationsEntry>&& value) { m_accessGrantsLocationsList = std::move(value); }
    inline ListAccessGrantsLocationsResult& WithAccessGrantsLocationsList(const Aws::Vector<ListAccessGrantsLocationsEntry>& value) { SetAccessGrantsLocationsList(value); return *this;}
    inline ListAccessGrantsLocationsResult& WithAccessGrantsLocationsList(Aws::Vector<ListAccessGrantsLocationsEntry>&& value) { SetAccessGrantsLocationsList(std::move(value)); return *this;}
    inline ListAccessGrantsLocationsResult& AddAccessGrantsLocationsList(const ListAccessGrantsLocationsEntry& value) { m_accessGrantsLocationsList.push_back(value); return *this; }
    inline ListAccessGrantsLocationsResult& AddAccessGrantsLocationsList(ListAccessGrantsLocationsEntry&& value) { m_accessGrantsLocationsList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAccessGrantsLocationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAccessGrantsLocationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAccessGrantsLocationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }
    inline void SetHostId(const Aws::String& value) { m_hostId = value; }
    inline void SetHostId(Aws::String&& value) { m_hostId = std::move(value); }
    inline void SetHostId(const char* value) { m_hostId.assign(value); }
    inline ListAccessGrantsLocationsResult& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}
    inline ListAccessGrantsLocationsResult& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}
    inline ListAccessGrantsLocationsResult& WithHostId(const char* value) { SetHostId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ListAccessGrantsLocationsEntry> m_accessGrantsLocationsList;

    Aws::String m_requestId;

    Aws::String m_hostId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
