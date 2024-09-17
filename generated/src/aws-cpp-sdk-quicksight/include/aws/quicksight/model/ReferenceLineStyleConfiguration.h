/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ReferenceLinePatternType.h>
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
   * <p>The style configuration of the reference line.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ReferenceLineStyleConfiguration">AWS
   * API Reference</a></p>
   */
  class ReferenceLineStyleConfiguration
  {
  public:
    AWS_QUICKSIGHT_API ReferenceLineStyleConfiguration();
    AWS_QUICKSIGHT_API ReferenceLineStyleConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ReferenceLineStyleConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The pattern type of the line style. Choose one of the following options:</p>
     * <ul> <li> <p> <code>SOLID</code> </p> </li> <li> <p> <code>DASHED</code> </p>
     * </li> <li> <p> <code>DOTTED</code> </p> </li> </ul>
     */
    inline const ReferenceLinePatternType& GetPattern() const{ return m_pattern; }
    inline bool PatternHasBeenSet() const { return m_patternHasBeenSet; }
    inline void SetPattern(const ReferenceLinePatternType& value) { m_patternHasBeenSet = true; m_pattern = value; }
    inline void SetPattern(ReferenceLinePatternType&& value) { m_patternHasBeenSet = true; m_pattern = std::move(value); }
    inline ReferenceLineStyleConfiguration& WithPattern(const ReferenceLinePatternType& value) { SetPattern(value); return *this;}
    inline ReferenceLineStyleConfiguration& WithPattern(ReferenceLinePatternType&& value) { SetPattern(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hex color of the reference line.</p>
     */
    inline const Aws::String& GetColor() const{ return m_color; }
    inline bool ColorHasBeenSet() const { return m_colorHasBeenSet; }
    inline void SetColor(const Aws::String& value) { m_colorHasBeenSet = true; m_color = value; }
    inline void SetColor(Aws::String&& value) { m_colorHasBeenSet = true; m_color = std::move(value); }
    inline void SetColor(const char* value) { m_colorHasBeenSet = true; m_color.assign(value); }
    inline ReferenceLineStyleConfiguration& WithColor(const Aws::String& value) { SetColor(value); return *this;}
    inline ReferenceLineStyleConfiguration& WithColor(Aws::String&& value) { SetColor(std::move(value)); return *this;}
    inline ReferenceLineStyleConfiguration& WithColor(const char* value) { SetColor(value); return *this;}
    ///@}
  private:

    ReferenceLinePatternType m_pattern;
    bool m_patternHasBeenSet = false;

    Aws::String m_color;
    bool m_colorHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
