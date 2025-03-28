﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsBackupBackupPlanLifecycleDetails.h>
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
   * <p>An array of <code>CopyAction</code> objects, each of which contains details
   * of the copy operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsBackupBackupPlanRuleCopyActionsDetails">AWS
   * API Reference</a></p>
   */
  class AwsBackupBackupPlanRuleCopyActionsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsBackupBackupPlanRuleCopyActionsDetails() = default;
    AWS_SECURITYHUB_API AwsBackupBackupPlanRuleCopyActionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsBackupBackupPlanRuleCopyActionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the destination backup
     * vault for the copied backup. </p>
     */
    inline const Aws::String& GetDestinationBackupVaultArn() const { return m_destinationBackupVaultArn; }
    inline bool DestinationBackupVaultArnHasBeenSet() const { return m_destinationBackupVaultArnHasBeenSet; }
    template<typename DestinationBackupVaultArnT = Aws::String>
    void SetDestinationBackupVaultArn(DestinationBackupVaultArnT&& value) { m_destinationBackupVaultArnHasBeenSet = true; m_destinationBackupVaultArn = std::forward<DestinationBackupVaultArnT>(value); }
    template<typename DestinationBackupVaultArnT = Aws::String>
    AwsBackupBackupPlanRuleCopyActionsDetails& WithDestinationBackupVaultArn(DestinationBackupVaultArnT&& value) { SetDestinationBackupVaultArn(std::forward<DestinationBackupVaultArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines when a protected resource is transitioned to cold storage and when it
     * expires. Backup transitions and expires backups automatically according to the
     * lifecycle that you define. If you don't specify a lifecycle, Backup applies the
     * lifecycle policy of the source backup to the destination backup.</p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days.</p>
     */
    inline const AwsBackupBackupPlanLifecycleDetails& GetLifecycle() const { return m_lifecycle; }
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }
    template<typename LifecycleT = AwsBackupBackupPlanLifecycleDetails>
    void SetLifecycle(LifecycleT&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::forward<LifecycleT>(value); }
    template<typename LifecycleT = AwsBackupBackupPlanLifecycleDetails>
    AwsBackupBackupPlanRuleCopyActionsDetails& WithLifecycle(LifecycleT&& value) { SetLifecycle(std::forward<LifecycleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_destinationBackupVaultArn;
    bool m_destinationBackupVaultArnHasBeenSet = false;

    AwsBackupBackupPlanLifecycleDetails m_lifecycle;
    bool m_lifecycleHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
