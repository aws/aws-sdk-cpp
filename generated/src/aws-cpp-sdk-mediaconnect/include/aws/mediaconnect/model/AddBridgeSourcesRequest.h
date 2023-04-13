/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/model/AddBridgeSourceRequest.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   * A request to add sources to the specified bridge.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddBridgeSourcesRequest">AWS
   * API Reference</a></p>
   */
  class AddBridgeSourcesRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API AddBridgeSourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddBridgeSources"; }

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
    inline AddBridgeSourcesRequest& WithBridgeArn(const Aws::String& value) { SetBridgeArn(value); return *this;}

    /**
     * The ARN of the bridge that you want to update.
     */
    inline AddBridgeSourcesRequest& WithBridgeArn(Aws::String&& value) { SetBridgeArn(std::move(value)); return *this;}

    /**
     * The ARN of the bridge that you want to update.
     */
    inline AddBridgeSourcesRequest& WithBridgeArn(const char* value) { SetBridgeArn(value); return *this;}


    /**
     * The sources that you want to add to this bridge.
     */
    inline const Aws::Vector<AddBridgeSourceRequest>& GetSources() const{ return m_sources; }

    /**
     * The sources that you want to add to this bridge.
     */
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }

    /**
     * The sources that you want to add to this bridge.
     */
    inline void SetSources(const Aws::Vector<AddBridgeSourceRequest>& value) { m_sourcesHasBeenSet = true; m_sources = value; }

    /**
     * The sources that you want to add to this bridge.
     */
    inline void SetSources(Aws::Vector<AddBridgeSourceRequest>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }

    /**
     * The sources that you want to add to this bridge.
     */
    inline AddBridgeSourcesRequest& WithSources(const Aws::Vector<AddBridgeSourceRequest>& value) { SetSources(value); return *this;}

    /**
     * The sources that you want to add to this bridge.
     */
    inline AddBridgeSourcesRequest& WithSources(Aws::Vector<AddBridgeSourceRequest>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * The sources that you want to add to this bridge.
     */
    inline AddBridgeSourcesRequest& AddSources(const AddBridgeSourceRequest& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }

    /**
     * The sources that you want to add to this bridge.
     */
    inline AddBridgeSourcesRequest& AddSources(AddBridgeSourceRequest&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_bridgeArn;
    bool m_bridgeArnHasBeenSet = false;

    Aws::Vector<AddBridgeSourceRequest> m_sources;
    bool m_sourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
