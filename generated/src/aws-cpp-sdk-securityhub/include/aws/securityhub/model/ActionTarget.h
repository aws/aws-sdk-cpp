﻿/**
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
    AWS_SECURITYHUB_API ActionTarget();
    AWS_SECURITYHUB_API ActionTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ActionTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN for the target action.</p>
     */
    inline const Aws::String& GetActionTargetArn() const{ return m_actionTargetArn; }
    inline bool ActionTargetArnHasBeenSet() const { return m_actionTargetArnHasBeenSet; }
    inline void SetActionTargetArn(const Aws::String& value) { m_actionTargetArnHasBeenSet = true; m_actionTargetArn = value; }
    inline void SetActionTargetArn(Aws::String&& value) { m_actionTargetArnHasBeenSet = true; m_actionTargetArn = std::move(value); }
    inline void SetActionTargetArn(const char* value) { m_actionTargetArnHasBeenSet = true; m_actionTargetArn.assign(value); }
    inline ActionTarget& WithActionTargetArn(const Aws::String& value) { SetActionTargetArn(value); return *this;}
    inline ActionTarget& WithActionTargetArn(Aws::String&& value) { SetActionTargetArn(std::move(value)); return *this;}
    inline ActionTarget& WithActionTargetArn(const char* value) { SetActionTargetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the action target.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ActionTarget& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ActionTarget& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ActionTarget& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the target action.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ActionTarget& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ActionTarget& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ActionTarget& WithDescription(const char* value) { SetDescription(value); return *this;}
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
