/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/VolumeType.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Container for the parameters required to enable EBS-based storage for an
   * OpenSearch Service domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/EBSOptions">AWS
   * API Reference</a></p>
   */
  class EBSOptions
  {
  public:
    AWS_OPENSEARCHSERVICE_API EBSOptions() = default;
    AWS_OPENSEARCHSERVICE_API EBSOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API EBSOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether EBS volumes are attached to data nodes in an OpenSearch
     * Service domain.</p>
     */
    inline bool GetEBSEnabled() const { return m_eBSEnabled; }
    inline bool EBSEnabledHasBeenSet() const { return m_eBSEnabledHasBeenSet; }
    inline void SetEBSEnabled(bool value) { m_eBSEnabledHasBeenSet = true; m_eBSEnabled = value; }
    inline EBSOptions& WithEBSEnabled(bool value) { SetEBSEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of EBS volumes attached to data nodes.</p>
     */
    inline VolumeType GetVolumeType() const { return m_volumeType; }
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }
    inline void SetVolumeType(VolumeType value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }
    inline EBSOptions& WithVolumeType(VolumeType value) { SetVolumeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the size (in GiB) of EBS volumes attached to data nodes.</p>
     */
    inline int GetVolumeSize() const { return m_volumeSize; }
    inline bool VolumeSizeHasBeenSet() const { return m_volumeSizeHasBeenSet; }
    inline void SetVolumeSize(int value) { m_volumeSizeHasBeenSet = true; m_volumeSize = value; }
    inline EBSOptions& WithVolumeSize(int value) { SetVolumeSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the baseline input/output (I/O) performance of EBS volumes attached
     * to data nodes. Applicable only for the <code>gp3</code> and provisioned IOPS EBS
     * volume types.</p>
     */
    inline int GetIops() const { return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline EBSOptions& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the throughput (in MiB/s) of the EBS volumes attached to data
     * nodes. Applicable only for the <code>gp3</code> volume type.</p>
     */
    inline int GetThroughput() const { return m_throughput; }
    inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }
    inline void SetThroughput(int value) { m_throughputHasBeenSet = true; m_throughput = value; }
    inline EBSOptions& WithThroughput(int value) { SetThroughput(value); return *this;}
    ///@}
  private:

    bool m_eBSEnabled{false};
    bool m_eBSEnabledHasBeenSet = false;

    VolumeType m_volumeType{VolumeType::NOT_SET};
    bool m_volumeTypeHasBeenSet = false;

    int m_volumeSize{0};
    bool m_volumeSizeHasBeenSet = false;

    int m_iops{0};
    bool m_iopsHasBeenSet = false;

    int m_throughput{0};
    bool m_throughputHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
