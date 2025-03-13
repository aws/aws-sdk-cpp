/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/memorydb/model/ClusterConfiguration.h>
#include <aws/memorydb/model/DataTieringStatus.h>
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
namespace MemoryDB
{
namespace Model
{

  /**
   * <p>Represents a copy of an entire cluster as of the time when the snapshot was
   * taken.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/Snapshot">AWS
   * API Reference</a></p>
   */
  class Snapshot
  {
  public:
    AWS_MEMORYDB_API Snapshot() = default;
    AWS_MEMORYDB_API Snapshot(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Snapshot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the snapshot</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Snapshot& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the snapshot. Valid values: creating | available | restoring |
     * copying | deleting.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    Snapshot& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the snapshot is from an automatic backup (automated) or was
     * created manually (manual).</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    Snapshot& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the KMS key used to encrypt the snapshot.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    Snapshot& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the snapshot.</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    Snapshot& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the cluster from which the snapshot was taken</p>
     */
    inline const ClusterConfiguration& GetClusterConfiguration() const { return m_clusterConfiguration; }
    inline bool ClusterConfigurationHasBeenSet() const { return m_clusterConfigurationHasBeenSet; }
    template<typename ClusterConfigurationT = ClusterConfiguration>
    void SetClusterConfiguration(ClusterConfigurationT&& value) { m_clusterConfigurationHasBeenSet = true; m_clusterConfiguration = std::forward<ClusterConfigurationT>(value); }
    template<typename ClusterConfigurationT = ClusterConfiguration>
    Snapshot& WithClusterConfiguration(ClusterConfigurationT&& value) { SetClusterConfiguration(std::forward<ClusterConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables data tiering. Data tiering is only supported for clusters using the
     * r6gd node type. This parameter must be set when using r6gd nodes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/memorydb/latest/devguide/data-tiering.html">Data
     * tiering</a>.</p>
     */
    inline DataTieringStatus GetDataTiering() const { return m_dataTiering; }
    inline bool DataTieringHasBeenSet() const { return m_dataTieringHasBeenSet; }
    inline void SetDataTiering(DataTieringStatus value) { m_dataTieringHasBeenSet = true; m_dataTiering = value; }
    inline Snapshot& WithDataTiering(DataTieringStatus value) { SetDataTiering(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    ClusterConfiguration m_clusterConfiguration;
    bool m_clusterConfigurationHasBeenSet = false;

    DataTieringStatus m_dataTiering{DataTieringStatus::NOT_SET};
    bool m_dataTieringHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
