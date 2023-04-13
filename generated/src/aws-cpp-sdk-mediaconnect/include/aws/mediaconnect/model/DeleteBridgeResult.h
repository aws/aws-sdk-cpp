/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
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
namespace MediaConnect
{
namespace Model
{
  class DeleteBridgeResult
  {
  public:
    AWS_MEDIACONNECT_API DeleteBridgeResult();
    AWS_MEDIACONNECT_API DeleteBridgeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API DeleteBridgeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The Amazon Resource Number (ARN) of the deleted bridge.
     */
    inline const Aws::String& GetBridgeArn() const{ return m_bridgeArn; }

    /**
     * The Amazon Resource Number (ARN) of the deleted bridge.
     */
    inline void SetBridgeArn(const Aws::String& value) { m_bridgeArn = value; }

    /**
     * The Amazon Resource Number (ARN) of the deleted bridge.
     */
    inline void SetBridgeArn(Aws::String&& value) { m_bridgeArn = std::move(value); }

    /**
     * The Amazon Resource Number (ARN) of the deleted bridge.
     */
    inline void SetBridgeArn(const char* value) { m_bridgeArn.assign(value); }

    /**
     * The Amazon Resource Number (ARN) of the deleted bridge.
     */
    inline DeleteBridgeResult& WithBridgeArn(const Aws::String& value) { SetBridgeArn(value); return *this;}

    /**
     * The Amazon Resource Number (ARN) of the deleted bridge.
     */
    inline DeleteBridgeResult& WithBridgeArn(Aws::String&& value) { SetBridgeArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Number (ARN) of the deleted bridge.
     */
    inline DeleteBridgeResult& WithBridgeArn(const char* value) { SetBridgeArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteBridgeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteBridgeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteBridgeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_bridgeArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
