/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace WorkMail
{
namespace Model
{

  /**
   * <p> Filtering options for <i>ListGroupsForEntity</i> operation. This is only
   * used as input to Operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListGroupsForEntityFilters">AWS
   * API Reference</a></p>
   */
  class ListGroupsForEntityFilters
  {
  public:
    AWS_WORKMAIL_API ListGroupsForEntityFilters() = default;
    AWS_WORKMAIL_API ListGroupsForEntityFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API ListGroupsForEntityFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filters only group names that start with the provided name prefix.</p>
     */
    inline const Aws::String& GetGroupNamePrefix() const { return m_groupNamePrefix; }
    inline bool GroupNamePrefixHasBeenSet() const { return m_groupNamePrefixHasBeenSet; }
    template<typename GroupNamePrefixT = Aws::String>
    void SetGroupNamePrefix(GroupNamePrefixT&& value) { m_groupNamePrefixHasBeenSet = true; m_groupNamePrefix = std::forward<GroupNamePrefixT>(value); }
    template<typename GroupNamePrefixT = Aws::String>
    ListGroupsForEntityFilters& WithGroupNamePrefix(GroupNamePrefixT&& value) { SetGroupNamePrefix(std::forward<GroupNamePrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_groupNamePrefix;
    bool m_groupNamePrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
