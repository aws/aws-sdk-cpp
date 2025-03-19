/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsRdsDbSubnetGroupSubnetAvailabilityZone.h>
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
   * <p>Information about a subnet in a subnet group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRdsDbSubnetGroupSubnet">AWS
   * API Reference</a></p>
   */
  class AwsRdsDbSubnetGroupSubnet
  {
  public:
    AWS_SECURITYHUB_API AwsRdsDbSubnetGroupSubnet() = default;
    AWS_SECURITYHUB_API AwsRdsDbSubnetGroupSubnet(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsDbSubnetGroupSubnet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of a subnet in the subnet group.</p>
     */
    inline const Aws::String& GetSubnetIdentifier() const { return m_subnetIdentifier; }
    inline bool SubnetIdentifierHasBeenSet() const { return m_subnetIdentifierHasBeenSet; }
    template<typename SubnetIdentifierT = Aws::String>
    void SetSubnetIdentifier(SubnetIdentifierT&& value) { m_subnetIdentifierHasBeenSet = true; m_subnetIdentifier = std::forward<SubnetIdentifierT>(value); }
    template<typename SubnetIdentifierT = Aws::String>
    AwsRdsDbSubnetGroupSubnet& WithSubnetIdentifier(SubnetIdentifierT&& value) { SetSubnetIdentifier(std::forward<SubnetIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Availability Zone for a subnet in the subnet group.</p>
     */
    inline const AwsRdsDbSubnetGroupSubnetAvailabilityZone& GetSubnetAvailabilityZone() const { return m_subnetAvailabilityZone; }
    inline bool SubnetAvailabilityZoneHasBeenSet() const { return m_subnetAvailabilityZoneHasBeenSet; }
    template<typename SubnetAvailabilityZoneT = AwsRdsDbSubnetGroupSubnetAvailabilityZone>
    void SetSubnetAvailabilityZone(SubnetAvailabilityZoneT&& value) { m_subnetAvailabilityZoneHasBeenSet = true; m_subnetAvailabilityZone = std::forward<SubnetAvailabilityZoneT>(value); }
    template<typename SubnetAvailabilityZoneT = AwsRdsDbSubnetGroupSubnetAvailabilityZone>
    AwsRdsDbSubnetGroupSubnet& WithSubnetAvailabilityZone(SubnetAvailabilityZoneT&& value) { SetSubnetAvailabilityZone(std::forward<SubnetAvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a subnet in the subnet group.</p>
     */
    inline const Aws::String& GetSubnetStatus() const { return m_subnetStatus; }
    inline bool SubnetStatusHasBeenSet() const { return m_subnetStatusHasBeenSet; }
    template<typename SubnetStatusT = Aws::String>
    void SetSubnetStatus(SubnetStatusT&& value) { m_subnetStatusHasBeenSet = true; m_subnetStatus = std::forward<SubnetStatusT>(value); }
    template<typename SubnetStatusT = Aws::String>
    AwsRdsDbSubnetGroupSubnet& WithSubnetStatus(SubnetStatusT&& value) { SetSubnetStatus(std::forward<SubnetStatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_subnetIdentifier;
    bool m_subnetIdentifierHasBeenSet = false;

    AwsRdsDbSubnetGroupSubnetAvailabilityZone m_subnetAvailabilityZone;
    bool m_subnetAvailabilityZoneHasBeenSet = false;

    Aws::String m_subnetStatus;
    bool m_subnetStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
