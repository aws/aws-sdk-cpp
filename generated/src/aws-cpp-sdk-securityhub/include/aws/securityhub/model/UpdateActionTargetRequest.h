/**
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
  class UpdateActionTargetRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API UpdateActionTargetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateActionTarget"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the custom action target to update.</p>
     */
    inline const Aws::String& GetActionTargetArn() const { return m_actionTargetArn; }
    inline bool ActionTargetArnHasBeenSet() const { return m_actionTargetArnHasBeenSet; }
    template<typename ActionTargetArnT = Aws::String>
    void SetActionTargetArn(ActionTargetArnT&& value) { m_actionTargetArnHasBeenSet = true; m_actionTargetArn = std::forward<ActionTargetArnT>(value); }
    template<typename ActionTargetArnT = Aws::String>
    UpdateActionTargetRequest& WithActionTargetArn(ActionTargetArnT&& value) { SetActionTargetArn(std::forward<ActionTargetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated name of the custom action target.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateActionTargetRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated description for the custom action target.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateActionTargetRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionTargetArn;
    bool m_actionTargetArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
