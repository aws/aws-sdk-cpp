/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/BridgePlacement.h>
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
  class UpdateGatewayInstanceResult
  {
  public:
    AWS_MEDIACONNECT_API UpdateGatewayInstanceResult();
    AWS_MEDIACONNECT_API UpdateGatewayInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API UpdateGatewayInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The availability of the instance to host new bridges. The bridgePlacement
     * property can be LOCKED or AVAILABLE. If it is LOCKED, no new bridges can be
     * deployed to this instance. If it is AVAILABLE, new bridges can be added to this
     * instance.
     */
    inline const BridgePlacement& GetBridgePlacement() const{ return m_bridgePlacement; }

    /**
     * The availability of the instance to host new bridges. The bridgePlacement
     * property can be LOCKED or AVAILABLE. If it is LOCKED, no new bridges can be
     * deployed to this instance. If it is AVAILABLE, new bridges can be added to this
     * instance.
     */
    inline void SetBridgePlacement(const BridgePlacement& value) { m_bridgePlacement = value; }

    /**
     * The availability of the instance to host new bridges. The bridgePlacement
     * property can be LOCKED or AVAILABLE. If it is LOCKED, no new bridges can be
     * deployed to this instance. If it is AVAILABLE, new bridges can be added to this
     * instance.
     */
    inline void SetBridgePlacement(BridgePlacement&& value) { m_bridgePlacement = std::move(value); }

    /**
     * The availability of the instance to host new bridges. The bridgePlacement
     * property can be LOCKED or AVAILABLE. If it is LOCKED, no new bridges can be
     * deployed to this instance. If it is AVAILABLE, new bridges can be added to this
     * instance.
     */
    inline UpdateGatewayInstanceResult& WithBridgePlacement(const BridgePlacement& value) { SetBridgePlacement(value); return *this;}

    /**
     * The availability of the instance to host new bridges. The bridgePlacement
     * property can be LOCKED or AVAILABLE. If it is LOCKED, no new bridges can be
     * deployed to this instance. If it is AVAILABLE, new bridges can be added to this
     * instance.
     */
    inline UpdateGatewayInstanceResult& WithBridgePlacement(BridgePlacement&& value) { SetBridgePlacement(std::move(value)); return *this;}


    /**
     * The Amazon Resource Name (ARN) of the instance.
     */
    inline const Aws::String& GetGatewayInstanceArn() const{ return m_gatewayInstanceArn; }

    /**
     * The Amazon Resource Name (ARN) of the instance.
     */
    inline void SetGatewayInstanceArn(const Aws::String& value) { m_gatewayInstanceArn = value; }

    /**
     * The Amazon Resource Name (ARN) of the instance.
     */
    inline void SetGatewayInstanceArn(Aws::String&& value) { m_gatewayInstanceArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) of the instance.
     */
    inline void SetGatewayInstanceArn(const char* value) { m_gatewayInstanceArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) of the instance.
     */
    inline UpdateGatewayInstanceResult& WithGatewayInstanceArn(const Aws::String& value) { SetGatewayInstanceArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the instance.
     */
    inline UpdateGatewayInstanceResult& WithGatewayInstanceArn(Aws::String&& value) { SetGatewayInstanceArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the instance.
     */
    inline UpdateGatewayInstanceResult& WithGatewayInstanceArn(const char* value) { SetGatewayInstanceArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateGatewayInstanceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateGatewayInstanceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateGatewayInstanceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    BridgePlacement m_bridgePlacement;

    Aws::String m_gatewayInstanceArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
