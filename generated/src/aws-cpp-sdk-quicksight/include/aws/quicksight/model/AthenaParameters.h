/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/IdentityCenterConfiguration.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Parameters for Amazon Athena.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AthenaParameters">AWS
   * API Reference</a></p>
   */
  class AthenaParameters
  {
  public:
    AWS_QUICKSIGHT_API AthenaParameters() = default;
    AWS_QUICKSIGHT_API AthenaParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AthenaParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The workgroup that Amazon Athena uses.</p>
     */
    inline const Aws::String& GetWorkGroup() const { return m_workGroup; }
    inline bool WorkGroupHasBeenSet() const { return m_workGroupHasBeenSet; }
    template<typename WorkGroupT = Aws::String>
    void SetWorkGroup(WorkGroupT&& value) { m_workGroupHasBeenSet = true; m_workGroup = std::forward<WorkGroupT>(value); }
    template<typename WorkGroupT = Aws::String>
    AthenaParameters& WithWorkGroup(WorkGroupT&& value) { SetWorkGroup(std::forward<WorkGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use the <code>RoleArn</code> structure to override an account-wide role for a
     * specific Athena data source. For example, say an account administrator has
     * turned off all Athena access with an account-wide role. The administrator can
     * then use <code>RoleArn</code> to bypass the account-wide role and allow Athena
     * access for the single Athena data source that is specified in the structure,
     * even if the account-wide role forbidding Athena access is still active.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    AthenaParameters& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional parameter that configures IAM Identity Center authentication to
     * grant QuickSight access to your workgroup.</p> <p>This parameter can only be
     * specified if your QuickSight account is configured with IAM Identity Center.</p>
     */
    inline const IdentityCenterConfiguration& GetIdentityCenterConfiguration() const { return m_identityCenterConfiguration; }
    inline bool IdentityCenterConfigurationHasBeenSet() const { return m_identityCenterConfigurationHasBeenSet; }
    template<typename IdentityCenterConfigurationT = IdentityCenterConfiguration>
    void SetIdentityCenterConfiguration(IdentityCenterConfigurationT&& value) { m_identityCenterConfigurationHasBeenSet = true; m_identityCenterConfiguration = std::forward<IdentityCenterConfigurationT>(value); }
    template<typename IdentityCenterConfigurationT = IdentityCenterConfiguration>
    AthenaParameters& WithIdentityCenterConfiguration(IdentityCenterConfigurationT&& value) { SetIdentityCenterConfiguration(std::forward<IdentityCenterConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workGroup;
    bool m_workGroupHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    IdentityCenterConfiguration m_identityCenterConfiguration;
    bool m_identityCenterConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
