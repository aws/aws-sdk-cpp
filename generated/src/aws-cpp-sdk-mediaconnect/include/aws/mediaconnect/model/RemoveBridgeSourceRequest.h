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
    AWS_MEDIACONNECT_API RemoveBridgeSourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveBridgeSource"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the bridge that you want to update.</p>
     */
    inline const Aws::String& GetBridgeArn() const { return m_bridgeArn; }
    inline bool BridgeArnHasBeenSet() const { return m_bridgeArnHasBeenSet; }
    template<typename BridgeArnT = Aws::String>
    void SetBridgeArn(BridgeArnT&& value) { m_bridgeArnHasBeenSet = true; m_bridgeArn = std::forward<BridgeArnT>(value); }
    template<typename BridgeArnT = Aws::String>
    RemoveBridgeSourceRequest& WithBridgeArn(BridgeArnT&& value) { SetBridgeArn(std::forward<BridgeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the bridge source that you want to remove.</p>
     */
    inline const Aws::String& GetSourceName() const { return m_sourceName; }
    inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }
    template<typename SourceNameT = Aws::String>
    void SetSourceName(SourceNameT&& value) { m_sourceNameHasBeenSet = true; m_sourceName = std::forward<SourceNameT>(value); }
    template<typename SourceNameT = Aws::String>
    RemoveBridgeSourceRequest& WithSourceName(SourceNameT&& value) { SetSourceName(std::forward<SourceNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bridgeArn;
    bool m_bridgeArnHasBeenSet = false;

    Aws::String m_sourceName;
    bool m_sourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
