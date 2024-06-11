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
  class RemoveFlowOutputRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API RemoveFlowOutputRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveFlowOutput"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The flow that you want to remove an output from.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }
    inline void SetFlowArn(const Aws::String& value) { m_flowArnHasBeenSet = true; m_flowArn = value; }
    inline void SetFlowArn(Aws::String&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::move(value); }
    inline void SetFlowArn(const char* value) { m_flowArnHasBeenSet = true; m_flowArn.assign(value); }
    inline RemoveFlowOutputRequest& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}
    inline RemoveFlowOutputRequest& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}
    inline RemoveFlowOutputRequest& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the output that you want to remove.
     */
    inline const Aws::String& GetOutputArn() const{ return m_outputArn; }
    inline bool OutputArnHasBeenSet() const { return m_outputArnHasBeenSet; }
    inline void SetOutputArn(const Aws::String& value) { m_outputArnHasBeenSet = true; m_outputArn = value; }
    inline void SetOutputArn(Aws::String&& value) { m_outputArnHasBeenSet = true; m_outputArn = std::move(value); }
    inline void SetOutputArn(const char* value) { m_outputArnHasBeenSet = true; m_outputArn.assign(value); }
    inline RemoveFlowOutputRequest& WithOutputArn(const Aws::String& value) { SetOutputArn(value); return *this;}
    inline RemoveFlowOutputRequest& WithOutputArn(Aws::String&& value) { SetOutputArn(std::move(value)); return *this;}
    inline RemoveFlowOutputRequest& WithOutputArn(const char* value) { SetOutputArn(value); return *this;}
    ///@}
  private:

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;

    Aws::String m_outputArn;
    bool m_outputArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
