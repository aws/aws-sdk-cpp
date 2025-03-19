/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The navigation configuration for
   * <code>CustomActionNavigationOperation</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/LocalNavigationConfiguration">AWS
   * API Reference</a></p>
   */
  class LocalNavigationConfiguration
  {
  public:
    AWS_QUICKSIGHT_API LocalNavigationConfiguration() = default;
    AWS_QUICKSIGHT_API LocalNavigationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API LocalNavigationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The sheet that is targeted for navigation in the same analysis.</p>
     */
    inline const Aws::String& GetTargetSheetId() const { return m_targetSheetId; }
    inline bool TargetSheetIdHasBeenSet() const { return m_targetSheetIdHasBeenSet; }
    template<typename TargetSheetIdT = Aws::String>
    void SetTargetSheetId(TargetSheetIdT&& value) { m_targetSheetIdHasBeenSet = true; m_targetSheetId = std::forward<TargetSheetIdT>(value); }
    template<typename TargetSheetIdT = Aws::String>
    LocalNavigationConfiguration& WithTargetSheetId(TargetSheetIdT&& value) { SetTargetSheetId(std::forward<TargetSheetIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_targetSheetId;
    bool m_targetSheetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
