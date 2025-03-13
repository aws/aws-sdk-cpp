/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/rum/model/CustomEventsStatus.h>
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
   * <p>A structure that contains information about custom events for this app
   * monitor.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/CustomEvents">AWS
   * API Reference</a></p>
   */
  class CustomEvents
  {
  public:
    AWS_CLOUDWATCHRUM_API CustomEvents() = default;
    AWS_CLOUDWATCHRUM_API CustomEvents(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API CustomEvents& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether this app monitor allows the web client to define and send
     * custom events. The default is for custom events to be <code>DISABLED</code>.</p>
     */
    inline CustomEventsStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CustomEventsStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CustomEvents& WithStatus(CustomEventsStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    CustomEventsStatus m_status{CustomEventsStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
