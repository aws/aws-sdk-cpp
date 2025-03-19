/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>A JSON object containing the following fields:</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/CreateSnapshotOutput">AWS
   * API Reference</a></p>
   */
  class CreateSnapshotResult
  {
  public:
    AWS_STORAGEGATEWAY_API CreateSnapshotResult() = default;
    AWS_STORAGEGATEWAY_API CreateSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API CreateSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the volume of which the snapshot was
     * taken.</p>
     */
    inline const Aws::String& GetVolumeARN() const { return m_volumeARN; }
    template<typename VolumeARNT = Aws::String>
    void SetVolumeARN(VolumeARNT&& value) { m_volumeARNHasBeenSet = true; m_volumeARN = std::forward<VolumeARNT>(value); }
    template<typename VolumeARNT = Aws::String>
    CreateSnapshotResult& WithVolumeARN(VolumeARNT&& value) { SetVolumeARN(std::forward<VolumeARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The snapshot ID that is used to refer to the snapshot in future operations
     * such as describing snapshots (Amazon Elastic Compute Cloud API
     * <code>DescribeSnapshots</code>) or creating a volume from a snapshot
     * (<a>CreateStorediSCSIVolume</a>).</p>
     */
    inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
    template<typename SnapshotIdT = Aws::String>
    void SetSnapshotId(SnapshotIdT&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::forward<SnapshotIdT>(value); }
    template<typename SnapshotIdT = Aws::String>
    CreateSnapshotResult& WithSnapshotId(SnapshotIdT&& value) { SetSnapshotId(std::forward<SnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateSnapshotResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_volumeARN;
    bool m_volumeARNHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
