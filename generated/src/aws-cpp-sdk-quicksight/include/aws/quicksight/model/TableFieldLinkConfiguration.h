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
    AWS_QUICKSIGHT_API TableFieldLinkConfiguration();
    AWS_QUICKSIGHT_API TableFieldLinkConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableFieldLinkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URL target (new tab, new window, same tab) for the table link
     * configuration.</p>
     */
    inline const URLTargetConfiguration& GetTarget() const{ return m_target; }

    /**
     * <p>The URL target (new tab, new window, same tab) for the table link
     * configuration.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The URL target (new tab, new window, same tab) for the table link
     * configuration.</p>
     */
    inline void SetTarget(const URLTargetConfiguration& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The URL target (new tab, new window, same tab) for the table link
     * configuration.</p>
     */
    inline void SetTarget(URLTargetConfiguration&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The URL target (new tab, new window, same tab) for the table link
     * configuration.</p>
     */
    inline TableFieldLinkConfiguration& WithTarget(const URLTargetConfiguration& value) { SetTarget(value); return *this;}

    /**
     * <p>The URL target (new tab, new window, same tab) for the table link
     * configuration.</p>
     */
    inline TableFieldLinkConfiguration& WithTarget(URLTargetConfiguration&& value) { SetTarget(std::move(value)); return *this;}


    /**
     * <p>The URL content (text, icon) for the table link configuration.</p>
     */
    inline const TableFieldLinkContentConfiguration& GetContent() const{ return m_content; }

    /**
     * <p>The URL content (text, icon) for the table link configuration.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The URL content (text, icon) for the table link configuration.</p>
     */
    inline void SetContent(const TableFieldLinkContentConfiguration& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The URL content (text, icon) for the table link configuration.</p>
     */
    inline void SetContent(TableFieldLinkContentConfiguration&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The URL content (text, icon) for the table link configuration.</p>
     */
    inline TableFieldLinkConfiguration& WithContent(const TableFieldLinkContentConfiguration& value) { SetContent(value); return *this;}

    /**
     * <p>The URL content (text, icon) for the table link configuration.</p>
     */
    inline TableFieldLinkConfiguration& WithContent(TableFieldLinkContentConfiguration&& value) { SetContent(std::move(value)); return *this;}

  private:

    URLTargetConfiguration m_target;
    bool m_targetHasBeenSet = false;

    TableFieldLinkContentConfiguration m_content;
    bool m_contentHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
