/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
   * <p>Configuration options for a <code>Topic</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicConfigOptions">AWS
   * API Reference</a></p>
   */
  class TopicConfigOptions
  {
  public:
    AWS_QUICKSIGHT_API TopicConfigOptions() = default;
    AWS_QUICKSIGHT_API TopicConfigOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicConfigOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Enables Amazon Q Business Insights for a <code>Topic</code>.</p>
     */
    inline bool GetQBusinessInsightsEnabled() const { return m_qBusinessInsightsEnabled; }
    inline bool QBusinessInsightsEnabledHasBeenSet() const { return m_qBusinessInsightsEnabledHasBeenSet; }
    inline void SetQBusinessInsightsEnabled(bool value) { m_qBusinessInsightsEnabledHasBeenSet = true; m_qBusinessInsightsEnabled = value; }
    inline TopicConfigOptions& WithQBusinessInsightsEnabled(bool value) { SetQBusinessInsightsEnabled(value); return *this;}
    ///@}
  private:

    bool m_qBusinessInsightsEnabled{false};
    bool m_qBusinessInsightsEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
