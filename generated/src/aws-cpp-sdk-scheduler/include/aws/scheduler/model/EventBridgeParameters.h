/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
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
namespace Scheduler
{
namespace Model
{

  /**
   * <p>The templated target type for the EventBridge <a
   * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_PutEvents.html">
   * <code>PutEvents</code> </a> API operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/EventBridgeParameters">AWS
   * API Reference</a></p>
   */
  class EventBridgeParameters
  {
  public:
    AWS_SCHEDULER_API EventBridgeParameters() = default;
    AWS_SCHEDULER_API EventBridgeParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API EventBridgeParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A free-form string, with a maximum of 128 characters, used to decide what
     * fields to expect in the event detail.</p>
     */
    inline const Aws::String& GetDetailType() const { return m_detailType; }
    inline bool DetailTypeHasBeenSet() const { return m_detailTypeHasBeenSet; }
    template<typename DetailTypeT = Aws::String>
    void SetDetailType(DetailTypeT&& value) { m_detailTypeHasBeenSet = true; m_detailType = std::forward<DetailTypeT>(value); }
    template<typename DetailTypeT = Aws::String>
    EventBridgeParameters& WithDetailType(DetailTypeT&& value) { SetDetailType(std::forward<DetailTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the event.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    EventBridgeParameters& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_detailType;
    bool m_detailTypeHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws
