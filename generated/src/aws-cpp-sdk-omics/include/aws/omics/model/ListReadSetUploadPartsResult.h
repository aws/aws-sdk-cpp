/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/omics/model/ReadSetUploadPartListItem.h>
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
namespace Omics
{
namespace Model
{
  class ListReadSetUploadPartsResult
  {
  public:
    AWS_OMICS_API ListReadSetUploadPartsResult();
    AWS_OMICS_API ListReadSetUploadPartsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API ListReadSetUploadPartsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Next token returned in the response of a previous ListReadSetUploadParts
     * call. Used to get the next page of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> Next token returned in the response of a previous ListReadSetUploadParts
     * call. Used to get the next page of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> Next token returned in the response of a previous ListReadSetUploadParts
     * call. Used to get the next page of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> Next token returned in the response of a previous ListReadSetUploadParts
     * call. Used to get the next page of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> Next token returned in the response of a previous ListReadSetUploadParts
     * call. Used to get the next page of results. </p>
     */
    inline ListReadSetUploadPartsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> Next token returned in the response of a previous ListReadSetUploadParts
     * call. Used to get the next page of results. </p>
     */
    inline ListReadSetUploadPartsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> Next token returned in the response of a previous ListReadSetUploadParts
     * call. Used to get the next page of results. </p>
     */
    inline ListReadSetUploadPartsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> An array of upload parts. </p>
     */
    inline const Aws::Vector<ReadSetUploadPartListItem>& GetParts() const{ return m_parts; }

    /**
     * <p> An array of upload parts. </p>
     */
    inline void SetParts(const Aws::Vector<ReadSetUploadPartListItem>& value) { m_parts = value; }

    /**
     * <p> An array of upload parts. </p>
     */
    inline void SetParts(Aws::Vector<ReadSetUploadPartListItem>&& value) { m_parts = std::move(value); }

    /**
     * <p> An array of upload parts. </p>
     */
    inline ListReadSetUploadPartsResult& WithParts(const Aws::Vector<ReadSetUploadPartListItem>& value) { SetParts(value); return *this;}

    /**
     * <p> An array of upload parts. </p>
     */
    inline ListReadSetUploadPartsResult& WithParts(Aws::Vector<ReadSetUploadPartListItem>&& value) { SetParts(std::move(value)); return *this;}

    /**
     * <p> An array of upload parts. </p>
     */
    inline ListReadSetUploadPartsResult& AddParts(const ReadSetUploadPartListItem& value) { m_parts.push_back(value); return *this; }

    /**
     * <p> An array of upload parts. </p>
     */
    inline ListReadSetUploadPartsResult& AddParts(ReadSetUploadPartListItem&& value) { m_parts.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListReadSetUploadPartsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListReadSetUploadPartsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListReadSetUploadPartsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<ReadSetUploadPartListItem> m_parts;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
