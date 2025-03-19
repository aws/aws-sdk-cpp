/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/opsworkscm/model/NodeAssociationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworkscm/model/EngineAttribute.h>
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
  class DescribeNodeAssociationStatusResult
  {
  public:
    AWS_OPSWORKSCM_API DescribeNodeAssociationStatusResult() = default;
    AWS_OPSWORKSCM_API DescribeNodeAssociationStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKSCM_API DescribeNodeAssociationStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the association or disassociation request. </p> <p
     * class="title"> <b>Possible values:</b> </p> <ul> <li> <p> <code>SUCCESS</code>:
     * The association or disassociation succeeded. </p> </li> <li> <p>
     * <code>FAILED</code>: The association or disassociation failed. </p> </li> <li>
     * <p> <code>IN_PROGRESS</code>: The association or disassociation is still in
     * progress. </p> </li> </ul>
     */
    inline NodeAssociationStatus GetNodeAssociationStatus() const { return m_nodeAssociationStatus; }
    inline void SetNodeAssociationStatus(NodeAssociationStatus value) { m_nodeAssociationStatusHasBeenSet = true; m_nodeAssociationStatus = value; }
    inline DescribeNodeAssociationStatusResult& WithNodeAssociationStatus(NodeAssociationStatus value) { SetNodeAssociationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attributes specific to the node association. In Puppet, the attibute
     * PUPPET_NODE_CERT contains the signed certificate (the result of the CSR). </p>
     */
    inline const Aws::Vector<EngineAttribute>& GetEngineAttributes() const { return m_engineAttributes; }
    template<typename EngineAttributesT = Aws::Vector<EngineAttribute>>
    void SetEngineAttributes(EngineAttributesT&& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes = std::forward<EngineAttributesT>(value); }
    template<typename EngineAttributesT = Aws::Vector<EngineAttribute>>
    DescribeNodeAssociationStatusResult& WithEngineAttributes(EngineAttributesT&& value) { SetEngineAttributes(std::forward<EngineAttributesT>(value)); return *this;}
    template<typename EngineAttributesT = EngineAttribute>
    DescribeNodeAssociationStatusResult& AddEngineAttributes(EngineAttributesT&& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes.emplace_back(std::forward<EngineAttributesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeNodeAssociationStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    NodeAssociationStatus m_nodeAssociationStatus{NodeAssociationStatus::NOT_SET};
    bool m_nodeAssociationStatusHasBeenSet = false;

    Aws::Vector<EngineAttribute> m_engineAttributes;
    bool m_engineAttributesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
