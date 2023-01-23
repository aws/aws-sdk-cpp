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
    AWS_QUICKSIGHT_API LocalNavigationConfiguration();
    AWS_QUICKSIGHT_API LocalNavigationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API LocalNavigationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The sheet that is targeted for navigation in the same analysis.</p>
     */
    inline const Aws::String& GetTargetSheetId() const{ return m_targetSheetId; }

    /**
     * <p>The sheet that is targeted for navigation in the same analysis.</p>
     */
    inline bool TargetSheetIdHasBeenSet() const { return m_targetSheetIdHasBeenSet; }

    /**
     * <p>The sheet that is targeted for navigation in the same analysis.</p>
     */
    inline void SetTargetSheetId(const Aws::String& value) { m_targetSheetIdHasBeenSet = true; m_targetSheetId = value; }

    /**
     * <p>The sheet that is targeted for navigation in the same analysis.</p>
     */
    inline void SetTargetSheetId(Aws::String&& value) { m_targetSheetIdHasBeenSet = true; m_targetSheetId = std::move(value); }

    /**
     * <p>The sheet that is targeted for navigation in the same analysis.</p>
     */
    inline void SetTargetSheetId(const char* value) { m_targetSheetIdHasBeenSet = true; m_targetSheetId.assign(value); }

    /**
     * <p>The sheet that is targeted for navigation in the same analysis.</p>
     */
    inline LocalNavigationConfiguration& WithTargetSheetId(const Aws::String& value) { SetTargetSheetId(value); return *this;}

    /**
     * <p>The sheet that is targeted for navigation in the same analysis.</p>
     */
    inline LocalNavigationConfiguration& WithTargetSheetId(Aws::String&& value) { SetTargetSheetId(std::move(value)); return *this;}

    /**
     * <p>The sheet that is targeted for navigation in the same analysis.</p>
     */
    inline LocalNavigationConfiguration& WithTargetSheetId(const char* value) { SetTargetSheetId(value); return *this;}

  private:

    Aws::String m_targetSheetId;
    bool m_targetSheetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
