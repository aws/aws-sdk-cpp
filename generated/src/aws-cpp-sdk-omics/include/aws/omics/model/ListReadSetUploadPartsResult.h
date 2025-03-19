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
    AWS_OMICS_API ListReadSetUploadPartsResult() = default;
    AWS_OMICS_API ListReadSetUploadPartsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API ListReadSetUploadPartsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Next token returned in the response of a previous ListReadSetUploadParts
     * call. Used to get the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListReadSetUploadPartsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of upload parts.</p>
     */
    inline const Aws::Vector<ReadSetUploadPartListItem>& GetParts() const { return m_parts; }
    template<typename PartsT = Aws::Vector<ReadSetUploadPartListItem>>
    void SetParts(PartsT&& value) { m_partsHasBeenSet = true; m_parts = std::forward<PartsT>(value); }
    template<typename PartsT = Aws::Vector<ReadSetUploadPartListItem>>
    ListReadSetUploadPartsResult& WithParts(PartsT&& value) { SetParts(std::forward<PartsT>(value)); return *this;}
    template<typename PartsT = ReadSetUploadPartListItem>
    ListReadSetUploadPartsResult& AddParts(PartsT&& value) { m_partsHasBeenSet = true; m_parts.emplace_back(std::forward<PartsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListReadSetUploadPartsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ReadSetUploadPartListItem> m_parts;
    bool m_partsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
