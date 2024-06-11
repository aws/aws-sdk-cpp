/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsCloudFrontDistributionOriginGroupFailoverStatusCodes.h>
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
   * <p>Provides information about when an origin group fails over.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCloudFrontDistributionOriginGroupFailover">AWS
   * API Reference</a></p>
   */
  class AwsCloudFrontDistributionOriginGroupFailover
  {
  public:
    AWS_SECURITYHUB_API AwsCloudFrontDistributionOriginGroupFailover();
    AWS_SECURITYHUB_API AwsCloudFrontDistributionOriginGroupFailover(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCloudFrontDistributionOriginGroupFailover& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the status codes that cause an origin group to fail
     * over.</p>
     */
    inline const AwsCloudFrontDistributionOriginGroupFailoverStatusCodes& GetStatusCodes() const{ return m_statusCodes; }
    inline bool StatusCodesHasBeenSet() const { return m_statusCodesHasBeenSet; }
    inline void SetStatusCodes(const AwsCloudFrontDistributionOriginGroupFailoverStatusCodes& value) { m_statusCodesHasBeenSet = true; m_statusCodes = value; }
    inline void SetStatusCodes(AwsCloudFrontDistributionOriginGroupFailoverStatusCodes&& value) { m_statusCodesHasBeenSet = true; m_statusCodes = std::move(value); }
    inline AwsCloudFrontDistributionOriginGroupFailover& WithStatusCodes(const AwsCloudFrontDistributionOriginGroupFailoverStatusCodes& value) { SetStatusCodes(value); return *this;}
    inline AwsCloudFrontDistributionOriginGroupFailover& WithStatusCodes(AwsCloudFrontDistributionOriginGroupFailoverStatusCodes&& value) { SetStatusCodes(std::move(value)); return *this;}
    ///@}
  private:

    AwsCloudFrontDistributionOriginGroupFailoverStatusCodes m_statusCodes;
    bool m_statusCodesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
