/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/TextAreaControlDisplayOptions.h>
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
   * <p>The default options that correspond to the <code>TextArea</code> filter
   * control type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DefaultTextAreaControlOptions">AWS
   * API Reference</a></p>
   */
  class DefaultTextAreaControlOptions
  {
  public:
    AWS_QUICKSIGHT_API DefaultTextAreaControlOptions();
    AWS_QUICKSIGHT_API DefaultTextAreaControlOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DefaultTextAreaControlOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The delimiter that is used to separate the lines in text.</p>
     */
    inline const Aws::String& GetDelimiter() const{ return m_delimiter; }
    inline bool DelimiterHasBeenSet() const { return m_delimiterHasBeenSet; }
    inline void SetDelimiter(const Aws::String& value) { m_delimiterHasBeenSet = true; m_delimiter = value; }
    inline void SetDelimiter(Aws::String&& value) { m_delimiterHasBeenSet = true; m_delimiter = std::move(value); }
    inline void SetDelimiter(const char* value) { m_delimiterHasBeenSet = true; m_delimiter.assign(value); }
    inline DefaultTextAreaControlOptions& WithDelimiter(const Aws::String& value) { SetDelimiter(value); return *this;}
    inline DefaultTextAreaControlOptions& WithDelimiter(Aws::String&& value) { SetDelimiter(std::move(value)); return *this;}
    inline DefaultTextAreaControlOptions& WithDelimiter(const char* value) { SetDelimiter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display options of a control.</p>
     */
    inline const TextAreaControlDisplayOptions& GetDisplayOptions() const{ return m_displayOptions; }
    inline bool DisplayOptionsHasBeenSet() const { return m_displayOptionsHasBeenSet; }
    inline void SetDisplayOptions(const TextAreaControlDisplayOptions& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = value; }
    inline void SetDisplayOptions(TextAreaControlDisplayOptions&& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = std::move(value); }
    inline DefaultTextAreaControlOptions& WithDisplayOptions(const TextAreaControlDisplayOptions& value) { SetDisplayOptions(value); return *this;}
    inline DefaultTextAreaControlOptions& WithDisplayOptions(TextAreaControlDisplayOptions&& value) { SetDisplayOptions(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_delimiter;
    bool m_delimiterHasBeenSet = false;

    TextAreaControlDisplayOptions m_displayOptions;
    bool m_displayOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
