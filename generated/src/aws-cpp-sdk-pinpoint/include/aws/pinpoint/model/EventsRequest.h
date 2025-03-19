/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/EventsBatch.h>
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
   * <p>Specifies a batch of events to process.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EventsRequest">AWS
   * API Reference</a></p>
   */
  class EventsRequest
  {
  public:
    AWS_PINPOINT_API EventsRequest() = default;
    AWS_PINPOINT_API EventsRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API EventsRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The batch of events to process. For each item in a batch, the endpoint ID
     * acts as a key that has an EventsBatch object as its value.</p>
     */
    inline const Aws::Map<Aws::String, EventsBatch>& GetBatchItem() const { return m_batchItem; }
    inline bool BatchItemHasBeenSet() const { return m_batchItemHasBeenSet; }
    template<typename BatchItemT = Aws::Map<Aws::String, EventsBatch>>
    void SetBatchItem(BatchItemT&& value) { m_batchItemHasBeenSet = true; m_batchItem = std::forward<BatchItemT>(value); }
    template<typename BatchItemT = Aws::Map<Aws::String, EventsBatch>>
    EventsRequest& WithBatchItem(BatchItemT&& value) { SetBatchItem(std::forward<BatchItemT>(value)); return *this;}
    template<typename BatchItemKeyT = Aws::String, typename BatchItemValueT = EventsBatch>
    EventsRequest& AddBatchItem(BatchItemKeyT&& key, BatchItemValueT&& value) {
      m_batchItemHasBeenSet = true; m_batchItem.emplace(std::forward<BatchItemKeyT>(key), std::forward<BatchItemValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, EventsBatch> m_batchItem;
    bool m_batchItemHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
