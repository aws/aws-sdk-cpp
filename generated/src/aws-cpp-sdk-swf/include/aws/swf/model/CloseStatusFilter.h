/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/model/CloseStatus.h>
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
namespace SWF
{
namespace Model
{

  /**
   * <p>Used to filter the closed workflow executions in visibility APIs by their
   * close status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/CloseStatusFilter">AWS
   * API Reference</a></p>
   */
  class CloseStatusFilter
  {
  public:
    AWS_SWF_API CloseStatusFilter() = default;
    AWS_SWF_API CloseStatusFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API CloseStatusFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The close status that must match the close status of an execution for it to
     * meet the criteria of this filter.</p>
     */
    inline CloseStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CloseStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CloseStatusFilter& WithStatus(CloseStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    CloseStatus m_status{CloseStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
