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
   * Amazon Web Services Managed Rules rule groups, which are free of charge to WAF
   * customers, and Amazon Web Services Marketplace managed rule groups, which you
   * can subscribe to through Amazon Web Services Marketplace. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ManagedRuleGroupSummary">AWS
   * API Reference</a></p>
   */
  class ManagedRuleGroupSummary
  {
  public:
    AWS_WAFV2_API ManagedRuleGroupSummary();
    AWS_WAFV2_API ManagedRuleGroupSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API ManagedRuleGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the managed rule group vendor. You use this, along with the rule
     * group name, to identify the rule group.</p>
     */
    inline const Aws::String& GetVendorName() const{ return m_vendorName; }

    /**
     * <p>The name of the managed rule group vendor. You use this, along with the rule
     * group name, to identify the rule group.</p>
     */
    inline bool VendorNameHasBeenSet() const { return m_vendorNameHasBeenSet; }

    /**
     * <p>The name of the managed rule group vendor. You use this, along with the rule
     * group name, to identify the rule group.</p>
     */
    inline void SetVendorName(const Aws::String& value) { m_vendorNameHasBeenSet = true; m_vendorName = value; }

    /**
     * <p>The name of the managed rule group vendor. You use this, along with the rule
     * group name, to identify the rule group.</p>
     */
    inline void SetVendorName(Aws::String&& value) { m_vendorNameHasBeenSet = true; m_vendorName = std::move(value); }

    /**
     * <p>The name of the managed rule group vendor. You use this, along with the rule
     * group name, to identify the rule group.</p>
     */
    inline void SetVendorName(const char* value) { m_vendorNameHasBeenSet = true; m_vendorName.assign(value); }

    /**
     * <p>The name of the managed rule group vendor. You use this, along with the rule
     * group name, to identify the rule group.</p>
     */
    inline ManagedRuleGroupSummary& WithVendorName(const Aws::String& value) { SetVendorName(value); return *this;}

    /**
     * <p>The name of the managed rule group vendor. You use this, along with the rule
     * group name, to identify the rule group.</p>
     */
    inline ManagedRuleGroupSummary& WithVendorName(Aws::String&& value) { SetVendorName(std::move(value)); return *this;}

    /**
     * <p>The name of the managed rule group vendor. You use this, along with the rule
     * group name, to identify the rule group.</p>
     */
    inline ManagedRuleGroupSummary& WithVendorName(const char* value) { SetVendorName(value); return *this;}


    /**
     * <p>The name of the managed rule group. You use this, along with the vendor name,
     * to identify the rule group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the managed rule group. You use this, along with the vendor name,
     * to identify the rule group.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the managed rule group. You use this, along with the vendor name,
     * to identify the rule group.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the managed rule group. You use this, along with the vendor name,
     * to identify the rule group.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the managed rule group. You use this, along with the vendor name,
     * to identify the rule group.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the managed rule group. You use this, along with the vendor name,
     * to identify the rule group.</p>
     */
    inline ManagedRuleGroupSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the managed rule group. You use this, along with the vendor name,
     * to identify the rule group.</p>
     */
    inline ManagedRuleGroupSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the managed rule group. You use this, along with the vendor name,
     * to identify the rule group.</p>
     */
    inline ManagedRuleGroupSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Indicates whether the managed rule group is versioned. If it is, you can
     * retrieve the versions list by calling
     * <a>ListAvailableManagedRuleGroupVersions</a>. </p>
     */
    inline bool GetVersioningSupported() const{ return m_versioningSupported; }

    /**
     * <p>Indicates whether the managed rule group is versioned. If it is, you can
     * retrieve the versions list by calling
     * <a>ListAvailableManagedRuleGroupVersions</a>. </p>
     */
    inline bool VersioningSupportedHasBeenSet() const { return m_versioningSupportedHasBeenSet; }

    /**
     * <p>Indicates whether the managed rule group is versioned. If it is, you can
     * retrieve the versions list by calling
     * <a>ListAvailableManagedRuleGroupVersions</a>. </p>
     */
    inline void SetVersioningSupported(bool value) { m_versioningSupportedHasBeenSet = true; m_versioningSupported = value; }

    /**
     * <p>Indicates whether the managed rule group is versioned. If it is, you can
     * retrieve the versions list by calling
     * <a>ListAvailableManagedRuleGroupVersions</a>. </p>
     */
    inline ManagedRuleGroupSummary& WithVersioningSupported(bool value) { SetVersioningSupported(value); return *this;}


    /**
     * <p>The description of the managed rule group, provided by Amazon Web Services
     * Managed Rules or the Amazon Web Services Marketplace seller who manages it.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the managed rule group, provided by Amazon Web Services
     * Managed Rules or the Amazon Web Services Marketplace seller who manages it.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the managed rule group, provided by Amazon Web Services
     * Managed Rules or the Amazon Web Services Marketplace seller who manages it.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the managed rule group, provided by Amazon Web Services
     * Managed Rules or the Amazon Web Services Marketplace seller who manages it.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the managed rule group, provided by Amazon Web Services
     * Managed Rules or the Amazon Web Services Marketplace seller who manages it.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the managed rule group, provided by Amazon Web Services
     * Managed Rules or the Amazon Web Services Marketplace seller who manages it.</p>
     */
    inline ManagedRuleGroupSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the managed rule group, provided by Amazon Web Services
     * Managed Rules or the Amazon Web Services Marketplace seller who manages it.</p>
     */
    inline ManagedRuleGroupSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the managed rule group, provided by Amazon Web Services
     * Managed Rules or the Amazon Web Services Marketplace seller who manages it.</p>
     */
    inline ManagedRuleGroupSummary& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_vendorName;
    bool m_vendorNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_versioningSupported;
    bool m_versioningSupportedHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
