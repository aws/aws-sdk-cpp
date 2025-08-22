/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/synthetics/model/BrowserType.h>
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
    AWS_SYNTHETICS_API VisualReferenceOutput() = default;
    AWS_SYNTHETICS_API VisualReferenceOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API VisualReferenceOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of screenshots that are used as the baseline for comparisons during
     * visual monitoring.</p>
     */
    inline const Aws::Vector<BaseScreenshot>& GetBaseScreenshots() const { return m_baseScreenshots; }
    inline bool BaseScreenshotsHasBeenSet() const { return m_baseScreenshotsHasBeenSet; }
    template<typename BaseScreenshotsT = Aws::Vector<BaseScreenshot>>
    void SetBaseScreenshots(BaseScreenshotsT&& value) { m_baseScreenshotsHasBeenSet = true; m_baseScreenshots = std::forward<BaseScreenshotsT>(value); }
    template<typename BaseScreenshotsT = Aws::Vector<BaseScreenshot>>
    VisualReferenceOutput& WithBaseScreenshots(BaseScreenshotsT&& value) { SetBaseScreenshots(std::forward<BaseScreenshotsT>(value)); return *this;}
    template<typename BaseScreenshotsT = BaseScreenshot>
    VisualReferenceOutput& AddBaseScreenshots(BaseScreenshotsT&& value) { m_baseScreenshotsHasBeenSet = true; m_baseScreenshots.emplace_back(std::forward<BaseScreenshotsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the canary run that produced the baseline screenshots that are used
     * for visual monitoring comparisons by this canary.</p>
     */
    inline const Aws::String& GetBaseCanaryRunId() const { return m_baseCanaryRunId; }
    inline bool BaseCanaryRunIdHasBeenSet() const { return m_baseCanaryRunIdHasBeenSet; }
    template<typename BaseCanaryRunIdT = Aws::String>
    void SetBaseCanaryRunId(BaseCanaryRunIdT&& value) { m_baseCanaryRunIdHasBeenSet = true; m_baseCanaryRunId = std::forward<BaseCanaryRunIdT>(value); }
    template<typename BaseCanaryRunIdT = Aws::String>
    VisualReferenceOutput& WithBaseCanaryRunId(BaseCanaryRunIdT&& value) { SetBaseCanaryRunId(std::forward<BaseCanaryRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The browser type associated with this visual reference.</p>
     */
    inline BrowserType GetBrowserType() const { return m_browserType; }
    inline bool BrowserTypeHasBeenSet() const { return m_browserTypeHasBeenSet; }
    inline void SetBrowserType(BrowserType value) { m_browserTypeHasBeenSet = true; m_browserType = value; }
    inline VisualReferenceOutput& WithBrowserType(BrowserType value) { SetBrowserType(value); return *this;}
    ///@}
  private:

    Aws::Vector<BaseScreenshot> m_baseScreenshots;
    bool m_baseScreenshotsHasBeenSet = false;

    Aws::String m_baseCanaryRunId;
    bool m_baseCanaryRunIdHasBeenSet = false;

    BrowserType m_browserType{BrowserType::NOT_SET};
    bool m_browserTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
