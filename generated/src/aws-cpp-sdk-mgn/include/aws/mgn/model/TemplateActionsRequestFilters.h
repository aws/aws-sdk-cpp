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
   * <p>Template post migration custom action filters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/TemplateActionsRequestFilters">AWS
   * API Reference</a></p>
   */
  class TemplateActionsRequestFilters
  {
  public:
    AWS_MGN_API TemplateActionsRequestFilters() = default;
    AWS_MGN_API TemplateActionsRequestFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API TemplateActionsRequestFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Action IDs to filter template post migration custom actions by.</p>
     */
    inline const Aws::Vector<Aws::String>& GetActionIDs() const { return m_actionIDs; }
    inline bool ActionIDsHasBeenSet() const { return m_actionIDsHasBeenSet; }
    template<typename ActionIDsT = Aws::Vector<Aws::String>>
    void SetActionIDs(ActionIDsT&& value) { m_actionIDsHasBeenSet = true; m_actionIDs = std::forward<ActionIDsT>(value); }
    template<typename ActionIDsT = Aws::Vector<Aws::String>>
    TemplateActionsRequestFilters& WithActionIDs(ActionIDsT&& value) { SetActionIDs(std::forward<ActionIDsT>(value)); return *this;}
    template<typename ActionIDsT = Aws::String>
    TemplateActionsRequestFilters& AddActionIDs(ActionIDsT&& value) { m_actionIDsHasBeenSet = true; m_actionIDs.emplace_back(std::forward<ActionIDsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_actionIDs;
    bool m_actionIDsHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
