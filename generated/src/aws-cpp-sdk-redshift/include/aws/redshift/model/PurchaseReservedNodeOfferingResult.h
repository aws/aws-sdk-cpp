/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/ReservedNode.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{
  class PurchaseReservedNodeOfferingResult
  {
  public:
    AWS_REDSHIFT_API PurchaseReservedNodeOfferingResult() = default;
    AWS_REDSHIFT_API PurchaseReservedNodeOfferingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API PurchaseReservedNodeOfferingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const ReservedNode& GetReservedNode() const { return m_reservedNode; }
    template<typename ReservedNodeT = ReservedNode>
    void SetReservedNode(ReservedNodeT&& value) { m_reservedNodeHasBeenSet = true; m_reservedNode = std::forward<ReservedNodeT>(value); }
    template<typename ReservedNodeT = ReservedNode>
    PurchaseReservedNodeOfferingResult& WithReservedNode(ReservedNodeT&& value) { SetReservedNode(std::forward<ReservedNodeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    PurchaseReservedNodeOfferingResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    ReservedNode m_reservedNode;
    bool m_reservedNodeHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
