/**
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
    AWS_SECURITYHUB_API AwsBackupBackupPlanRuleCopyActionsDetails();
    AWS_SECURITYHUB_API AwsBackupBackupPlanRuleCopyActionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsBackupBackupPlanRuleCopyActionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the destination backup
     * vault for the copied backup. </p>
     */
    inline const Aws::String& GetDestinationBackupVaultArn() const{ return m_destinationBackupVaultArn; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the destination backup
     * vault for the copied backup. </p>
     */
    inline bool DestinationBackupVaultArnHasBeenSet() const { return m_destinationBackupVaultArnHasBeenSet; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the destination backup
     * vault for the copied backup. </p>
     */
    inline void SetDestinationBackupVaultArn(const Aws::String& value) { m_destinationBackupVaultArnHasBeenSet = true; m_destinationBackupVaultArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the destination backup
     * vault for the copied backup. </p>
     */
    inline void SetDestinationBackupVaultArn(Aws::String&& value) { m_destinationBackupVaultArnHasBeenSet = true; m_destinationBackupVaultArn = std::move(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the destination backup
     * vault for the copied backup. </p>
     */
    inline void SetDestinationBackupVaultArn(const char* value) { m_destinationBackupVaultArnHasBeenSet = true; m_destinationBackupVaultArn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the destination backup
     * vault for the copied backup. </p>
     */
    inline AwsBackupBackupPlanRuleCopyActionsDetails& WithDestinationBackupVaultArn(const Aws::String& value) { SetDestinationBackupVaultArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the destination backup
     * vault for the copied backup. </p>
     */
    inline AwsBackupBackupPlanRuleCopyActionsDetails& WithDestinationBackupVaultArn(Aws::String&& value) { SetDestinationBackupVaultArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the destination backup
     * vault for the copied backup. </p>
     */
    inline AwsBackupBackupPlanRuleCopyActionsDetails& WithDestinationBackupVaultArn(const char* value) { SetDestinationBackupVaultArn(value); return *this;}


    /**
     * <p>Defines when a protected resource is transitioned to cold storage and when it
     * expires. Backup transitions and expires backups automatically according to the
     * lifecycle that you define. If you do not specify a lifecycle, Backup applies the
     * lifecycle policy of the source backup to the destination backup.</p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days.</p>
     */
    inline const AwsBackupBackupPlanLifecycleDetails& GetLifecycle() const{ return m_lifecycle; }

    /**
     * <p>Defines when a protected resource is transitioned to cold storage and when it
     * expires. Backup transitions and expires backups automatically according to the
     * lifecycle that you define. If you do not specify a lifecycle, Backup applies the
     * lifecycle policy of the source backup to the destination backup.</p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days.</p>
     */
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }

    /**
     * <p>Defines when a protected resource is transitioned to cold storage and when it
     * expires. Backup transitions and expires backups automatically according to the
     * lifecycle that you define. If you do not specify a lifecycle, Backup applies the
     * lifecycle policy of the source backup to the destination backup.</p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days.</p>
     */
    inline void SetLifecycle(const AwsBackupBackupPlanLifecycleDetails& value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }

    /**
     * <p>Defines when a protected resource is transitioned to cold storage and when it
     * expires. Backup transitions and expires backups automatically according to the
     * lifecycle that you define. If you do not specify a lifecycle, Backup applies the
     * lifecycle policy of the source backup to the destination backup.</p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days.</p>
     */
    inline void SetLifecycle(AwsBackupBackupPlanLifecycleDetails&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::move(value); }

    /**
     * <p>Defines when a protected resource is transitioned to cold storage and when it
     * expires. Backup transitions and expires backups automatically according to the
     * lifecycle that you define. If you do not specify a lifecycle, Backup applies the
     * lifecycle policy of the source backup to the destination backup.</p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days.</p>
     */
    inline AwsBackupBackupPlanRuleCopyActionsDetails& WithLifecycle(const AwsBackupBackupPlanLifecycleDetails& value) { SetLifecycle(value); return *this;}

    /**
     * <p>Defines when a protected resource is transitioned to cold storage and when it
     * expires. Backup transitions and expires backups automatically according to the
     * lifecycle that you define. If you do not specify a lifecycle, Backup applies the
     * lifecycle policy of the source backup to the destination backup.</p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days.</p>
     */
    inline AwsBackupBackupPlanRuleCopyActionsDetails& WithLifecycle(AwsBackupBackupPlanLifecycleDetails&& value) { SetLifecycle(std::move(value)); return *this;}

  private:

    Aws::String m_destinationBackupVaultArn;
    bool m_destinationBackupVaultArnHasBeenSet = false;

    AwsBackupBackupPlanLifecycleDetails m_lifecycle;
    bool m_lifecycleHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
