/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>Filter events using an event pattern. For more information, see <a
   * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-and-event-patterns.html">Events
   * and Event Patterns</a> in the <i>Amazon EventBridge User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/Filter">AWS API
   * Reference</a></p>
   */
  class Filter
  {
  public:
    AWS_PIPES_API Filter();
    AWS_PIPES_API Filter(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The event pattern.</p>
     */
    inline const Aws::String& GetPattern() const{ return m_pattern; }

    /**
     * <p>The event pattern.</p>
     */
    inline bool PatternHasBeenSet() const { return m_patternHasBeenSet; }

    /**
     * <p>The event pattern.</p>
     */
    inline void SetPattern(const Aws::String& value) { m_patternHasBeenSet = true; m_pattern = value; }

    /**
     * <p>The event pattern.</p>
     */
    inline void SetPattern(Aws::String&& value) { m_patternHasBeenSet = true; m_pattern = std::move(value); }

    /**
     * <p>The event pattern.</p>
     */
    inline void SetPattern(const char* value) { m_patternHasBeenSet = true; m_pattern.assign(value); }

    /**
     * <p>The event pattern.</p>
     */
    inline Filter& WithPattern(const Aws::String& value) { SetPattern(value); return *this;}

    /**
     * <p>The event pattern.</p>
     */
    inline Filter& WithPattern(Aws::String&& value) { SetPattern(std::move(value)); return *this;}

    /**
     * <p>The event pattern.</p>
     */
    inline Filter& WithPattern(const char* value) { SetPattern(value); return *this;}

  private:

    Aws::String m_pattern;
    bool m_patternHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
