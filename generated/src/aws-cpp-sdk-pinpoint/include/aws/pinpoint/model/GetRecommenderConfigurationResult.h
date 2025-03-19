/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/RecommenderConfigurationResponse.h>
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
  class GetRecommenderConfigurationResult
  {
  public:
    AWS_PINPOINT_API GetRecommenderConfigurationResult() = default;
    AWS_PINPOINT_API GetRecommenderConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetRecommenderConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const RecommenderConfigurationResponse& GetRecommenderConfigurationResponse() const { return m_recommenderConfigurationResponse; }
    template<typename RecommenderConfigurationResponseT = RecommenderConfigurationResponse>
    void SetRecommenderConfigurationResponse(RecommenderConfigurationResponseT&& value) { m_recommenderConfigurationResponseHasBeenSet = true; m_recommenderConfigurationResponse = std::forward<RecommenderConfigurationResponseT>(value); }
    template<typename RecommenderConfigurationResponseT = RecommenderConfigurationResponse>
    GetRecommenderConfigurationResult& WithRecommenderConfigurationResponse(RecommenderConfigurationResponseT&& value) { SetRecommenderConfigurationResponse(std::forward<RecommenderConfigurationResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRecommenderConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RecommenderConfigurationResponse m_recommenderConfigurationResponse;
    bool m_recommenderConfigurationResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
