/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/ItemResponse.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides information about endpoints and the events that they're associated
   * with.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EventsResponse">AWS
   * API Reference</a></p>
   */
  class EventsResponse
  {
  public:
    AWS_PINPOINT_API EventsResponse() = default;
    AWS_PINPOINT_API EventsResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API EventsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A map that contains a multipart response for each endpoint. For each item in
     * this object, the endpoint ID is the key and the item response is the value. If
     * no item response exists, the value can also be one of the following: 202, the
     * request was processed successfully; or 400, the payload wasn't valid or required
     * fields were missing.</p>
     */
    inline const Aws::Map<Aws::String, ItemResponse>& GetResults() const { return m_results; }
    inline bool ResultsHasBeenSet() const { return m_resultsHasBeenSet; }
    template<typename ResultsT = Aws::Map<Aws::String, ItemResponse>>
    void SetResults(ResultsT&& value) { m_resultsHasBeenSet = true; m_results = std::forward<ResultsT>(value); }
    template<typename ResultsT = Aws::Map<Aws::String, ItemResponse>>
    EventsResponse& WithResults(ResultsT&& value) { SetResults(std::forward<ResultsT>(value)); return *this;}
    template<typename ResultsKeyT = Aws::String, typename ResultsValueT = ItemResponse>
    EventsResponse& AddResults(ResultsKeyT&& key, ResultsValueT&& value) {
      m_resultsHasBeenSet = true; m_results.emplace(std::forward<ResultsKeyT>(key), std::forward<ResultsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, ItemResponse> m_results;
    bool m_resultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
