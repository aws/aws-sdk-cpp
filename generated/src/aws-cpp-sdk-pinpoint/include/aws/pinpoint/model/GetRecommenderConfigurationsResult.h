/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/ListRecommenderConfigurationsResponse.h>
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
namespace Pinpoint
{
namespace Model
{
  class GetRecommenderConfigurationsResult
  {
  public:
    AWS_PINPOINT_API GetRecommenderConfigurationsResult() = default;
    AWS_PINPOINT_API GetRecommenderConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetRecommenderConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const ListRecommenderConfigurationsResponse& GetListRecommenderConfigurationsResponse() const { return m_listRecommenderConfigurationsResponse; }
    template<typename ListRecommenderConfigurationsResponseT = ListRecommenderConfigurationsResponse>
    void SetListRecommenderConfigurationsResponse(ListRecommenderConfigurationsResponseT&& value) { m_listRecommenderConfigurationsResponseHasBeenSet = true; m_listRecommenderConfigurationsResponse = std::forward<ListRecommenderConfigurationsResponseT>(value); }
    template<typename ListRecommenderConfigurationsResponseT = ListRecommenderConfigurationsResponse>
    GetRecommenderConfigurationsResult& WithListRecommenderConfigurationsResponse(ListRecommenderConfigurationsResponseT&& value) { SetListRecommenderConfigurationsResponse(std::forward<ListRecommenderConfigurationsResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRecommenderConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ListRecommenderConfigurationsResponse m_listRecommenderConfigurationsResponse;
    bool m_listRecommenderConfigurationsResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
