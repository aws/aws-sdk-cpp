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
    AWS_MGN_API TemplateActionsRequestFilters();
    AWS_MGN_API TemplateActionsRequestFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API TemplateActionsRequestFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Action IDs to filter template post migration custom actions by.</p>
     */
    inline const Aws::Vector<Aws::String>& GetActionIDs() const{ return m_actionIDs; }

    /**
     * <p>Action IDs to filter template post migration custom actions by.</p>
     */
    inline bool ActionIDsHasBeenSet() const { return m_actionIDsHasBeenSet; }

    /**
     * <p>Action IDs to filter template post migration custom actions by.</p>
     */
    inline void SetActionIDs(const Aws::Vector<Aws::String>& value) { m_actionIDsHasBeenSet = true; m_actionIDs = value; }

    /**
     * <p>Action IDs to filter template post migration custom actions by.</p>
     */
    inline void SetActionIDs(Aws::Vector<Aws::String>&& value) { m_actionIDsHasBeenSet = true; m_actionIDs = std::move(value); }

    /**
     * <p>Action IDs to filter template post migration custom actions by.</p>
     */
    inline TemplateActionsRequestFilters& WithActionIDs(const Aws::Vector<Aws::String>& value) { SetActionIDs(value); return *this;}

    /**
     * <p>Action IDs to filter template post migration custom actions by.</p>
     */
    inline TemplateActionsRequestFilters& WithActionIDs(Aws::Vector<Aws::String>&& value) { SetActionIDs(std::move(value)); return *this;}

    /**
     * <p>Action IDs to filter template post migration custom actions by.</p>
     */
    inline TemplateActionsRequestFilters& AddActionIDs(const Aws::String& value) { m_actionIDsHasBeenSet = true; m_actionIDs.push_back(value); return *this; }

    /**
     * <p>Action IDs to filter template post migration custom actions by.</p>
     */
    inline TemplateActionsRequestFilters& AddActionIDs(Aws::String&& value) { m_actionIDsHasBeenSet = true; m_actionIDs.push_back(std::move(value)); return *this; }

    /**
     * <p>Action IDs to filter template post migration custom actions by.</p>
     */
    inline TemplateActionsRequestFilters& AddActionIDs(const char* value) { m_actionIDsHasBeenSet = true; m_actionIDs.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_actionIDs;
    bool m_actionIDsHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
