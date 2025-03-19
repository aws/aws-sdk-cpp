/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/ActivityResponse.h>
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
   * <p>Provides information about the activities that were performed by a
   * campaign.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ActivitiesResponse">AWS
   * API Reference</a></p>
   */
  class ActivitiesResponse
  {
  public:
    AWS_PINPOINT_API ActivitiesResponse() = default;
    AWS_PINPOINT_API ActivitiesResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API ActivitiesResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of responses, one for each activity that was performed by the
     * campaign.</p>
     */
    inline const Aws::Vector<ActivityResponse>& GetItem() const { return m_item; }
    inline bool ItemHasBeenSet() const { return m_itemHasBeenSet; }
    template<typename ItemT = Aws::Vector<ActivityResponse>>
    void SetItem(ItemT&& value) { m_itemHasBeenSet = true; m_item = std::forward<ItemT>(value); }
    template<typename ItemT = Aws::Vector<ActivityResponse>>
    ActivitiesResponse& WithItem(ItemT&& value) { SetItem(std::forward<ItemT>(value)); return *this;}
    template<typename ItemT = ActivityResponse>
    ActivitiesResponse& AddItem(ItemT&& value) { m_itemHasBeenSet = true; m_item.emplace_back(std::forward<ItemT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ActivitiesResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ActivityResponse> m_item;
    bool m_itemHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
