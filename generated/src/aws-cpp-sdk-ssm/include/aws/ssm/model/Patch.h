/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Represents metadata about a patch.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/Patch">AWS API
   * Reference</a></p>
   */
  class Patch
  {
  public:
    AWS_SSM_API Patch();
    AWS_SSM_API Patch(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Patch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the patch. Applies to Windows patches only.</p>  <p>This ID
     * isn't the same as the Microsoft Knowledge Base ID.</p> 
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the patch. Applies to Windows patches only.</p>  <p>This ID
     * isn't the same as the Microsoft Knowledge Base ID.</p> 
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the patch. Applies to Windows patches only.</p>  <p>This ID
     * isn't the same as the Microsoft Knowledge Base ID.</p> 
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the patch. Applies to Windows patches only.</p>  <p>This ID
     * isn't the same as the Microsoft Knowledge Base ID.</p> 
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the patch. Applies to Windows patches only.</p>  <p>This ID
     * isn't the same as the Microsoft Knowledge Base ID.</p> 
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the patch. Applies to Windows patches only.</p>  <p>This ID
     * isn't the same as the Microsoft Knowledge Base ID.</p> 
     */
    inline Patch& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the patch. Applies to Windows patches only.</p>  <p>This ID
     * isn't the same as the Microsoft Knowledge Base ID.</p> 
     */
    inline Patch& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the patch. Applies to Windows patches only.</p>  <p>This ID
     * isn't the same as the Microsoft Knowledge Base ID.</p> 
     */
    inline Patch& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The date the patch was released.</p>
     */
    inline const Aws::Utils::DateTime& GetReleaseDate() const{ return m_releaseDate; }

    /**
     * <p>The date the patch was released.</p>
     */
    inline bool ReleaseDateHasBeenSet() const { return m_releaseDateHasBeenSet; }

    /**
     * <p>The date the patch was released.</p>
     */
    inline void SetReleaseDate(const Aws::Utils::DateTime& value) { m_releaseDateHasBeenSet = true; m_releaseDate = value; }

    /**
     * <p>The date the patch was released.</p>
     */
    inline void SetReleaseDate(Aws::Utils::DateTime&& value) { m_releaseDateHasBeenSet = true; m_releaseDate = std::move(value); }

    /**
     * <p>The date the patch was released.</p>
     */
    inline Patch& WithReleaseDate(const Aws::Utils::DateTime& value) { SetReleaseDate(value); return *this;}

    /**
     * <p>The date the patch was released.</p>
     */
    inline Patch& WithReleaseDate(Aws::Utils::DateTime&& value) { SetReleaseDate(std::move(value)); return *this;}


    /**
     * <p>The title of the patch.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title of the patch.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title of the patch.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title of the patch.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title of the patch.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The title of the patch.</p>
     */
    inline Patch& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title of the patch.</p>
     */
    inline Patch& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title of the patch.</p>
     */
    inline Patch& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>The description of the patch.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the patch.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the patch.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the patch.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the patch.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the patch.</p>
     */
    inline Patch& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the patch.</p>
     */
    inline Patch& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the patch.</p>
     */
    inline Patch& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The URL where more information can be obtained about the patch.</p>
     */
    inline const Aws::String& GetContentUrl() const{ return m_contentUrl; }

    /**
     * <p>The URL where more information can be obtained about the patch.</p>
     */
    inline bool ContentUrlHasBeenSet() const { return m_contentUrlHasBeenSet; }

    /**
     * <p>The URL where more information can be obtained about the patch.</p>
     */
    inline void SetContentUrl(const Aws::String& value) { m_contentUrlHasBeenSet = true; m_contentUrl = value; }

    /**
     * <p>The URL where more information can be obtained about the patch.</p>
     */
    inline void SetContentUrl(Aws::String&& value) { m_contentUrlHasBeenSet = true; m_contentUrl = std::move(value); }

    /**
     * <p>The URL where more information can be obtained about the patch.</p>
     */
    inline void SetContentUrl(const char* value) { m_contentUrlHasBeenSet = true; m_contentUrl.assign(value); }

    /**
     * <p>The URL where more information can be obtained about the patch.</p>
     */
    inline Patch& WithContentUrl(const Aws::String& value) { SetContentUrl(value); return *this;}

    /**
     * <p>The URL where more information can be obtained about the patch.</p>
     */
    inline Patch& WithContentUrl(Aws::String&& value) { SetContentUrl(std::move(value)); return *this;}

    /**
     * <p>The URL where more information can be obtained about the patch.</p>
     */
    inline Patch& WithContentUrl(const char* value) { SetContentUrl(value); return *this;}


    /**
     * <p>The name of the vendor providing the patch.</p>
     */
    inline const Aws::String& GetVendor() const{ return m_vendor; }

    /**
     * <p>The name of the vendor providing the patch.</p>
     */
    inline bool VendorHasBeenSet() const { return m_vendorHasBeenSet; }

    /**
     * <p>The name of the vendor providing the patch.</p>
     */
    inline void SetVendor(const Aws::String& value) { m_vendorHasBeenSet = true; m_vendor = value; }

    /**
     * <p>The name of the vendor providing the patch.</p>
     */
    inline void SetVendor(Aws::String&& value) { m_vendorHasBeenSet = true; m_vendor = std::move(value); }

    /**
     * <p>The name of the vendor providing the patch.</p>
     */
    inline void SetVendor(const char* value) { m_vendorHasBeenSet = true; m_vendor.assign(value); }

    /**
     * <p>The name of the vendor providing the patch.</p>
     */
    inline Patch& WithVendor(const Aws::String& value) { SetVendor(value); return *this;}

    /**
     * <p>The name of the vendor providing the patch.</p>
     */
    inline Patch& WithVendor(Aws::String&& value) { SetVendor(std::move(value)); return *this;}

    /**
     * <p>The name of the vendor providing the patch.</p>
     */
    inline Patch& WithVendor(const char* value) { SetVendor(value); return *this;}


    /**
     * <p>The product family the patch is applicable for. For example,
     * <code>Windows</code> or <code>Amazon Linux 2</code>.</p>
     */
    inline const Aws::String& GetProductFamily() const{ return m_productFamily; }

    /**
     * <p>The product family the patch is applicable for. For example,
     * <code>Windows</code> or <code>Amazon Linux 2</code>.</p>
     */
    inline bool ProductFamilyHasBeenSet() const { return m_productFamilyHasBeenSet; }

    /**
     * <p>The product family the patch is applicable for. For example,
     * <code>Windows</code> or <code>Amazon Linux 2</code>.</p>
     */
    inline void SetProductFamily(const Aws::String& value) { m_productFamilyHasBeenSet = true; m_productFamily = value; }

    /**
     * <p>The product family the patch is applicable for. For example,
     * <code>Windows</code> or <code>Amazon Linux 2</code>.</p>
     */
    inline void SetProductFamily(Aws::String&& value) { m_productFamilyHasBeenSet = true; m_productFamily = std::move(value); }

    /**
     * <p>The product family the patch is applicable for. For example,
     * <code>Windows</code> or <code>Amazon Linux 2</code>.</p>
     */
    inline void SetProductFamily(const char* value) { m_productFamilyHasBeenSet = true; m_productFamily.assign(value); }

    /**
     * <p>The product family the patch is applicable for. For example,
     * <code>Windows</code> or <code>Amazon Linux 2</code>.</p>
     */
    inline Patch& WithProductFamily(const Aws::String& value) { SetProductFamily(value); return *this;}

    /**
     * <p>The product family the patch is applicable for. For example,
     * <code>Windows</code> or <code>Amazon Linux 2</code>.</p>
     */
    inline Patch& WithProductFamily(Aws::String&& value) { SetProductFamily(std::move(value)); return *this;}

    /**
     * <p>The product family the patch is applicable for. For example,
     * <code>Windows</code> or <code>Amazon Linux 2</code>.</p>
     */
    inline Patch& WithProductFamily(const char* value) { SetProductFamily(value); return *this;}


    /**
     * <p>The specific product the patch is applicable for. For example,
     * <code>WindowsServer2016</code> or <code>AmazonLinux2018.03</code>.</p>
     */
    inline const Aws::String& GetProduct() const{ return m_product; }

    /**
     * <p>The specific product the patch is applicable for. For example,
     * <code>WindowsServer2016</code> or <code>AmazonLinux2018.03</code>.</p>
     */
    inline bool ProductHasBeenSet() const { return m_productHasBeenSet; }

    /**
     * <p>The specific product the patch is applicable for. For example,
     * <code>WindowsServer2016</code> or <code>AmazonLinux2018.03</code>.</p>
     */
    inline void SetProduct(const Aws::String& value) { m_productHasBeenSet = true; m_product = value; }

    /**
     * <p>The specific product the patch is applicable for. For example,
     * <code>WindowsServer2016</code> or <code>AmazonLinux2018.03</code>.</p>
     */
    inline void SetProduct(Aws::String&& value) { m_productHasBeenSet = true; m_product = std::move(value); }

    /**
     * <p>The specific product the patch is applicable for. For example,
     * <code>WindowsServer2016</code> or <code>AmazonLinux2018.03</code>.</p>
     */
    inline void SetProduct(const char* value) { m_productHasBeenSet = true; m_product.assign(value); }

    /**
     * <p>The specific product the patch is applicable for. For example,
     * <code>WindowsServer2016</code> or <code>AmazonLinux2018.03</code>.</p>
     */
    inline Patch& WithProduct(const Aws::String& value) { SetProduct(value); return *this;}

    /**
     * <p>The specific product the patch is applicable for. For example,
     * <code>WindowsServer2016</code> or <code>AmazonLinux2018.03</code>.</p>
     */
    inline Patch& WithProduct(Aws::String&& value) { SetProduct(std::move(value)); return *this;}

    /**
     * <p>The specific product the patch is applicable for. For example,
     * <code>WindowsServer2016</code> or <code>AmazonLinux2018.03</code>.</p>
     */
    inline Patch& WithProduct(const char* value) { SetProduct(value); return *this;}


    /**
     * <p>The classification of the patch. For example, <code>SecurityUpdates</code>,
     * <code>Updates</code>, or <code>CriticalUpdates</code>.</p>
     */
    inline const Aws::String& GetClassification() const{ return m_classification; }

    /**
     * <p>The classification of the patch. For example, <code>SecurityUpdates</code>,
     * <code>Updates</code>, or <code>CriticalUpdates</code>.</p>
     */
    inline bool ClassificationHasBeenSet() const { return m_classificationHasBeenSet; }

    /**
     * <p>The classification of the patch. For example, <code>SecurityUpdates</code>,
     * <code>Updates</code>, or <code>CriticalUpdates</code>.</p>
     */
    inline void SetClassification(const Aws::String& value) { m_classificationHasBeenSet = true; m_classification = value; }

    /**
     * <p>The classification of the patch. For example, <code>SecurityUpdates</code>,
     * <code>Updates</code>, or <code>CriticalUpdates</code>.</p>
     */
    inline void SetClassification(Aws::String&& value) { m_classificationHasBeenSet = true; m_classification = std::move(value); }

    /**
     * <p>The classification of the patch. For example, <code>SecurityUpdates</code>,
     * <code>Updates</code>, or <code>CriticalUpdates</code>.</p>
     */
    inline void SetClassification(const char* value) { m_classificationHasBeenSet = true; m_classification.assign(value); }

    /**
     * <p>The classification of the patch. For example, <code>SecurityUpdates</code>,
     * <code>Updates</code>, or <code>CriticalUpdates</code>.</p>
     */
    inline Patch& WithClassification(const Aws::String& value) { SetClassification(value); return *this;}

    /**
     * <p>The classification of the patch. For example, <code>SecurityUpdates</code>,
     * <code>Updates</code>, or <code>CriticalUpdates</code>.</p>
     */
    inline Patch& WithClassification(Aws::String&& value) { SetClassification(std::move(value)); return *this;}

    /**
     * <p>The classification of the patch. For example, <code>SecurityUpdates</code>,
     * <code>Updates</code>, or <code>CriticalUpdates</code>.</p>
     */
    inline Patch& WithClassification(const char* value) { SetClassification(value); return *this;}


    /**
     * <p>The severity of the patch, such as <code>Critical</code>,
     * <code>Important</code>, or <code>Moderate</code>. Applies to Windows patches
     * only.</p>
     */
    inline const Aws::String& GetMsrcSeverity() const{ return m_msrcSeverity; }

    /**
     * <p>The severity of the patch, such as <code>Critical</code>,
     * <code>Important</code>, or <code>Moderate</code>. Applies to Windows patches
     * only.</p>
     */
    inline bool MsrcSeverityHasBeenSet() const { return m_msrcSeverityHasBeenSet; }

    /**
     * <p>The severity of the patch, such as <code>Critical</code>,
     * <code>Important</code>, or <code>Moderate</code>. Applies to Windows patches
     * only.</p>
     */
    inline void SetMsrcSeverity(const Aws::String& value) { m_msrcSeverityHasBeenSet = true; m_msrcSeverity = value; }

    /**
     * <p>The severity of the patch, such as <code>Critical</code>,
     * <code>Important</code>, or <code>Moderate</code>. Applies to Windows patches
     * only.</p>
     */
    inline void SetMsrcSeverity(Aws::String&& value) { m_msrcSeverityHasBeenSet = true; m_msrcSeverity = std::move(value); }

    /**
     * <p>The severity of the patch, such as <code>Critical</code>,
     * <code>Important</code>, or <code>Moderate</code>. Applies to Windows patches
     * only.</p>
     */
    inline void SetMsrcSeverity(const char* value) { m_msrcSeverityHasBeenSet = true; m_msrcSeverity.assign(value); }

    /**
     * <p>The severity of the patch, such as <code>Critical</code>,
     * <code>Important</code>, or <code>Moderate</code>. Applies to Windows patches
     * only.</p>
     */
    inline Patch& WithMsrcSeverity(const Aws::String& value) { SetMsrcSeverity(value); return *this;}

    /**
     * <p>The severity of the patch, such as <code>Critical</code>,
     * <code>Important</code>, or <code>Moderate</code>. Applies to Windows patches
     * only.</p>
     */
    inline Patch& WithMsrcSeverity(Aws::String&& value) { SetMsrcSeverity(std::move(value)); return *this;}

    /**
     * <p>The severity of the patch, such as <code>Critical</code>,
     * <code>Important</code>, or <code>Moderate</code>. Applies to Windows patches
     * only.</p>
     */
    inline Patch& WithMsrcSeverity(const char* value) { SetMsrcSeverity(value); return *this;}


    /**
     * <p>The Microsoft Knowledge Base ID of the patch. Applies to Windows patches
     * only.</p>
     */
    inline const Aws::String& GetKbNumber() const{ return m_kbNumber; }

    /**
     * <p>The Microsoft Knowledge Base ID of the patch. Applies to Windows patches
     * only.</p>
     */
    inline bool KbNumberHasBeenSet() const { return m_kbNumberHasBeenSet; }

    /**
     * <p>The Microsoft Knowledge Base ID of the patch. Applies to Windows patches
     * only.</p>
     */
    inline void SetKbNumber(const Aws::String& value) { m_kbNumberHasBeenSet = true; m_kbNumber = value; }

    /**
     * <p>The Microsoft Knowledge Base ID of the patch. Applies to Windows patches
     * only.</p>
     */
    inline void SetKbNumber(Aws::String&& value) { m_kbNumberHasBeenSet = true; m_kbNumber = std::move(value); }

    /**
     * <p>The Microsoft Knowledge Base ID of the patch. Applies to Windows patches
     * only.</p>
     */
    inline void SetKbNumber(const char* value) { m_kbNumberHasBeenSet = true; m_kbNumber.assign(value); }

    /**
     * <p>The Microsoft Knowledge Base ID of the patch. Applies to Windows patches
     * only.</p>
     */
    inline Patch& WithKbNumber(const Aws::String& value) { SetKbNumber(value); return *this;}

    /**
     * <p>The Microsoft Knowledge Base ID of the patch. Applies to Windows patches
     * only.</p>
     */
    inline Patch& WithKbNumber(Aws::String&& value) { SetKbNumber(std::move(value)); return *this;}

    /**
     * <p>The Microsoft Knowledge Base ID of the patch. Applies to Windows patches
     * only.</p>
     */
    inline Patch& WithKbNumber(const char* value) { SetKbNumber(value); return *this;}


    /**
     * <p>The ID of the Microsoft Security Response Center (MSRC) bulletin the patch is
     * related to. For example, <code>MS14-045</code>. Applies to Windows patches
     * only.</p>
     */
    inline const Aws::String& GetMsrcNumber() const{ return m_msrcNumber; }

    /**
     * <p>The ID of the Microsoft Security Response Center (MSRC) bulletin the patch is
     * related to. For example, <code>MS14-045</code>. Applies to Windows patches
     * only.</p>
     */
    inline bool MsrcNumberHasBeenSet() const { return m_msrcNumberHasBeenSet; }

    /**
     * <p>The ID of the Microsoft Security Response Center (MSRC) bulletin the patch is
     * related to. For example, <code>MS14-045</code>. Applies to Windows patches
     * only.</p>
     */
    inline void SetMsrcNumber(const Aws::String& value) { m_msrcNumberHasBeenSet = true; m_msrcNumber = value; }

    /**
     * <p>The ID of the Microsoft Security Response Center (MSRC) bulletin the patch is
     * related to. For example, <code>MS14-045</code>. Applies to Windows patches
     * only.</p>
     */
    inline void SetMsrcNumber(Aws::String&& value) { m_msrcNumberHasBeenSet = true; m_msrcNumber = std::move(value); }

    /**
     * <p>The ID of the Microsoft Security Response Center (MSRC) bulletin the patch is
     * related to. For example, <code>MS14-045</code>. Applies to Windows patches
     * only.</p>
     */
    inline void SetMsrcNumber(const char* value) { m_msrcNumberHasBeenSet = true; m_msrcNumber.assign(value); }

    /**
     * <p>The ID of the Microsoft Security Response Center (MSRC) bulletin the patch is
     * related to. For example, <code>MS14-045</code>. Applies to Windows patches
     * only.</p>
     */
    inline Patch& WithMsrcNumber(const Aws::String& value) { SetMsrcNumber(value); return *this;}

    /**
     * <p>The ID of the Microsoft Security Response Center (MSRC) bulletin the patch is
     * related to. For example, <code>MS14-045</code>. Applies to Windows patches
     * only.</p>
     */
    inline Patch& WithMsrcNumber(Aws::String&& value) { SetMsrcNumber(std::move(value)); return *this;}

    /**
     * <p>The ID of the Microsoft Security Response Center (MSRC) bulletin the patch is
     * related to. For example, <code>MS14-045</code>. Applies to Windows patches
     * only.</p>
     */
    inline Patch& WithMsrcNumber(const char* value) { SetMsrcNumber(value); return *this;}


    /**
     * <p>The language of the patch if it's language-specific.</p>
     */
    inline const Aws::String& GetLanguage() const{ return m_language; }

    /**
     * <p>The language of the patch if it's language-specific.</p>
     */
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }

    /**
     * <p>The language of the patch if it's language-specific.</p>
     */
    inline void SetLanguage(const Aws::String& value) { m_languageHasBeenSet = true; m_language = value; }

    /**
     * <p>The language of the patch if it's language-specific.</p>
     */
    inline void SetLanguage(Aws::String&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }

    /**
     * <p>The language of the patch if it's language-specific.</p>
     */
    inline void SetLanguage(const char* value) { m_languageHasBeenSet = true; m_language.assign(value); }

    /**
     * <p>The language of the patch if it's language-specific.</p>
     */
    inline Patch& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}

    /**
     * <p>The language of the patch if it's language-specific.</p>
     */
    inline Patch& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}

    /**
     * <p>The language of the patch if it's language-specific.</p>
     */
    inline Patch& WithLanguage(const char* value) { SetLanguage(value); return *this;}


    /**
     * <p>The Advisory ID of the patch. For example, <code>RHSA-2020:3779</code>.
     * Applies to Linux-based managed nodes only.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdvisoryIds() const{ return m_advisoryIds; }

    /**
     * <p>The Advisory ID of the patch. For example, <code>RHSA-2020:3779</code>.
     * Applies to Linux-based managed nodes only.</p>
     */
    inline bool AdvisoryIdsHasBeenSet() const { return m_advisoryIdsHasBeenSet; }

    /**
     * <p>The Advisory ID of the patch. For example, <code>RHSA-2020:3779</code>.
     * Applies to Linux-based managed nodes only.</p>
     */
    inline void SetAdvisoryIds(const Aws::Vector<Aws::String>& value) { m_advisoryIdsHasBeenSet = true; m_advisoryIds = value; }

    /**
     * <p>The Advisory ID of the patch. For example, <code>RHSA-2020:3779</code>.
     * Applies to Linux-based managed nodes only.</p>
     */
    inline void SetAdvisoryIds(Aws::Vector<Aws::String>&& value) { m_advisoryIdsHasBeenSet = true; m_advisoryIds = std::move(value); }

    /**
     * <p>The Advisory ID of the patch. For example, <code>RHSA-2020:3779</code>.
     * Applies to Linux-based managed nodes only.</p>
     */
    inline Patch& WithAdvisoryIds(const Aws::Vector<Aws::String>& value) { SetAdvisoryIds(value); return *this;}

    /**
     * <p>The Advisory ID of the patch. For example, <code>RHSA-2020:3779</code>.
     * Applies to Linux-based managed nodes only.</p>
     */
    inline Patch& WithAdvisoryIds(Aws::Vector<Aws::String>&& value) { SetAdvisoryIds(std::move(value)); return *this;}

    /**
     * <p>The Advisory ID of the patch. For example, <code>RHSA-2020:3779</code>.
     * Applies to Linux-based managed nodes only.</p>
     */
    inline Patch& AddAdvisoryIds(const Aws::String& value) { m_advisoryIdsHasBeenSet = true; m_advisoryIds.push_back(value); return *this; }

    /**
     * <p>The Advisory ID of the patch. For example, <code>RHSA-2020:3779</code>.
     * Applies to Linux-based managed nodes only.</p>
     */
    inline Patch& AddAdvisoryIds(Aws::String&& value) { m_advisoryIdsHasBeenSet = true; m_advisoryIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The Advisory ID of the patch. For example, <code>RHSA-2020:3779</code>.
     * Applies to Linux-based managed nodes only.</p>
     */
    inline Patch& AddAdvisoryIds(const char* value) { m_advisoryIdsHasBeenSet = true; m_advisoryIds.push_back(value); return *this; }


    /**
     * <p>The Bugzilla ID of the patch. For example, <code>1600646</code>. Applies to
     * Linux-based managed nodes only.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBugzillaIds() const{ return m_bugzillaIds; }

    /**
     * <p>The Bugzilla ID of the patch. For example, <code>1600646</code>. Applies to
     * Linux-based managed nodes only.</p>
     */
    inline bool BugzillaIdsHasBeenSet() const { return m_bugzillaIdsHasBeenSet; }

    /**
     * <p>The Bugzilla ID of the patch. For example, <code>1600646</code>. Applies to
     * Linux-based managed nodes only.</p>
     */
    inline void SetBugzillaIds(const Aws::Vector<Aws::String>& value) { m_bugzillaIdsHasBeenSet = true; m_bugzillaIds = value; }

    /**
     * <p>The Bugzilla ID of the patch. For example, <code>1600646</code>. Applies to
     * Linux-based managed nodes only.</p>
     */
    inline void SetBugzillaIds(Aws::Vector<Aws::String>&& value) { m_bugzillaIdsHasBeenSet = true; m_bugzillaIds = std::move(value); }

    /**
     * <p>The Bugzilla ID of the patch. For example, <code>1600646</code>. Applies to
     * Linux-based managed nodes only.</p>
     */
    inline Patch& WithBugzillaIds(const Aws::Vector<Aws::String>& value) { SetBugzillaIds(value); return *this;}

    /**
     * <p>The Bugzilla ID of the patch. For example, <code>1600646</code>. Applies to
     * Linux-based managed nodes only.</p>
     */
    inline Patch& WithBugzillaIds(Aws::Vector<Aws::String>&& value) { SetBugzillaIds(std::move(value)); return *this;}

    /**
     * <p>The Bugzilla ID of the patch. For example, <code>1600646</code>. Applies to
     * Linux-based managed nodes only.</p>
     */
    inline Patch& AddBugzillaIds(const Aws::String& value) { m_bugzillaIdsHasBeenSet = true; m_bugzillaIds.push_back(value); return *this; }

    /**
     * <p>The Bugzilla ID of the patch. For example, <code>1600646</code>. Applies to
     * Linux-based managed nodes only.</p>
     */
    inline Patch& AddBugzillaIds(Aws::String&& value) { m_bugzillaIdsHasBeenSet = true; m_bugzillaIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The Bugzilla ID of the patch. For example, <code>1600646</code>. Applies to
     * Linux-based managed nodes only.</p>
     */
    inline Patch& AddBugzillaIds(const char* value) { m_bugzillaIdsHasBeenSet = true; m_bugzillaIds.push_back(value); return *this; }


    /**
     * <p>The Common Vulnerabilities and Exposures (CVE) ID of the patch. For example,
     * <code>CVE-2011-3192</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCVEIds() const{ return m_cVEIds; }

    /**
     * <p>The Common Vulnerabilities and Exposures (CVE) ID of the patch. For example,
     * <code>CVE-2011-3192</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline bool CVEIdsHasBeenSet() const { return m_cVEIdsHasBeenSet; }

    /**
     * <p>The Common Vulnerabilities and Exposures (CVE) ID of the patch. For example,
     * <code>CVE-2011-3192</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline void SetCVEIds(const Aws::Vector<Aws::String>& value) { m_cVEIdsHasBeenSet = true; m_cVEIds = value; }

    /**
     * <p>The Common Vulnerabilities and Exposures (CVE) ID of the patch. For example,
     * <code>CVE-2011-3192</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline void SetCVEIds(Aws::Vector<Aws::String>&& value) { m_cVEIdsHasBeenSet = true; m_cVEIds = std::move(value); }

    /**
     * <p>The Common Vulnerabilities and Exposures (CVE) ID of the patch. For example,
     * <code>CVE-2011-3192</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline Patch& WithCVEIds(const Aws::Vector<Aws::String>& value) { SetCVEIds(value); return *this;}

    /**
     * <p>The Common Vulnerabilities and Exposures (CVE) ID of the patch. For example,
     * <code>CVE-2011-3192</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline Patch& WithCVEIds(Aws::Vector<Aws::String>&& value) { SetCVEIds(std::move(value)); return *this;}

    /**
     * <p>The Common Vulnerabilities and Exposures (CVE) ID of the patch. For example,
     * <code>CVE-2011-3192</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline Patch& AddCVEIds(const Aws::String& value) { m_cVEIdsHasBeenSet = true; m_cVEIds.push_back(value); return *this; }

    /**
     * <p>The Common Vulnerabilities and Exposures (CVE) ID of the patch. For example,
     * <code>CVE-2011-3192</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline Patch& AddCVEIds(Aws::String&& value) { m_cVEIdsHasBeenSet = true; m_cVEIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The Common Vulnerabilities and Exposures (CVE) ID of the patch. For example,
     * <code>CVE-2011-3192</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline Patch& AddCVEIds(const char* value) { m_cVEIdsHasBeenSet = true; m_cVEIds.push_back(value); return *this; }


    /**
     * <p>The name of the patch. Applies to Linux-based managed nodes only.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the patch. Applies to Linux-based managed nodes only.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the patch. Applies to Linux-based managed nodes only.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the patch. Applies to Linux-based managed nodes only.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the patch. Applies to Linux-based managed nodes only.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the patch. Applies to Linux-based managed nodes only.</p>
     */
    inline Patch& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the patch. Applies to Linux-based managed nodes only.</p>
     */
    inline Patch& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the patch. Applies to Linux-based managed nodes only.</p>
     */
    inline Patch& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The epoch of the patch. For example in
     * <code>pkg-example-EE-20180914-2.2.amzn1.noarch</code>, the epoch value is
     * <code>20180914-2</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline int GetEpoch() const{ return m_epoch; }

    /**
     * <p>The epoch of the patch. For example in
     * <code>pkg-example-EE-20180914-2.2.amzn1.noarch</code>, the epoch value is
     * <code>20180914-2</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline bool EpochHasBeenSet() const { return m_epochHasBeenSet; }

    /**
     * <p>The epoch of the patch. For example in
     * <code>pkg-example-EE-20180914-2.2.amzn1.noarch</code>, the epoch value is
     * <code>20180914-2</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline void SetEpoch(int value) { m_epochHasBeenSet = true; m_epoch = value; }

    /**
     * <p>The epoch of the patch. For example in
     * <code>pkg-example-EE-20180914-2.2.amzn1.noarch</code>, the epoch value is
     * <code>20180914-2</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline Patch& WithEpoch(int value) { SetEpoch(value); return *this;}


    /**
     * <p>The version number of the patch. For example, in
     * <code>example-pkg-1.710.10-2.7.abcd.x86_64</code>, the version number is
     * indicated by <code>-1</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version number of the patch. For example, in
     * <code>example-pkg-1.710.10-2.7.abcd.x86_64</code>, the version number is
     * indicated by <code>-1</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version number of the patch. For example, in
     * <code>example-pkg-1.710.10-2.7.abcd.x86_64</code>, the version number is
     * indicated by <code>-1</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version number of the patch. For example, in
     * <code>example-pkg-1.710.10-2.7.abcd.x86_64</code>, the version number is
     * indicated by <code>-1</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version number of the patch. For example, in
     * <code>example-pkg-1.710.10-2.7.abcd.x86_64</code>, the version number is
     * indicated by <code>-1</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version number of the patch. For example, in
     * <code>example-pkg-1.710.10-2.7.abcd.x86_64</code>, the version number is
     * indicated by <code>-1</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline Patch& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version number of the patch. For example, in
     * <code>example-pkg-1.710.10-2.7.abcd.x86_64</code>, the version number is
     * indicated by <code>-1</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline Patch& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the patch. For example, in
     * <code>example-pkg-1.710.10-2.7.abcd.x86_64</code>, the version number is
     * indicated by <code>-1</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline Patch& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The particular release of a patch. For example, in
     * <code>pkg-example-EE-20180914-2.2.amzn1.noarch</code>, the release is
     * <code>2.amaz1</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline const Aws::String& GetRelease() const{ return m_release; }

    /**
     * <p>The particular release of a patch. For example, in
     * <code>pkg-example-EE-20180914-2.2.amzn1.noarch</code>, the release is
     * <code>2.amaz1</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline bool ReleaseHasBeenSet() const { return m_releaseHasBeenSet; }

    /**
     * <p>The particular release of a patch. For example, in
     * <code>pkg-example-EE-20180914-2.2.amzn1.noarch</code>, the release is
     * <code>2.amaz1</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline void SetRelease(const Aws::String& value) { m_releaseHasBeenSet = true; m_release = value; }

    /**
     * <p>The particular release of a patch. For example, in
     * <code>pkg-example-EE-20180914-2.2.amzn1.noarch</code>, the release is
     * <code>2.amaz1</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline void SetRelease(Aws::String&& value) { m_releaseHasBeenSet = true; m_release = std::move(value); }

    /**
     * <p>The particular release of a patch. For example, in
     * <code>pkg-example-EE-20180914-2.2.amzn1.noarch</code>, the release is
     * <code>2.amaz1</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline void SetRelease(const char* value) { m_releaseHasBeenSet = true; m_release.assign(value); }

    /**
     * <p>The particular release of a patch. For example, in
     * <code>pkg-example-EE-20180914-2.2.amzn1.noarch</code>, the release is
     * <code>2.amaz1</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline Patch& WithRelease(const Aws::String& value) { SetRelease(value); return *this;}

    /**
     * <p>The particular release of a patch. For example, in
     * <code>pkg-example-EE-20180914-2.2.amzn1.noarch</code>, the release is
     * <code>2.amaz1</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline Patch& WithRelease(Aws::String&& value) { SetRelease(std::move(value)); return *this;}

    /**
     * <p>The particular release of a patch. For example, in
     * <code>pkg-example-EE-20180914-2.2.amzn1.noarch</code>, the release is
     * <code>2.amaz1</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline Patch& WithRelease(const char* value) { SetRelease(value); return *this;}


    /**
     * <p>The architecture of the patch. For example, in
     * <code>example-pkg-0.710.10-2.7.abcd.x86_64</code>, the architecture is indicated
     * by <code>x86_64</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline const Aws::String& GetArch() const{ return m_arch; }

    /**
     * <p>The architecture of the patch. For example, in
     * <code>example-pkg-0.710.10-2.7.abcd.x86_64</code>, the architecture is indicated
     * by <code>x86_64</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline bool ArchHasBeenSet() const { return m_archHasBeenSet; }

    /**
     * <p>The architecture of the patch. For example, in
     * <code>example-pkg-0.710.10-2.7.abcd.x86_64</code>, the architecture is indicated
     * by <code>x86_64</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline void SetArch(const Aws::String& value) { m_archHasBeenSet = true; m_arch = value; }

    /**
     * <p>The architecture of the patch. For example, in
     * <code>example-pkg-0.710.10-2.7.abcd.x86_64</code>, the architecture is indicated
     * by <code>x86_64</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline void SetArch(Aws::String&& value) { m_archHasBeenSet = true; m_arch = std::move(value); }

    /**
     * <p>The architecture of the patch. For example, in
     * <code>example-pkg-0.710.10-2.7.abcd.x86_64</code>, the architecture is indicated
     * by <code>x86_64</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline void SetArch(const char* value) { m_archHasBeenSet = true; m_arch.assign(value); }

    /**
     * <p>The architecture of the patch. For example, in
     * <code>example-pkg-0.710.10-2.7.abcd.x86_64</code>, the architecture is indicated
     * by <code>x86_64</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline Patch& WithArch(const Aws::String& value) { SetArch(value); return *this;}

    /**
     * <p>The architecture of the patch. For example, in
     * <code>example-pkg-0.710.10-2.7.abcd.x86_64</code>, the architecture is indicated
     * by <code>x86_64</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline Patch& WithArch(Aws::String&& value) { SetArch(std::move(value)); return *this;}

    /**
     * <p>The architecture of the patch. For example, in
     * <code>example-pkg-0.710.10-2.7.abcd.x86_64</code>, the architecture is indicated
     * by <code>x86_64</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline Patch& WithArch(const char* value) { SetArch(value); return *this;}


    /**
     * <p>The severity level of the patch. For example, <code>CRITICAL</code> or
     * <code>MODERATE</code>.</p>
     */
    inline const Aws::String& GetSeverity() const{ return m_severity; }

    /**
     * <p>The severity level of the patch. For example, <code>CRITICAL</code> or
     * <code>MODERATE</code>.</p>
     */
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    /**
     * <p>The severity level of the patch. For example, <code>CRITICAL</code> or
     * <code>MODERATE</code>.</p>
     */
    inline void SetSeverity(const Aws::String& value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p>The severity level of the patch. For example, <code>CRITICAL</code> or
     * <code>MODERATE</code>.</p>
     */
    inline void SetSeverity(Aws::String&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    /**
     * <p>The severity level of the patch. For example, <code>CRITICAL</code> or
     * <code>MODERATE</code>.</p>
     */
    inline void SetSeverity(const char* value) { m_severityHasBeenSet = true; m_severity.assign(value); }

    /**
     * <p>The severity level of the patch. For example, <code>CRITICAL</code> or
     * <code>MODERATE</code>.</p>
     */
    inline Patch& WithSeverity(const Aws::String& value) { SetSeverity(value); return *this;}

    /**
     * <p>The severity level of the patch. For example, <code>CRITICAL</code> or
     * <code>MODERATE</code>.</p>
     */
    inline Patch& WithSeverity(Aws::String&& value) { SetSeverity(std::move(value)); return *this;}

    /**
     * <p>The severity level of the patch. For example, <code>CRITICAL</code> or
     * <code>MODERATE</code>.</p>
     */
    inline Patch& WithSeverity(const char* value) { SetSeverity(value); return *this;}


    /**
     * <p>The source patch repository for the operating system and version, such as
     * <code>trusty-security</code> for Ubuntu Server 14.04 LTE and
     * <code>focal-security</code> for Ubuntu Server 20.04 LTE. Applies to Linux-based
     * managed nodes only.</p>
     */
    inline const Aws::String& GetRepository() const{ return m_repository; }

    /**
     * <p>The source patch repository for the operating system and version, such as
     * <code>trusty-security</code> for Ubuntu Server 14.04 LTE and
     * <code>focal-security</code> for Ubuntu Server 20.04 LTE. Applies to Linux-based
     * managed nodes only.</p>
     */
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }

    /**
     * <p>The source patch repository for the operating system and version, such as
     * <code>trusty-security</code> for Ubuntu Server 14.04 LTE and
     * <code>focal-security</code> for Ubuntu Server 20.04 LTE. Applies to Linux-based
     * managed nodes only.</p>
     */
    inline void SetRepository(const Aws::String& value) { m_repositoryHasBeenSet = true; m_repository = value; }

    /**
     * <p>The source patch repository for the operating system and version, such as
     * <code>trusty-security</code> for Ubuntu Server 14.04 LTE and
     * <code>focal-security</code> for Ubuntu Server 20.04 LTE. Applies to Linux-based
     * managed nodes only.</p>
     */
    inline void SetRepository(Aws::String&& value) { m_repositoryHasBeenSet = true; m_repository = std::move(value); }

    /**
     * <p>The source patch repository for the operating system and version, such as
     * <code>trusty-security</code> for Ubuntu Server 14.04 LTE and
     * <code>focal-security</code> for Ubuntu Server 20.04 LTE. Applies to Linux-based
     * managed nodes only.</p>
     */
    inline void SetRepository(const char* value) { m_repositoryHasBeenSet = true; m_repository.assign(value); }

    /**
     * <p>The source patch repository for the operating system and version, such as
     * <code>trusty-security</code> for Ubuntu Server 14.04 LTE and
     * <code>focal-security</code> for Ubuntu Server 20.04 LTE. Applies to Linux-based
     * managed nodes only.</p>
     */
    inline Patch& WithRepository(const Aws::String& value) { SetRepository(value); return *this;}

    /**
     * <p>The source patch repository for the operating system and version, such as
     * <code>trusty-security</code> for Ubuntu Server 14.04 LTE and
     * <code>focal-security</code> for Ubuntu Server 20.04 LTE. Applies to Linux-based
     * managed nodes only.</p>
     */
    inline Patch& WithRepository(Aws::String&& value) { SetRepository(std::move(value)); return *this;}

    /**
     * <p>The source patch repository for the operating system and version, such as
     * <code>trusty-security</code> for Ubuntu Server 14.04 LTE and
     * <code>focal-security</code> for Ubuntu Server 20.04 LTE. Applies to Linux-based
     * managed nodes only.</p>
     */
    inline Patch& WithRepository(const char* value) { SetRepository(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_releaseDate;
    bool m_releaseDateHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_contentUrl;
    bool m_contentUrlHasBeenSet = false;

    Aws::String m_vendor;
    bool m_vendorHasBeenSet = false;

    Aws::String m_productFamily;
    bool m_productFamilyHasBeenSet = false;

    Aws::String m_product;
    bool m_productHasBeenSet = false;

    Aws::String m_classification;
    bool m_classificationHasBeenSet = false;

    Aws::String m_msrcSeverity;
    bool m_msrcSeverityHasBeenSet = false;

    Aws::String m_kbNumber;
    bool m_kbNumberHasBeenSet = false;

    Aws::String m_msrcNumber;
    bool m_msrcNumberHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    Aws::Vector<Aws::String> m_advisoryIds;
    bool m_advisoryIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_bugzillaIds;
    bool m_bugzillaIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_cVEIds;
    bool m_cVEIdsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_epoch;
    bool m_epochHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_release;
    bool m_releaseHasBeenSet = false;

    Aws::String m_arch;
    bool m_archHasBeenSet = false;

    Aws::String m_severity;
    bool m_severityHasBeenSet = false;

    Aws::String m_repository;
    bool m_repositoryHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
