﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/ListStorageLensConfigurationEntry.h>
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
  class ListStorageLensConfigurationsResult
  {
  public:
    AWS_S3CONTROL_API ListStorageLensConfigurationsResult();
    AWS_S3CONTROL_API ListStorageLensConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API ListStorageLensConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>If the request produced more than the maximum number of S3 Storage Lens
     * configuration results, you can pass this value into a subsequent request to
     * retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListStorageLensConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListStorageLensConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListStorageLensConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of S3 Storage Lens configurations.</p>
     */
    inline const Aws::Vector<ListStorageLensConfigurationEntry>& GetStorageLensConfigurationList() const{ return m_storageLensConfigurationList; }
    inline void SetStorageLensConfigurationList(const Aws::Vector<ListStorageLensConfigurationEntry>& value) { m_storageLensConfigurationList = value; }
    inline void SetStorageLensConfigurationList(Aws::Vector<ListStorageLensConfigurationEntry>&& value) { m_storageLensConfigurationList = std::move(value); }
    inline ListStorageLensConfigurationsResult& WithStorageLensConfigurationList(const Aws::Vector<ListStorageLensConfigurationEntry>& value) { SetStorageLensConfigurationList(value); return *this;}
    inline ListStorageLensConfigurationsResult& WithStorageLensConfigurationList(Aws::Vector<ListStorageLensConfigurationEntry>&& value) { SetStorageLensConfigurationList(std::move(value)); return *this;}
    inline ListStorageLensConfigurationsResult& AddStorageLensConfigurationList(const ListStorageLensConfigurationEntry& value) { m_storageLensConfigurationList.push_back(value); return *this; }
    inline ListStorageLensConfigurationsResult& AddStorageLensConfigurationList(ListStorageLensConfigurationEntry&& value) { m_storageLensConfigurationList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListStorageLensConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListStorageLensConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListStorageLensConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }
    inline void SetHostId(const Aws::String& value) { m_hostId = value; }
    inline void SetHostId(Aws::String&& value) { m_hostId = std::move(value); }
    inline void SetHostId(const char* value) { m_hostId.assign(value); }
    inline ListStorageLensConfigurationsResult& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}
    inline ListStorageLensConfigurationsResult& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}
    inline ListStorageLensConfigurationsResult& WithHostId(const char* value) { SetHostId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ListStorageLensConfigurationEntry> m_storageLensConfigurationList;

    Aws::String m_requestId;

    Aws::String m_hostId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
