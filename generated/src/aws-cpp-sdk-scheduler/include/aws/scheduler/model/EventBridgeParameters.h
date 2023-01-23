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
    AWS_SCHEDULER_API EventBridgeParameters();
    AWS_SCHEDULER_API EventBridgeParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API EventBridgeParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A free-form string, with a maximum of 128 characters, used to decide what
     * fields to expect in the event detail.</p>
     */
    inline const Aws::String& GetDetailType() const{ return m_detailType; }

    /**
     * <p>A free-form string, with a maximum of 128 characters, used to decide what
     * fields to expect in the event detail.</p>
     */
    inline bool DetailTypeHasBeenSet() const { return m_detailTypeHasBeenSet; }

    /**
     * <p>A free-form string, with a maximum of 128 characters, used to decide what
     * fields to expect in the event detail.</p>
     */
    inline void SetDetailType(const Aws::String& value) { m_detailTypeHasBeenSet = true; m_detailType = value; }

    /**
     * <p>A free-form string, with a maximum of 128 characters, used to decide what
     * fields to expect in the event detail.</p>
     */
    inline void SetDetailType(Aws::String&& value) { m_detailTypeHasBeenSet = true; m_detailType = std::move(value); }

    /**
     * <p>A free-form string, with a maximum of 128 characters, used to decide what
     * fields to expect in the event detail.</p>
     */
    inline void SetDetailType(const char* value) { m_detailTypeHasBeenSet = true; m_detailType.assign(value); }

    /**
     * <p>A free-form string, with a maximum of 128 characters, used to decide what
     * fields to expect in the event detail.</p>
     */
    inline EventBridgeParameters& WithDetailType(const Aws::String& value) { SetDetailType(value); return *this;}

    /**
     * <p>A free-form string, with a maximum of 128 characters, used to decide what
     * fields to expect in the event detail.</p>
     */
    inline EventBridgeParameters& WithDetailType(Aws::String&& value) { SetDetailType(std::move(value)); return *this;}

    /**
     * <p>A free-form string, with a maximum of 128 characters, used to decide what
     * fields to expect in the event detail.</p>
     */
    inline EventBridgeParameters& WithDetailType(const char* value) { SetDetailType(value); return *this;}


    /**
     * <p>The source of the event.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The source of the event.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The source of the event.</p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The source of the event.</p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The source of the event.</p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>The source of the event.</p>
     */
    inline EventBridgeParameters& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The source of the event.</p>
     */
    inline EventBridgeParameters& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The source of the event.</p>
     */
    inline EventBridgeParameters& WithSource(const char* value) { SetSource(value); return *this;}

  private:

    Aws::String m_detailType;
    bool m_detailTypeHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws
