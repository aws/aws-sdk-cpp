/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
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
namespace RedshiftServerless
{
namespace Model
{

  /**
   * <p>The object that you configure to copy snapshots from one namespace to a
   * namespace in another Amazon Web Services Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/SnapshotCopyConfiguration">AWS
   * API Reference</a></p>
   */
  class SnapshotCopyConfiguration
  {
  public:
    AWS_REDSHIFTSERVERLESS_API SnapshotCopyConfiguration();
    AWS_REDSHIFTSERVERLESS_API SnapshotCopyConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API SnapshotCopyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the KMS key to use to encrypt your snapshots in the destination
     * Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetDestinationKmsKeyId() const{ return m_destinationKmsKeyId; }

    /**
     * <p>The ID of the KMS key to use to encrypt your snapshots in the destination
     * Amazon Web Services Region.</p>
     */
    inline bool DestinationKmsKeyIdHasBeenSet() const { return m_destinationKmsKeyIdHasBeenSet; }

    /**
     * <p>The ID of the KMS key to use to encrypt your snapshots in the destination
     * Amazon Web Services Region.</p>
     */
    inline void SetDestinationKmsKeyId(const Aws::String& value) { m_destinationKmsKeyIdHasBeenSet = true; m_destinationKmsKeyId = value; }

    /**
     * <p>The ID of the KMS key to use to encrypt your snapshots in the destination
     * Amazon Web Services Region.</p>
     */
    inline void SetDestinationKmsKeyId(Aws::String&& value) { m_destinationKmsKeyIdHasBeenSet = true; m_destinationKmsKeyId = std::move(value); }

    /**
     * <p>The ID of the KMS key to use to encrypt your snapshots in the destination
     * Amazon Web Services Region.</p>
     */
    inline void SetDestinationKmsKeyId(const char* value) { m_destinationKmsKeyIdHasBeenSet = true; m_destinationKmsKeyId.assign(value); }

    /**
     * <p>The ID of the KMS key to use to encrypt your snapshots in the destination
     * Amazon Web Services Region.</p>
     */
    inline SnapshotCopyConfiguration& WithDestinationKmsKeyId(const Aws::String& value) { SetDestinationKmsKeyId(value); return *this;}

    /**
     * <p>The ID of the KMS key to use to encrypt your snapshots in the destination
     * Amazon Web Services Region.</p>
     */
    inline SnapshotCopyConfiguration& WithDestinationKmsKeyId(Aws::String&& value) { SetDestinationKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the KMS key to use to encrypt your snapshots in the destination
     * Amazon Web Services Region.</p>
     */
    inline SnapshotCopyConfiguration& WithDestinationKmsKeyId(const char* value) { SetDestinationKmsKeyId(value); return *this;}


    /**
     * <p>The destination Amazon Web Services Region to copy snapshots to.</p>
     */
    inline const Aws::String& GetDestinationRegion() const{ return m_destinationRegion; }

    /**
     * <p>The destination Amazon Web Services Region to copy snapshots to.</p>
     */
    inline bool DestinationRegionHasBeenSet() const { return m_destinationRegionHasBeenSet; }

    /**
     * <p>The destination Amazon Web Services Region to copy snapshots to.</p>
     */
    inline void SetDestinationRegion(const Aws::String& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = value; }

    /**
     * <p>The destination Amazon Web Services Region to copy snapshots to.</p>
     */
    inline void SetDestinationRegion(Aws::String&& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = std::move(value); }

    /**
     * <p>The destination Amazon Web Services Region to copy snapshots to.</p>
     */
    inline void SetDestinationRegion(const char* value) { m_destinationRegionHasBeenSet = true; m_destinationRegion.assign(value); }

    /**
     * <p>The destination Amazon Web Services Region to copy snapshots to.</p>
     */
    inline SnapshotCopyConfiguration& WithDestinationRegion(const Aws::String& value) { SetDestinationRegion(value); return *this;}

    /**
     * <p>The destination Amazon Web Services Region to copy snapshots to.</p>
     */
    inline SnapshotCopyConfiguration& WithDestinationRegion(Aws::String&& value) { SetDestinationRegion(std::move(value)); return *this;}

    /**
     * <p>The destination Amazon Web Services Region to copy snapshots to.</p>
     */
    inline SnapshotCopyConfiguration& WithDestinationRegion(const char* value) { SetDestinationRegion(value); return *this;}


    /**
     * <p>The name of the namespace to copy snapshots from in the source Amazon Web
     * Services Region.</p>
     */
    inline const Aws::String& GetNamespaceName() const{ return m_namespaceName; }

    /**
     * <p>The name of the namespace to copy snapshots from in the source Amazon Web
     * Services Region.</p>
     */
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }

