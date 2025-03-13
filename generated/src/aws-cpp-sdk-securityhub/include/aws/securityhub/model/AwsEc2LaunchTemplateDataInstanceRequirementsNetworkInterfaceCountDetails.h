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
   * <p> The minimum and maximum number of network interfaces to be attached to an
   * Amazon EC2 instance. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2LaunchTemplateDataInstanceRequirementsNetworkInterfaceCountDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2LaunchTemplateDataInstanceRequirementsNetworkInterfaceCountDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataInstanceRequirementsNetworkInterfaceCountDetails() = default;
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataInstanceRequirementsNetworkInterfaceCountDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataInstanceRequirementsNetworkInterfaceCountDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The maximum number of network interfaces. </p>
     */
    inline int GetMax() const { return m_max; }
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }
    inline void SetMax(int value) { m_maxHasBeenSet = true; m_max = value; }
    inline AwsEc2LaunchTemplateDataInstanceRequirementsNetworkInterfaceCountDetails& WithMax(int value) { SetMax(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The minimum number of network interfaces. </p>
     */
    inline int GetMin() const { return m_min; }
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }
    inline void SetMin(int value) { m_minHasBeenSet = true; m_min = value; }
    inline AwsEc2LaunchTemplateDataInstanceRequirementsNetworkInterfaceCountDetails& WithMin(int value) { SetMin(value); return *this;}
    ///@}
  private:

    int m_max{0};
    bool m_maxHasBeenSet = false;

    int m_min{0};
    bool m_minHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
