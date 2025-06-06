﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class DeleteActionTargetRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API DeleteActionTargetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteActionTarget"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the custom action target to delete.</p>
     */
    inline const Aws::String& GetActionTargetArn() const { return m_actionTargetArn; }
    inline bool ActionTargetArnHasBeenSet() const { return m_actionTargetArnHasBeenSet; }
    template<typename ActionTargetArnT = Aws::String>
    void SetActionTargetArn(ActionTargetArnT&& value) { m_actionTargetArnHasBeenSet = true; m_actionTargetArn = std::forward<ActionTargetArnT>(value); }
    template<typename ActionTargetArnT = Aws::String>
    DeleteActionTargetRequest& WithActionTargetArn(ActionTargetArnT&& value) { SetActionTargetArn(std::forward<ActionTargetArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionTargetArn;
    bool m_actionTargetArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
