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
    AWS_OPENSEARCHSERVICE_API SlotNotAvailableException();
    AWS_OPENSEARCHSERVICE_API SlotNotAvailableException(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API SlotNotAvailableException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Alternate time slots during which OpenSearch Service has available capacity
     * to schedule a domain action.</p>
     */
    inline const Aws::Vector<long long>& GetSlotSuggestions() const{ return m_slotSuggestions; }

    /**
     * <p>Alternate time slots during which OpenSearch Service has available capacity
     * to schedule a domain action.</p>
     */
    inline bool SlotSuggestionsHasBeenSet() const { return m_slotSuggestionsHasBeenSet; }

    /**
     * <p>Alternate time slots during which OpenSearch Service has available capacity
     * to schedule a domain action.</p>
     */
    inline void SetSlotSuggestions(const Aws::Vector<long long>& value) { m_slotSuggestionsHasBeenSet = true; m_slotSuggestions = value; }

    /**
     * <p>Alternate time slots during which OpenSearch Service has available capacity
     * to schedule a domain action.</p>
     */
    inline void SetSlotSuggestions(Aws::Vector<long long>&& value) { m_slotSuggestionsHasBeenSet = true; m_slotSuggestions = std::move(value); }

    /**
     * <p>Alternate time slots during which OpenSearch Service has available capacity
     * to schedule a domain action.</p>
     */
    inline SlotNotAvailableException& WithSlotSuggestions(const Aws::Vector<long long>& value) { SetSlotSuggestions(value); return *this;}

    /**
     * <p>Alternate time slots during which OpenSearch Service has available capacity
     * to schedule a domain action.</p>
     */
    inline SlotNotAvailableException& WithSlotSuggestions(Aws::Vector<long long>&& value) { SetSlotSuggestions(std::move(value)); return *this;}

    /**
     * <p>Alternate time slots during which OpenSearch Service has available capacity
     * to schedule a domain action.</p>
     */
    inline SlotNotAvailableException& AddSlotSuggestions(long long value) { m_slotSuggestionsHasBeenSet = true; m_slotSuggestions.push_back(value); return *this; }

  private:

    Aws::Vector<long long> m_slotSuggestions;
    bool m_slotSuggestionsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
