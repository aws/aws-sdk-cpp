﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class DescribeSubscribedWorkteamRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DescribeSubscribedWorkteamRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSubscribedWorkteam"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the subscribed work team to describe.</p>
     */
    inline const Aws::String& GetWorkteamArn() const { return m_workteamArn; }
    inline bool WorkteamArnHasBeenSet() const { return m_workteamArnHasBeenSet; }
    template<typename WorkteamArnT = Aws::String>
    void SetWorkteamArn(WorkteamArnT&& value) { m_workteamArnHasBeenSet = true; m_workteamArn = std::forward<WorkteamArnT>(value); }
    template<typename WorkteamArnT = Aws::String>
    DescribeSubscribedWorkteamRequest& WithWorkteamArn(WorkteamArnT&& value) { SetWorkteamArn(std::forward<WorkteamArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workteamArn;
    bool m_workteamArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
