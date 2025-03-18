/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>An exception for attempting to schedule a domain action during an unavailable
   * time slot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/SlotNotAvailableException">AWS
   * API Reference</a></p>
   */
  class SlotNotAvailableException
  {
  public:
    AWS_OPENSEARCHSERVICE_API SlotNotAvailableException() = default;
    AWS_OPENSEARCHSERVICE_API SlotNotAvailableException(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API SlotNotAvailableException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Alternate time slots during which OpenSearch Service has available capacity
     * to schedule a domain action.</p>
     */
    inline const Aws::Vector<long long>& GetSlotSuggestions() const { return m_slotSuggestions; }
    inline bool SlotSuggestionsHasBeenSet() const { return m_slotSuggestionsHasBeenSet; }
    template<typename SlotSuggestionsT = Aws::Vector<long long>>
    void SetSlotSuggestions(SlotSuggestionsT&& value) { m_slotSuggestionsHasBeenSet = true; m_slotSuggestions = std::forward<SlotSuggestionsT>(value); }
    template<typename SlotSuggestionsT = Aws::Vector<long long>>
    SlotNotAvailableException& WithSlotSuggestions(SlotSuggestionsT&& value) { SetSlotSuggestions(std::forward<SlotSuggestionsT>(value)); return *this;}
    inline SlotNotAvailableException& AddSlotSuggestions(long long value) { m_slotSuggestionsHasBeenSet = true; m_slotSuggestions.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<long long> m_slotSuggestions;
    bool m_slotSuggestionsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
