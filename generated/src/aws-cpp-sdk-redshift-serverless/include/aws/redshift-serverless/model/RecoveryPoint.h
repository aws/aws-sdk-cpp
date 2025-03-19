/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace RedshiftServerless
{
namespace Model
{

  /**
   * <p>The automatically created recovery point of a namespace. Recovery points are
   * created every 30 minutes and kept for 24 hours.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/RecoveryPoint">AWS
   * API Reference</a></p>
   */
  class RecoveryPoint
  {
  public:
    AWS_REDSHIFTSERVERLESS_API RecoveryPoint() = default;
    AWS_REDSHIFTSERVERLESS_API RecoveryPoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API RecoveryPoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the namespace the recovery point is
     * associated with.</p>
     */
    inline const Aws::String& GetNamespaceArn() const { return m_namespaceArn; }
    inline bool NamespaceArnHasBeenSet() const { return m_namespaceArnHasBeenSet; }
    template<typename NamespaceArnT = Aws::String>
    void SetNamespaceArn(NamespaceArnT&& value) { m_namespaceArnHasBeenSet = true; m_namespaceArn = std::forward<NamespaceArnT>(value); }
    template<typename NamespaceArnT = Aws::String>
    RecoveryPoint& WithNamespaceArn(NamespaceArnT&& value) { SetNamespaceArn(std::forward<NamespaceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the namespace the recovery point is associated with.</p>
     */
    inline const Aws::String& GetNamespaceName() const { return m_namespaceName; }
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }
    template<typename NamespaceNameT = Aws::String>
    void SetNamespaceName(NamespaceNameT&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::forward<NamespaceNameT>(value); }
    template<typename NamespaceNameT = Aws::String>
    RecoveryPoint& WithNamespaceName(NamespaceNameT&& value) { SetNamespaceName(std::forward<NamespaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the recovery point is created.</p>
     */
    inline const Aws::Utils::DateTime& GetRecoveryPointCreateTime() const { return m_recoveryPointCreateTime; }
    inline bool RecoveryPointCreateTimeHasBeenSet() const { return m_recoveryPointCreateTimeHasBeenSet; }
    template<typename RecoveryPointCreateTimeT = Aws::Utils::DateTime>
    void SetRecoveryPointCreateTime(RecoveryPointCreateTimeT&& value) { m_recoveryPointCreateTimeHasBeenSet = true; m_recoveryPointCreateTime = std::forward<RecoveryPointCreateTimeT>(value); }
    template<typename RecoveryPointCreateTimeT = Aws::Utils::DateTime>
    RecoveryPoint& WithRecoveryPointCreateTime(RecoveryPointCreateTimeT&& value) { SetRecoveryPointCreateTime(std::forward<RecoveryPointCreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the recovery point.</p>
     */
    inline const Aws::String& GetRecoveryPointId() const { return m_recoveryPointId; }
    inline bool RecoveryPointIdHasBeenSet() const { return m_recoveryPointIdHasBeenSet; }
    template<typename RecoveryPointIdT = Aws::String>
    void SetRecoveryPointId(RecoveryPointIdT&& value) { m_recoveryPointIdHasBeenSet = true; m_recoveryPointId = std::forward<RecoveryPointIdT>(value); }
    template<typename RecoveryPointIdT = Aws::String>
    RecoveryPoint& WithRecoveryPointId(RecoveryPointIdT&& value) { SetRecoveryPointId(std::forward<RecoveryPointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total size of the data in the recovery point in megabytes.</p>
     */
    inline double GetTotalSizeInMegaBytes() const { return m_totalSizeInMegaBytes; }
    inline bool TotalSizeInMegaBytesHasBeenSet() const { return m_totalSizeInMegaBytesHasBeenSet; }
    inline void SetTotalSizeInMegaBytes(double value) { m_totalSizeInMegaBytesHasBeenSet = true; m_totalSizeInMegaBytes = value; }
    inline RecoveryPoint& WithTotalSizeInMegaBytes(double value) { SetTotalSizeInMegaBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workgroup the recovery point is associated with.</p>
     */
    inline const Aws::String& GetWorkgroupName() const { return m_workgroupName; }
    inline bool WorkgroupNameHasBeenSet() const { return m_workgroupNameHasBeenSet; }
    template<typename WorkgroupNameT = Aws::String>
    void SetWorkgroupName(WorkgroupNameT&& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = std::forward<WorkgroupNameT>(value); }
    template<typename WorkgroupNameT = Aws::String>
    RecoveryPoint& WithWorkgroupName(WorkgroupNameT&& value) { SetWorkgroupName(std::forward<WorkgroupNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_namespaceArn;
    bool m_namespaceArnHasBeenSet = false;

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet = false;

    Aws::Utils::DateTime m_recoveryPointCreateTime{};
    bool m_recoveryPointCreateTimeHasBeenSet = false;

    Aws::String m_recoveryPointId;
    bool m_recoveryPointIdHasBeenSet = false;

    double m_totalSizeInMegaBytes{0.0};
    bool m_totalSizeInMegaBytesHasBeenSet = false;

    Aws::String m_workgroupName;
    bool m_workgroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
