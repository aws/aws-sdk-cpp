/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/model/SetSourceRequest.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   * A request to add sources to the flow.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddFlowSourcesRequest">AWS
   * API Reference</a></p>
   */
  class AddFlowSourcesRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API AddFlowSourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddFlowSources"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    /**
     * The flow that you want to mutate.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * The flow that you want to mutate.
     */
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }

    /**
     * The flow that you want to mutate.
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArnHasBeenSet = true; m_flowArn = value; }

    /**
     * The flow that you want to mutate.
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::move(value); }

    /**
     * The flow that you want to mutate.
     */
    inline void SetFlowArn(const char* value) { m_flowArnHasBeenSet = true; m_flowArn.assign(value); }

    /**
     * The flow that you want to mutate.
     */
    inline AddFlowSourcesRequest& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * The flow that you want to mutate.
     */
    inline AddFlowSourcesRequest& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * The flow that you want to mutate.
     */
    inline AddFlowSourcesRequest& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}


    /**
     * A list of sources that you want to add.
     */
    inline const Aws::Vector<SetSourceRequest>& GetSources() const{ return m_sources; }

    /**
     * A list of sources that you want to add.
     */
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }

    /**
     * A list of sources that you want to add.
     */
    inline void SetSources(const Aws::Vector<SetSourceRequest>& value) { m_sourcesHasBeenSet = true; m_sources = value; }

    /**
     * A list of sources that you want to add.
     */
    inline void SetSources(Aws::Vector<SetSourceRequest>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }

    /**
     * A list of sources that you want to add.
     */
    inline AddFlowSourcesRequest& WithSources(const Aws::Vector<SetSourceRequest>& value) { SetSources(value); return *this;}

    /**
     * A list of sources that you want to add.
     */
    inline AddFlowSourcesRequest& WithSources(Aws::Vector<SetSourceRequest>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * A list of sources that you want to add.
     */
    inline AddFlowSourcesRequest& AddSources(const SetSourceRequest& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }

    /**
     * A list of sources that you want to add.
     */
    inline AddFlowSourcesRequest& AddSources(SetSourceRequest&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;

    Aws::Vector<SetSourceRequest> m_sources;
    bool m_sourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
