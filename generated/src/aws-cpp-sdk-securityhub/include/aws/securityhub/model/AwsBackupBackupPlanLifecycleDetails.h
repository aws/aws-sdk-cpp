/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>

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
   * <p>Provides lifecycle details for the backup plan. A lifecycle defines when a
   * backup is transitioned to cold storage and when it expires. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsBackupBackupPlanLifecycleDetails">AWS
   * API Reference</a></p>
   */
  class AwsBackupBackupPlanLifecycleDetails
  {
  public:
    AWS_SECURITYHUB_API AwsBackupBackupPlanLifecycleDetails();
    AWS_SECURITYHUB_API AwsBackupBackupPlanLifecycleDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsBackupBackupPlanLifecycleDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the number of days after creation that a recovery point is deleted.
     * Must be greater than 90 days plus <code>MoveToColdStorageAfterDays</code>. </p>
     */
    inline long long GetDeleteAfterDays() const{ return m_deleteAfterDays; }

    /**
     * <p>Specifies the number of days after creation that a recovery point is deleted.
     * Must be greater than 90 days plus <code>MoveToColdStorageAfterDays</code>. </p>
     */
    inline bool DeleteAfterDaysHasBeenSet() const { return m_deleteAfterDaysHasBeenSet; }

    /**
     * <p>Specifies the number of days after creation that a recovery point is deleted.
     * Must be greater than 90 days plus <code>MoveToColdStorageAfterDays</code>. </p>
     */
    inline void SetDeleteAfterDays(long long value) { m_deleteAfterDaysHasBeenSet = true; m_deleteAfterDays = value; }

    /**
     * <p>Specifies the number of days after creation that a recovery point is deleted.
     * Must be greater than 90 days plus <code>MoveToColdStorageAfterDays</code>. </p>
     */
    inline AwsBackupBackupPlanLifecycleDetails& WithDeleteAfterDays(long long value) { SetDeleteAfterDays(value); return *this;}


    /**
     * <p>Specifies the number of days after creation that a recovery point is moved to
     * cold storage. </p>
     */
    inline long long GetMoveToColdStorageAfterDays() const{ return m_moveToColdStorageAfterDays; }

    /**
     * <p>Specifies the number of days after creation that a recovery point is moved to
     * cold storage. </p>
     */
    inline bool MoveToColdStorageAfterDaysHasBeenSet() const { return m_moveToColdStorageAfterDaysHasBeenSet; }

    /**
     * <p>Specifies the number of days after creation that a recovery point is moved to
     * cold storage. </p>
     */
    inline void SetMoveToColdStorageAfterDays(long long value) { m_moveToColdStorageAfterDaysHasBeenSet = true; m_moveToColdStorageAfterDays = value; }

    /**
     * <p>Specifies the number of days after creation that a recovery point is moved to
     * cold storage. </p>
     */
    inline AwsBackupBackupPlanLifecycleDetails& WithMoveToColdStorageAfterDays(long long value) { SetMoveToColdStorageAfterDays(value); return *this;}

  private:

    long long m_deleteAfterDays;
    bool m_deleteAfterDaysHasBeenSet = false;

    long long m_moveToColdStorageAfterDays;
    bool m_moveToColdStorageAfterDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
