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


    ///@{
    /**
     * <p>The ID of the KMS key to use to encrypt your snapshots in the destination
     * Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetDestinationKmsKeyId() const{ return m_destinationKmsKeyId; }
    inline bool DestinationKmsKeyIdHasBeenSet() const { return m_destinationKmsKeyIdHasBeenSet; }
    inline void SetDestinationKmsKeyId(const Aws::String& value) { m_destinationKmsKeyIdHasBeenSet = true; m_destinationKmsKeyId = value; }
    inline void SetDestinationKmsKeyId(Aws::String&& value) { m_destinationKmsKeyIdHasBeenSet = true; m_destinationKmsKeyId = std::move(value); }
    inline void SetDestinationKmsKeyId(const char* value) { m_destinationKmsKeyIdHasBeenSet = true; m_destinationKmsKeyId.assign(value); }
    inline SnapshotCopyConfiguration& WithDestinationKmsKeyId(const Aws::String& value) { SetDestinationKmsKeyId(value); return *this;}
    inline SnapshotCopyConfiguration& WithDestinationKmsKeyId(Aws::String&& value) { SetDestinationKmsKeyId(std::move(value)); return *this;}
    inline SnapshotCopyConfiguration& WithDestinationKmsKeyId(const char* value) { SetDestinationKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination Amazon Web Services Region to copy snapshots to.</p>
     */
    inline const Aws::String& GetDestinationRegion() const{ return m_destinationRegion; }
    inline bool DestinationRegionHasBeenSet() const { return m_destinationRegionHasBeenSet; }
    inline void SetDestinationRegion(const Aws::String& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = value; }
    inline void SetDestinationRegion(Aws::String&& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = std::move(value); }
    inline void SetDestinationRegion(const char* value) { m_destinationRegionHasBeenSet = true; m_destinationRegion.assign(value); }
    inline SnapshotCopyConfiguration& WithDestinationRegion(const Aws::String& value) { SetDestinationRegion(value); return *this;}
    inline SnapshotCopyConfiguration& WithDestinationRegion(Aws::String&& value) { SetDestinationRegion(std::move(value)); return *this;}
    inline SnapshotCopyConfiguration& WithDestinationRegion(const char* value) { SetDestinationRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the namespace to copy snapshots from in the source Amazon Web
     * Services Region.</p>
     */
    inline const Aws::String& GetNamespaceName() const{ return m_namespaceName; }
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }
    inline void SetNamespaceName(const Aws::String& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = value; }
    inline void SetNamespaceName(Aws::String&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::move(value); }
    inline void SetNamespaceName(const char* value) { m_namespaceNameHasBeenSet = true; m_namespaceName.assign(value); }
    inline SnapshotCopyConfiguration& WithNamespaceName(const Aws::String& value) { SetNamespaceName(value); return *this;}
    inline SnapshotCopyConfiguration& WithNamespaceName(Aws::String&& value) { SetNamespaceName(std::move(value)); return *this;}
    inline SnapshotCopyConfiguration& WithNamespaceName(const char* value) { SetNamespaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the snapshot copy configuration object.</p>
     */
    inline const Aws::String& GetSnapshotCopyConfigurationArn() const{ return m_snapshotCopyConfigurationArn; }
    inline bool SnapshotCopyConfigurationArnHasBeenSet() const { return m_snapshotCopyConfigurationArnHasBeenSet; }
    inline void SetSnapshotCopyConfigurationArn(const Aws::String& value) { m_snapshotCopyConfigurationArnHasBeenSet = true; m_snapshotCopyConfigurationArn = value; }
    inline void SetSnapshotCopyConfigurationArn(Aws::String&& value) { m_snapshotCopyConfigurationArnHasBeenSet = true; m_snapshotCopyConfigurationArn = std::move(value); }
    inline void SetSnapshotCopyConfigurationArn(const char* value) { m_snapshotCopyConfigurationArnHasBeenSet = true; m_snapshotCopyConfigurationArn.assign(value); }
    inline SnapshotCopyConfiguration& WithSnapshotCopyConfigurationArn(const Aws::String& value) { SetSnapshotCopyConfigurationArn(value); return *this;}
    inline SnapshotCopyConfiguration& WithSnapshotCopyConfigurationArn(Aws::String&& value) { SetSnapshotCopyConfigurationArn(std::move(value)); return *this;}
    inline SnapshotCopyConfiguration& WithSnapshotCopyConfigurationArn(const char* value) { SetSnapshotCopyConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the snapshot copy configuration object.</p>
     */
    inline const Aws::String& GetSnapshotCopyConfigurationId() const{ return m_snapshotCopyConfigurationId; }
    inline bool SnapshotCopyConfigurationIdHasBeenSet() const { return m_snapshotCopyConfigurationIdHasBeenSet; }
    inline void SetSnapshotCopyConfigurationId(const Aws::String& value) { m_snapshotCopyConfigurationIdHasBeenSet = true; m_snapshotCopyConfigurationId = value; }
    inline void SetSnapshotCopyConfigurationId(Aws::String&& value) { m_snapshotCopyConfigurationIdHasBeenSet = true; m_snapshotCopyConfigurationId = std::move(value); }
    inline void SetSnapshotCopyConfigurationId(const char* value) { m_snapshotCopyConfigurationIdHasBeenSet = true; m_snapshotCopyConfigurationId.assign(value); }
    inline SnapshotCopyConfiguration& WithSnapshotCopyConfigurationId(const Aws::String& value) { SetSnapshotCopyConfigurationId(value); return *this;}
    inline SnapshotCopyConfiguration& WithSnapshotCopyConfigurationId(Aws::String&& value) { SetSnapshotCopyConfigurationId(std::move(value)); return *this;}
    inline SnapshotCopyConfiguration& WithSnapshotCopyConfigurationId(const char* value) { SetSnapshotCopyConfigurationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention period of snapshots that are copied to the destination Amazon
     * Web Services Region.</p>
     */
    inline int GetSnapshotRetentionPeriod() const{ return m_snapshotRetentionPeriod; }
    inline bool SnapshotRetentionPeriodHasBeenSet() const { return m_snapshotRetentionPeriodHasBeenSet; }
    inline void SetSnapshotRetentionPeriod(int value) { m_snapshotRetentionPeriodHasBeenSet = true; m_snapshotRetentionPeriod = value; }
    inline SnapshotCopyConfiguration& WithSnapshotRetentionPeriod(int value) { SetSnapshotRetentionPeriod(value); return *this;}
    ///@}
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
