/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/tnb/model/NsdOperationalState.h>
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
namespace tnb
{
namespace Model
{
  class UpdateSolNetworkPackageResult
  {
  public:
    AWS_TNB_API UpdateSolNetworkPackageResult() = default;
    AWS_TNB_API UpdateSolNetworkPackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TNB_API UpdateSolNetworkPackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Operational state of the network service descriptor in the network
     * package.</p>
     */
    inline NsdOperationalState GetNsdOperationalState() const { return m_nsdOperationalState; }
    inline void SetNsdOperationalState(NsdOperationalState value) { m_nsdOperationalStateHasBeenSet = true; m_nsdOperationalState = value; }
    inline UpdateSolNetworkPackageResult& WithNsdOperationalState(NsdOperationalState value) { SetNsdOperationalState(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateSolNetworkPackageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    NsdOperationalState m_nsdOperationalState{NsdOperationalState::NOT_SET};
    bool m_nsdOperationalStateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
