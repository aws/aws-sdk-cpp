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
   * <p>Specifies how long in days before a recovery point transitions to cold
   * storage or is deleted. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsBackupRecoveryPointCalculatedLifecycleDetails">AWS
   * API Reference</a></p>
   */
  class AwsBackupRecoveryPointCalculatedLifecycleDetails
  {
  public:
    AWS_SECURITYHUB_API AwsBackupRecoveryPointCalculatedLifecycleDetails() = default;
    AWS_SECURITYHUB_API AwsBackupRecoveryPointCalculatedLifecycleDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsBackupRecoveryPointCalculatedLifecycleDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the number of days after creation that a recovery point is deleted.
     * Must be greater than 90 days plus <code>MoveToColdStorageAfterDays</code>. </p>
     */
    inline const Aws::String& GetDeleteAt() const { return m_deleteAt; }
    inline bool DeleteAtHasBeenSet() const { return m_deleteAtHasBeenSet; }
    template<typename DeleteAtT = Aws::String>
    void SetDeleteAt(DeleteAtT&& value) { m_deleteAtHasBeenSet = true; m_deleteAt = std::forward<DeleteAtT>(value); }
    template<typename DeleteAtT = Aws::String>
    AwsBackupRecoveryPointCalculatedLifecycleDetails& WithDeleteAt(DeleteAtT&& value) { SetDeleteAt(std::forward<DeleteAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the number of days after creation that a recovery point is moved to
     * cold storage. </p>
     */
    inline const Aws::String& GetMoveToColdStorageAt() const { return m_moveToColdStorageAt; }
    inline bool MoveToColdStorageAtHasBeenSet() const { return m_moveToColdStorageAtHasBeenSet; }
    template<typename MoveToColdStorageAtT = Aws::String>
    void SetMoveToColdStorageAt(MoveToColdStorageAtT&& value) { m_moveToColdStorageAtHasBeenSet = true; m_moveToColdStorageAt = std::forward<MoveToColdStorageAtT>(value); }
    template<typename MoveToColdStorageAtT = Aws::String>
    AwsBackupRecoveryPointCalculatedLifecycleDetails& WithMoveToColdStorageAt(MoveToColdStorageAtT&& value) { SetMoveToColdStorageAt(std::forward<MoveToColdStorageAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deleteAt;
    bool m_deleteAtHasBeenSet = false;

    Aws::String m_moveToColdStorageAt;
    bool m_moveToColdStorageAtHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
