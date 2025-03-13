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
    AWS_REDSHIFTSERVERLESS_API SnapshotCopyConfiguration() = default;
    AWS_REDSHIFTSERVERLESS_API SnapshotCopyConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API SnapshotCopyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the KMS key to use to encrypt your snapshots in the destination
     * Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetDestinationKmsKeyId() const { return m_destinationKmsKeyId; }
    inline bool DestinationKmsKeyIdHasBeenSet() const { return m_destinationKmsKeyIdHasBeenSet; }
    template<typename DestinationKmsKeyIdT = Aws::String>
    void SetDestinationKmsKeyId(DestinationKmsKeyIdT&& value) { m_destinationKmsKeyIdHasBeenSet = true; m_destinationKmsKeyId = std::forward<DestinationKmsKeyIdT>(value); }
    template<typename DestinationKmsKeyIdT = Aws::String>
    SnapshotCopyConfiguration& WithDestinationKmsKeyId(DestinationKmsKeyIdT&& value) { SetDestinationKmsKeyId(std::forward<DestinationKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination Amazon Web Services Region to copy snapshots to.</p>
     */
    inline const Aws::String& GetDestinationRegion() const { return m_destinationRegion; }
    inline bool DestinationRegionHasBeenSet() const { return m_destinationRegionHasBeenSet; }
    template<typename DestinationRegionT = Aws::String>
    void SetDestinationRegion(DestinationRegionT&& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = std::forward<DestinationRegionT>(value); }
    template<typename DestinationRegionT = Aws::String>
    SnapshotCopyConfiguration& WithDestinationRegion(DestinationRegionT&& value) { SetDestinationRegion(std::forward<DestinationRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the namespace to copy snapshots from in the source Amazon Web
     * Services Region.</p>
     */
    inline const Aws::String& GetNamespaceName() const { return m_namespaceName; }
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }
    template<typename NamespaceNameT = Aws::String>
    void SetNamespaceName(NamespaceNameT&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::forward<NamespaceNameT>(value); }
    template<typename NamespaceNameT = Aws::String>
    SnapshotCopyConfiguration& WithNamespaceName(NamespaceNameT&& value) { SetNamespaceName(std::forward<NamespaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the snapshot copy configuration object.</p>
     */
    inline const Aws::String& GetSnapshotCopyConfigurationArn() const { return m_snapshotCopyConfigurationArn; }
    inline bool SnapshotCopyConfigurationArnHasBeenSet() const { return m_snapshotCopyConfigurationArnHasBeenSet; }
    template<typename SnapshotCopyConfigurationArnT = Aws::String>
    void SetSnapshotCopyConfigurationArn(SnapshotCopyConfigurationArnT&& value) { m_snapshotCopyConfigurationArnHasBeenSet = true; m_snapshotCopyConfigurationArn = std::forward<SnapshotCopyConfigurationArnT>(value); }
    template<typename SnapshotCopyConfigurationArnT = Aws::String>
    SnapshotCopyConfiguration& WithSnapshotCopyConfigurationArn(SnapshotCopyConfigurationArnT&& value) { SetSnapshotCopyConfigurationArn(std::forward<SnapshotCopyConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the snapshot copy configuration object.</p>
     */
    inline const Aws::String& GetSnapshotCopyConfigurationId() const { return m_snapshotCopyConfigurationId; }
    inline bool SnapshotCopyConfigurationIdHasBeenSet() const { return m_snapshotCopyConfigurationIdHasBeenSet; }
    template<typename SnapshotCopyConfigurationIdT = Aws::String>
    void SetSnapshotCopyConfigurationId(SnapshotCopyConfigurationIdT&& value) { m_snapshotCopyConfigurationIdHasBeenSet = true; m_snapshotCopyConfigurationId = std::forward<SnapshotCopyConfigurationIdT>(value); }
    template<typename SnapshotCopyConfigurationIdT = Aws::String>
    SnapshotCopyConfiguration& WithSnapshotCopyConfigurationId(SnapshotCopyConfigurationIdT&& value) { SetSnapshotCopyConfigurationId(std::forward<SnapshotCopyConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention period of snapshots that are copied to the destination Amazon
     * Web Services Region.</p>
     */
    inline int GetSnapshotRetentionPeriod() const { return m_snapshotRetentionPeriod; }
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

    int m_snapshotRetentionPeriod{0};
    bool m_snapshotRetentionPeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
