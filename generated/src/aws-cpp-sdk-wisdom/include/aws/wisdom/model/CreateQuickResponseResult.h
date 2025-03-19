/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/wisdom/model/QuickResponseData.h>
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
  class CreateQuickResponseResult
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API CreateQuickResponseResult() = default;
    AWS_CONNECTWISDOMSERVICE_API CreateQuickResponseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTWISDOMSERVICE_API CreateQuickResponseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The quick response.</p>
     */
    inline const QuickResponseData& GetQuickResponse() const { return m_quickResponse; }
    template<typename QuickResponseT = QuickResponseData>
    void SetQuickResponse(QuickResponseT&& value) { m_quickResponseHasBeenSet = true; m_quickResponse = std::forward<QuickResponseT>(value); }
    template<typename QuickResponseT = QuickResponseData>
    CreateQuickResponseResult& WithQuickResponse(QuickResponseT&& value) { SetQuickResponse(std::forward<QuickResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateQuickResponseResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    QuickResponseData m_quickResponse;
    bool m_quickResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
