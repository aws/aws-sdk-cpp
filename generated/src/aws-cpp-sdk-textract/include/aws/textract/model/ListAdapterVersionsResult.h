/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/textract/model/AdapterVersionOverview.h>
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
namespace Textract
{
namespace Model
{
  class ListAdapterVersionsResult
  {
  public:
    AWS_TEXTRACT_API ListAdapterVersionsResult();
    AWS_TEXTRACT_API ListAdapterVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TEXTRACT_API ListAdapterVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Adapter versions that match the filtering criteria specified when calling
     * ListAdapters.</p>
     */
    inline const Aws::Vector<AdapterVersionOverview>& GetAdapterVersions() const{ return m_adapterVersions; }

    /**
     * <p>Adapter versions that match the filtering criteria specified when calling
     * ListAdapters.</p>
     */
    inline void SetAdapterVersions(const Aws::Vector<AdapterVersionOverview>& value) { m_adapterVersions = value; }

    /**
     * <p>Adapter versions that match the filtering criteria specified when calling
     * ListAdapters.</p>
     */
    inline void SetAdapterVersions(Aws::Vector<AdapterVersionOverview>&& value) { m_adapterVersions = std::move(value); }

    /**
     * <p>Adapter versions that match the filtering criteria specified when calling
     * ListAdapters.</p>
     */
    inline ListAdapterVersionsResult& WithAdapterVersions(const Aws::Vector<AdapterVersionOverview>& value) { SetAdapterVersions(value); return *this;}

    /**
     * <p>Adapter versions that match the filtering criteria specified when calling
     * ListAdapters.</p>
     */
    inline ListAdapterVersionsResult& WithAdapterVersions(Aws::Vector<AdapterVersionOverview>&& value) { SetAdapterVersions(std::move(value)); return *this;}

    /**
     * <p>Adapter versions that match the filtering criteria specified when calling
     * ListAdapters.</p>
     */
    inline ListAdapterVersionsResult& AddAdapterVersions(const AdapterVersionOverview& value) { m_adapterVersions.push_back(value); return *this; }

    /**
     * <p>Adapter versions that match the filtering criteria specified when calling
     * ListAdapters.</p>
     */
    inline ListAdapterVersionsResult& AddAdapterVersions(AdapterVersionOverview&& value) { m_adapterVersions.push_back(std::move(value)); return *this; }


    /**
     * <p>Identifies the next page of results to return when listing adapter
     * versions.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Identifies the next page of results to return when listing adapter
     * versions.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Identifies the next page of results to return when listing adapter
     * versions.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Identifies the next page of results to return when listing adapter
     * versions.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Identifies the next page of results to return when listing adapter
     * versions.</p>
     */
    inline ListAdapterVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Identifies the next page of results to return when listing adapter
     * versions.</p>
     */
    inline ListAdapterVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Identifies the next page of results to return when listing adapter
     * versions.</p>
     */
    inline ListAdapterVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAdapterVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAdapterVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAdapterVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AdapterVersionOverview> m_adapterVersions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
