/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb-session/QLDBSession_EXPORTS.h>

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
namespace QLDBSession
{
namespace Model
{

  /**
   * <p>Contains server-side performance information for a command. Amazon QLDB
   * captures timing information between the times when it receives the request and
   * when it sends the corresponding response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-session-2019-07-11/TimingInformation">AWS
   * API Reference</a></p>
   */
  class TimingInformation
  {
  public:
    AWS_QLDBSESSION_API TimingInformation();
    AWS_QLDBSESSION_API TimingInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDBSESSION_API TimingInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDBSESSION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The amount of time that QLDB spent on processing the command, measured in
     * milliseconds.</p>
     */
    inline long long GetProcessingTimeMilliseconds() const{ return m_processingTimeMilliseconds; }

    /**
     * <p>The amount of time that QLDB spent on processing the command, measured in
     * milliseconds.</p>
     */
    inline bool ProcessingTimeMillisecondsHasBeenSet() const { return m_processingTimeMillisecondsHasBeenSet; }

    /**
     * <p>The amount of time that QLDB spent on processing the command, measured in
     * milliseconds.</p>
     */
    inline void SetProcessingTimeMilliseconds(long long value) { m_processingTimeMillisecondsHasBeenSet = true; m_processingTimeMilliseconds = value; }

    /**
     * <p>The amount of time that QLDB spent on processing the command, measured in
     * milliseconds.</p>
     */
    inline TimingInformation& WithProcessingTimeMilliseconds(long long value) { SetProcessingTimeMilliseconds(value); return *this;}

  private:

    long long m_processingTimeMilliseconds;
    bool m_processingTimeMillisecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
