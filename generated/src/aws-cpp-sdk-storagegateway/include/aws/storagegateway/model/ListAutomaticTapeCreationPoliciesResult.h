/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/AutomaticTapeCreationPolicyInfo.h>
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
  class ListAutomaticTapeCreationPoliciesResult
  {
  public:
    AWS_STORAGEGATEWAY_API ListAutomaticTapeCreationPoliciesResult() = default;
    AWS_STORAGEGATEWAY_API ListAutomaticTapeCreationPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API ListAutomaticTapeCreationPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Gets a listing of information about the gateway's automatic tape creation
     * policies, including the automatic tape creation rules and the gateway that is
     * using the policies.</p>
     */
    inline const Aws::Vector<AutomaticTapeCreationPolicyInfo>& GetAutomaticTapeCreationPolicyInfos() const { return m_automaticTapeCreationPolicyInfos; }
    template<typename AutomaticTapeCreationPolicyInfosT = Aws::Vector<AutomaticTapeCreationPolicyInfo>>
    void SetAutomaticTapeCreationPolicyInfos(AutomaticTapeCreationPolicyInfosT&& value) { m_automaticTapeCreationPolicyInfosHasBeenSet = true; m_automaticTapeCreationPolicyInfos = std::forward<AutomaticTapeCreationPolicyInfosT>(value); }
    template<typename AutomaticTapeCreationPolicyInfosT = Aws::Vector<AutomaticTapeCreationPolicyInfo>>
    ListAutomaticTapeCreationPoliciesResult& WithAutomaticTapeCreationPolicyInfos(AutomaticTapeCreationPolicyInfosT&& value) { SetAutomaticTapeCreationPolicyInfos(std::forward<AutomaticTapeCreationPolicyInfosT>(value)); return *this;}
    template<typename AutomaticTapeCreationPolicyInfosT = AutomaticTapeCreationPolicyInfo>
    ListAutomaticTapeCreationPoliciesResult& AddAutomaticTapeCreationPolicyInfos(AutomaticTapeCreationPolicyInfosT&& value) { m_automaticTapeCreationPolicyInfosHasBeenSet = true; m_automaticTapeCreationPolicyInfos.emplace_back(std::forward<AutomaticTapeCreationPolicyInfosT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAutomaticTapeCreationPoliciesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AutomaticTapeCreationPolicyInfo> m_automaticTapeCreationPolicyInfos;
    bool m_automaticTapeCreationPolicyInfosHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
