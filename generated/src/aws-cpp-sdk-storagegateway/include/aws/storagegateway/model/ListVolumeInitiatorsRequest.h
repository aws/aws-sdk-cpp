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
   * <p>ListVolumeInitiatorsInput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/ListVolumeInitiatorsInput">AWS
   * API Reference</a></p>
   */
  class ListVolumeInitiatorsRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API ListVolumeInitiatorsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListVolumeInitiators"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the volume. Use the <a>ListVolumes</a>
     * operation to return a list of gateway volumes for the gateway.</p>
     */
    inline const Aws::String& GetVolumeARN() const{ return m_volumeARN; }
    inline bool VolumeARNHasBeenSet() const { return m_volumeARNHasBeenSet; }
    inline void SetVolumeARN(const Aws::String& value) { m_volumeARNHasBeenSet = true; m_volumeARN = value; }
    inline void SetVolumeARN(Aws::String&& value) { m_volumeARNHasBeenSet = true; m_volumeARN = std::move(value); }
    inline void SetVolumeARN(const char* value) { m_volumeARNHasBeenSet = true; m_volumeARN.assign(value); }
    inline ListVolumeInitiatorsRequest& WithVolumeARN(const Aws::String& value) { SetVolumeARN(value); return *this;}
    inline ListVolumeInitiatorsRequest& WithVolumeARN(Aws::String&& value) { SetVolumeARN(std::move(value)); return *this;}
    inline ListVolumeInitiatorsRequest& WithVolumeARN(const char* value) { SetVolumeARN(value); return *this;}
    ///@}
  private:

    Aws::String m_volumeARN;
    bool m_volumeARNHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