    /**
     * <p>The name of the namespace to copy snapshots from in the source Amazon Web
     * Services Region.</p>
     */
    inline void SetNamespaceName(const Aws::String& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = value; }

    /**
     * <p>The name of the namespace to copy snapshots from in the source Amazon Web
     * Services Region.</p>
     */
    inline void SetNamespaceName(Aws::String&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::move(value); }

    /**
     * <p>The name of the namespace to copy snapshots from in the source Amazon Web
     * Services Region.</p>
     */
    inline void SetNamespaceName(const char* value) { m_namespaceNameHasBeenSet = true; m_namespaceName.assign(value); }

    /**
     * <p>The name of the namespace to copy snapshots from in the source Amazon Web
     * Services Region.</p>
     */
    inline SnapshotCopyConfiguration& WithNamespaceName(const Aws::String& value) { SetNamespaceName(value); return *this;}

    /**
     * <p>The name of the namespace to copy snapshots from in the source Amazon Web
     * Services Region.</p>
     */
    inline SnapshotCopyConfiguration& WithNamespaceName(Aws::String&& value) { SetNamespaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the namespace to copy snapshots from in the source Amazon Web
     * Services Region.</p>
     */
    inline SnapshotCopyConfiguration& WithNamespaceName(const char* value) { SetNamespaceName(value); return *this;}


    /**
     * <p>The ARN of the snapshot copy configuration object.</p>
     */
    inline const Aws::String& GetSnapshotCopyConfigurationArn() const{ return m_snapshotCopyConfigurationArn; }

    /**
     * <p>The ARN of the snapshot copy configuration object.</p>
     */
    inline bool SnapshotCopyConfigurationArnHasBeenSet() const { return m_snapshotCopyConfigurationArnHasBeenSet; }

    /**
     * <p>The ARN of the snapshot copy configuration object.</p>
     */
    inline void SetSnapshotCopyConfigurationArn(const Aws::String& value) { m_snapshotCopyConfigurationArnHasBeenSet = true; m_snapshotCopyConfigurationArn = value; }

    /**
     * <p>The ARN of the snapshot copy configuration object.</p>
     */
    inline void SetSnapshotCopyConfigurationArn(Aws::String&& value) { m_snapshotCopyConfigurationArnHasBeenSet = true; m_snapshotCopyConfigurationArn = std::move(value); }

    /**
     * <p>The ARN of the snapshot copy configuration object.</p>
     */
    inline void SetSnapshotCopyConfigurationArn(const char* value) { m_snapshotCopyConfigurationArnHasBeenSet = true; m_snapshotCopyConfigurationArn.assign(value); }

    /**
     * <p>The ARN of the snapshot copy configuration object.</p>
     */
    inline SnapshotCopyConfiguration& WithSnapshotCopyConfigurationArn(const Aws::String& value) { SetSnapshotCopyConfigurationArn(value); return *this;}

    /**
     * <p>The ARN of the snapshot copy configuration object.</p>
     */
    inline SnapshotCopyConfiguration& WithSnapshotCopyConfigurationArn(Aws::String&& value) { SetSnapshotCopyConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the snapshot copy configuration object.</p>
     */
    inline SnapshotCopyConfiguration& WithSnapshotCopyConfigurationArn(const char* value) { SetSnapshotCopyConfigurationArn(value); return *this;}


    /**
     * <p>The ID of the snapshot copy configuration object.</p>
     */
    inline const Aws::String& GetSnapshotCopyConfigurationId() const{ return m_snapshotCopyConfigurationId; }

    /**
     * <p>The ID of the snapshot copy configuration object.</p>
     */
    inline bool SnapshotCopyConfigurationIdHasBeenSet() const { return m_snapshotCopyConfigurationIdHasBeenSet; }

    /**
     * <p>The ID of the snapshot copy configuration object.</p>
     */
    inline void SetSnapshotCopyConfigurationId(const Aws::String& value) { m_snapshotCopyConfigurationIdHasBeenSet = true; m_snapshotCopyConfigurationId = value; }

    /**
     * <p>The ID of the snapshot copy configuration object.</p>
     */
    inline void SetSnapshotCopyConfigurationId(Aws::String&& value) { m_snapshotCopyConfigurationIdHasBeenSet = true; m_snapshotCopyConfigurationId = std::move(value); }

    /**
     * <p>The ID of the snapshot copy configuration object.</p>
     */
    inline void SetSnapshotCopyConfigurationId(const char* value) { m_snapshotCopyConfigurationIdHasBeenSet = true; m_snapshotCopyConfigurationId.assign(value); }

    /**
     * <p>The ID of the snapshot copy configuration object.</p>
     */
    inline SnapshotCopyConfiguration& WithSnapshotCopyConfigurationId(const Aws::String& value) { SetSnapshotCopyConfigurationId(value); return *this;}

    /**
     * <p>The ID of the snapshot copy configuration object.</p>
     */
    inline SnapshotCopyConfiguration& WithSnapshotCopyConfigurationId(Aws::String&& value) { SetSnapshotCopyConfigurationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the snapshot copy configuration object.</p>
     */
    inline SnapshotCopyConfiguration& WithSnapshotCopyConfigurationId(const char* value) { SetSnapshotCopyConfigurationId(value); return *this;}


    /**
     * <p>The retention period of snapshots that are copied to the destination Amazon
     * Web Services Region.</p>
     */
    inline int GetSnapshotRetentionPeriod() const{ return m_snapshotRetentionPeriod; }

    /**
     * <p>The retention period of snapshots that are copied to the destination Amazon
     * Web Services Region.</p>
     */
    inline bool SnapshotRetentionPeriodHasBeenSet() const { return m_snapshotRetentionPeriodHasBeenSet; }

    /**
     * <p>The retention period of snapshots that are copied to the destination Amazon
     * Web Services Region.</p>
     */
    inline void SetSnapshotRetentionPeriod(int value) { m_snapshotRetentionPeriodHasBeenSet = true; m_snapshotRetentionPeriod = value; }

    /**
     * <p>The retention period of snapshots that are copied to the destination Amazon
     * Web Services Region.</p>
     */
    inline SnapshotCopyConfiguration& WithSnapshotRetentionPeriod(int value) { SetSnapshotRetentionPeriod(value); return *this;}

  private:

    Aws::String m_destinationKmsKeyId;
    bool m_destinationKmsKeyIdHasBeenSet = false;

    Aws::String m_destinationRegion;
    bool m_destinationRegionHasBeenSet = false;

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet = false;

    Aws::String m_snapshotCopyConfigurationArn;
    bool m_snapshotCopyConfigurationArnHasBeenSet = false;

    Aws::String m_snapshotCopyConfigurationId;
    bool m_snapshotCopyConfigurationIdHasBeenSet = false;

    int m_snapshotRetentionPeriod;
    bool m_snapshotRetentionPeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
