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
   * <p>The simple cluster marker of the cluster marker.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SimpleClusterMarker">AWS
   * API Reference</a></p>
   */
  class SimpleClusterMarker
  {
  public:
    AWS_QUICKSIGHT_API SimpleClusterMarker();
    AWS_QUICKSIGHT_API SimpleClusterMarker(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SimpleClusterMarker& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The color of the simple cluster marker.</p>
     */
    inline const Aws::String& GetColor() const{ return m_color; }
    inline bool ColorHasBeenSet() const { return m_colorHasBeenSet; }
    inline void SetColor(const Aws::String& value) { m_colorHasBeenSet = true; m_color = value; }
    inline void SetColor(Aws::String&& value) { m_colorHasBeenSet = true; m_color = std::move(value); }
    inline void SetColor(const char* value) { m_colorHasBeenSet = true; m_color.assign(value); }
    inline SimpleClusterMarker& WithColor(const Aws::String& value) { SetColor(value); return *this;}
    inline SimpleClusterMarker& WithColor(Aws::String&& value) { SetColor(std::move(value)); return *this;}
    inline SimpleClusterMarker& WithColor(const char* value) { SetColor(value); return *this;}
    ///@}
  private:

    Aws::String m_color;
    bool m_colorHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
