/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DefaultFilterControlOptions.h>
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
   * <p>The default configuration for all dependent controls of the
   * filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DefaultFilterControlConfiguration">AWS
   * API Reference</a></p>
   */
  class DefaultFilterControlConfiguration
  {
  public:
    AWS_QUICKSIGHT_API DefaultFilterControlConfiguration();
    AWS_QUICKSIGHT_API DefaultFilterControlConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DefaultFilterControlConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The title of the <code>DefaultFilterControlConfiguration</code>. This title
     * is shared by all controls that are tied to this filter.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline DefaultFilterControlConfiguration& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline DefaultFilterControlConfiguration& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline DefaultFilterControlConfiguration& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The control option for the
     * <code>DefaultFilterControlConfiguration</code>.</p>
     */
    inline const DefaultFilterControlOptions& GetControlOptions() const{ return m_controlOptions; }
    inline bool ControlOptionsHasBeenSet() const { return m_controlOptionsHasBeenSet; }
    inline void SetControlOptions(const DefaultFilterControlOptions& value) { m_controlOptionsHasBeenSet = true; m_controlOptions = value; }
    inline void SetControlOptions(DefaultFilterControlOptions&& value) { m_controlOptionsHasBeenSet = true; m_controlOptions = std::move(value); }
    inline DefaultFilterControlConfiguration& WithControlOptions(const DefaultFilterControlOptions& value) { SetControlOptions(value); return *this;}
    inline DefaultFilterControlConfiguration& WithControlOptions(DefaultFilterControlOptions&& value) { SetControlOptions(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    DefaultFilterControlOptions m_controlOptions;
    bool m_controlOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
