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
    AWS_RDS_API DescribeBlueGreenDeploymentsResult();
    AWS_RDS_API DescribeBlueGreenDeploymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeBlueGreenDeploymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of blue/green deployments in the current account and Amazon Web
     * Services Region.</p>
     */
    inline const Aws::Vector<BlueGreenDeployment>& GetBlueGreenDeployments() const{ return m_blueGreenDeployments; }
    inline void SetBlueGreenDeployments(const Aws::Vector<BlueGreenDeployment>& value) { m_blueGreenDeployments = value; }
    inline void SetBlueGreenDeployments(Aws::Vector<BlueGreenDeployment>&& value) { m_blueGreenDeployments = std::move(value); }
    inline DescribeBlueGreenDeploymentsResult& WithBlueGreenDeployments(const Aws::Vector<BlueGreenDeployment>& value) { SetBlueGreenDeployments(value); return *this;}
    inline DescribeBlueGreenDeploymentsResult& WithBlueGreenDeployments(Aws::Vector<BlueGreenDeployment>&& value) { SetBlueGreenDeployments(std::move(value)); return *this;}
    inline DescribeBlueGreenDeploymentsResult& AddBlueGreenDeployments(const BlueGreenDeployment& value) { m_blueGreenDeployments.push_back(value); return *this; }
    inline DescribeBlueGreenDeploymentsResult& AddBlueGreenDeployments(BlueGreenDeployment&& value) { m_blueGreenDeployments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token that can be used in a later
     * <code>DescribeBlueGreenDeployments</code> request.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline DescribeBlueGreenDeploymentsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeBlueGreenDeploymentsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeBlueGreenDeploymentsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeBlueGreenDeploymentsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeBlueGreenDeploymentsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BlueGreenDeployment> m_blueGreenDeployments;

    Aws::String m_marker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
