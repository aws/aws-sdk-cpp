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
    AWS_SECURITYHUB_API AwsRdsDbSubnetGroupSubnet();
    AWS_SECURITYHUB_API AwsRdsDbSubnetGroupSubnet(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsDbSubnetGroupSubnet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of a subnet in the subnet group.</p>
     */
    inline const Aws::String& GetSubnetIdentifier() const{ return m_subnetIdentifier; }

    /**
     * <p>The identifier of a subnet in the subnet group.</p>
     */
    inline bool SubnetIdentifierHasBeenSet() const { return m_subnetIdentifierHasBeenSet; }

    /**
     * <p>The identifier of a subnet in the subnet group.</p>
     */
    inline void SetSubnetIdentifier(const Aws::String& value) { m_subnetIdentifierHasBeenSet = true; m_subnetIdentifier = value; }

    /**
     * <p>The identifier of a subnet in the subnet group.</p>
     */
    inline void SetSubnetIdentifier(Aws::String&& value) { m_subnetIdentifierHasBeenSet = true; m_subnetIdentifier = std::move(value); }

    /**
     * <p>The identifier of a subnet in the subnet group.</p>
     */
    inline void SetSubnetIdentifier(const char* value) { m_subnetIdentifierHasBeenSet = true; m_subnetIdentifier.assign(value); }

    /**
     * <p>The identifier of a subnet in the subnet group.</p>
     */
    inline AwsRdsDbSubnetGroupSubnet& WithSubnetIdentifier(const Aws::String& value) { SetSubnetIdentifier(value); return *this;}

    /**
     * <p>The identifier of a subnet in the subnet group.</p>
     */
    inline AwsRdsDbSubnetGroupSubnet& WithSubnetIdentifier(Aws::String&& value) { SetSubnetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of a subnet in the subnet group.</p>
     */
    inline AwsRdsDbSubnetGroupSubnet& WithSubnetIdentifier(const char* value) { SetSubnetIdentifier(value); return *this;}


    /**
     * <p>Information about the Availability Zone for a subnet in the subnet group.</p>
     */
    inline const AwsRdsDbSubnetGroupSubnetAvailabilityZone& GetSubnetAvailabilityZone() const{ return m_subnetAvailabilityZone; }

    /**
     * <p>Information about the Availability Zone for a subnet in the subnet group.</p>
     */
    inline bool SubnetAvailabilityZoneHasBeenSet() const { return m_subnetAvailabilityZoneHasBeenSet; }

    /**
     * <p>Information about the Availability Zone for a subnet in the subnet group.</p>
     */
    inline void SetSubnetAvailabilityZone(const AwsRdsDbSubnetGroupSubnetAvailabilityZone& value) { m_subnetAvailabilityZoneHasBeenSet = true; m_subnetAvailabilityZone = value; }

    /**
     * <p>Information about the Availability Zone for a subnet in the subnet group.</p>
     */
    inline void SetSubnetAvailabilityZone(AwsRdsDbSubnetGroupSubnetAvailabilityZone&& value) { m_subnetAvailabilityZoneHasBeenSet = true; m_subnetAvailabilityZone = std::move(value); }

    /**
     * <p>Information about the Availability Zone for a subnet in the subnet group.</p>
     */
    inline AwsRdsDbSubnetGroupSubnet& WithSubnetAvailabilityZone(const AwsRdsDbSubnetGroupSubnetAvailabilityZone& value) { SetSubnetAvailabilityZone(value); return *this;}

    /**
     * <p>Information about the Availability Zone for a subnet in the subnet group.</p>
     */
    inline AwsRdsDbSubnetGroupSubnet& WithSubnetAvailabilityZone(AwsRdsDbSubnetGroupSubnetAvailabilityZone&& value) { SetSubnetAvailabilityZone(std::move(value)); return *this;}


    /**
     * <p>The status of a subnet in the subnet group.</p>
     */
    inline const Aws::String& GetSubnetStatus() const{ return m_subnetStatus; }

    /**
     * <p>The status of a subnet in the subnet group.</p>
     */
    inline bool SubnetStatusHasBeenSet() const { return m_subnetStatusHasBeenSet; }

    /**
     * <p>The status of a subnet in the subnet group.</p>
     */
    inline void SetSubnetStatus(const Aws::String& value) { m_subnetStatusHasBeenSet = true; m_subnetStatus = value; }

    /**
     * <p>The status of a subnet in the subnet group.</p>
     */
    inline void SetSubnetStatus(Aws::String&& value) { m_subnetStatusHasBeenSet = true; m_subnetStatus = std::move(value); }

    /**
     * <p>The status of a subnet in the subnet group.</p>
     */
    inline void SetSubnetStatus(const char* value) { m_subnetStatusHasBeenSet = true; m_subnetStatus.assign(value); }

    /**
     * <p>The status of a subnet in the subnet group.</p>
     */
    inline AwsRdsDbSubnetGroupSubnet& WithSubnetStatus(const Aws::String& value) { SetSubnetStatus(value); return *this;}

    /**
     * <p>The status of a subnet in the subnet group.</p>
     */
    inline AwsRdsDbSubnetGroupSubnet& WithSubnetStatus(Aws::String&& value) { SetSubnetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of a subnet in the subnet group.</p>
     */
    inline AwsRdsDbSubnetGroupSubnet& WithSubnetStatus(const char* value) { SetSubnetStatus(value); return *this;}

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
