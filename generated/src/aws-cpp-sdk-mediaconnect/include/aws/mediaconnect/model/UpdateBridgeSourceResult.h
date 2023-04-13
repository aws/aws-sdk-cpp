/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class UpdateBridgeSourceResult
  {
  public:
    AWS_MEDIACONNECT_API UpdateBridgeSourceResult();
    AWS_MEDIACONNECT_API UpdateBridgeSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API UpdateBridgeSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline UpdateBridgeSourceResult& WithBridgeArn(const Aws::String& value) { SetBridgeArn(value); return *this;}

    /**
     * The Amazon Resource Number (ARN) of the bridge.
     */
    inline UpdateBridgeSourceResult& WithBridgeArn(Aws::String&& value) { SetBridgeArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Number (ARN) of the bridge.
     */
    inline UpdateBridgeSourceResult& WithBridgeArn(const char* value) { SetBridgeArn(value); return *this;}


    
    inline const BridgeSource& GetSource() const{ return m_source; }

    
    inline void SetSource(const BridgeSource& value) { m_source = value; }

    
    inline void SetSource(BridgeSource&& value) { m_source = std::move(value); }

    
    inline UpdateBridgeSourceResult& WithSource(const BridgeSource& value) { SetSource(value); return *this;}

    
    inline UpdateBridgeSourceResult& WithSource(BridgeSource&& value) { SetSource(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateBridgeSourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateBridgeSourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateBridgeSourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_bridgeArn;

    BridgeSource m_source;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
