/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
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
namespace Snowball
{
namespace Model
{

  /**
   * <p>The container for the
   * <a>EventTriggerDefinition$EventResourceARN</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/EventTriggerDefinition">AWS
   * API Reference</a></p>
   */
  class EventTriggerDefinition
  {
  public:
    AWS_SNOWBALL_API EventTriggerDefinition() = default;
    AWS_SNOWBALL_API EventTriggerDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API EventTriggerDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for any local Amazon S3 resource that is an
     * Lambda function's event trigger associated with this job.</p>
     */
    inline const Aws::String& GetEventResourceARN() const { return m_eventResourceARN; }
    inline bool EventResourceARNHasBeenSet() const { return m_eventResourceARNHasBeenSet; }
    template<typename EventResourceARNT = Aws::String>
    void SetEventResourceARN(EventResourceARNT&& value) { m_eventResourceARNHasBeenSet = true; m_eventResourceARN = std::forward<EventResourceARNT>(value); }
    template<typename EventResourceARNT = Aws::String>
    EventTriggerDefinition& WithEventResourceARN(EventResourceARNT&& value) { SetEventResourceARN(std::forward<EventResourceARNT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventResourceARN;
    bool m_eventResourceARNHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
