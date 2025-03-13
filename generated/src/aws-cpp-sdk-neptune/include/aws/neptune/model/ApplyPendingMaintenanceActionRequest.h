/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/NeptuneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Neptune
{
namespace Model
{

  /**
   */
  class ApplyPendingMaintenanceActionRequest : public NeptuneRequest
  {
  public:
    AWS_NEPTUNE_API ApplyPendingMaintenanceActionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ApplyPendingMaintenanceAction"; }

    AWS_NEPTUNE_API Aws::String SerializePayload() const override;

  protected:
    AWS_NEPTUNE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource that the pending maintenance
     * action applies to. For information about creating an ARN, see <a
     * href="https://docs.aws.amazon.com/neptune/latest/UserGuide/tagging.ARN.html#tagging.ARN.Constructing">
     * Constructing an Amazon Resource Name (ARN)</a>.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const { return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    template<typename ResourceIdentifierT = Aws::String>
    void SetResourceIdentifier(ResourceIdentifierT&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::forward<ResourceIdentifierT>(value); }
    template<typename ResourceIdentifierT = Aws::String>
    ApplyPendingMaintenanceActionRequest& WithResourceIdentifier(ResourceIdentifierT&& value) { SetResourceIdentifier(std::forward<ResourceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pending maintenance action to apply to this resource.</p> <p>Valid
     * values: <code>system-update</code>, <code>db-upgrade</code> </p>
     */
    inline const Aws::String& GetApplyAction() const { return m_applyAction; }
    inline bool ApplyActionHasBeenSet() const { return m_applyActionHasBeenSet; }
    template<typename ApplyActionT = Aws::String>
    void SetApplyAction(ApplyActionT&& value) { m_applyActionHasBeenSet = true; m_applyAction = std::forward<ApplyActionT>(value); }
    template<typename ApplyActionT = Aws::String>
    ApplyPendingMaintenanceActionRequest& WithApplyAction(ApplyActionT&& value) { SetApplyAction(std::forward<ApplyActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that specifies the type of opt-in request, or undoes an opt-in
     * request. An opt-in request of type <code>immediate</code> can't be undone.</p>
     * <p>Valid values:</p> <ul> <li> <p> <code>immediate</code> - Apply the
     * maintenance action immediately.</p> </li> <li> <p> <code>next-maintenance</code>
     * - Apply the maintenance action during the next maintenance window for the
     * resource.</p> </li> <li> <p> <code>undo-opt-in</code> - Cancel any existing
     * <code>next-maintenance</code> opt-in requests.</p> </li> </ul>
     */
    inline const Aws::String& GetOptInType() const { return m_optInType; }
    inline bool OptInTypeHasBeenSet() const { return m_optInTypeHasBeenSet; }
    template<typename OptInTypeT = Aws::String>
    void SetOptInType(OptInTypeT&& value) { m_optInTypeHasBeenSet = true; m_optInType = std::forward<OptInTypeT>(value); }
    template<typename OptInTypeT = Aws::String>
    ApplyPendingMaintenanceActionRequest& WithOptInType(OptInTypeT&& value) { SetOptInType(std::forward<OptInTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    Aws::String m_applyAction;
    bool m_applyActionHasBeenSet = false;

    Aws::String m_optInType;
    bool m_optInTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
