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
  class RemoveFlowSourceRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API RemoveFlowSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveFlowSource"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    /**
     * The flow that you want to remove a source from.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * The flow that you want to remove a source from.
     */
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }

    /**
     * The flow that you want to remove a source from.
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArnHasBeenSet = true; m_flowArn = value; }

    /**
     * The flow that you want to remove a source from.
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::move(value); }

    /**
     * The flow that you want to remove a source from.
     */
    inline void SetFlowArn(const char* value) { m_flowArnHasBeenSet = true; m_flowArn.assign(value); }

    /**
     * The flow that you want to remove a source from.
     */
    inline RemoveFlowSourceRequest& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * The flow that you want to remove a source from.
     */
    inline RemoveFlowSourceRequest& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * The flow that you want to remove a source from.
     */
    inline RemoveFlowSourceRequest& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}


    /**
     * The ARN of the source that you want to remove.
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * The ARN of the source that you want to remove.
     */
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }

    /**
     * The ARN of the source that you want to remove.
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * The ARN of the source that you want to remove.
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }

    /**
     * The ARN of the source that you want to remove.
     */
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }

    /**
     * The ARN of the source that you want to remove.
     */
    inline RemoveFlowSourceRequest& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * The ARN of the source that you want to remove.
     */
    inline RemoveFlowSourceRequest& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * The ARN of the source that you want to remove.
     */
    inline RemoveFlowSourceRequest& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}

  private:

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
