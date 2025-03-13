/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/PartnerIntegrationInfo.h>
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
  class DescribePartnersResult
  {
  public:
    AWS_REDSHIFT_API DescribePartnersResult() = default;
    AWS_REDSHIFT_API DescribePartnersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribePartnersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of partner integrations.</p>
     */
    inline const Aws::Vector<PartnerIntegrationInfo>& GetPartnerIntegrationInfoList() const { return m_partnerIntegrationInfoList; }
    template<typename PartnerIntegrationInfoListT = Aws::Vector<PartnerIntegrationInfo>>
    void SetPartnerIntegrationInfoList(PartnerIntegrationInfoListT&& value) { m_partnerIntegrationInfoListHasBeenSet = true; m_partnerIntegrationInfoList = std::forward<PartnerIntegrationInfoListT>(value); }
    template<typename PartnerIntegrationInfoListT = Aws::Vector<PartnerIntegrationInfo>>
    DescribePartnersResult& WithPartnerIntegrationInfoList(PartnerIntegrationInfoListT&& value) { SetPartnerIntegrationInfoList(std::forward<PartnerIntegrationInfoListT>(value)); return *this;}
    template<typename PartnerIntegrationInfoListT = PartnerIntegrationInfo>
    DescribePartnersResult& AddPartnerIntegrationInfoList(PartnerIntegrationInfoListT&& value) { m_partnerIntegrationInfoListHasBeenSet = true; m_partnerIntegrationInfoList.emplace_back(std::forward<PartnerIntegrationInfoListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribePartnersResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PartnerIntegrationInfo> m_partnerIntegrationInfoList;
    bool m_partnerIntegrationInfoListHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
