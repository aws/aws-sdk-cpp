/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/ChannelEngineVersionResponse.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for ListVersionsResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListVersionsResponse">AWS
   * API Reference</a></p>
   */
  class ListVersionsResult
  {
  public:
    AWS_MEDIALIVE_API ListVersionsResult();
    AWS_MEDIALIVE_API ListVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API ListVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * List of engine versions that are available for this AWS account.
     */
    inline const Aws::Vector<ChannelEngineVersionResponse>& GetVersions() const{ return m_versions; }
    inline void SetVersions(const Aws::Vector<ChannelEngineVersionResponse>& value) { m_versions = value; }
    inline void SetVersions(Aws::Vector<ChannelEngineVersionResponse>&& value) { m_versions = std::move(value); }
    inline ListVersionsResult& WithVersions(const Aws::Vector<ChannelEngineVersionResponse>& value) { SetVersions(value); return *this;}
    inline ListVersionsResult& WithVersions(Aws::Vector<ChannelEngineVersionResponse>&& value) { SetVersions(std::move(value)); return *this;}
    inline ListVersionsResult& AddVersions(const ChannelEngineVersionResponse& value) { m_versions.push_back(value); return *this; }
    inline ListVersionsResult& AddVersions(ChannelEngineVersionResponse&& value) { m_versions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ChannelEngineVersionResponse> m_versions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
