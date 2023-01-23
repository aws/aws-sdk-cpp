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
   * <p>UpdateVTLDeviceTypeOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/UpdateVTLDeviceTypeOutput">AWS
   * API Reference</a></p>
   */
  class UpdateVTLDeviceTypeResult
  {
  public:
    AWS_STORAGEGATEWAY_API UpdateVTLDeviceTypeResult();
    AWS_STORAGEGATEWAY_API UpdateVTLDeviceTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API UpdateVTLDeviceTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the medium changer you have selected.</p>
     */
    inline const Aws::String& GetVTLDeviceARN() const{ return m_vTLDeviceARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the medium changer you have selected.</p>
     */
    inline void SetVTLDeviceARN(const Aws::String& value) { m_vTLDeviceARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the medium changer you have selected.</p>
     */
    inline void SetVTLDeviceARN(Aws::String&& value) { m_vTLDeviceARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the medium changer you have selected.</p>
     */
    inline void SetVTLDeviceARN(const char* value) { m_vTLDeviceARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the medium changer you have selected.</p>
     */
    inline UpdateVTLDeviceTypeResult& WithVTLDeviceARN(const Aws::String& value) { SetVTLDeviceARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the medium changer you have selected.</p>
     */
    inline UpdateVTLDeviceTypeResult& WithVTLDeviceARN(Aws::String&& value) { SetVTLDeviceARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the medium changer you have selected.</p>
     */
    inline UpdateVTLDeviceTypeResult& WithVTLDeviceARN(const char* value) { SetVTLDeviceARN(value); return *this;}

  private:

    Aws::String m_vTLDeviceARN;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
