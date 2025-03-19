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
   * <p>The properties of a managed product, such as an Amazon Web Services Managed
   * Rules rule group or an Amazon Web Services Marketplace managed rule group.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ManagedProductDescriptor">AWS
   * API Reference</a></p>
   */
  class ManagedProductDescriptor
  {
  public:
    AWS_WAFV2_API ManagedProductDescriptor() = default;
    AWS_WAFV2_API ManagedProductDescriptor(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API ManagedProductDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    ManagedProductDescriptor& WithVendorName(VendorNameT&& value) { SetVendorName(std::forward<VendorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the managed rule group. For example,
     * <code>AWSManagedRulesAnonymousIpList</code> or
     * <code>AWSManagedRulesATPRuleSet</code>.</p>
     */
    inline const Aws::String& GetManagedRuleSetName() const { return m_managedRuleSetName; }
    inline bool ManagedRuleSetNameHasBeenSet() const { return m_managedRuleSetNameHasBeenSet; }
    template<typename ManagedRuleSetNameT = Aws::String>
    void SetManagedRuleSetName(ManagedRuleSetNameT&& value) { m_managedRuleSetNameHasBeenSet = true; m_managedRuleSetName = std::forward<ManagedRuleSetNameT>(value); }
    template<typename ManagedRuleSetNameT = Aws::String>
    ManagedProductDescriptor& WithManagedRuleSetName(ManagedRuleSetNameT&& value) { SetManagedRuleSetName(std::forward<ManagedRuleSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the rule group. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline const Aws::String& GetProductId() const { return m_productId; }
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
    template<typename ProductIdT = Aws::String>
    void SetProductId(ProductIdT&& value) { m_productIdHasBeenSet = true; m_productId = std::forward<ProductIdT>(value); }
    template<typename ProductIdT = Aws::String>
    ManagedProductDescriptor& WithProductId(ProductIdT&& value) { SetProductId(std::forward<ProductIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For Amazon Web Services Marketplace managed rule groups only, the link to the
     * rule group product page. </p>
     */
    inline const Aws::String& GetProductLink() const { return m_productLink; }
    inline bool ProductLinkHasBeenSet() const { return m_productLinkHasBeenSet; }
    template<typename ProductLinkT = Aws::String>
    void SetProductLink(ProductLinkT&& value) { m_productLinkHasBeenSet = true; m_productLink = std::forward<ProductLinkT>(value); }
    template<typename ProductLinkT = Aws::String>
    ManagedProductDescriptor& WithProductLink(ProductLinkT&& value) { SetProductLink(std::forward<ProductLinkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name for the managed rule group. For example, <code>Anonymous IP
     * list</code> or <code>Account takeover prevention</code>.</p>
     */
    inline const Aws::String& GetProductTitle() const { return m_productTitle; }
    inline bool ProductTitleHasBeenSet() const { return m_productTitleHasBeenSet; }
    template<typename ProductTitleT = Aws::String>
    void SetProductTitle(ProductTitleT&& value) { m_productTitleHasBeenSet = true; m_productTitle = std::forward<ProductTitleT>(value); }
    template<typename ProductTitleT = Aws::String>
    ManagedProductDescriptor& WithProductTitle(ProductTitleT&& value) { SetProductTitle(std::forward<ProductTitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short description of the managed rule group.</p>
     */
    inline const Aws::String& GetProductDescription() const { return m_productDescription; }
    inline bool ProductDescriptionHasBeenSet() const { return m_productDescriptionHasBeenSet; }
    template<typename ProductDescriptionT = Aws::String>
    void SetProductDescription(ProductDescriptionT&& value) { m_productDescriptionHasBeenSet = true; m_productDescription = std::forward<ProductDescriptionT>(value); }
    template<typename ProductDescriptionT = Aws::String>
    ManagedProductDescriptor& WithProductDescription(ProductDescriptionT&& value) { SetProductDescription(std::forward<ProductDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon resource name (ARN) of the Amazon Simple Notification Service SNS
     * topic that's used to provide notification of changes to the managed rule group.
     * You can subscribe to the SNS topic to receive notifications when the managed
     * rule group is modified, such as for new versions and for version expiration. For
     * more information, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/welcome.html">Amazon Simple
     * Notification Service Developer Guide</a>.</p>
     */
    inline const Aws::String& GetSnsTopicArn() const { return m_snsTopicArn; }
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }
    template<typename SnsTopicArnT = Aws::String>
    void SetSnsTopicArn(SnsTopicArnT&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::forward<SnsTopicArnT>(value); }
    template<typename SnsTopicArnT = Aws::String>
    ManagedProductDescriptor& WithSnsTopicArn(SnsTopicArnT&& value) { SetSnsTopicArn(std::forward<SnsTopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the rule group is versioned. </p>
     */
    inline bool GetIsVersioningSupported() const { return m_isVersioningSupported; }
    inline bool IsVersioningSupportedHasBeenSet() const { return m_isVersioningSupportedHasBeenSet; }
    inline void SetIsVersioningSupported(bool value) { m_isVersioningSupportedHasBeenSet = true; m_isVersioningSupported = value; }
    inline ManagedProductDescriptor& WithIsVersioningSupported(bool value) { SetIsVersioningSupported(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the rule group provides an advanced set of protections,
     * such as the the Amazon Web Services Managed Rules rule groups that are used for
     * WAF intelligent threat mitigation. </p>
     */
    inline bool GetIsAdvancedManagedRuleSet() const { return m_isAdvancedManagedRuleSet; }
    inline bool IsAdvancedManagedRuleSetHasBeenSet() const { return m_isAdvancedManagedRuleSetHasBeenSet; }
    inline void SetIsAdvancedManagedRuleSet(bool value) { m_isAdvancedManagedRuleSetHasBeenSet = true; m_isAdvancedManagedRuleSet = value; }
    inline ManagedProductDescriptor& WithIsAdvancedManagedRuleSet(bool value) { SetIsAdvancedManagedRuleSet(value); return *this;}
    ///@}
  private:

    Aws::String m_vendorName;
    bool m_vendorNameHasBeenSet = false;

    Aws::String m_managedRuleSetName;
    bool m_managedRuleSetNameHasBeenSet = false;

    Aws::String m_productId;
    bool m_productIdHasBeenSet = false;

    Aws::String m_productLink;
    bool m_productLinkHasBeenSet = false;

    Aws::String m_productTitle;
    bool m_productTitleHasBeenSet = false;

    Aws::String m_productDescription;
    bool m_productDescriptionHasBeenSet = false;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet = false;

    bool m_isVersioningSupported{false};
    bool m_isVersioningSupportedHasBeenSet = false;

    bool m_isAdvancedManagedRuleSet{false};
    bool m_isAdvancedManagedRuleSetHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
