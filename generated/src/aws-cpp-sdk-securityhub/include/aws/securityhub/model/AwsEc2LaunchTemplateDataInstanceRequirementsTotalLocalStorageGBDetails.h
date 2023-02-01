/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>

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
   * <p> The minimum and maximum amount of total local storage, in GB, that an Amazon
   * EC2 instance uses. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2LaunchTemplateDataInstanceRequirementsTotalLocalStorageGBDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2LaunchTemplateDataInstanceRequirementsTotalLocalStorageGBDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataInstanceRequirementsTotalLocalStorageGBDetails();
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataInstanceRequirementsTotalLocalStorageGBDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataInstanceRequirementsTotalLocalStorageGBDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The maximum amount of total local storage, in GB. </p>
     */
    inline double GetMax() const{ return m_max; }

    /**
     * <p> The maximum amount of total local storage, in GB. </p>
     */
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }

    /**
     * <p> The maximum amount of total local storage, in GB. </p>
     */
    inline void SetMax(double value) { m_maxHasBeenSet = true; m_max = value; }

    /**
     * <p> The maximum amount of total local storage, in GB. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsTotalLocalStorageGBDetails& WithMax(double value) { SetMax(value); return *this;}


    /**
     * <p> The minimum amount of total local storage, in GB. </p>
     */
    inline double GetMin() const{ return m_min; }

    /**
     * <p> The minimum amount of total local storage, in GB. </p>
     */
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }

    /**
     * <p> The minimum amount of total local storage, in GB. </p>
     */
    inline void SetMin(double value) { m_minHasBeenSet = true; m_min = value; }

    /**
     * <p> The minimum amount of total local storage, in GB. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsTotalLocalStorageGBDetails& WithMin(double value) { SetMin(value); return *this;}

  private:

    double m_max;
    bool m_maxHasBeenSet = false;

    double m_min;
    bool m_minHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
