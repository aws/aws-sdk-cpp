/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/MetricsConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace S3
{
namespace Model
{
  class GetBucketMetricsConfigurationResult
  {
  public:
    AWS_S3_API GetBucketMetricsConfigurationResult() = default;
    AWS_S3_API GetBucketMetricsConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3_API GetBucketMetricsConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Specifies the metrics configuration.</p>
     */
    inline const MetricsConfiguration& GetMetricsConfiguration() const { return m_metricsConfiguration; }
    template<typename MetricsConfigurationT = MetricsConfiguration>
    void SetMetricsConfiguration(MetricsConfigurationT&& value) { m_metricsConfigurationHasBeenSet = true; m_metricsConfiguration = std::forward<MetricsConfigurationT>(value); }
    template<typename MetricsConfigurationT = MetricsConfiguration>
    GetBucketMetricsConfigurationResult& WithMetricsConfiguration(MetricsConfigurationT&& value) { SetMetricsConfiguration(std::forward<MetricsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBucketMetricsConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    MetricsConfiguration m_metricsConfiguration;
    bool m_metricsConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
