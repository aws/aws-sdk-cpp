/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

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
namespace MediaConvert
{
namespace Model
{

  /**
   * Contains any warning codes and their count for the job.<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/WarningGroup">AWS
   * API Reference</a></p>
   */
  class WarningGroup
  {
  public:
    AWS_MEDIACONVERT_API WarningGroup() = default;
    AWS_MEDIACONVERT_API WarningGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API WarningGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Warning code that identifies a specific warning in the job. For more
     * information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/warning_codes.html
     */
    inline int GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(int value) { m_codeHasBeenSet = true; m_code = value; }
    inline WarningGroup& WithCode(int value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * The number of times this warning occurred in the job.
     */
    inline int GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline WarningGroup& WithCount(int value) { SetCount(value); return *this;}
    ///@}
  private:

    int m_code{0};
    bool m_codeHasBeenSet = false;

    int m_count{0};
    bool m_countHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
