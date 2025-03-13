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
    AWS_MEDIACONVERT_API JobMessages() = default;
    AWS_MEDIACONVERT_API JobMessages(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API JobMessages& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * List of messages that are informational only and don't indicate a problem with
     * your job.
     */
    inline const Aws::Vector<Aws::String>& GetInfo() const { return m_info; }
    inline bool InfoHasBeenSet() const { return m_infoHasBeenSet; }
    template<typename InfoT = Aws::Vector<Aws::String>>
    void SetInfo(InfoT&& value) { m_infoHasBeenSet = true; m_info = std::forward<InfoT>(value); }
    template<typename InfoT = Aws::Vector<Aws::String>>
    JobMessages& WithInfo(InfoT&& value) { SetInfo(std::forward<InfoT>(value)); return *this;}
    template<typename InfoT = Aws::String>
    JobMessages& AddInfo(InfoT&& value) { m_infoHasBeenSet = true; m_info.emplace_back(std::forward<InfoT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * List of messages that warn about conditions that might cause your job not to run
     * or to fail.
     */
    inline const Aws::Vector<Aws::String>& GetWarning() const { return m_warning; }
    inline bool WarningHasBeenSet() const { return m_warningHasBeenSet; }
    template<typename WarningT = Aws::Vector<Aws::String>>
    void SetWarning(WarningT&& value) { m_warningHasBeenSet = true; m_warning = std::forward<WarningT>(value); }
    template<typename WarningT = Aws::Vector<Aws::String>>
    JobMessages& WithWarning(WarningT&& value) { SetWarning(std::forward<WarningT>(value)); return *this;}
    template<typename WarningT = Aws::String>
    JobMessages& AddWarning(WarningT&& value) { m_warningHasBeenSet = true; m_warning.emplace_back(std::forward<WarningT>(value)); return *this; }
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
