/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/URLTargetConfiguration.h>
#include <aws/quicksight/model/TableFieldLinkContentConfiguration.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The link configuration of a table field URL.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TableFieldLinkConfiguration">AWS
   * API Reference</a></p>
   */
  class TableFieldLinkConfiguration
  {
  public:
    AWS_QUICKSIGHT_API TableFieldLinkConfiguration() = default;
    AWS_QUICKSIGHT_API TableFieldLinkConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableFieldLinkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL target (new tab, new window, same tab) for the table link
     * configuration.</p>
     */
    inline URLTargetConfiguration GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(URLTargetConfiguration value) { m_targetHasBeenSet = true; m_target = value; }
    inline TableFieldLinkConfiguration& WithTarget(URLTargetConfiguration value) { SetTarget(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL content (text, icon) for the table link configuration.</p>
     */
    inline const TableFieldLinkContentConfiguration& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = TableFieldLinkContentConfiguration>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = TableFieldLinkContentConfiguration>
    TableFieldLinkConfiguration& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}
  private:

    URLTargetConfiguration m_target{URLTargetConfiguration::NOT_SET};
    bool m_targetHasBeenSet = false;

    TableFieldLinkContentConfiguration m_content;
    bool m_contentHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
