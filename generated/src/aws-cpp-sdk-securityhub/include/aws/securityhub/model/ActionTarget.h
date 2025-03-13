/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>An <code>ActionTarget</code> object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ActionTarget">AWS
   * API Reference</a></p>
   */
  class ActionTarget
  {
  public:
    AWS_SECURITYHUB_API ActionTarget() = default;
    AWS_SECURITYHUB_API ActionTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ActionTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN for the target action.</p>
     */
    inline const Aws::String& GetActionTargetArn() const { return m_actionTargetArn; }
    inline bool ActionTargetArnHasBeenSet() const { return m_actionTargetArnHasBeenSet; }
    template<typename ActionTargetArnT = Aws::String>
    void SetActionTargetArn(ActionTargetArnT&& value) { m_actionTargetArnHasBeenSet = true; m_actionTargetArn = std::forward<ActionTargetArnT>(value); }
    template<typename ActionTargetArnT = Aws::String>
    ActionTarget& WithActionTargetArn(ActionTargetArnT&& value) { SetActionTargetArn(std::forward<ActionTargetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the action target.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ActionTarget& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the target action.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ActionTarget& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
