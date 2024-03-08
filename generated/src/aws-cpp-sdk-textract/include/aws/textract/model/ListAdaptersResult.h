/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/textract/model/AdapterOverview.h>
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
  class ListAdaptersResult
  {
  public:
    AWS_TEXTRACT_API ListAdaptersResult();
    AWS_TEXTRACT_API ListAdaptersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TEXTRACT_API ListAdaptersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of adapters that matches the filtering criteria specified when calling
     * ListAdapters.</p>
     */
    inline const Aws::Vector<AdapterOverview>& GetAdapters() const{ return m_adapters; }

    /**
     * <p>A list of adapters that matches the filtering criteria specified when calling
     * ListAdapters.</p>
     */
    inline void SetAdapters(const Aws::Vector<AdapterOverview>& value) { m_adapters = value; }

    /**
     * <p>A list of adapters that matches the filtering criteria specified when calling
     * ListAdapters.</p>
     */
    inline void SetAdapters(Aws::Vector<AdapterOverview>&& value) { m_adapters = std::move(value); }

    /**
     * <p>A list of adapters that matches the filtering criteria specified when calling
     * ListAdapters.</p>
     */
    inline ListAdaptersResult& WithAdapters(const Aws::Vector<AdapterOverview>& value) { SetAdapters(value); return *this;}

    /**
     * <p>A list of adapters that matches the filtering criteria specified when calling
     * ListAdapters.</p>
     */
    inline ListAdaptersResult& WithAdapters(Aws::Vector<AdapterOverview>&& value) { SetAdapters(std::move(value)); return *this;}

    /**
     * <p>A list of adapters that matches the filtering criteria specified when calling
     * ListAdapters.</p>
     */
    inline ListAdaptersResult& AddAdapters(const AdapterOverview& value) { m_adapters.push_back(value); return *this; }

    /**
     * <p>A list of adapters that matches the filtering criteria specified when calling
     * ListAdapters.</p>
     */
    inline ListAdaptersResult& AddAdapters(AdapterOverview&& value) { m_adapters.push_back(std::move(value)); return *this; }


    /**
     * <p>Identifies the next page of results to return when listing adapters.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Identifies the next page of results to return when listing adapters.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Identifies the next page of results to return when listing adapters.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Identifies the next page of results to return when listing adapters.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Identifies the next page of results to return when listing adapters.</p>
     */
    inline ListAdaptersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Identifies the next page of results to return when listing adapters.</p>
     */
    inline ListAdaptersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Identifies the next page of results to return when listing adapters.</p>
     */
    inline ListAdaptersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAdaptersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAdaptersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAdaptersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AdapterOverview> m_adapters;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
