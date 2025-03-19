/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint/model/Include.h>
#include <aws/pinpoint/model/SegmentGroup.h>
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
   * <p>Specifies the settings that define the relationships between segment groups
   * for a segment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SegmentGroupList">AWS
   * API Reference</a></p>
   */
  class SegmentGroupList
  {
  public:
    AWS_PINPOINT_API SegmentGroupList() = default;
    AWS_PINPOINT_API SegmentGroupList(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API SegmentGroupList& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array that defines the set of segment criteria to evaluate when handling
     * segment groups for the segment.</p>
     */
    inline const Aws::Vector<SegmentGroup>& GetGroups() const { return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    template<typename GroupsT = Aws::Vector<SegmentGroup>>
    void SetGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups = std::forward<GroupsT>(value); }
    template<typename GroupsT = Aws::Vector<SegmentGroup>>
    SegmentGroupList& WithGroups(GroupsT&& value) { SetGroups(std::forward<GroupsT>(value)); return *this;}
    template<typename GroupsT = SegmentGroup>
    SegmentGroupList& AddGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups.emplace_back(std::forward<GroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies how to handle multiple segment groups for the segment. For example,
     * if the segment includes three segment groups, whether the resulting segment
     * includes endpoints that match all, any, or none of the segment groups.</p>
     */
    inline Include GetInclude() const { return m_include; }
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }
    inline void SetInclude(Include value) { m_includeHasBeenSet = true; m_include = value; }
    inline SegmentGroupList& WithInclude(Include value) { SetInclude(value); return *this;}
    ///@}
  private:

    Aws::Vector<SegmentGroup> m_groups;
    bool m_groupsHasBeenSet = false;

    Include m_include{Include::NOT_SET};
    bool m_includeHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
