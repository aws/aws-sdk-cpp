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
  class DescribeFlowSourceMetadataRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API DescribeFlowSourceMetadataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFlowSourceMetadata"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }

    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArnHasBeenSet = true; m_flowArn = value; }

    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline void SetFlowArn(const char* value) { m_flowArnHasBeenSet = true; m_flowArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline DescribeFlowSourceMetadataRequest& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline DescribeFlowSourceMetadataRequest& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline DescribeFlowSourceMetadataRequest& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}

  private:

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
