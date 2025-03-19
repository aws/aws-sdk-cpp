/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Source server post migration custom action filters.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/SourceServerActionsRequestFilters">AWS
   * API Reference</a></p>
   */
  class SourceServerActionsRequestFilters
  {
  public:
    AWS_MGN_API SourceServerActionsRequestFilters() = default;
    AWS_MGN_API SourceServerActionsRequestFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API SourceServerActionsRequestFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Action IDs to filter source server post migration custom actions by.</p>
     */
    inline const Aws::Vector<Aws::String>& GetActionIDs() const { return m_actionIDs; }
    inline bool ActionIDsHasBeenSet() const { return m_actionIDsHasBeenSet; }
    template<typename ActionIDsT = Aws::Vector<Aws::String>>
    void SetActionIDs(ActionIDsT&& value) { m_actionIDsHasBeenSet = true; m_actionIDs = std::forward<ActionIDsT>(value); }
    template<typename ActionIDsT = Aws::Vector<Aws::String>>
    SourceServerActionsRequestFilters& WithActionIDs(ActionIDsT&& value) { SetActionIDs(std::forward<ActionIDsT>(value)); return *this;}
    template<typename ActionIDsT = Aws::String>
    SourceServerActionsRequestFilters& AddActionIDs(ActionIDsT&& value) { m_actionIDsHasBeenSet = true; m_actionIDs.emplace_back(std::forward<ActionIDsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_actionIDs;
    bool m_actionIDsHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
