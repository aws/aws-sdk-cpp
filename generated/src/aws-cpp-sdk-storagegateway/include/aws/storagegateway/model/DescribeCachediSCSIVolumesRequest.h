/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   */
  class DescribeCachediSCSIVolumesRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeCachediSCSIVolumesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCachediSCSIVolumes"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An array of strings where each string represents the Amazon Resource Name
     * (ARN) of a cached volume. All of the specified cached volumes must be from the
     * same gateway. Use <a>ListVolumes</a> to get volume ARNs for a gateway.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVolumeARNs() const { return m_volumeARNs; }
    inline bool VolumeARNsHasBeenSet() const { return m_volumeARNsHasBeenSet; }
    template<typename VolumeARNsT = Aws::Vector<Aws::String>>
    void SetVolumeARNs(VolumeARNsT&& value) { m_volumeARNsHasBeenSet = true; m_volumeARNs = std::forward<VolumeARNsT>(value); }
    template<typename VolumeARNsT = Aws::Vector<Aws::String>>
    DescribeCachediSCSIVolumesRequest& WithVolumeARNs(VolumeARNsT&& value) { SetVolumeARNs(std::forward<VolumeARNsT>(value)); return *this;}
    template<typename VolumeARNsT = Aws::String>
    DescribeCachediSCSIVolumesRequest& AddVolumeARNs(VolumeARNsT&& value) { m_volumeARNsHasBeenSet = true; m_volumeARNs.emplace_back(std::forward<VolumeARNsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_volumeARNs;
    bool m_volumeARNsHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
