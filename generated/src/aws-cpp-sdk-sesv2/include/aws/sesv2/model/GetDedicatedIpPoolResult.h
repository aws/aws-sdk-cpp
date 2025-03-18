/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/DedicatedIpPool.h>
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
   * <p>The following element is returned by the service.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDedicatedIpPoolResponse">AWS
   * API Reference</a></p>
   */
  class GetDedicatedIpPoolResult
  {
  public:
    AWS_SESV2_API GetDedicatedIpPoolResult() = default;
    AWS_SESV2_API GetDedicatedIpPoolResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetDedicatedIpPoolResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains information about a dedicated IP pool.</p>
     */
    inline const DedicatedIpPool& GetDedicatedIpPool() const { return m_dedicatedIpPool; }
    template<typename DedicatedIpPoolT = DedicatedIpPool>
    void SetDedicatedIpPool(DedicatedIpPoolT&& value) { m_dedicatedIpPoolHasBeenSet = true; m_dedicatedIpPool = std::forward<DedicatedIpPoolT>(value); }
    template<typename DedicatedIpPoolT = DedicatedIpPool>
    GetDedicatedIpPoolResult& WithDedicatedIpPool(DedicatedIpPoolT&& value) { SetDedicatedIpPool(std::forward<DedicatedIpPoolT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDedicatedIpPoolResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DedicatedIpPool m_dedicatedIpPool;
    bool m_dedicatedIpPoolHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
