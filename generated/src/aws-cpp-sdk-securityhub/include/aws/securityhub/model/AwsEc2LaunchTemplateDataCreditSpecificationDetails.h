/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p> Specifies the credit option for CPU usage of a T2, T3, or T3a Amazon EC2
   * instance. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2LaunchTemplateDataCreditSpecificationDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2LaunchTemplateDataCreditSpecificationDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataCreditSpecificationDetails();
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataCreditSpecificationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataCreditSpecificationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The credit option for CPU usage of a T instance. </p>
     */
    inline const Aws::String& GetCpuCredits() const{ return m_cpuCredits; }

    /**
     * <p> The credit option for CPU usage of a T instance. </p>
     */
    inline bool CpuCreditsHasBeenSet() const { return m_cpuCreditsHasBeenSet; }

    /**
     * <p> The credit option for CPU usage of a T instance. </p>
     */
    inline void SetCpuCredits(const Aws::String& value) { m_cpuCreditsHasBeenSet = true; m_cpuCredits = value; }

    /**
     * <p> The credit option for CPU usage of a T instance. </p>
     */
    inline void SetCpuCredits(Aws::String&& value) { m_cpuCreditsHasBeenSet = true; m_cpuCredits = std::move(value); }

    /**
     * <p> The credit option for CPU usage of a T instance. </p>
     */
    inline void SetCpuCredits(const char* value) { m_cpuCreditsHasBeenSet = true; m_cpuCredits.assign(value); }

    /**
     * <p> The credit option for CPU usage of a T instance. </p>
     */
    inline AwsEc2LaunchTemplateDataCreditSpecificationDetails& WithCpuCredits(const Aws::String& value) { SetCpuCredits(value); return *this;}

    /**
     * <p> The credit option for CPU usage of a T instance. </p>
     */
    inline AwsEc2LaunchTemplateDataCreditSpecificationDetails& WithCpuCredits(Aws::String&& value) { SetCpuCredits(std::move(value)); return *this;}

    /**
     * <p> The credit option for CPU usage of a T instance. </p>
     */
    inline AwsEc2LaunchTemplateDataCreditSpecificationDetails& WithCpuCredits(const char* value) { SetCpuCredits(value); return *this;}

  private:

    Aws::String m_cpuCredits;
    bool m_cpuCreditsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
