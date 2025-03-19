/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
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
namespace OpsWorksCM
{
namespace Model
{
  class AssociateNodeResult
  {
  public:
    AWS_OPSWORKSCM_API AssociateNodeResult() = default;
    AWS_OPSWORKSCM_API AssociateNodeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKSCM_API AssociateNodeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains a token which can be passed to the
     * <code>DescribeNodeAssociationStatus</code> API call to get the status of the
     * association request. </p>
     */
    inline const Aws::String& GetNodeAssociationStatusToken() const { return m_nodeAssociationStatusToken; }
    template<typename NodeAssociationStatusTokenT = Aws::String>
    void SetNodeAssociationStatusToken(NodeAssociationStatusTokenT&& value) { m_nodeAssociationStatusTokenHasBeenSet = true; m_nodeAssociationStatusToken = std::forward<NodeAssociationStatusTokenT>(value); }
    template<typename NodeAssociationStatusTokenT = Aws::String>
    AssociateNodeResult& WithNodeAssociationStatusToken(NodeAssociationStatusTokenT&& value) { SetNodeAssociationStatusToken(std::forward<NodeAssociationStatusTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AssociateNodeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nodeAssociationStatusToken;
    bool m_nodeAssociationStatusTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
