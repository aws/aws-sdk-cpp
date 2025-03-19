/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsEcsClusterConfigurationExecuteCommandConfigurationDetails.h>
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
   * <p>The run command configuration for the cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsClusterConfigurationDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsClusterConfigurationDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsClusterConfigurationDetails() = default;
    AWS_SECURITYHUB_API AwsEcsClusterConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsClusterConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the run command configuration for the cluster.</p>
     */
    inline const AwsEcsClusterConfigurationExecuteCommandConfigurationDetails& GetExecuteCommandConfiguration() const { return m_executeCommandConfiguration; }
    inline bool ExecuteCommandConfigurationHasBeenSet() const { return m_executeCommandConfigurationHasBeenSet; }
    template<typename ExecuteCommandConfigurationT = AwsEcsClusterConfigurationExecuteCommandConfigurationDetails>
    void SetExecuteCommandConfiguration(ExecuteCommandConfigurationT&& value) { m_executeCommandConfigurationHasBeenSet = true; m_executeCommandConfiguration = std::forward<ExecuteCommandConfigurationT>(value); }
    template<typename ExecuteCommandConfigurationT = AwsEcsClusterConfigurationExecuteCommandConfigurationDetails>
    AwsEcsClusterConfigurationDetails& WithExecuteCommandConfiguration(ExecuteCommandConfigurationT&& value) { SetExecuteCommandConfiguration(std::forward<ExecuteCommandConfigurationT>(value)); return *this;}
    ///@}
  private:

    AwsEcsClusterConfigurationExecuteCommandConfigurationDetails m_executeCommandConfiguration;
    bool m_executeCommandConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
