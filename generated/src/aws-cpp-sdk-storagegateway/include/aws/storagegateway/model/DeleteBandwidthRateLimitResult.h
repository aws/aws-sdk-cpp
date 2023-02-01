/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
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
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>A JSON object containing the Amazon Resource Name (ARN) of the gateway whose
   * bandwidth rate information was deleted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DeleteBandwidthRateLimitOutput">AWS
   * API Reference</a></p>
   */
  class DeleteBandwidthRateLimitResult
  {
  public:
    AWS_STORAGEGATEWAY_API DeleteBandwidthRateLimitResult();
    AWS_STORAGEGATEWAY_API DeleteBandwidthRateLimitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DeleteBandwidthRateLimitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARN.assign(value); }

    
    inline DeleteBandwidthRateLimitResult& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline DeleteBandwidthRateLimitResult& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline DeleteBandwidthRateLimitResult& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}

  private:

    Aws::String m_gatewayARN;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
