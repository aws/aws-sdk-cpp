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
   * <p> The maintenance options of an Amazon EC2 instance. </p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2LaunchTemplateDataMaintenanceOptionsDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2LaunchTemplateDataMaintenanceOptionsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataMaintenanceOptionsDetails();
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataMaintenanceOptionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataMaintenanceOptionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Disables the automatic recovery behavior of your instance or sets it to
     * default. </p>
     */
    inline const Aws::String& GetAutoRecovery() const{ return m_autoRecovery; }

    /**
     * <p> Disables the automatic recovery behavior of your instance or sets it to
     * default. </p>
     */
    inline bool AutoRecoveryHasBeenSet() const { return m_autoRecoveryHasBeenSet; }

    /**
     * <p> Disables the automatic recovery behavior of your instance or sets it to
     * default. </p>
     */
    inline void SetAutoRecovery(const Aws::String& value) { m_autoRecoveryHasBeenSet = true; m_autoRecovery = value; }

    /**
     * <p> Disables the automatic recovery behavior of your instance or sets it to
     * default. </p>
     */
    inline void SetAutoRecovery(Aws::String&& value) { m_autoRecoveryHasBeenSet = true; m_autoRecovery = std::move(value); }

    /**
     * <p> Disables the automatic recovery behavior of your instance or sets it to
     * default. </p>
     */
    inline void SetAutoRecovery(const char* value) { m_autoRecoveryHasBeenSet = true; m_autoRecovery.assign(value); }

    /**
     * <p> Disables the automatic recovery behavior of your instance or sets it to
     * default. </p>
     */
    inline AwsEc2LaunchTemplateDataMaintenanceOptionsDetails& WithAutoRecovery(const Aws::String& value) { SetAutoRecovery(value); return *this;}

    /**
     * <p> Disables the automatic recovery behavior of your instance or sets it to
     * default. </p>
     */
    inline AwsEc2LaunchTemplateDataMaintenanceOptionsDetails& WithAutoRecovery(Aws::String&& value) { SetAutoRecovery(std::move(value)); return *this;}

    /**
     * <p> Disables the automatic recovery behavior of your instance or sets it to
     * default. </p>
     */
    inline AwsEc2LaunchTemplateDataMaintenanceOptionsDetails& WithAutoRecovery(const char* value) { SetAutoRecovery(value); return *this;}

  private:

    Aws::String m_autoRecovery;
    bool m_autoRecoveryHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
