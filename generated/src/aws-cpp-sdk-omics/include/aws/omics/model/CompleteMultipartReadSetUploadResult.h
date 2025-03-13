/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CompleteMultipartReadSetUploadResult
  {
  public:
    AWS_OMICS_API CompleteMultipartReadSetUploadResult() = default;
    AWS_OMICS_API CompleteMultipartReadSetUploadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API CompleteMultipartReadSetUploadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The read set ID created for an uploaded read set.</p>
     */
    inline const Aws::String& GetReadSetId() const { return m_readSetId; }
    template<typename ReadSetIdT = Aws::String>
    void SetReadSetId(ReadSetIdT&& value) { m_readSetIdHasBeenSet = true; m_readSetId = std::forward<ReadSetIdT>(value); }
    template<typename ReadSetIdT = Aws::String>
    CompleteMultipartReadSetUploadResult& WithReadSetId(ReadSetIdT&& value) { SetReadSetId(std::forward<ReadSetIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CompleteMultipartReadSetUploadResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_readSetId;
    bool m_readSetIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
