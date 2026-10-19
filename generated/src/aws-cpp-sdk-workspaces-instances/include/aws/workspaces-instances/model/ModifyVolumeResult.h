/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/workspaces-instances/model/VolumeTypeEnum.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace WorkspacesInstances {
namespace Model {
/**
 * <p>Contains the target configuration of the volume after the modification,
 * including the size, volume type, IOPS, and throughput where
 * applicable.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/ModifyVolumeResponse">AWS
 * API Reference</a></p>
 */
class ModifyVolumeResult {
 public:
  AWS_WORKSPACESINSTANCES_API ModifyVolumeResult() = default;
  AWS_WORKSPACESINSTANCES_API ModifyVolumeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_WORKSPACESINSTANCES_API ModifyVolumeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>Specifies the identifier of the modified volume.</p>
   */
  inline const Aws::String& GetVolumeId() const { return m_volumeId; }
  template <typename VolumeIdT = Aws::String>
  void SetVolumeId(VolumeIdT&& value) {
    m_volumeIdHasBeenSet = true;
    m_volumeId = std::forward<VolumeIdT>(value);
  }
  template <typename VolumeIdT = Aws::String>
  ModifyVolumeResult& WithVolumeId(VolumeIdT&& value) {
    SetVolumeId(std::forward<VolumeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the target size of the volume, in GiB.</p>
   */
  inline int64_t GetTargetSize() const { return m_targetSize; }
  inline void SetTargetSize(int64_t value) {
    m_targetSizeHasBeenSet = true;
    m_targetSize = value;
  }
  inline ModifyVolumeResult& WithTargetSize(int64_t value) {
    SetTargetSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the target Amazon EBS volume type.</p>
   */
  inline VolumeTypeEnum GetTargetVolumeType() const { return m_targetVolumeType; }
  inline void SetTargetVolumeType(VolumeTypeEnum value) {
    m_targetVolumeTypeHasBeenSet = true;
    m_targetVolumeType = value;
  }
  inline ModifyVolumeResult& WithTargetVolumeType(VolumeTypeEnum value) {
    SetTargetVolumeType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the target IOPS rate of the volume.</p>
   */
  inline int64_t GetTargetIops() const { return m_targetIops; }
  inline void SetTargetIops(int64_t value) {
    m_targetIopsHasBeenSet = true;
    m_targetIops = value;
  }
  inline ModifyVolumeResult& WithTargetIops(int64_t value) {
    SetTargetIops(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the target throughput of the volume, in MiB/s.</p>
   */
  inline int64_t GetTargetThroughput() const { return m_targetThroughput; }
  inline void SetTargetThroughput(int64_t value) {
    m_targetThroughputHasBeenSet = true;
    m_targetThroughput = value;
  }
  inline ModifyVolumeResult& WithTargetThroughput(int64_t value) {
    SetTargetThroughput(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ModifyVolumeResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_volumeId;

  int64_t m_targetSize{0};

  VolumeTypeEnum m_targetVolumeType{VolumeTypeEnum::NOT_SET};

  int64_t m_targetIops{0};

  int64_t m_targetThroughput{0};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_volumeIdHasBeenSet = false;
  bool m_targetSizeHasBeenSet = false;
  bool m_targetVolumeTypeHasBeenSet = false;
  bool m_targetIopsHasBeenSet = false;
  bool m_targetThroughputHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws
