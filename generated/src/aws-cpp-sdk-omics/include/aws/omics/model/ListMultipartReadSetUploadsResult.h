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
    AWS_OMICS_API ListMultipartReadSetUploadsResult() = default;
    AWS_OMICS_API ListMultipartReadSetUploadsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API ListMultipartReadSetUploadsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Next token returned in the response of a previous ListMultipartReadSetUploads
     * call. Used to get the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMultipartReadSetUploadsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of multipart uploads.</p>
     */
    inline const Aws::Vector<MultipartReadSetUploadListItem>& GetUploads() const { return m_uploads; }
    template<typename UploadsT = Aws::Vector<MultipartReadSetUploadListItem>>
    void SetUploads(UploadsT&& value) { m_uploadsHasBeenSet = true; m_uploads = std::forward<UploadsT>(value); }
    template<typename UploadsT = Aws::Vector<MultipartReadSetUploadListItem>>
    ListMultipartReadSetUploadsResult& WithUploads(UploadsT&& value) { SetUploads(std::forward<UploadsT>(value)); return *this;}
    template<typename UploadsT = MultipartReadSetUploadListItem>
    ListMultipartReadSetUploadsResult& AddUploads(UploadsT&& value) { m_uploadsHasBeenSet = true; m_uploads.emplace_back(std::forward<UploadsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMultipartReadSetUploadsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<MultipartReadSetUploadListItem> m_uploads;
    bool m_uploadsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
