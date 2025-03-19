/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/ReservedNodeConfigurationOption.h>
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
  class GetReservedNodeExchangeConfigurationOptionsResult
  {
  public:
    AWS_REDSHIFT_API GetReservedNodeExchangeConfigurationOptionsResult() = default;
    AWS_REDSHIFT_API GetReservedNodeExchangeConfigurationOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API GetReservedNodeExchangeConfigurationOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A pagination token provided by a previous
     * <code>GetReservedNodeExchangeConfigurationOptions</code> request.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    GetReservedNodeExchangeConfigurationOptionsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>the configuration options for the reserved-node exchange. These options
     * include information about the source reserved node and target reserved node.
     * Details include the node type, the price, the node count, and the offering
     * type.</p>
     */
    inline const Aws::Vector<ReservedNodeConfigurationOption>& GetReservedNodeConfigurationOptionList() const { return m_reservedNodeConfigurationOptionList; }
    template<typename ReservedNodeConfigurationOptionListT = Aws::Vector<ReservedNodeConfigurationOption>>
    void SetReservedNodeConfigurationOptionList(ReservedNodeConfigurationOptionListT&& value) { m_reservedNodeConfigurationOptionListHasBeenSet = true; m_reservedNodeConfigurationOptionList = std::forward<ReservedNodeConfigurationOptionListT>(value); }
    template<typename ReservedNodeConfigurationOptionListT = Aws::Vector<ReservedNodeConfigurationOption>>
    GetReservedNodeExchangeConfigurationOptionsResult& WithReservedNodeConfigurationOptionList(ReservedNodeConfigurationOptionListT&& value) { SetReservedNodeConfigurationOptionList(std::forward<ReservedNodeConfigurationOptionListT>(value)); return *this;}
    template<typename ReservedNodeConfigurationOptionListT = ReservedNodeConfigurationOption>
    GetReservedNodeExchangeConfigurationOptionsResult& AddReservedNodeConfigurationOptionList(ReservedNodeConfigurationOptionListT&& value) { m_reservedNodeConfigurationOptionListHasBeenSet = true; m_reservedNodeConfigurationOptionList.emplace_back(std::forward<ReservedNodeConfigurationOptionListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetReservedNodeExchangeConfigurationOptionsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<ReservedNodeConfigurationOption> m_reservedNodeConfigurationOptionList;
    bool m_reservedNodeConfigurationOptionListHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
