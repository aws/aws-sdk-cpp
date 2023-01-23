/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/RecommenderConfigurationResponse.h>
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
  class UpdateRecommenderConfigurationResult
  {
  public:
    AWS_PINPOINT_API UpdateRecommenderConfigurationResult();
    AWS_PINPOINT_API UpdateRecommenderConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API UpdateRecommenderConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const RecommenderConfigurationResponse& GetRecommenderConfigurationResponse() const{ return m_recommenderConfigurationResponse; }

    
    inline void SetRecommenderConfigurationResponse(const RecommenderConfigurationResponse& value) { m_recommenderConfigurationResponse = value; }

    
    inline void SetRecommenderConfigurationResponse(RecommenderConfigurationResponse&& value) { m_recommenderConfigurationResponse = std::move(value); }

    
    inline UpdateRecommenderConfigurationResult& WithRecommenderConfigurationResponse(const RecommenderConfigurationResponse& value) { SetRecommenderConfigurationResponse(value); return *this;}

    
    inline UpdateRecommenderConfigurationResult& WithRecommenderConfigurationResponse(RecommenderConfigurationResponse&& value) { SetRecommenderConfigurationResponse(std::move(value)); return *this;}

  private:

    RecommenderConfigurationResponse m_recommenderConfigurationResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
