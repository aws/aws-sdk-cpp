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
    AWS_MEDIACONNECT_API AddBridgeSourcesResult();
    AWS_MEDIACONNECT_API AddBridgeSourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API AddBridgeSourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The Amazon Resource Number (ARN) of the bridge.
     */
    inline const Aws::String& GetBridgeArn() const{ return m_bridgeArn; }

    /**
     * The Amazon Resource Number (ARN) of the bridge.
     */
    inline void SetBridgeArn(const Aws::String& value) { m_bridgeArn = value; }

    /**
     * The Amazon Resource Number (ARN) of the bridge.
     */
    inline void SetBridgeArn(Aws::String&& value) { m_bridgeArn = std::move(value); }

    /**
     * The Amazon Resource Number (ARN) of the bridge.
     */
    inline void SetBridgeArn(const char* value) { m_bridgeArn.assign(value); }

    /**
     * The Amazon Resource Number (ARN) of the bridge.
     */
    inline AddBridgeSourcesResult& WithBridgeArn(const Aws::String& value) { SetBridgeArn(value); return *this;}

    /**
     * The Amazon Resource Number (ARN) of the bridge.
     */
    inline AddBridgeSourcesResult& WithBridgeArn(Aws::String&& value) { SetBridgeArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Number (ARN) of the bridge.
     */
    inline AddBridgeSourcesResult& WithBridgeArn(const char* value) { SetBridgeArn(value); return *this;}


    /**
     * The sources that you added to this bridge.
     */
    inline const Aws::Vector<BridgeSource>& GetSources() const{ return m_sources; }

    /**
     * The sources that you added to this bridge.
     */
    inline void SetSources(const Aws::Vector<BridgeSource>& value) { m_sources = value; }

    /**
     * The sources that you added to this bridge.
     */
    inline void SetSources(Aws::Vector<BridgeSource>&& value) { m_sources = std::move(value); }

    /**
     * The sources that you added to this bridge.
     */
    inline AddBridgeSourcesResult& WithSources(const Aws::Vector<BridgeSource>& value) { SetSources(value); return *this;}

    /**
     * The sources that you added to this bridge.
     */
    inline AddBridgeSourcesResult& WithSources(Aws::Vector<BridgeSource>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * The sources that you added to this bridge.
     */
    inline AddBridgeSourcesResult& AddSources(const BridgeSource& value) { m_sources.push_back(value); return *this; }

    /**
     * The sources that you added to this bridge.
     */
    inline AddBridgeSourcesResult& AddSources(BridgeSource&& value) { m_sources.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline AddBridgeSourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline AddBridgeSourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline AddBridgeSourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_bridgeArn;

    Aws::Vector<BridgeSource> m_sources;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
