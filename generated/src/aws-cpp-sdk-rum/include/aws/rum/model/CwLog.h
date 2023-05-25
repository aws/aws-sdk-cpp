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
    AWS_CLOUDWATCHRUM_API CwLog();
    AWS_CLOUDWATCHRUM_API CwLog(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API CwLog& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicated whether the app monitor stores copies of the data that RUM collects
     * in CloudWatch Logs.</p>
     */
    inline bool GetCwLogEnabled() const{ return m_cwLogEnabled; }

    /**
     * <p>Indicated whether the app monitor stores copies of the data that RUM collects
     * in CloudWatch Logs.</p>
     */
    inline bool CwLogEnabledHasBeenSet() const { return m_cwLogEnabledHasBeenSet; }

    /**
     * <p>Indicated whether the app monitor stores copies of the data that RUM collects
     * in CloudWatch Logs.</p>
     */
    inline void SetCwLogEnabled(bool value) { m_cwLogEnabledHasBeenSet = true; m_cwLogEnabled = value; }

    /**
     * <p>Indicated whether the app monitor stores copies of the data that RUM collects
     * in CloudWatch Logs.</p>
     */
    inline CwLog& WithCwLogEnabled(bool value) { SetCwLogEnabled(value); return *this;}


    /**
     * <p>The name of the log group where the copies are stored.</p>
     */
    inline const Aws::String& GetCwLogGroup() const{ return m_cwLogGroup; }

    /**
     * <p>The name of the log group where the copies are stored.</p>
     */
    inline bool CwLogGroupHasBeenSet() const { return m_cwLogGroupHasBeenSet; }

    /**
     * <p>The name of the log group where the copies are stored.</p>
     */
    inline void SetCwLogGroup(const Aws::String& value) { m_cwLogGroupHasBeenSet = true; m_cwLogGroup = value; }

    /**
     * <p>The name of the log group where the copies are stored.</p>
     */
    inline void SetCwLogGroup(Aws::String&& value) { m_cwLogGroupHasBeenSet = true; m_cwLogGroup = std::move(value); }

    /**
     * <p>The name of the log group where the copies are stored.</p>
     */
    inline void SetCwLogGroup(const char* value) { m_cwLogGroupHasBeenSet = true; m_cwLogGroup.assign(value); }

    /**
     * <p>The name of the log group where the copies are stored.</p>
     */
    inline CwLog& WithCwLogGroup(const Aws::String& value) { SetCwLogGroup(value); return *this;}

    /**
     * <p>The name of the log group where the copies are stored.</p>
     */
    inline CwLog& WithCwLogGroup(Aws::String&& value) { SetCwLogGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the log group where the copies are stored.</p>
     */
    inline CwLog& WithCwLogGroup(const char* value) { SetCwLogGroup(value); return *this;}

  private:

    bool m_cwLogEnabled;
    bool m_cwLogEnabledHasBeenSet = false;

    Aws::String m_cwLogGroup;
    bool m_cwLogGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
