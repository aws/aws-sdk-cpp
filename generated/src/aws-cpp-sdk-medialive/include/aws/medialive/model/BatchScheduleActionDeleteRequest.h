/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * A list of schedule actions to delete.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchScheduleActionDeleteRequest">AWS
   * API Reference</a></p>
   */
  class BatchScheduleActionDeleteRequest
  {
  public:
    AWS_MEDIALIVE_API BatchScheduleActionDeleteRequest() = default;
    AWS_MEDIALIVE_API BatchScheduleActionDeleteRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API BatchScheduleActionDeleteRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * A list of schedule actions to delete.
     */
    inline const Aws::Vector<Aws::String>& GetActionNames() const { return m_actionNames; }
    inline bool ActionNamesHasBeenSet() const { return m_actionNamesHasBeenSet; }
    template<typename ActionNamesT = Aws::Vector<Aws::String>>
    void SetActionNames(ActionNamesT&& value) { m_actionNamesHasBeenSet = true; m_actionNames = std::forward<ActionNamesT>(value); }
    template<typename ActionNamesT = Aws::Vector<Aws::String>>
    BatchScheduleActionDeleteRequest& WithActionNames(ActionNamesT&& value) { SetActionNames(std::forward<ActionNamesT>(value)); return *this;}
    template<typename ActionNamesT = Aws::String>
    BatchScheduleActionDeleteRequest& AddActionNames(ActionNamesT&& value) { m_actionNamesHasBeenSet = true; m_actionNames.emplace_back(std::forward<ActionNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_actionNames;
    bool m_actionNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
