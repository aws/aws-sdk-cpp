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
   * <p> The type of monitoring that’s turned on for an Amazon EC2 instance.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2InstanceMonitoringDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2InstanceMonitoringDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2InstanceMonitoringDetails();
    AWS_SECURITYHUB_API AwsEc2InstanceMonitoringDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2InstanceMonitoringDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Indicates whether detailed monitoring is turned on. Otherwise, basic
     * monitoring is turned on. </p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p> Indicates whether detailed monitoring is turned on. Otherwise, basic
     * monitoring is turned on. </p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p> Indicates whether detailed monitoring is turned on. Otherwise, basic
     * monitoring is turned on. </p>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p> Indicates whether detailed monitoring is turned on. Otherwise, basic
     * monitoring is turned on. </p>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p> Indicates whether detailed monitoring is turned on. Otherwise, basic
     * monitoring is turned on. </p>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p> Indicates whether detailed monitoring is turned on. Otherwise, basic
     * monitoring is turned on. </p>
     */
    inline AwsEc2InstanceMonitoringDetails& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p> Indicates whether detailed monitoring is turned on. Otherwise, basic
     * monitoring is turned on. </p>
     */
    inline AwsEc2InstanceMonitoringDetails& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p> Indicates whether detailed monitoring is turned on. Otherwise, basic
     * monitoring is turned on. </p>
     */
    inline AwsEc2InstanceMonitoringDetails& WithState(const char* value) { SetState(value); return *this;}

  private:

    Aws::String m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
