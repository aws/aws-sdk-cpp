/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>The parameters for a <code>STEP_FUNCTIONS</code> task.</p> <p>For information
   * about specifying and updating task parameters, see
   * <a>RegisterTaskWithMaintenanceWindow</a> and
   * <a>UpdateMaintenanceWindowTask</a>.</p>  <p> <code>LoggingInfo</code> has
   * been deprecated. To specify an Amazon Simple Storage Service (Amazon S3) bucket
   * to contain logs, instead use the <code>OutputS3BucketName</code> and
   * <code>OutputS3KeyPrefix</code> options in the
   * <code>TaskInvocationParameters</code> structure. For information about how
   * Amazon Web Services Systems Manager handles these options for the supported
   * maintenance window task types, see
   * <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>
   * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
   * to a task when it runs, instead use the <code>Parameters</code> option in the
   * <code>TaskInvocationParameters</code> structure. For information about how
   * Systems Manager handles these options for the supported maintenance window task
   * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>For Step
   * Functions tasks, Systems Manager ignores any values specified for
   * <code>TaskParameters</code> and <code>LoggingInfo</code>.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/MaintenanceWindowStepFunctionsParameters">AWS
   * API Reference</a></p>
   */
  class MaintenanceWindowStepFunctionsParameters
  {
  public:
    AWS_SSM_API MaintenanceWindowStepFunctionsParameters() = default;
    AWS_SSM_API MaintenanceWindowStepFunctionsParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API MaintenanceWindowStepFunctionsParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The inputs for the <code>STEP_FUNCTIONS</code> task.</p>
     */
    inline const Aws::String& GetInput() const { return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    template<typename InputT = Aws::String>
    void SetInput(InputT&& value) { m_inputHasBeenSet = true; m_input = std::forward<InputT>(value); }
    template<typename InputT = Aws::String>
    MaintenanceWindowStepFunctionsParameters& WithInput(InputT&& value) { SetInput(std::forward<InputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>STEP_FUNCTIONS</code> task.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    MaintenanceWindowStepFunctionsParameters& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_input;
    bool m_inputHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
