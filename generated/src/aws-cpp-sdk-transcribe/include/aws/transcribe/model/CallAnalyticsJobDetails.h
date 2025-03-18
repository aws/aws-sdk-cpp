/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/CallAnalyticsSkippedFeature.h>
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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>Contains details about a call analytics job, including information about
   * skipped analytics features.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CallAnalyticsJobDetails">AWS
   * API Reference</a></p>
   */
  class CallAnalyticsJobDetails
  {
  public:
    AWS_TRANSCRIBESERVICE_API CallAnalyticsJobDetails() = default;
    AWS_TRANSCRIBESERVICE_API CallAnalyticsJobDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API CallAnalyticsJobDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information about any skipped analytics features during the analysis
     * of a call analytics job.</p> <p>This array lists all the analytics features that
     * were skipped, along with their corresponding reason code and message.</p>
     */
    inline const Aws::Vector<CallAnalyticsSkippedFeature>& GetSkipped() const { return m_skipped; }
    inline bool SkippedHasBeenSet() const { return m_skippedHasBeenSet; }
    template<typename SkippedT = Aws::Vector<CallAnalyticsSkippedFeature>>
    void SetSkipped(SkippedT&& value) { m_skippedHasBeenSet = true; m_skipped = std::forward<SkippedT>(value); }
    template<typename SkippedT = Aws::Vector<CallAnalyticsSkippedFeature>>
    CallAnalyticsJobDetails& WithSkipped(SkippedT&& value) { SetSkipped(std::forward<SkippedT>(value)); return *this;}
    template<typename SkippedT = CallAnalyticsSkippedFeature>
    CallAnalyticsJobDetails& AddSkipped(SkippedT&& value) { m_skippedHasBeenSet = true; m_skipped.emplace_back(std::forward<SkippedT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CallAnalyticsSkippedFeature> m_skipped;
    bool m_skippedHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
