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
    AWS_SYNTHETICS_API CanaryTimeline() = default;
    AWS_SYNTHETICS_API CanaryTimeline(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API CanaryTimeline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date and time the canary was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const { return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    template<typename CreatedT = Aws::Utils::DateTime>
    void SetCreated(CreatedT&& value) { m_createdHasBeenSet = true; m_created = std::forward<CreatedT>(value); }
    template<typename CreatedT = Aws::Utils::DateTime>
    CanaryTimeline& WithCreated(CreatedT&& value) { SetCreated(std::forward<CreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the canary was most recently modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const { return m_lastModified; }
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
    template<typename LastModifiedT = Aws::Utils::DateTime>
    void SetLastModified(LastModifiedT&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::forward<LastModifiedT>(value); }
    template<typename LastModifiedT = Aws::Utils::DateTime>
    CanaryTimeline& WithLastModified(LastModifiedT&& value) { SetLastModified(std::forward<LastModifiedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the canary's most recent run started.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStarted() const { return m_lastStarted; }
    inline bool LastStartedHasBeenSet() const { return m_lastStartedHasBeenSet; }
    template<typename LastStartedT = Aws::Utils::DateTime>
    void SetLastStarted(LastStartedT&& value) { m_lastStartedHasBeenSet = true; m_lastStarted = std::forward<LastStartedT>(value); }
    template<typename LastStartedT = Aws::Utils::DateTime>
    CanaryTimeline& WithLastStarted(LastStartedT&& value) { SetLastStarted(std::forward<LastStartedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the canary's most recent run ended.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStopped() const { return m_lastStopped; }
    inline bool LastStoppedHasBeenSet() const { return m_lastStoppedHasBeenSet; }
    template<typename LastStoppedT = Aws::Utils::DateTime>
    void SetLastStopped(LastStoppedT&& value) { m_lastStoppedHasBeenSet = true; m_lastStopped = std::forward<LastStoppedT>(value); }
    template<typename LastStoppedT = Aws::Utils::DateTime>
    CanaryTimeline& WithLastStopped(LastStoppedT&& value) { SetLastStopped(std::forward<LastStoppedT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_created{};
    bool m_createdHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified{};
    bool m_lastModifiedHasBeenSet = false;

    Aws::Utils::DateTime m_lastStarted{};
    bool m_lastStartedHasBeenSet = false;

    Aws::Utils::DateTime m_lastStopped{};
    bool m_lastStoppedHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
