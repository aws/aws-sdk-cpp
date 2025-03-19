/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/SuppressionListImportAction.h>
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
   * <p>An object that contains details about the action of suppression
   * list.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SuppressionListDestination">AWS
   * API Reference</a></p>
   */
  class SuppressionListDestination
  {
  public:
    AWS_SESV2_API SuppressionListDestination() = default;
    AWS_SESV2_API SuppressionListDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API SuppressionListDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of action to perform on the address. The following are possible
     * values:</p> <ul> <li> <p>PUT: add the addresses to the suppression list. If the
     * record already exists, it will override it with the new value.</p> </li> <li>
     * <p>DELETE: remove the addresses from the suppression list.</p> </li> </ul>
     */
    inline SuppressionListImportAction GetSuppressionListImportAction() const { return m_suppressionListImportAction; }
    inline bool SuppressionListImportActionHasBeenSet() const { return m_suppressionListImportActionHasBeenSet; }
    inline void SetSuppressionListImportAction(SuppressionListImportAction value) { m_suppressionListImportActionHasBeenSet = true; m_suppressionListImportAction = value; }
    inline SuppressionListDestination& WithSuppressionListImportAction(SuppressionListImportAction value) { SetSuppressionListImportAction(value); return *this;}
    ///@}
  private:

    SuppressionListImportAction m_suppressionListImportAction{SuppressionListImportAction::NOT_SET};
    bool m_suppressionListImportActionHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
