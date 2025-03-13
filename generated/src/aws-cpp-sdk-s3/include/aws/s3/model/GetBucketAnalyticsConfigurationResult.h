/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/AnalyticsConfiguration.h>
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
  class GetBucketAnalyticsConfigurationResult
  {
  public:
    AWS_S3_API GetBucketAnalyticsConfigurationResult() = default;
    AWS_S3_API GetBucketAnalyticsConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3_API GetBucketAnalyticsConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The configuration and any analyses for the analytics filter.</p>
     */
    inline const AnalyticsConfiguration& GetAnalyticsConfiguration() const { return m_analyticsConfiguration; }
    template<typename AnalyticsConfigurationT = AnalyticsConfiguration>
    void SetAnalyticsConfiguration(AnalyticsConfigurationT&& value) { m_analyticsConfigurationHasBeenSet = true; m_analyticsConfiguration = std::forward<AnalyticsConfigurationT>(value); }
    template<typename AnalyticsConfigurationT = AnalyticsConfiguration>
    GetBucketAnalyticsConfigurationResult& WithAnalyticsConfiguration(AnalyticsConfigurationT&& value) { SetAnalyticsConfiguration(std::forward<AnalyticsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBucketAnalyticsConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AnalyticsConfiguration m_analyticsConfiguration;
    bool m_analyticsConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
