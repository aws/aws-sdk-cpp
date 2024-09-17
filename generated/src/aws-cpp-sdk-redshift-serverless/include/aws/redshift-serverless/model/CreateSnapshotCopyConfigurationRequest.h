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
  class CreateSnapshotCopyConfigurationRequest : public RedshiftServerlessRequest
  {
  public:
    AWS_REDSHIFTSERVERLESS_API CreateSnapshotCopyConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSnapshotCopyConfiguration"; }

    AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The KMS key to use to encrypt your snapshots in the destination Amazon Web
     * Services Region.</p>
     */
    inline const Aws::String& GetDestinationKmsKeyId() const{ return m_destinationKmsKeyId; }
    inline bool DestinationKmsKeyIdHasBeenSet() const { return m_destinationKmsKeyIdHasBeenSet; }
    inline void SetDestinationKmsKeyId(const Aws::String& value) { m_destinationKmsKeyIdHasBeenSet = true; m_destinationKmsKeyId = value; }
    inline void SetDestinationKmsKeyId(Aws::String&& value) { m_destinationKmsKeyIdHasBeenSet = true; m_destinationKmsKeyId = std::move(value); }
    inline void SetDestinationKmsKeyId(const char* value) { m_destinationKmsKeyIdHasBeenSet = true; m_destinationKmsKeyId.assign(value); }
    inline CreateSnapshotCopyConfigurationRequest& WithDestinationKmsKeyId(const Aws::String& value) { SetDestinationKmsKeyId(value); return *this;}
    inline CreateSnapshotCopyConfigurationRequest& WithDestinationKmsKeyId(Aws::String&& value) { SetDestinationKmsKeyId(std::move(value)); return *this;}
    inline CreateSnapshotCopyConfigurationRequest& WithDestinationKmsKeyId(const char* value) { SetDestinationKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination Amazon Web Services Region that you want to copy snapshots
     * to.</p>
     */
    inline const Aws::String& GetDestinationRegion() const{ return m_destinationRegion; }
    inline bool DestinationRegionHasBeenSet() const { return m_destinationRegionHasBeenSet; }
    inline void SetDestinationRegion(const Aws::String& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = value; }
    inline void SetDestinationRegion(Aws::String&& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = std::move(value); }
    inline void SetDestinationRegion(const char* value) { m_destinationRegionHasBeenSet = true; m_destinationRegion.assign(value); }
    inline CreateSnapshotCopyConfigurationRequest& WithDestinationRegion(const Aws::String& value) { SetDestinationRegion(value); return *this;}
    inline CreateSnapshotCopyConfigurationRequest& WithDestinationRegion(Aws::String&& value) { SetDestinationRegion(std::move(value)); return *this;}
    inline CreateSnapshotCopyConfigurationRequest& WithDestinationRegion(const char* value) { SetDestinationRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the namespace to copy snapshots from.</p>
     */
    inline const Aws::String& GetNamespaceName() const{ return m_namespaceName; }
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }
    inline void SetNamespaceName(const Aws::String& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = value; }
    inline void SetNamespaceName(Aws::String&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::move(value); }
    inline void SetNamespaceName(const char* value) { m_namespaceNameHasBeenSet = true; m_namespaceName.assign(value); }
    inline CreateSnapshotCopyConfigurationRequest& WithNamespaceName(const Aws::String& value) { SetNamespaceName(value); return *this;}
    inline CreateSnapshotCopyConfigurationRequest& WithNamespaceName(Aws::String&& value) { SetNamespaceName(std::move(value)); return *this;}
    inline CreateSnapshotCopyConfigurationRequest& WithNamespaceName(const char* value) { SetNamespaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention period of the snapshots that you copy to the destination Amazon
     * Web Services Region.</p>
     */
    inline int GetSnapshotRetentionPeriod() const{ return m_snapshotRetentionPeriod; }
    inline bool SnapshotRetentionPeriodHasBeenSet() const { return m_snapshotRetentionPeriodHasBeenSet; }
    inline void SetSnapshotRetentionPeriod(int value) { m_snapshotRetentionPeriodHasBeenSet = true; m_snapshotRetentionPeriod = value; }
    inline CreateSnapshotCopyConfigurationRequest& WithSnapshotRetentionPeriod(int value) { SetSnapshotRetentionPeriod(value); return *this;}
    ///@}
  private:

    Aws::String m_destinationKmsKeyId;
    bool m_destinationKmsKeyIdHasBeenSet = false;

    Aws::String m_destinationRegion;
    bool m_destinationRegionHasBeenSet = false;

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet = false;

    int m_snapshotRetentionPeriod;
    bool m_snapshotRetentionPeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
