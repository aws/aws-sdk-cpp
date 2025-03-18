/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribestreaming/model/PointsOfInterest.h>
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
namespace TranscribeStreamingService
{
namespace Model
{

  /**
   * <p>Provides information on any <code>TranscriptFilterType</code> categories that
   * matched your transcription output. Matches are identified for each segment upon
   * completion of that segment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/CategoryEvent">AWS
   * API Reference</a></p>
   */
  class CategoryEvent
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API CategoryEvent() = default;
    AWS_TRANSCRIBESTREAMINGSERVICE_API CategoryEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API CategoryEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Lists the categories that were matched in your audio segment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchedCategories() const { return m_matchedCategories; }
    inline bool MatchedCategoriesHasBeenSet() const { return m_matchedCategoriesHasBeenSet; }
    template<typename MatchedCategoriesT = Aws::Vector<Aws::String>>
    void SetMatchedCategories(MatchedCategoriesT&& value) { m_matchedCategoriesHasBeenSet = true; m_matchedCategories = std::forward<MatchedCategoriesT>(value); }
    template<typename MatchedCategoriesT = Aws::Vector<Aws::String>>
    CategoryEvent& WithMatchedCategories(MatchedCategoriesT&& value) { SetMatchedCategories(std::forward<MatchedCategoriesT>(value)); return *this;}
    template<typename MatchedCategoriesT = Aws::String>
    CategoryEvent& AddMatchedCategories(MatchedCategoriesT&& value) { m_matchedCategoriesHasBeenSet = true; m_matchedCategories.emplace_back(std::forward<MatchedCategoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains information about the matched categories, including category names
     * and timestamps.</p>
     */
    inline const Aws::Map<Aws::String, PointsOfInterest>& GetMatchedDetails() const { return m_matchedDetails; }
    inline bool MatchedDetailsHasBeenSet() const { return m_matchedDetailsHasBeenSet; }
    template<typename MatchedDetailsT = Aws::Map<Aws::String, PointsOfInterest>>
    void SetMatchedDetails(MatchedDetailsT&& value) { m_matchedDetailsHasBeenSet = true; m_matchedDetails = std::forward<MatchedDetailsT>(value); }
    template<typename MatchedDetailsT = Aws::Map<Aws::String, PointsOfInterest>>
    CategoryEvent& WithMatchedDetails(MatchedDetailsT&& value) { SetMatchedDetails(std::forward<MatchedDetailsT>(value)); return *this;}
    template<typename MatchedDetailsKeyT = Aws::String, typename MatchedDetailsValueT = PointsOfInterest>
    CategoryEvent& AddMatchedDetails(MatchedDetailsKeyT&& key, MatchedDetailsValueT&& value) {
      m_matchedDetailsHasBeenSet = true; m_matchedDetails.emplace(std::forward<MatchedDetailsKeyT>(key), std::forward<MatchedDetailsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Vector<Aws::String> m_matchedCategories;
    bool m_matchedCategoriesHasBeenSet = false;

    Aws::Map<Aws::String, PointsOfInterest> m_matchedDetails;
    bool m_matchedDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
