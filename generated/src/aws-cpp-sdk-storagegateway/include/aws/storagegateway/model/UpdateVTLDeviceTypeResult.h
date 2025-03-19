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
    AWS_STORAGEGATEWAY_API UpdateVTLDeviceTypeResult() = default;
    AWS_STORAGEGATEWAY_API UpdateVTLDeviceTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API UpdateVTLDeviceTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the medium changer you have selected.</p>
     */
    inline const Aws::String& GetVTLDeviceARN() const { return m_vTLDeviceARN; }
    template<typename VTLDeviceARNT = Aws::String>
    void SetVTLDeviceARN(VTLDeviceARNT&& value) { m_vTLDeviceARNHasBeenSet = true; m_vTLDeviceARN = std::forward<VTLDeviceARNT>(value); }
    template<typename VTLDeviceARNT = Aws::String>
    UpdateVTLDeviceTypeResult& WithVTLDeviceARN(VTLDeviceARNT&& value) { SetVTLDeviceARN(std::forward<VTLDeviceARNT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateVTLDeviceTypeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vTLDeviceARN;
    bool m_vTLDeviceARNHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
