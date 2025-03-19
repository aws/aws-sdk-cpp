/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
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
namespace CloudWatchRUM
{
namespace Model
{

  /**
   * <p>A structure that contains the information about whether the app monitor
   * stores copies of the data that RUM collects in CloudWatch Logs. If it does, this
   * structure also contains the name of the log group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/CwLog">AWS API
   * Reference</a></p>
   */
  class CwLog
  {
  public:
    AWS_CLOUDWATCHRUM_API CwLog() = default;
    AWS_CLOUDWATCHRUM_API CwLog(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API CwLog& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicated whether the app monitor stores copies of the data that RUM collects
     * in CloudWatch Logs.</p>
     */
    inline bool GetCwLogEnabled() const { return m_cwLogEnabled; }
    inline bool CwLogEnabledHasBeenSet() const { return m_cwLogEnabledHasBeenSet; }
    inline void SetCwLogEnabled(bool value) { m_cwLogEnabledHasBeenSet = true; m_cwLogEnabled = value; }
    inline CwLog& WithCwLogEnabled(bool value) { SetCwLogEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the log group where the copies are stored.</p>
     */
    inline const Aws::String& GetCwLogGroup() const { return m_cwLogGroup; }
    inline bool CwLogGroupHasBeenSet() const { return m_cwLogGroupHasBeenSet; }
    template<typename CwLogGroupT = Aws::String>
    void SetCwLogGroup(CwLogGroupT&& value) { m_cwLogGroupHasBeenSet = true; m_cwLogGroup = std::forward<CwLogGroupT>(value); }
    template<typename CwLogGroupT = Aws::String>
    CwLog& WithCwLogGroup(CwLogGroupT&& value) { SetCwLogGroup(std::forward<CwLogGroupT>(value)); return *this;}
    ///@}
  private:

    bool m_cwLogEnabled{false};
    bool m_cwLogEnabledHasBeenSet = false;

    Aws::String m_cwLogGroup;
    bool m_cwLogGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
