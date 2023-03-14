/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/JourneysResponse.h>
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
  class ListJourneysResult
  {
  public:
    AWS_PINPOINT_API ListJourneysResult();
    AWS_PINPOINT_API ListJourneysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API ListJourneysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const JourneysResponse& GetJourneysResponse() const{ return m_journeysResponse; }

    
    inline void SetJourneysResponse(const JourneysResponse& value) { m_journeysResponse = value; }

    
    inline void SetJourneysResponse(JourneysResponse&& value) { m_journeysResponse = std::move(value); }

    
    inline ListJourneysResult& WithJourneysResponse(const JourneysResponse& value) { SetJourneysResponse(value); return *this;}

    
    inline ListJourneysResult& WithJourneysResponse(JourneysResponse&& value) { SetJourneysResponse(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListJourneysResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListJourneysResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListJourneysResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    JourneysResponse m_journeysResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
