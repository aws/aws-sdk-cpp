/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/wisdom/model/ContentSummary.h>
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
namespace ConnectWisdomService
{
namespace Model
{
  class GetContentSummaryResult
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API GetContentSummaryResult() = default;
    AWS_CONNECTWISDOMSERVICE_API GetContentSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTWISDOMSERVICE_API GetContentSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The content summary.</p>
     */
    inline const ContentSummary& GetContentSummary() const { return m_contentSummary; }
    template<typename ContentSummaryT = ContentSummary>
    void SetContentSummary(ContentSummaryT&& value) { m_contentSummaryHasBeenSet = true; m_contentSummary = std::forward<ContentSummaryT>(value); }
    template<typename ContentSummaryT = ContentSummary>
    GetContentSummaryResult& WithContentSummary(ContentSummaryT&& value) { SetContentSummary(std::forward<ContentSummaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetContentSummaryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ContentSummary m_contentSummary;
    bool m_contentSummaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
