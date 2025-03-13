/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/RedshiftServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

  /**
   */
  class RestoreFromRecoveryPointRequest : public RedshiftServerlessRequest
  {
  public:
    AWS_REDSHIFTSERVERLESS_API RestoreFromRecoveryPointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreFromRecoveryPoint"; }

    AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the namespace to restore data into.</p>
     */
    inline const Aws::String& GetNamespaceName() const { return m_namespaceName; }
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }
    template<typename NamespaceNameT = Aws::String>
    void SetNamespaceName(NamespaceNameT&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::forward<NamespaceNameT>(value); }
    template<typename NamespaceNameT = Aws::String>
    RestoreFromRecoveryPointRequest& WithNamespaceName(NamespaceNameT&& value) { SetNamespaceName(std::forward<NamespaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the recovery point to restore from.</p>
     */
    inline const Aws::String& GetRecoveryPointId() const { return m_recoveryPointId; }
    inline bool RecoveryPointIdHasBeenSet() const { return m_recoveryPointIdHasBeenSet; }
    template<typename RecoveryPointIdT = Aws::String>
    void SetRecoveryPointId(RecoveryPointIdT&& value) { m_recoveryPointIdHasBeenSet = true; m_recoveryPointId = std::forward<RecoveryPointIdT>(value); }
    template<typename RecoveryPointIdT = Aws::String>
    RestoreFromRecoveryPointRequest& WithRecoveryPointId(RecoveryPointIdT&& value) { SetRecoveryPointId(std::forward<RecoveryPointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workgroup used to restore data.</p>
     */
    inline const Aws::String& GetWorkgroupName() const { return m_workgroupName; }
    inline bool WorkgroupNameHasBeenSet() const { return m_workgroupNameHasBeenSet; }
    template<typename WorkgroupNameT = Aws::String>
    void SetWorkgroupName(WorkgroupNameT&& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = std::forward<WorkgroupNameT>(value); }
    template<typename WorkgroupNameT = Aws::String>
    RestoreFromRecoveryPointRequest& WithWorkgroupName(WorkgroupNameT&& value) { SetWorkgroupName(std::forward<WorkgroupNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet = false;

    Aws::String m_recoveryPointId;
    bool m_recoveryPointIdHasBeenSet = false;

    Aws::String m_workgroupName;
    bool m_workgroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
