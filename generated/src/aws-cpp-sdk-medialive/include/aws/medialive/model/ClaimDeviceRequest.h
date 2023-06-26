/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * A request to claim an AWS Elemental device that you have purchased from a
   * third-party vendor.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ClaimDeviceRequest">AWS
   * API Reference</a></p>
   */
  class ClaimDeviceRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API ClaimDeviceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ClaimDevice"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    /**
     * The id of the device you want to claim.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The id of the device you want to claim.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The id of the device you want to claim.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The id of the device you want to claim.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The id of the device you want to claim.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The id of the device you want to claim.
     */
    inline ClaimDeviceRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The id of the device you want to claim.
     */
    inline ClaimDeviceRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The id of the device you want to claim.
     */
    inline ClaimDeviceRequest& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
