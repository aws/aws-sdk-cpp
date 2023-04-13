/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/DesiredState.h>
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
  class UpdateBridgeStateResult
  {
  public:
    AWS_MEDIACONNECT_API UpdateBridgeStateResult();
    AWS_MEDIACONNECT_API UpdateBridgeStateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API UpdateBridgeStateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline UpdateBridgeStateResult& WithBridgeArn(const Aws::String& value) { SetBridgeArn(value); return *this;}

    /**
     * The Amazon Resource Number (ARN) of the bridge.
     */
    inline UpdateBridgeStateResult& WithBridgeArn(Aws::String&& value) { SetBridgeArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Number (ARN) of the bridge.
     */
    inline UpdateBridgeStateResult& WithBridgeArn(const char* value) { SetBridgeArn(value); return *this;}


    /**
     * The state of the bridge. ACTIVE or STANDBY.
     */
    inline const DesiredState& GetDesiredState() const{ return m_desiredState; }

    /**
     * The state of the bridge. ACTIVE or STANDBY.
     */
    inline void SetDesiredState(const DesiredState& value) { m_desiredState = value; }

    /**
     * The state of the bridge. ACTIVE or STANDBY.
     */
    inline void SetDesiredState(DesiredState&& value) { m_desiredState = std::move(value); }

    /**
     * The state of the bridge. ACTIVE or STANDBY.
     */
    inline UpdateBridgeStateResult& WithDesiredState(const DesiredState& value) { SetDesiredState(value); return *this;}

    /**
     * The state of the bridge. ACTIVE or STANDBY.
     */
    inline UpdateBridgeStateResult& WithDesiredState(DesiredState&& value) { SetDesiredState(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateBridgeStateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateBridgeStateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateBridgeStateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_bridgeArn;

    DesiredState m_desiredState;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
