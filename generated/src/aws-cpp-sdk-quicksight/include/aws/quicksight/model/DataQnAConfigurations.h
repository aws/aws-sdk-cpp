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
   * <p>The generative Q&amp;A settings of an embedded QuickSight
   * console.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataQnAConfigurations">AWS
   * API Reference</a></p>
   */
  class DataQnAConfigurations
  {
  public:
    AWS_QUICKSIGHT_API DataQnAConfigurations() = default;
    AWS_QUICKSIGHT_API DataQnAConfigurations(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataQnAConfigurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The generative Q&amp;A settings of an embedded QuickSight console.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline DataQnAConfigurations& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
