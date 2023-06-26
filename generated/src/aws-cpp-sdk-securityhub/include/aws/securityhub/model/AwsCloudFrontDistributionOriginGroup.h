/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsCloudFrontDistributionOriginGroupFailover.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about an origin group for the CloudFront
   * distribution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCloudFrontDistributionOriginGroup">AWS
   * API Reference</a></p>
   */
  class AwsCloudFrontDistributionOriginGroup
  {
  public:
    AWS_SECURITYHUB_API AwsCloudFrontDistributionOriginGroup();
    AWS_SECURITYHUB_API AwsCloudFrontDistributionOriginGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCloudFrontDistributionOriginGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Provides the criteria for an origin group to fail over.</p>
     */
    inline const AwsCloudFrontDistributionOriginGroupFailover& GetFailoverCriteria() const{ return m_failoverCriteria; }

    /**
     * <p>Provides the criteria for an origin group to fail over.</p>
     */
    inline bool FailoverCriteriaHasBeenSet() const { return m_failoverCriteriaHasBeenSet; }

    /**
     * <p>Provides the criteria for an origin group to fail over.</p>
     */
    inline void SetFailoverCriteria(const AwsCloudFrontDistributionOriginGroupFailover& value) { m_failoverCriteriaHasBeenSet = true; m_failoverCriteria = value; }

    /**
     * <p>Provides the criteria for an origin group to fail over.</p>
     */
    inline void SetFailoverCriteria(AwsCloudFrontDistributionOriginGroupFailover&& value) { m_failoverCriteriaHasBeenSet = true; m_failoverCriteria = std::move(value); }

    /**
     * <p>Provides the criteria for an origin group to fail over.</p>
     */
    inline AwsCloudFrontDistributionOriginGroup& WithFailoverCriteria(const AwsCloudFrontDistributionOriginGroupFailover& value) { SetFailoverCriteria(value); return *this;}

    /**
     * <p>Provides the criteria for an origin group to fail over.</p>
     */
    inline AwsCloudFrontDistributionOriginGroup& WithFailoverCriteria(AwsCloudFrontDistributionOriginGroupFailover&& value) { SetFailoverCriteria(std::move(value)); return *this;}

  private:

    AwsCloudFrontDistributionOriginGroupFailover m_failoverCriteria;
    bool m_failoverCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
