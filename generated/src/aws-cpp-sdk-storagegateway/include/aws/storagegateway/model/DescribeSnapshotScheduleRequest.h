﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>A JSON object containing the <a>DescribeSnapshotScheduleInput$VolumeARN</a>
   * of the volume.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeSnapshotScheduleInput">AWS
   * API Reference</a></p>
   */
  class DescribeSnapshotScheduleRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeSnapshotScheduleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSnapshotSchedule"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the volume. Use the <a>ListVolumes</a>
     * operation to return a list of gateway volumes.</p>
     */
    inline const Aws::String& GetVolumeARN() const { return m_volumeARN; }
    inline bool VolumeARNHasBeenSet() const { return m_volumeARNHasBeenSet; }
    template<typename VolumeARNT = Aws::String>
    void SetVolumeARN(VolumeARNT&& value) { m_volumeARNHasBeenSet = true; m_volumeARN = std::forward<VolumeARNT>(value); }
    template<typename VolumeARNT = Aws::String>
    DescribeSnapshotScheduleRequest& WithVolumeARN(VolumeARNT&& value) { SetVolumeARN(std::forward<VolumeARNT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_volumeARN;
    bool m_volumeARNHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
