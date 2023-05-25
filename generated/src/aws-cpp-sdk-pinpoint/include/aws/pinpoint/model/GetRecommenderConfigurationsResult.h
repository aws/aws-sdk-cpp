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
    AWS_PINPOINT_API GetRecommenderConfigurationsResult();
    AWS_PINPOINT_API GetRecommenderConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetRecommenderConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const ListRecommenderConfigurationsResponse& GetListRecommenderConfigurationsResponse() const{ return m_listRecommenderConfigurationsResponse; }

    
    inline void SetListRecommenderConfigurationsResponse(const ListRecommenderConfigurationsResponse& value) { m_listRecommenderConfigurationsResponse = value; }

    
    inline void SetListRecommenderConfigurationsResponse(ListRecommenderConfigurationsResponse&& value) { m_listRecommenderConfigurationsResponse = std::move(value); }

    
    inline GetRecommenderConfigurationsResult& WithListRecommenderConfigurationsResponse(const ListRecommenderConfigurationsResponse& value) { SetListRecommenderConfigurationsResponse(value); return *this;}

    
    inline GetRecommenderConfigurationsResult& WithListRecommenderConfigurationsResponse(ListRecommenderConfigurationsResponse&& value) { SetListRecommenderConfigurationsResponse(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetRecommenderConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetRecommenderConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetRecommenderConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ListRecommenderConfigurationsResponse m_listRecommenderConfigurationsResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
