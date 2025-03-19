/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/ProvisionedProductDetail.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/CloudWatchDashboard.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class DescribeProvisionedProductResult
  {
  public:
    AWS_SERVICECATALOG_API DescribeProvisionedProductResult() = default;
    AWS_SERVICECATALOG_API DescribeProvisionedProductResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API DescribeProvisionedProductResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the provisioned product.</p>
     */
    inline const ProvisionedProductDetail& GetProvisionedProductDetail() const { return m_provisionedProductDetail; }
    template<typename ProvisionedProductDetailT = ProvisionedProductDetail>
    void SetProvisionedProductDetail(ProvisionedProductDetailT&& value) { m_provisionedProductDetailHasBeenSet = true; m_provisionedProductDetail = std::forward<ProvisionedProductDetailT>(value); }
    template<typename ProvisionedProductDetailT = ProvisionedProductDetail>
    DescribeProvisionedProductResult& WithProvisionedProductDetail(ProvisionedProductDetailT&& value) { SetProvisionedProductDetail(std::forward<ProvisionedProductDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any CloudWatch dashboards that were created when provisioning the
     * product.</p>
     */
    inline const Aws::Vector<CloudWatchDashboard>& GetCloudWatchDashboards() const { return m_cloudWatchDashboards; }
    template<typename CloudWatchDashboardsT = Aws::Vector<CloudWatchDashboard>>
    void SetCloudWatchDashboards(CloudWatchDashboardsT&& value) { m_cloudWatchDashboardsHasBeenSet = true; m_cloudWatchDashboards = std::forward<CloudWatchDashboardsT>(value); }
    template<typename CloudWatchDashboardsT = Aws::Vector<CloudWatchDashboard>>
    DescribeProvisionedProductResult& WithCloudWatchDashboards(CloudWatchDashboardsT&& value) { SetCloudWatchDashboards(std::forward<CloudWatchDashboardsT>(value)); return *this;}
    template<typename CloudWatchDashboardsT = CloudWatchDashboard>
    DescribeProvisionedProductResult& AddCloudWatchDashboards(CloudWatchDashboardsT&& value) { m_cloudWatchDashboardsHasBeenSet = true; m_cloudWatchDashboards.emplace_back(std::forward<CloudWatchDashboardsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeProvisionedProductResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ProvisionedProductDetail m_provisionedProductDetail;
    bool m_provisionedProductDetailHasBeenSet = false;

    Aws::Vector<CloudWatchDashboard> m_cloudWatchDashboards;
    bool m_cloudWatchDashboardsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
