/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/model/BridgeSource.h>
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
namespace MediaConnect
{
namespace Model
{
  class AddBridgeSourcesResult
  {
  public:
    AWS_MEDIACONNECT_API AddBridgeSourcesResult() = default;
    AWS_MEDIACONNECT_API AddBridgeSourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API AddBridgeSourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The ARN of the bridge that you added sources to.</p>
     */
    inline const Aws::String& GetBridgeArn() const { return m_bridgeArn; }
    template<typename BridgeArnT = Aws::String>
    void SetBridgeArn(BridgeArnT&& value) { m_bridgeArnHasBeenSet = true; m_bridgeArn = std::forward<BridgeArnT>(value); }
    template<typename BridgeArnT = Aws::String>
    AddBridgeSourcesResult& WithBridgeArn(BridgeArnT&& value) { SetBridgeArn(std::forward<BridgeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The sources that you added to this bridge.</p>
     */
    inline const Aws::Vector<BridgeSource>& GetSources() const { return m_sources; }
    template<typename SourcesT = Aws::Vector<BridgeSource>>
    void SetSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources = std::forward<SourcesT>(value); }
    template<typename SourcesT = Aws::Vector<BridgeSource>>
    AddBridgeSourcesResult& WithSources(SourcesT&& value) { SetSources(std::forward<SourcesT>(value)); return *this;}
    template<typename SourcesT = BridgeSource>
    AddBridgeSourcesResult& AddSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources.emplace_back(std::forward<SourcesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AddBridgeSourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bridgeArn;
    bool m_bridgeArnHasBeenSet = false;

    Aws::Vector<BridgeSource> m_sources;
    bool m_sourcesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
