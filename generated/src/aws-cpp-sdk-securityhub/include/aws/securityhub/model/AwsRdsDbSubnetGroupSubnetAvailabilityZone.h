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
   * <p>An Availability Zone for a subnet in a subnet group.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRdsDbSubnetGroupSubnetAvailabilityZone">AWS
   * API Reference</a></p>
   */
  class AwsRdsDbSubnetGroupSubnetAvailabilityZone
  {
  public:
    AWS_SECURITYHUB_API AwsRdsDbSubnetGroupSubnetAvailabilityZone();
    AWS_SECURITYHUB_API AwsRdsDbSubnetGroupSubnetAvailabilityZone(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsDbSubnetGroupSubnetAvailabilityZone& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Availability Zone for a subnet in the subnet group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Availability Zone for a subnet in the subnet group.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Availability Zone for a subnet in the subnet group.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Availability Zone for a subnet in the subnet group.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Availability Zone for a subnet in the subnet group.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Availability Zone for a subnet in the subnet group.</p>
     */
    inline AwsRdsDbSubnetGroupSubnetAvailabilityZone& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Availability Zone for a subnet in the subnet group.</p>
     */
    inline AwsRdsDbSubnetGroupSubnetAvailabilityZone& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Availability Zone for a subnet in the subnet group.</p>
     */
    inline AwsRdsDbSubnetGroupSubnetAvailabilityZone& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
