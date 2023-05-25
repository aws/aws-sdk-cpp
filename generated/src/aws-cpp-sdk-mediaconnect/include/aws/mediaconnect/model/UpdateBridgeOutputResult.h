/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class UpdateBridgeOutputResult
  {
  public:
    AWS_MEDIACONNECT_API UpdateBridgeOutputResult();
    AWS_MEDIACONNECT_API UpdateBridgeOutputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API UpdateBridgeOutputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline UpdateBridgeOutputResult& WithBridgeArn(const Aws::String& value) { SetBridgeArn(value); return *this;}

    /**
     * The Amazon Resource Number (ARN) of the bridge.
     */
    inline UpdateBridgeOutputResult& WithBridgeArn(Aws::String&& value) { SetBridgeArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Number (ARN) of the bridge.
     */
    inline UpdateBridgeOutputResult& WithBridgeArn(const char* value) { SetBridgeArn(value); return *this;}


    /**
     * The output that you updated.
     */
    inline const BridgeOutput& GetOutput() const{ return m_output; }

    /**
     * The output that you updated.
     */
    inline void SetOutput(const BridgeOutput& value) { m_output = value; }

    /**
     * The output that you updated.
     */
    inline void SetOutput(BridgeOutput&& value) { m_output = std::move(value); }

    /**
     * The output that you updated.
     */
    inline UpdateBridgeOutputResult& WithOutput(const BridgeOutput& value) { SetOutput(value); return *this;}

    /**
     * The output that you updated.
     */
    inline UpdateBridgeOutputResult& WithOutput(BridgeOutput&& value) { SetOutput(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateBridgeOutputResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateBridgeOutputResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateBridgeOutputResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_bridgeArn;

    BridgeOutput m_output;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
