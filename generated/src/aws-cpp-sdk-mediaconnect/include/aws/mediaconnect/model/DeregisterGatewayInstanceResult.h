/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/InstanceState.h>
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
  class DeregisterGatewayInstanceResult
  {
  public:
    AWS_MEDIACONNECT_API DeregisterGatewayInstanceResult();
    AWS_MEDIACONNECT_API DeregisterGatewayInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API DeregisterGatewayInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DeregisterGatewayInstanceResult& WithGatewayInstanceArn(const Aws::String& value) { SetGatewayInstanceArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the instance.
     */
    inline DeregisterGatewayInstanceResult& WithGatewayInstanceArn(Aws::String&& value) { SetGatewayInstanceArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the instance.
     */
    inline DeregisterGatewayInstanceResult& WithGatewayInstanceArn(const char* value) { SetGatewayInstanceArn(value); return *this;}


    /**
     * The status of the instance.
     */
    inline const InstanceState& GetInstanceState() const{ return m_instanceState; }

    /**
     * The status of the instance.
     */
    inline void SetInstanceState(const InstanceState& value) { m_instanceState = value; }

    /**
     * The status of the instance.
     */
    inline void SetInstanceState(InstanceState&& value) { m_instanceState = std::move(value); }

    /**
     * The status of the instance.
     */
    inline DeregisterGatewayInstanceResult& WithInstanceState(const InstanceState& value) { SetInstanceState(value); return *this;}

    /**
     * The status of the instance.
     */
    inline DeregisterGatewayInstanceResult& WithInstanceState(InstanceState&& value) { SetInstanceState(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeregisterGatewayInstanceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeregisterGatewayInstanceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeregisterGatewayInstanceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_gatewayInstanceArn;

    InstanceState m_instanceState;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
