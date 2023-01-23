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
    AWS_STORAGEGATEWAY_API CreateSnapshotResult();
    AWS_STORAGEGATEWAY_API CreateSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API CreateSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the volume of which the snapshot was
     * taken.</p>
     */
    inline const Aws::String& GetVolumeARN() const{ return m_volumeARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume of which the snapshot was
     * taken.</p>
     */
    inline void SetVolumeARN(const Aws::String& value) { m_volumeARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume of which the snapshot was
     * taken.</p>
     */
    inline void SetVolumeARN(Aws::String&& value) { m_volumeARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume of which the snapshot was
     * taken.</p>
     */
    inline void SetVolumeARN(const char* value) { m_volumeARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume of which the snapshot was
     * taken.</p>
     */
    inline CreateSnapshotResult& WithVolumeARN(const Aws::String& value) { SetVolumeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the volume of which the snapshot was
     * taken.</p>
     */
    inline CreateSnapshotResult& WithVolumeARN(Aws::String&& value) { SetVolumeARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the volume of which the snapshot was
     * taken.</p>
     */
    inline CreateSnapshotResult& WithVolumeARN(const char* value) { SetVolumeARN(value); return *this;}


    /**
     * <p>The snapshot ID that is used to refer to the snapshot in future operations
     * such as describing snapshots (Amazon Elastic Compute Cloud API
     * <code>DescribeSnapshots</code>) or creating a volume from a snapshot
     * (<a>CreateStorediSCSIVolume</a>).</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The snapshot ID that is used to refer to the snapshot in future operations
     * such as describing snapshots (Amazon Elastic Compute Cloud API
     * <code>DescribeSnapshots</code>) or creating a volume from a snapshot
     * (<a>CreateStorediSCSIVolume</a>).</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotId = value; }

    /**
     * <p>The snapshot ID that is used to refer to the snapshot in future operations
     * such as describing snapshots (Amazon Elastic Compute Cloud API
     * <code>DescribeSnapshots</code>) or creating a volume from a snapshot
     * (<a>CreateStorediSCSIVolume</a>).</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotId = std::move(value); }

    /**
     * <p>The snapshot ID that is used to refer to the snapshot in future operations
     * such as describing snapshots (Amazon Elastic Compute Cloud API
     * <code>DescribeSnapshots</code>) or creating a volume from a snapshot
     * (<a>CreateStorediSCSIVolume</a>).</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotId.assign(value); }

    /**
     * <p>The snapshot ID that is used to refer to the snapshot in future operations
     * such as describing snapshots (Amazon Elastic Compute Cloud API
     * <code>DescribeSnapshots</code>) or creating a volume from a snapshot
     * (<a>CreateStorediSCSIVolume</a>).</p>
     */
    inline CreateSnapshotResult& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The snapshot ID that is used to refer to the snapshot in future operations
     * such as describing snapshots (Amazon Elastic Compute Cloud API
     * <code>DescribeSnapshots</code>) or creating a volume from a snapshot
     * (<a>CreateStorediSCSIVolume</a>).</p>
     */
    inline CreateSnapshotResult& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The snapshot ID that is used to refer to the snapshot in future operations
     * such as describing snapshots (Amazon Elastic Compute Cloud API
     * <code>DescribeSnapshots</code>) or creating a volume from a snapshot
     * (<a>CreateStorediSCSIVolume</a>).</p>
     */
    inline CreateSnapshotResult& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}

  private:

    Aws::String m_volumeARN;

    Aws::String m_snapshotId;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
