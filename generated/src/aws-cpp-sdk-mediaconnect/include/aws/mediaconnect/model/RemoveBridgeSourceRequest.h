/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   */
  class RemoveBridgeSourceRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API RemoveBridgeSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveBridgeSource"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    /**
     * The ARN of the bridge that you want to update.
     */
    inline const Aws::String& GetBridgeArn() const{ return m_bridgeArn; }

    /**
     * The ARN of the bridge that you want to update.
     */
    inline bool BridgeArnHasBeenSet() const { return m_bridgeArnHasBeenSet; }

    /**
     * The ARN of the bridge that you want to update.
     */
    inline void SetBridgeArn(const Aws::String& value) { m_bridgeArnHasBeenSet = true; m_bridgeArn = value; }

    /**
     * The ARN of the bridge that you want to update.
     */
    inline void SetBridgeArn(Aws::String&& value) { m_bridgeArnHasBeenSet = true; m_bridgeArn = std::move(value); }

    /**
     * The ARN of the bridge that you want to update.
     */
    inline void SetBridgeArn(const char* value) { m_bridgeArnHasBeenSet = true; m_bridgeArn.assign(value); }

    /**
     * The ARN of the bridge that you want to update.
     */
    inline RemoveBridgeSourceRequest& WithBridgeArn(const Aws::String& value) { SetBridgeArn(value); return *this;}

    /**
     * The ARN of the bridge that you want to update.
     */
    inline RemoveBridgeSourceRequest& WithBridgeArn(Aws::String&& value) { SetBridgeArn(std::move(value)); return *this;}

    /**
     * The ARN of the bridge that you want to update.
     */
    inline RemoveBridgeSourceRequest& WithBridgeArn(const char* value) { SetBridgeArn(value); return *this;}


    /**
     * The name of the bridge source that you want to remove.
     */
    inline const Aws::String& GetSourceName() const{ return m_sourceName; }

    /**
     * The name of the bridge source that you want to remove.
     */
    inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }

    /**
     * The name of the bridge source that you want to remove.
     */
    inline void SetSourceName(const Aws::String& value) { m_sourceNameHasBeenSet = true; m_sourceName = value; }

    /**
     * The name of the bridge source that you want to remove.
     */
    inline void SetSourceName(Aws::String&& value) { m_sourceNameHasBeenSet = true; m_sourceName = std::move(value); }

    /**
     * The name of the bridge source that you want to remove.
     */
    inline void SetSourceName(const char* value) { m_sourceNameHasBeenSet = true; m_sourceName.assign(value); }

    /**
     * The name of the bridge source that you want to remove.
     */
    inline RemoveBridgeSourceRequest& WithSourceName(const Aws::String& value) { SetSourceName(value); return *this;}

    /**
     * The name of the bridge source that you want to remove.
     */
    inline RemoveBridgeSourceRequest& WithSourceName(Aws::String&& value) { SetSourceName(std::move(value)); return *this;}

    /**
     * The name of the bridge source that you want to remove.
     */
    inline RemoveBridgeSourceRequest& WithSourceName(const char* value) { SetSourceName(value); return *this;}

  private:

    Aws::String m_bridgeArn;
    bool m_bridgeArnHasBeenSet = false;

    Aws::String m_sourceName;
    bool m_sourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
