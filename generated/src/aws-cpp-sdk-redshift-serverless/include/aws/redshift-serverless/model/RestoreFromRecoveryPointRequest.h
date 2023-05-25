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
    AWS_REDSHIFTSERVERLESS_API RestoreFromRecoveryPointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreFromRecoveryPoint"; }

    AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the namespace to restore data into.</p>
     */
    inline const Aws::String& GetNamespaceName() const{ return m_namespaceName; }

    /**
     * <p>The name of the namespace to restore data into.</p>
     */
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }

    /**
     * <p>The name of the namespace to restore data into.</p>
     */
    inline void SetNamespaceName(const Aws::String& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = value; }

    /**
     * <p>The name of the namespace to restore data into.</p>
     */
    inline void SetNamespaceName(Aws::String&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::move(value); }

    /**
     * <p>The name of the namespace to restore data into.</p>
     */
    inline void SetNamespaceName(const char* value) { m_namespaceNameHasBeenSet = true; m_namespaceName.assign(value); }

    /**
     * <p>The name of the namespace to restore data into.</p>
     */
    inline RestoreFromRecoveryPointRequest& WithNamespaceName(const Aws::String& value) { SetNamespaceName(value); return *this;}

    /**
     * <p>The name of the namespace to restore data into.</p>
     */
    inline RestoreFromRecoveryPointRequest& WithNamespaceName(Aws::String&& value) { SetNamespaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the namespace to restore data into.</p>
     */
    inline RestoreFromRecoveryPointRequest& WithNamespaceName(const char* value) { SetNamespaceName(value); return *this;}


    /**
     * <p>The unique identifier of the recovery point to restore from.</p>
     */
    inline const Aws::String& GetRecoveryPointId() const{ return m_recoveryPointId; }

    /**
     * <p>The unique identifier of the recovery point to restore from.</p>
     */
    inline bool RecoveryPointIdHasBeenSet() const { return m_recoveryPointIdHasBeenSet; }

    /**
     * <p>The unique identifier of the recovery point to restore from.</p>
     */
    inline void SetRecoveryPointId(const Aws::String& value) { m_recoveryPointIdHasBeenSet = true; m_recoveryPointId = value; }

    /**
     * <p>The unique identifier of the recovery point to restore from.</p>
     */
    inline void SetRecoveryPointId(Aws::String&& value) { m_recoveryPointIdHasBeenSet = true; m_recoveryPointId = std::move(value); }

    /**
     * <p>The unique identifier of the recovery point to restore from.</p>
     */
    inline void SetRecoveryPointId(const char* value) { m_recoveryPointIdHasBeenSet = true; m_recoveryPointId.assign(value); }

    /**
     * <p>The unique identifier of the recovery point to restore from.</p>
     */
    inline RestoreFromRecoveryPointRequest& WithRecoveryPointId(const Aws::String& value) { SetRecoveryPointId(value); return *this;}

    /**
     * <p>The unique identifier of the recovery point to restore from.</p>
     */
    inline RestoreFromRecoveryPointRequest& WithRecoveryPointId(Aws::String&& value) { SetRecoveryPointId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the recovery point to restore from.</p>
     */
    inline RestoreFromRecoveryPointRequest& WithRecoveryPointId(const char* value) { SetRecoveryPointId(value); return *this;}


    /**
     * <p>The name of the workgroup used to restore data.</p>
     */
    inline const Aws::String& GetWorkgroupName() const{ return m_workgroupName; }

    /**
     * <p>The name of the workgroup used to restore data.</p>
     */
    inline bool WorkgroupNameHasBeenSet() const { return m_workgroupNameHasBeenSet; }

    /**
     * <p>The name of the workgroup used to restore data.</p>
     */
    inline void SetWorkgroupName(const Aws::String& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = value; }

    /**
     * <p>The name of the workgroup used to restore data.</p>
     */
    inline void SetWorkgroupName(Aws::String&& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = std::move(value); }

    /**
     * <p>The name of the workgroup used to restore data.</p>
     */
    inline void SetWorkgroupName(const char* value) { m_workgroupNameHasBeenSet = true; m_workgroupName.assign(value); }

    /**
     * <p>The name of the workgroup used to restore data.</p>
     */
    inline RestoreFromRecoveryPointRequest& WithWorkgroupName(const Aws::String& value) { SetWorkgroupName(value); return *this;}

    /**
     * <p>The name of the workgroup used to restore data.</p>
     */
    inline RestoreFromRecoveryPointRequest& WithWorkgroupName(Aws::String&& value) { SetWorkgroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the workgroup used to restore data.</p>
     */
    inline RestoreFromRecoveryPointRequest& WithWorkgroupName(const char* value) { SetWorkgroupName(value); return *this;}

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
