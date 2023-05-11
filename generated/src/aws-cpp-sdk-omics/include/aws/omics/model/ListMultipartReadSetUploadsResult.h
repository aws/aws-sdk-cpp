/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/omics/model/MultipartReadSetUploadListItem.h>
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
  class ListMultipartReadSetUploadsResult
  {
  public:
    AWS_OMICS_API ListMultipartReadSetUploadsResult();
    AWS_OMICS_API ListMultipartReadSetUploadsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API ListMultipartReadSetUploadsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Next token returned in the response of a previous
     * ListMultipartReadSetUploads call. Used to get the next page of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> Next token returned in the response of a previous
     * ListMultipartReadSetUploads call. Used to get the next page of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> Next token returned in the response of a previous
     * ListMultipartReadSetUploads call. Used to get the next page of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> Next token returned in the response of a previous
     * ListMultipartReadSetUploads call. Used to get the next page of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> Next token returned in the response of a previous
     * ListMultipartReadSetUploads call. Used to get the next page of results. </p>
     */
    inline ListMultipartReadSetUploadsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> Next token returned in the response of a previous
     * ListMultipartReadSetUploads call. Used to get the next page of results. </p>
     */
    inline ListMultipartReadSetUploadsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> Next token returned in the response of a previous
     * ListMultipartReadSetUploads call. Used to get the next page of results. </p>
     */
    inline ListMultipartReadSetUploadsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> An array of multipart uploads. </p>
     */
    inline const Aws::Vector<MultipartReadSetUploadListItem>& GetUploads() const{ return m_uploads; }

    /**
     * <p> An array of multipart uploads. </p>
     */
    inline void SetUploads(const Aws::Vector<MultipartReadSetUploadListItem>& value) { m_uploads = value; }

    /**
     * <p> An array of multipart uploads. </p>
     */
    inline void SetUploads(Aws::Vector<MultipartReadSetUploadListItem>&& value) { m_uploads = std::move(value); }

    /**
     * <p> An array of multipart uploads. </p>
     */
    inline ListMultipartReadSetUploadsResult& WithUploads(const Aws::Vector<MultipartReadSetUploadListItem>& value) { SetUploads(value); return *this;}

    /**
     * <p> An array of multipart uploads. </p>
     */
    inline ListMultipartReadSetUploadsResult& WithUploads(Aws::Vector<MultipartReadSetUploadListItem>&& value) { SetUploads(std::move(value)); return *this;}

    /**
     * <p> An array of multipart uploads. </p>
     */
    inline ListMultipartReadSetUploadsResult& AddUploads(const MultipartReadSetUploadListItem& value) { m_uploads.push_back(value); return *this; }

    /**
     * <p> An array of multipart uploads. </p>
     */
    inline ListMultipartReadSetUploadsResult& AddUploads(MultipartReadSetUploadListItem&& value) { m_uploads.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListMultipartReadSetUploadsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListMultipartReadSetUploadsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListMultipartReadSetUploadsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<MultipartReadSetUploadListItem> m_uploads;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
