/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/OptionConfiguration.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyOptionGroupMessage">AWS
   * API Reference</a></p>
   */
  class ModifyOptionGroupRequest : public RDSRequest
  {
  public:
    AWS_RDS_API ModifyOptionGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyOptionGroup"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the option group to be modified.</p> <p>Permanent options, such
     * as the TDE option for Oracle Advanced Security TDE, can't be removed from an
     * option group, and that option group can't be removed from a DB instance once it
     * is associated with a DB instance</p>
     */
    inline const Aws::String& GetOptionGroupName() const { return m_optionGroupName; }
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }
    template<typename OptionGroupNameT = Aws::String>
    void SetOptionGroupName(OptionGroupNameT&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::forward<OptionGroupNameT>(value); }
    template<typename OptionGroupNameT = Aws::String>
    ModifyOptionGroupRequest& WithOptionGroupName(OptionGroupNameT&& value) { SetOptionGroupName(std::forward<OptionGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options in this list are added to the option group or, if already present,
     * the specified configuration is used to update the existing configuration.</p>
     */
    inline const Aws::Vector<OptionConfiguration>& GetOptionsToInclude() const { return m_optionsToInclude; }
    inline bool OptionsToIncludeHasBeenSet() const { return m_optionsToIncludeHasBeenSet; }
    template<typename OptionsToIncludeT = Aws::Vector<OptionConfiguration>>
    void SetOptionsToInclude(OptionsToIncludeT&& value) { m_optionsToIncludeHasBeenSet = true; m_optionsToInclude = std::forward<OptionsToIncludeT>(value); }
    template<typename OptionsToIncludeT = Aws::Vector<OptionConfiguration>>
    ModifyOptionGroupRequest& WithOptionsToInclude(OptionsToIncludeT&& value) { SetOptionsToInclude(std::forward<OptionsToIncludeT>(value)); return *this;}
    template<typename OptionsToIncludeT = OptionConfiguration>
    ModifyOptionGroupRequest& AddOptionsToInclude(OptionsToIncludeT&& value) { m_optionsToIncludeHasBeenSet = true; m_optionsToInclude.emplace_back(std::forward<OptionsToIncludeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Options in this list are removed from the option group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOptionsToRemove() const { return m_optionsToRemove; }
    inline bool OptionsToRemoveHasBeenSet() const { return m_optionsToRemoveHasBeenSet; }
    template<typename OptionsToRemoveT = Aws::Vector<Aws::String>>
    void SetOptionsToRemove(OptionsToRemoveT&& value) { m_optionsToRemoveHasBeenSet = true; m_optionsToRemove = std::forward<OptionsToRemoveT>(value); }
    template<typename OptionsToRemoveT = Aws::Vector<Aws::String>>
    ModifyOptionGroupRequest& WithOptionsToRemove(OptionsToRemoveT&& value) { SetOptionsToRemove(std::forward<OptionsToRemoveT>(value)); return *this;}
    template<typename OptionsToRemoveT = Aws::String>
    ModifyOptionGroupRequest& AddOptionsToRemove(OptionsToRemoveT&& value) { m_optionsToRemoveHasBeenSet = true; m_optionsToRemove.emplace_back(std::forward<OptionsToRemoveT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether to apply the change immediately or during the next
     * maintenance window for each instance associated with the option group.</p>
     */
    inline bool GetApplyImmediately() const { return m_applyImmediately; }
    inline bool ApplyImmediatelyHasBeenSet() const { return m_applyImmediatelyHasBeenSet; }
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }
    inline ModifyOptionGroupRequest& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}
    ///@}
  private:

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet = false;

    Aws::Vector<OptionConfiguration> m_optionsToInclude;
    bool m_optionsToIncludeHasBeenSet = false;

    Aws::Vector<Aws::String> m_optionsToRemove;
    bool m_optionsToRemoveHasBeenSet = false;

    bool m_applyImmediately{false};
    bool m_applyImmediatelyHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
