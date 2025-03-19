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
  class AcceptReservedNodeExchangeResult
  {
  public:
    AWS_REDSHIFT_API AcceptReservedNodeExchangeResult() = default;
    AWS_REDSHIFT_API AcceptReservedNodeExchangeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API AcceptReservedNodeExchangeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p/>
     */
    inline const ReservedNode& GetExchangedReservedNode() const { return m_exchangedReservedNode; }
    template<typename ExchangedReservedNodeT = ReservedNode>
    void SetExchangedReservedNode(ExchangedReservedNodeT&& value) { m_exchangedReservedNodeHasBeenSet = true; m_exchangedReservedNode = std::forward<ExchangedReservedNodeT>(value); }
    template<typename ExchangedReservedNodeT = ReservedNode>
    AcceptReservedNodeExchangeResult& WithExchangedReservedNode(ExchangedReservedNodeT&& value) { SetExchangedReservedNode(std::forward<ExchangedReservedNodeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    AcceptReservedNodeExchangeResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    ReservedNode m_exchangedReservedNode;
    bool m_exchangedReservedNodeHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
