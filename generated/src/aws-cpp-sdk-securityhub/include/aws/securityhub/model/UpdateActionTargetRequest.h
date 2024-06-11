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
    AWS_SECURITYHUB_API UpdateActionTargetRequest();

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
    inline const Aws::String& GetActionTargetArn() const{ return m_actionTargetArn; }
    inline bool ActionTargetArnHasBeenSet() const { return m_actionTargetArnHasBeenSet; }
    inline void SetActionTargetArn(const Aws::String& value) { m_actionTargetArnHasBeenSet = true; m_actionTargetArn = value; }
    inline void SetActionTargetArn(Aws::String&& value) { m_actionTargetArnHasBeenSet = true; m_actionTargetArn = std::move(value); }
    inline void SetActionTargetArn(const char* value) { m_actionTargetArnHasBeenSet = true; m_actionTargetArn.assign(value); }
    inline UpdateActionTargetRequest& WithActionTargetArn(const Aws::String& value) { SetActionTargetArn(value); return *this;}
    inline UpdateActionTargetRequest& WithActionTargetArn(Aws::String&& value) { SetActionTargetArn(std::move(value)); return *this;}
    inline UpdateActionTargetRequest& WithActionTargetArn(const char* value) { SetActionTargetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated name of the custom action target.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateActionTargetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateActionTargetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateActionTargetRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated description for the custom action target.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateActionTargetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateActionTargetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateActionTargetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
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
