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
   * <p>DisableGatewayOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DisableGatewayOutput">AWS
   * API Reference</a></p>
   */
  class DisableGatewayResult
  {
  public:
    AWS_STORAGEGATEWAY_API DisableGatewayResult();
    AWS_STORAGEGATEWAY_API DisableGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DisableGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique Amazon Resource Name (ARN) of the disabled gateway.</p>
     */
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    /**
     * <p>The unique Amazon Resource Name (ARN) of the disabled gateway.</p>
     */
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARN = value; }

    /**
     * <p>The unique Amazon Resource Name (ARN) of the disabled gateway.</p>
     */
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARN = std::move(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) of the disabled gateway.</p>
     */
    inline void SetGatewayARN(const char* value) { m_gatewayARN.assign(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) of the disabled gateway.</p>
     */
    inline DisableGatewayResult& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) of the disabled gateway.</p>
     */
    inline DisableGatewayResult& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) of the disabled gateway.</p>
     */
    inline DisableGatewayResult& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}

  private:

    Aws::String m_gatewayARN;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
