/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/SubscriptionStatus.h>
#include <aws/sesv2/model/TopicFilter.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>A filter that can be applied to a list of contacts.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListContactsFilter">AWS
   * API Reference</a></p>
   */
  class ListContactsFilter
  {
  public:
    AWS_SESV2_API ListContactsFilter() = default;
    AWS_SESV2_API ListContactsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API ListContactsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status by which you are filtering: <code>OPT_IN</code> or
     * <code>OPT_OUT</code>.</p>
     */
    inline SubscriptionStatus GetFilteredStatus() const { return m_filteredStatus; }
    inline bool FilteredStatusHasBeenSet() const { return m_filteredStatusHasBeenSet; }
    inline void SetFilteredStatus(SubscriptionStatus value) { m_filteredStatusHasBeenSet = true; m_filteredStatus = value; }
    inline ListContactsFilter& WithFilteredStatus(SubscriptionStatus value) { SetFilteredStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used for filtering by a specific topic preference.</p>
     */
    inline const TopicFilter& GetTopicFilter() const { return m_topicFilter; }
    inline bool TopicFilterHasBeenSet() const { return m_topicFilterHasBeenSet; }
    template<typename TopicFilterT = TopicFilter>
    void SetTopicFilter(TopicFilterT&& value) { m_topicFilterHasBeenSet = true; m_topicFilter = std::forward<TopicFilterT>(value); }
    template<typename TopicFilterT = TopicFilter>
    ListContactsFilter& WithTopicFilter(TopicFilterT&& value) { SetTopicFilter(std::forward<TopicFilterT>(value)); return *this;}
    ///@}
  private:

    SubscriptionStatus m_filteredStatus{SubscriptionStatus::NOT_SET};
    bool m_filteredStatusHasBeenSet = false;

    TopicFilter m_topicFilter;
    bool m_topicFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
