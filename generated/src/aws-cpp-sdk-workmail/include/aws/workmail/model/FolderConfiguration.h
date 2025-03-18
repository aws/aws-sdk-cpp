/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/model/FolderName.h>
#include <aws/workmail/model/RetentionAction.h>
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
namespace WorkMail
{
namespace Model
{

  /**
   * <p>The configuration applied to an organization's folders by its retention
   * policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/FolderConfiguration">AWS
   * API Reference</a></p>
   */
  class FolderConfiguration
  {
  public:
    AWS_WORKMAIL_API FolderConfiguration() = default;
    AWS_WORKMAIL_API FolderConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API FolderConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The folder name.</p>
     */
    inline FolderName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(FolderName value) { m_nameHasBeenSet = true; m_name = value; }
    inline FolderConfiguration& WithName(FolderName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to take on the folder contents at the end of the folder
     * configuration period.</p>
     */
    inline RetentionAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(RetentionAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline FolderConfiguration& WithAction(RetentionAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days for which the folder-configuration action applies.</p>
     */
    inline int GetPeriod() const { return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }
    inline FolderConfiguration& WithPeriod(int value) { SetPeriod(value); return *this;}
    ///@}
  private:

    FolderName m_name{FolderName::NOT_SET};
    bool m_nameHasBeenSet = false;

    RetentionAction m_action{RetentionAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    int m_period{0};
    bool m_periodHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
