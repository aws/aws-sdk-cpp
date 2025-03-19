/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/DedicatedIp.h>
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
namespace SESV2
{
namespace Model
{
  /**
   * <p>Information about a dedicated IP address.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDedicatedIpResponse">AWS
   * API Reference</a></p>
   */
  class GetDedicatedIpResult
  {
  public:
    AWS_SESV2_API GetDedicatedIpResult() = default;
    AWS_SESV2_API GetDedicatedIpResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetDedicatedIpResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains information about a dedicated IP address.</p>
     */
    inline const DedicatedIp& GetDedicatedIp() const { return m_dedicatedIp; }
    template<typename DedicatedIpT = DedicatedIp>
    void SetDedicatedIp(DedicatedIpT&& value) { m_dedicatedIpHasBeenSet = true; m_dedicatedIp = std::forward<DedicatedIpT>(value); }
    template<typename DedicatedIpT = DedicatedIp>
    GetDedicatedIpResult& WithDedicatedIp(DedicatedIpT&& value) { SetDedicatedIp(std::forward<DedicatedIpT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDedicatedIpResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DedicatedIp m_dedicatedIp;
    bool m_dedicatedIpHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
