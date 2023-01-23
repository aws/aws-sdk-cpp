/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/synthetics/model/BaseScreenshot.h>
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
   * <p>If this canary performs visual monitoring by comparing screenshots, this
   * structure contains the ID of the canary run that is used as the baseline for
   * screenshots, and the coordinates of any parts of those screenshots that are
   * ignored during visual monitoring comparison.</p> <p>Visual monitoring is
   * supported only on canaries running the <b>syn-puppeteer-node-3.2</b> runtime or
   * later.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/VisualReferenceOutput">AWS
   * API Reference</a></p>
   */
  class VisualReferenceOutput
  {
  public:
    AWS_SYNTHETICS_API VisualReferenceOutput();
    AWS_SYNTHETICS_API VisualReferenceOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API VisualReferenceOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of screenshots that are used as the baseline for comparisons during
     * visual monitoring.</p>
     */
    inline const Aws::Vector<BaseScreenshot>& GetBaseScreenshots() const{ return m_baseScreenshots; }

    /**
     * <p>An array of screenshots that are used as the baseline for comparisons during
     * visual monitoring.</p>
     */
    inline bool BaseScreenshotsHasBeenSet() const { return m_baseScreenshotsHasBeenSet; }

    /**
     * <p>An array of screenshots that are used as the baseline for comparisons during
     * visual monitoring.</p>
     */
    inline void SetBaseScreenshots(const Aws::Vector<BaseScreenshot>& value) { m_baseScreenshotsHasBeenSet = true; m_baseScreenshots = value; }

    /**
     * <p>An array of screenshots that are used as the baseline for comparisons during
     * visual monitoring.</p>
     */
    inline void SetBaseScreenshots(Aws::Vector<BaseScreenshot>&& value) { m_baseScreenshotsHasBeenSet = true; m_baseScreenshots = std::move(value); }

    /**
     * <p>An array of screenshots that are used as the baseline for comparisons during
     * visual monitoring.</p>
     */
    inline VisualReferenceOutput& WithBaseScreenshots(const Aws::Vector<BaseScreenshot>& value) { SetBaseScreenshots(value); return *this;}

    /**
     * <p>An array of screenshots that are used as the baseline for comparisons during
     * visual monitoring.</p>
     */
    inline VisualReferenceOutput& WithBaseScreenshots(Aws::Vector<BaseScreenshot>&& value) { SetBaseScreenshots(std::move(value)); return *this;}

    /**
     * <p>An array of screenshots that are used as the baseline for comparisons during
     * visual monitoring.</p>
     */
    inline VisualReferenceOutput& AddBaseScreenshots(const BaseScreenshot& value) { m_baseScreenshotsHasBeenSet = true; m_baseScreenshots.push_back(value); return *this; }

    /**
     * <p>An array of screenshots that are used as the baseline for comparisons during
     * visual monitoring.</p>
     */
    inline VisualReferenceOutput& AddBaseScreenshots(BaseScreenshot&& value) { m_baseScreenshotsHasBeenSet = true; m_baseScreenshots.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the canary run that produced the baseline screenshots that are used
     * for visual monitoring comparisons by this canary.</p>
     */
    inline const Aws::String& GetBaseCanaryRunId() const{ return m_baseCanaryRunId; }

    /**
     * <p>The ID of the canary run that produced the baseline screenshots that are used
     * for visual monitoring comparisons by this canary.</p>
     */
    inline bool BaseCanaryRunIdHasBeenSet() const { return m_baseCanaryRunIdHasBeenSet; }

    /**
     * <p>The ID of the canary run that produced the baseline screenshots that are used
     * for visual monitoring comparisons by this canary.</p>
     */
    inline void SetBaseCanaryRunId(const Aws::String& value) { m_baseCanaryRunIdHasBeenSet = true; m_baseCanaryRunId = value; }

    /**
     * <p>The ID of the canary run that produced the baseline screenshots that are used
     * for visual monitoring comparisons by this canary.</p>
     */
    inline void SetBaseCanaryRunId(Aws::String&& value) { m_baseCanaryRunIdHasBeenSet = true; m_baseCanaryRunId = std::move(value); }

    /**
     * <p>The ID of the canary run that produced the baseline screenshots that are used
     * for visual monitoring comparisons by this canary.</p>
     */
    inline void SetBaseCanaryRunId(const char* value) { m_baseCanaryRunIdHasBeenSet = true; m_baseCanaryRunId.assign(value); }

    /**
     * <p>The ID of the canary run that produced the baseline screenshots that are used
     * for visual monitoring comparisons by this canary.</p>
     */
    inline VisualReferenceOutput& WithBaseCanaryRunId(const Aws::String& value) { SetBaseCanaryRunId(value); return *this;}

    /**
     * <p>The ID of the canary run that produced the baseline screenshots that are used
     * for visual monitoring comparisons by this canary.</p>
     */
    inline VisualReferenceOutput& WithBaseCanaryRunId(Aws::String&& value) { SetBaseCanaryRunId(std::move(value)); return *this;}

    /**
     * <p>The ID of the canary run that produced the baseline screenshots that are used
     * for visual monitoring comparisons by this canary.</p>
     */
    inline VisualReferenceOutput& WithBaseCanaryRunId(const char* value) { SetBaseCanaryRunId(value); return *this;}

  private:

    Aws::Vector<BaseScreenshot> m_baseScreenshots;
    bool m_baseScreenshotsHasBeenSet = false;

    Aws::String m_baseCanaryRunId;
    bool m_baseCanaryRunIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
