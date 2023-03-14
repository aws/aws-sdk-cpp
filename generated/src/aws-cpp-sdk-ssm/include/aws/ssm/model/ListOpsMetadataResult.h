/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/OpsMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{
  class ListOpsMetadataResult
  {
  public:
    AWS_SSM_API ListOpsMetadataResult();
    AWS_SSM_API ListOpsMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API ListOpsMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a list of OpsMetadata objects.</p>
     */
    inline const Aws::Vector<OpsMetadata>& GetOpsMetadataList() const{ return m_opsMetadataList; }

    /**
     * <p>Returns a list of OpsMetadata objects.</p>
     */
    inline void SetOpsMetadataList(const Aws::Vector<OpsMetadata>& value) { m_opsMetadataList = value; }

    /**
     * <p>Returns a list of OpsMetadata objects.</p>
     */
    inline void SetOpsMetadataList(Aws::Vector<OpsMetadata>&& value) { m_opsMetadataList = std::move(value); }

    /**
     * <p>Returns a list of OpsMetadata objects.</p>
     */
    inline ListOpsMetadataResult& WithOpsMetadataList(const Aws::Vector<OpsMetadata>& value) { SetOpsMetadataList(value); return *this;}

    /**
     * <p>Returns a list of OpsMetadata objects.</p>
     */
    inline ListOpsMetadataResult& WithOpsMetadataList(Aws::Vector<OpsMetadata>&& value) { SetOpsMetadataList(std::move(value)); return *this;}

    /**
     * <p>Returns a list of OpsMetadata objects.</p>
     */
    inline ListOpsMetadataResult& AddOpsMetadataList(const OpsMetadata& value) { m_opsMetadataList.push_back(value); return *this; }

    /**
     * <p>Returns a list of OpsMetadata objects.</p>
     */
    inline ListOpsMetadataResult& AddOpsMetadataList(OpsMetadata&& value) { m_opsMetadataList.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline ListOpsMetadataResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline ListOpsMetadataResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline ListOpsMetadataResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListOpsMetadataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListOpsMetadataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListOpsMetadataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<OpsMetadata> m_opsMetadataList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
