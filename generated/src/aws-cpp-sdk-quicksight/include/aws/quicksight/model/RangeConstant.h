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
   * <p>A structure that represents a range constant.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RangeConstant">AWS
   * API Reference</a></p>
   */
  class RangeConstant
  {
  public:
    AWS_QUICKSIGHT_API RangeConstant();
    AWS_QUICKSIGHT_API RangeConstant(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RangeConstant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The minimum value for a range constant.</p>
     */
    inline const Aws::String& GetMinimum() const{ return m_minimum; }

    /**
     * <p>The minimum value for a range constant.</p>
     */
    inline bool MinimumHasBeenSet() const { return m_minimumHasBeenSet; }

    /**
     * <p>The minimum value for a range constant.</p>
     */
    inline void SetMinimum(const Aws::String& value) { m_minimumHasBeenSet = true; m_minimum = value; }

    /**
     * <p>The minimum value for a range constant.</p>
     */
    inline void SetMinimum(Aws::String&& value) { m_minimumHasBeenSet = true; m_minimum = std::move(value); }

    /**
     * <p>The minimum value for a range constant.</p>
     */
    inline void SetMinimum(const char* value) { m_minimumHasBeenSet = true; m_minimum.assign(value); }

    /**
     * <p>The minimum value for a range constant.</p>
     */
    inline RangeConstant& WithMinimum(const Aws::String& value) { SetMinimum(value); return *this;}

    /**
     * <p>The minimum value for a range constant.</p>
     */
    inline RangeConstant& WithMinimum(Aws::String&& value) { SetMinimum(std::move(value)); return *this;}

    /**
     * <p>The minimum value for a range constant.</p>
     */
    inline RangeConstant& WithMinimum(const char* value) { SetMinimum(value); return *this;}


    /**
     * <p>The maximum value for a range constant.</p>
     */
    inline const Aws::String& GetMaximum() const{ return m_maximum; }

    /**
     * <p>The maximum value for a range constant.</p>
     */
    inline bool MaximumHasBeenSet() const { return m_maximumHasBeenSet; }

    /**
     * <p>The maximum value for a range constant.</p>
     */
    inline void SetMaximum(const Aws::String& value) { m_maximumHasBeenSet = true; m_maximum = value; }

    /**
     * <p>The maximum value for a range constant.</p>
     */
    inline void SetMaximum(Aws::String&& value) { m_maximumHasBeenSet = true; m_maximum = std::move(value); }

    /**
     * <p>The maximum value for a range constant.</p>
     */
    inline void SetMaximum(const char* value) { m_maximumHasBeenSet = true; m_maximum.assign(value); }

    /**
     * <p>The maximum value for a range constant.</p>
     */
    inline RangeConstant& WithMaximum(const Aws::String& value) { SetMaximum(value); return *this;}

    /**
     * <p>The maximum value for a range constant.</p>
     */
    inline RangeConstant& WithMaximum(Aws::String&& value) { SetMaximum(std::move(value)); return *this;}

    /**
     * <p>The maximum value for a range constant.</p>
     */
    inline RangeConstant& WithMaximum(const char* value) { SetMaximum(value); return *this;}

  private:

    Aws::String m_minimum;
    bool m_minimumHasBeenSet = false;

    Aws::String m_maximum;
    bool m_maximumHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
