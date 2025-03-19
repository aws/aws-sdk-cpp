/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/BlueGreenDeployment.h>
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
namespace RDS
{
namespace Model
{
  class DescribeBlueGreenDeploymentsResult
  {
  public:
    AWS_RDS_API DescribeBlueGreenDeploymentsResult() = default;
    AWS_RDS_API DescribeBlueGreenDeploymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeBlueGreenDeploymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of blue/green deployments in the current account and Amazon Web
     * Services Region.</p>
     */
    inline const Aws::Vector<BlueGreenDeployment>& GetBlueGreenDeployments() const { return m_blueGreenDeployments; }
    template<typename BlueGreenDeploymentsT = Aws::Vector<BlueGreenDeployment>>
    void SetBlueGreenDeployments(BlueGreenDeploymentsT&& value) { m_blueGreenDeploymentsHasBeenSet = true; m_blueGreenDeployments = std::forward<BlueGreenDeploymentsT>(value); }
    template<typename BlueGreenDeploymentsT = Aws::Vector<BlueGreenDeployment>>
    DescribeBlueGreenDeploymentsResult& WithBlueGreenDeployments(BlueGreenDeploymentsT&& value) { SetBlueGreenDeployments(std::forward<BlueGreenDeploymentsT>(value)); return *this;}
    template<typename BlueGreenDeploymentsT = BlueGreenDeployment>
    DescribeBlueGreenDeploymentsResult& AddBlueGreenDeployments(BlueGreenDeploymentsT&& value) { m_blueGreenDeploymentsHasBeenSet = true; m_blueGreenDeployments.emplace_back(std::forward<BlueGreenDeploymentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token that can be used in a later
     * <code>DescribeBlueGreenDeployments</code> request.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeBlueGreenDeploymentsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeBlueGreenDeploymentsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BlueGreenDeployment> m_blueGreenDeployments;
    bool m_blueGreenDeploymentsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
