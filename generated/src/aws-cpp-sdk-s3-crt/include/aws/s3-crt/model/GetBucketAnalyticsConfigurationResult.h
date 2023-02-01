/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/AnalyticsConfiguration.h>
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
namespace S3Crt
{
namespace Model
{
  class GetBucketAnalyticsConfigurationResult
  {
  public:
    AWS_S3CRT_API GetBucketAnalyticsConfigurationResult();
    AWS_S3CRT_API GetBucketAnalyticsConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CRT_API GetBucketAnalyticsConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The configuration and any analyses for the analytics filter.</p>
     */
    inline const AnalyticsConfiguration& GetAnalyticsConfiguration() const{ return m_analyticsConfiguration; }

    /**
     * <p>The configuration and any analyses for the analytics filter.</p>
     */
    inline void SetAnalyticsConfiguration(const AnalyticsConfiguration& value) { m_analyticsConfiguration = value; }

    /**
     * <p>The configuration and any analyses for the analytics filter.</p>
     */
    inline void SetAnalyticsConfiguration(AnalyticsConfiguration&& value) { m_analyticsConfiguration = std::move(value); }

    /**
     * <p>The configuration and any analyses for the analytics filter.</p>
     */
    inline GetBucketAnalyticsConfigurationResult& WithAnalyticsConfiguration(const AnalyticsConfiguration& value) { SetAnalyticsConfiguration(value); return *this;}

    /**
     * <p>The configuration and any analyses for the analytics filter.</p>
     */
    inline GetBucketAnalyticsConfigurationResult& WithAnalyticsConfiguration(AnalyticsConfiguration&& value) { SetAnalyticsConfiguration(std::move(value)); return *this;}

  private:

    AnalyticsConfiguration m_analyticsConfiguration;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
