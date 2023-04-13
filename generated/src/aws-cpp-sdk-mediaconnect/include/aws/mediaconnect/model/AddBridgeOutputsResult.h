/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/model/BridgeOutput.h>
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
  class AddBridgeOutputsResult
  {
  public:
    AWS_MEDIACONNECT_API AddBridgeOutputsResult();
    AWS_MEDIACONNECT_API AddBridgeOutputsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API AddBridgeOutputsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline AddBridgeOutputsResult& WithBridgeArn(const Aws::String& value) { SetBridgeArn(value); return *this;}

    /**
     * The Amazon Resource Number (ARN) of the bridge.
     */
    inline AddBridgeOutputsResult& WithBridgeArn(Aws::String&& value) { SetBridgeArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Number (ARN) of the bridge.
     */
    inline AddBridgeOutputsResult& WithBridgeArn(const char* value) { SetBridgeArn(value); return *this;}


    /**
     * The outputs that you added to this bridge.
     */
    inline const Aws::Vector<BridgeOutput>& GetOutputs() const{ return m_outputs; }

    /**
     * The outputs that you added to this bridge.
     */
    inline void SetOutputs(const Aws::Vector<BridgeOutput>& value) { m_outputs = value; }

    /**
     * The outputs that you added to this bridge.
     */
    inline void SetOutputs(Aws::Vector<BridgeOutput>&& value) { m_outputs = std::move(value); }

    /**
     * The outputs that you added to this bridge.
     */
    inline AddBridgeOutputsResult& WithOutputs(const Aws::Vector<BridgeOutput>& value) { SetOutputs(value); return *this;}

    /**
     * The outputs that you added to this bridge.
     */
    inline AddBridgeOutputsResult& WithOutputs(Aws::Vector<BridgeOutput>&& value) { SetOutputs(std::move(value)); return *this;}

    /**
     * The outputs that you added to this bridge.
     */
    inline AddBridgeOutputsResult& AddOutputs(const BridgeOutput& value) { m_outputs.push_back(value); return *this; }

    /**
     * The outputs that you added to this bridge.
     */
    inline AddBridgeOutputsResult& AddOutputs(BridgeOutput&& value) { m_outputs.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline AddBridgeOutputsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline AddBridgeOutputsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline AddBridgeOutputsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_bridgeArn;

    Aws::Vector<BridgeOutput> m_outputs;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
