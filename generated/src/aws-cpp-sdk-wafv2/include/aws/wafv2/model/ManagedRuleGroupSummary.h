/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>High-level information about a managed rule group, returned by
   * <a>ListAvailableManagedRuleGroups</a>. This provides information like the name
   * and vendor name, that you provide when you add a
   * <a>ManagedRuleGroupStatement</a> to a web ACL. Managed rule groups include
   * Amazon Web Services Managed Rules rule groups and Amazon Web Services
   * Marketplace managed rule groups. To use any Amazon Web Services Marketplace
   * managed rule group, first subscribe to the rule group through Amazon Web
   * Services Marketplace. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ManagedRuleGroupSummary">AWS
   * API Reference</a></p>
   */
  class ManagedRuleGroupSummary
  {
  public:
    AWS_WAFV2_API ManagedRuleGroupSummary() = default;
    AWS_WAFV2_API ManagedRuleGroupSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API ManagedRuleGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the managed rule group vendor. You use this, along with the rule
     * group name, to identify a rule group.</p>
     */
    inline const Aws::String& GetVendorName() const { return m_vendorName; }
    inline bool VendorNameHasBeenSet() const { return m_vendorNameHasBeenSet; }
    template<typename VendorNameT = Aws::String>
    void SetVendorName(VendorNameT&& value) { m_vendorNameHasBeenSet = true; m_vendorName = std::forward<VendorNameT>(value); }
    template<typename VendorNameT = Aws::String>
    ManagedRuleGroupSummary& WithVendorName(VendorNameT&& value) { SetVendorName(std::forward<VendorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the managed rule group. You use this, along with the vendor name,
     * to identify the rule group.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ManagedRuleGroupSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the managed rule group is versioned. If it is, you can
     * retrieve the versions list by calling
     * <a>ListAvailableManagedRuleGroupVersions</a>. </p>
     */
    inline bool GetVersioningSupported() const { return m_versioningSupported; }
    inline bool VersioningSupportedHasBeenSet() const { return m_versioningSupportedHasBeenSet; }
    inline void SetVersioningSupported(bool value) { m_versioningSupportedHasBeenSet = true; m_versioningSupported = value; }
    inline ManagedRuleGroupSummary& WithVersioningSupported(bool value) { SetVersioningSupported(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the managed rule group, provided by Amazon Web Services
     * Managed Rules or the Amazon Web Services Marketplace seller who manages it.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ManagedRuleGroupSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vendorName;
    bool m_vendorNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_versioningSupported{false};
    bool m_versioningSupportedHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
