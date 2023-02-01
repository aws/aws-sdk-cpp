/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace Synthetics
{
namespace Model
{

  /**
   * <p>This structure contains information about when the canary was created and
   * modified.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/CanaryTimeline">AWS
   * API Reference</a></p>
   */
  class CanaryTimeline
  {
  public:
    AWS_SYNTHETICS_API CanaryTimeline();
    AWS_SYNTHETICS_API CanaryTimeline(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API CanaryTimeline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date and time the canary was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * <p>The date and time the canary was created.</p>
     */
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }

    /**
     * <p>The date and time the canary was created.</p>
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>The date and time the canary was created.</p>
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }

    /**
     * <p>The date and time the canary was created.</p>
     */
    inline CanaryTimeline& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * <p>The date and time the canary was created.</p>
     */
    inline CanaryTimeline& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}


    /**
     * <p>The date and time the canary was most recently modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }

    /**
     * <p>The date and time the canary was most recently modified.</p>
     */
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }

    /**
     * <p>The date and time the canary was most recently modified.</p>
     */
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }

    /**
     * <p>The date and time the canary was most recently modified.</p>
     */
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::move(value); }

    /**
     * <p>The date and time the canary was most recently modified.</p>
     */
    inline CanaryTimeline& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}

    /**
     * <p>The date and time the canary was most recently modified.</p>
     */
    inline CanaryTimeline& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}


    /**
     * <p>The date and time that the canary's most recent run started.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStarted() const{ return m_lastStarted; }

    /**
     * <p>The date and time that the canary's most recent run started.</p>
     */
    inline bool LastStartedHasBeenSet() const { return m_lastStartedHasBeenSet; }

    /**
     * <p>The date and time that the canary's most recent run started.</p>
     */
    inline void SetLastStarted(const Aws::Utils::DateTime& value) { m_lastStartedHasBeenSet = true; m_lastStarted = value; }

    /**
     * <p>The date and time that the canary's most recent run started.</p>
     */
    inline void SetLastStarted(Aws::Utils::DateTime&& value) { m_lastStartedHasBeenSet = true; m_lastStarted = std::move(value); }

    /**
     * <p>The date and time that the canary's most recent run started.</p>
     */
    inline CanaryTimeline& WithLastStarted(const Aws::Utils::DateTime& value) { SetLastStarted(value); return *this;}

    /**
     * <p>The date and time that the canary's most recent run started.</p>
     */
    inline CanaryTimeline& WithLastStarted(Aws::Utils::DateTime&& value) { SetLastStarted(std::move(value)); return *this;}


    /**
     * <p>The date and time that the canary's most recent run ended.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStopped() const{ return m_lastStopped; }

    /**
     * <p>The date and time that the canary's most recent run ended.</p>
     */
    inline bool LastStoppedHasBeenSet() const { return m_lastStoppedHasBeenSet; }

    /**
     * <p>The date and time that the canary's most recent run ended.</p>
     */
    inline void SetLastStopped(const Aws::Utils::DateTime& value) { m_lastStoppedHasBeenSet = true; m_lastStopped = value; }

    /**
     * <p>The date and time that the canary's most recent run ended.</p>
     */
    inline void SetLastStopped(Aws::Utils::DateTime&& value) { m_lastStoppedHasBeenSet = true; m_lastStopped = std::move(value); }

    /**
     * <p>The date and time that the canary's most recent run ended.</p>
     */
    inline CanaryTimeline& WithLastStopped(const Aws::Utils::DateTime& value) { SetLastStopped(value); return *this;}

    /**
     * <p>The date and time that the canary's most recent run ended.</p>
     */
    inline CanaryTimeline& WithLastStopped(Aws::Utils::DateTime&& value) { SetLastStopped(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified;
    bool m_lastModifiedHasBeenSet = false;

    Aws::Utils::DateTime m_lastStarted;
    bool m_lastStartedHasBeenSet = false;

    Aws::Utils::DateTime m_lastStopped;
    bool m_lastStoppedHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
