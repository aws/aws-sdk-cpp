/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Provides messages from the service about jobs that you have already successfully
   * submitted.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/JobMessages">AWS
   * API Reference</a></p>
   */
  class JobMessages
  {
  public:
    AWS_MEDIACONVERT_API JobMessages();
    AWS_MEDIACONVERT_API JobMessages(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API JobMessages& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * List of messages that are informational only and don't indicate a problem with
     * your job.
     */
    inline const Aws::Vector<Aws::String>& GetInfo() const{ return m_info; }
    inline bool InfoHasBeenSet() const { return m_infoHasBeenSet; }
    inline void SetInfo(const Aws::Vector<Aws::String>& value) { m_infoHasBeenSet = true; m_info = value; }
    inline void SetInfo(Aws::Vector<Aws::String>&& value) { m_infoHasBeenSet = true; m_info = std::move(value); }
    inline JobMessages& WithInfo(const Aws::Vector<Aws::String>& value) { SetInfo(value); return *this;}
    inline JobMessages& WithInfo(Aws::Vector<Aws::String>&& value) { SetInfo(std::move(value)); return *this;}
    inline JobMessages& AddInfo(const Aws::String& value) { m_infoHasBeenSet = true; m_info.push_back(value); return *this; }
    inline JobMessages& AddInfo(Aws::String&& value) { m_infoHasBeenSet = true; m_info.push_back(std::move(value)); return *this; }
    inline JobMessages& AddInfo(const char* value) { m_infoHasBeenSet = true; m_info.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * List of messages that warn about conditions that might cause your job not to run
     * or to fail.
     */
    inline const Aws::Vector<Aws::String>& GetWarning() const{ return m_warning; }
    inline bool WarningHasBeenSet() const { return m_warningHasBeenSet; }
    inline void SetWarning(const Aws::Vector<Aws::String>& value) { m_warningHasBeenSet = true; m_warning = value; }
    inline void SetWarning(Aws::Vector<Aws::String>&& value) { m_warningHasBeenSet = true; m_warning = std::move(value); }
    inline JobMessages& WithWarning(const Aws::Vector<Aws::String>& value) { SetWarning(value); return *this;}
    inline JobMessages& WithWarning(Aws::Vector<Aws::String>&& value) { SetWarning(std::move(value)); return *this;}
    inline JobMessages& AddWarning(const Aws::String& value) { m_warningHasBeenSet = true; m_warning.push_back(value); return *this; }
    inline JobMessages& AddWarning(Aws::String&& value) { m_warningHasBeenSet = true; m_warning.push_back(std::move(value)); return *this; }
    inline JobMessages& AddWarning(const char* value) { m_warningHasBeenSet = true; m_warning.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_info;
    bool m_infoHasBeenSet = false;

    Aws::Vector<Aws::String> m_warning;
    bool m_warningHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
