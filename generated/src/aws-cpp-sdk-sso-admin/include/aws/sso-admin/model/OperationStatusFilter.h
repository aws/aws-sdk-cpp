/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/StatusValues.h>
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
namespace SSOAdmin
{
namespace Model
{

  /**
   * <p>Filters the operation status list based on the passed attribute
   * value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/OperationStatusFilter">AWS
   * API Reference</a></p>
   */
  class OperationStatusFilter
  {
  public:
    AWS_SSOADMIN_API OperationStatusFilter() = default;
    AWS_SSOADMIN_API OperationStatusFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API OperationStatusFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filters the list operations result based on the status attribute.</p>
     */
    inline StatusValues GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(StatusValues value) { m_statusHasBeenSet = true; m_status = value; }
    inline OperationStatusFilter& WithStatus(StatusValues value) { SetStatus(value); return *this;}
    ///@}
  private:

    StatusValues m_status{StatusValues::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
