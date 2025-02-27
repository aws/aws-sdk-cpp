/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/model/ServerlessTrack.h>
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
namespace RedshiftServerless
{
namespace Model
{
  class GetTrackResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API GetTrackResult();
    AWS_REDSHIFTSERVERLESS_API GetTrackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API GetTrackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The version of the specified track.</p>
     */
    inline const ServerlessTrack& GetTrack() const{ return m_track; }
    inline void SetTrack(const ServerlessTrack& value) { m_track = value; }
    inline void SetTrack(ServerlessTrack&& value) { m_track = std::move(value); }
    inline GetTrackResult& WithTrack(const ServerlessTrack& value) { SetTrack(value); return *this;}
    inline GetTrackResult& WithTrack(ServerlessTrack&& value) { SetTrack(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTrackResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTrackResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTrackResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ServerlessTrack m_track;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
