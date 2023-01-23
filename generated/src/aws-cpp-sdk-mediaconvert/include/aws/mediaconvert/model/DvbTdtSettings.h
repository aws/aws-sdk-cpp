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
   * Use these settings to insert a DVB Time and Date Table (TDT) in the transport
   * stream of this output. When you work directly in your JSON job specification,
   * include this object only when your job has a transport stream output and the
   * container settings contain the object M2tsSettings.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DvbTdtSettings">AWS
   * API Reference</a></p>
   */
  class DvbTdtSettings
  {
  public:
    AWS_MEDIACONVERT_API DvbTdtSettings();
    AWS_MEDIACONVERT_API DvbTdtSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API DvbTdtSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline int GetTdtInterval() const{ return m_tdtInterval; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline bool TdtIntervalHasBeenSet() const { return m_tdtIntervalHasBeenSet; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline void SetTdtInterval(int value) { m_tdtIntervalHasBeenSet = true; m_tdtInterval = value; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline DvbTdtSettings& WithTdtInterval(int value) { SetTdtInterval(value); return *this;}

  private:

    int m_tdtInterval;
    bool m_tdtIntervalHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
