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
  class DeleteNamespaceRequest : public RedshiftServerlessRequest
  {
  public:
    AWS_REDSHIFTSERVERLESS_API DeleteNamespaceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteNamespace"; }

    AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the snapshot to be created before the namespace is deleted.</p>
     */
    inline const Aws::String& GetFinalSnapshotName() const { return m_finalSnapshotName; }
    inline bool FinalSnapshotNameHasBeenSet() const { return m_finalSnapshotNameHasBeenSet; }
    template<typename FinalSnapshotNameT = Aws::String>
    void SetFinalSnapshotName(FinalSnapshotNameT&& value) { m_finalSnapshotNameHasBeenSet = true; m_finalSnapshotName = std::forward<FinalSnapshotNameT>(value); }
    template<typename FinalSnapshotNameT = Aws::String>
    DeleteNamespaceRequest& WithFinalSnapshotName(FinalSnapshotNameT&& value) { SetFinalSnapshotName(std::forward<FinalSnapshotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How long to retain the final snapshot.</p>
     */
    inline int GetFinalSnapshotRetentionPeriod() const { return m_finalSnapshotRetentionPeriod; }
    inline bool FinalSnapshotRetentionPeriodHasBeenSet() const { return m_finalSnapshotRetentionPeriodHasBeenSet; }
    inline void SetFinalSnapshotRetentionPeriod(int value) { m_finalSnapshotRetentionPeriodHasBeenSet = true; m_finalSnapshotRetentionPeriod = value; }
    inline DeleteNamespaceRequest& WithFinalSnapshotRetentionPeriod(int value) { SetFinalSnapshotRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the namespace to delete.</p>
     */
    inline const Aws::String& GetNamespaceName() const { return m_namespaceName; }
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }
    template<typename NamespaceNameT = Aws::String>
    void SetNamespaceName(NamespaceNameT&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::forward<NamespaceNameT>(value); }
    template<typename NamespaceNameT = Aws::String>
    DeleteNamespaceRequest& WithNamespaceName(NamespaceNameT&& value) { SetNamespaceName(std::forward<NamespaceNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_finalSnapshotName;
    bool m_finalSnapshotNameHasBeenSet = false;

    int m_finalSnapshotRetentionPeriod{0};
    bool m_finalSnapshotRetentionPeriodHasBeenSet = false;

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
