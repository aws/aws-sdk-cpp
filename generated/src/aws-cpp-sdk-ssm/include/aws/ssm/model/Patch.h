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
    AWS_SSM_API Patch() = default;
    AWS_SSM_API Patch(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Patch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the patch. Applies to Windows patches only.</p>  <p>This ID
     * isn't the same as the Microsoft Knowledge Base ID.</p> 
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Patch& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the patch was released.</p>
     */
    inline const Aws::Utils::DateTime& GetReleaseDate() const { return m_releaseDate; }
    inline bool ReleaseDateHasBeenSet() const { return m_releaseDateHasBeenSet; }
    template<typename ReleaseDateT = Aws::Utils::DateTime>
    void SetReleaseDate(ReleaseDateT&& value) { m_releaseDateHasBeenSet = true; m_releaseDate = std::forward<ReleaseDateT>(value); }
    template<typename ReleaseDateT = Aws::Utils::DateTime>
    Patch& WithReleaseDate(ReleaseDateT&& value) { SetReleaseDate(std::forward<ReleaseDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the patch.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    Patch& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the patch.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Patch& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL where more information can be obtained about the patch.</p>
     */
    inline const Aws::String& GetContentUrl() const { return m_contentUrl; }
    inline bool ContentUrlHasBeenSet() const { return m_contentUrlHasBeenSet; }
    template<typename ContentUrlT = Aws::String>
    void SetContentUrl(ContentUrlT&& value) { m_contentUrlHasBeenSet = true; m_contentUrl = std::forward<ContentUrlT>(value); }
    template<typename ContentUrlT = Aws::String>
    Patch& WithContentUrl(ContentUrlT&& value) { SetContentUrl(std::forward<ContentUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the vendor providing the patch.</p>
     */
    inline const Aws::String& GetVendor() const { return m_vendor; }
    inline bool VendorHasBeenSet() const { return m_vendorHasBeenSet; }
    template<typename VendorT = Aws::String>
    void SetVendor(VendorT&& value) { m_vendorHasBeenSet = true; m_vendor = std::forward<VendorT>(value); }
    template<typename VendorT = Aws::String>
    Patch& WithVendor(VendorT&& value) { SetVendor(std::forward<VendorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product family the patch is applicable for. For example,
     * <code>Windows</code> or <code>Amazon Linux 2</code>.</p>
     */
    inline const Aws::String& GetProductFamily() const { return m_productFamily; }
    inline bool ProductFamilyHasBeenSet() const { return m_productFamilyHasBeenSet; }
    template<typename ProductFamilyT = Aws::String>
    void SetProductFamily(ProductFamilyT&& value) { m_productFamilyHasBeenSet = true; m_productFamily = std::forward<ProductFamilyT>(value); }
    template<typename ProductFamilyT = Aws::String>
    Patch& WithProductFamily(ProductFamilyT&& value) { SetProductFamily(std::forward<ProductFamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific product the patch is applicable for. For example,
     * <code>WindowsServer2016</code> or <code>AmazonLinux2018.03</code>.</p>
     */
    inline const Aws::String& GetProduct() const { return m_product; }
    inline bool ProductHasBeenSet() const { return m_productHasBeenSet; }
    template<typename ProductT = Aws::String>
    void SetProduct(ProductT&& value) { m_productHasBeenSet = true; m_product = std::forward<ProductT>(value); }
    template<typename ProductT = Aws::String>
    Patch& WithProduct(ProductT&& value) { SetProduct(std::forward<ProductT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The classification of the patch. For example, <code>SecurityUpdates</code>,
     * <code>Updates</code>, or <code>CriticalUpdates</code>.</p>
     */
    inline const Aws::String& GetClassification() const { return m_classification; }
    inline bool ClassificationHasBeenSet() const { return m_classificationHasBeenSet; }
    template<typename ClassificationT = Aws::String>
    void SetClassification(ClassificationT&& value) { m_classificationHasBeenSet = true; m_classification = std::forward<ClassificationT>(value); }
    template<typename ClassificationT = Aws::String>
    Patch& WithClassification(ClassificationT&& value) { SetClassification(std::forward<ClassificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity of the patch, such as <code>Critical</code>,
     * <code>Important</code>, or <code>Moderate</code>. Applies to Windows patches
     * only.</p>
     */
    inline const Aws::String& GetMsrcSeverity() const { return m_msrcSeverity; }
    inline bool MsrcSeverityHasBeenSet() const { return m_msrcSeverityHasBeenSet; }
    template<typename MsrcSeverityT = Aws::String>
    void SetMsrcSeverity(MsrcSeverityT&& value) { m_msrcSeverityHasBeenSet = true; m_msrcSeverity = std::forward<MsrcSeverityT>(value); }
    template<typename MsrcSeverityT = Aws::String>
    Patch& WithMsrcSeverity(MsrcSeverityT&& value) { SetMsrcSeverity(std::forward<MsrcSeverityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Microsoft Knowledge Base ID of the patch. Applies to Windows patches
     * only.</p>
     */
    inline const Aws::String& GetKbNumber() const { return m_kbNumber; }
    inline bool KbNumberHasBeenSet() const { return m_kbNumberHasBeenSet; }
    template<typename KbNumberT = Aws::String>
    void SetKbNumber(KbNumberT&& value) { m_kbNumberHasBeenSet = true; m_kbNumber = std::forward<KbNumberT>(value); }
    template<typename KbNumberT = Aws::String>
    Patch& WithKbNumber(KbNumberT&& value) { SetKbNumber(std::forward<KbNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Microsoft Security Response Center (MSRC) bulletin the patch is
     * related to. For example, <code>MS14-045</code>. Applies to Windows patches
     * only.</p>
     */
    inline const Aws::String& GetMsrcNumber() const { return m_msrcNumber; }
    inline bool MsrcNumberHasBeenSet() const { return m_msrcNumberHasBeenSet; }
    template<typename MsrcNumberT = Aws::String>
    void SetMsrcNumber(MsrcNumberT&& value) { m_msrcNumberHasBeenSet = true; m_msrcNumber = std::forward<MsrcNumberT>(value); }
    template<typename MsrcNumberT = Aws::String>
    Patch& WithMsrcNumber(MsrcNumberT&& value) { SetMsrcNumber(std::forward<MsrcNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language of the patch if it's language-specific.</p>
     */
    inline const Aws::String& GetLanguage() const { return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    template<typename LanguageT = Aws::String>
    void SetLanguage(LanguageT&& value) { m_languageHasBeenSet = true; m_language = std::forward<LanguageT>(value); }
    template<typename LanguageT = Aws::String>
    Patch& WithLanguage(LanguageT&& value) { SetLanguage(std::forward<LanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Advisory ID of the patch. For example, <code>RHSA-2020:3779</code>.
     * Applies to Linux-based managed nodes only.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdvisoryIds() const { return m_advisoryIds; }
    inline bool AdvisoryIdsHasBeenSet() const { return m_advisoryIdsHasBeenSet; }
    template<typename AdvisoryIdsT = Aws::Vector<Aws::String>>
    void SetAdvisoryIds(AdvisoryIdsT&& value) { m_advisoryIdsHasBeenSet = true; m_advisoryIds = std::forward<AdvisoryIdsT>(value); }
    template<typename AdvisoryIdsT = Aws::Vector<Aws::String>>
    Patch& WithAdvisoryIds(AdvisoryIdsT&& value) { SetAdvisoryIds(std::forward<AdvisoryIdsT>(value)); return *this;}
    template<typename AdvisoryIdsT = Aws::String>
    Patch& AddAdvisoryIds(AdvisoryIdsT&& value) { m_advisoryIdsHasBeenSet = true; m_advisoryIds.emplace_back(std::forward<AdvisoryIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Bugzilla ID of the patch. For example, <code>1600646</code>. Applies to
     * Linux-based managed nodes only.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBugzillaIds() const { return m_bugzillaIds; }
    inline bool BugzillaIdsHasBeenSet() const { return m_bugzillaIdsHasBeenSet; }
    template<typename BugzillaIdsT = Aws::Vector<Aws::String>>
    void SetBugzillaIds(BugzillaIdsT&& value) { m_bugzillaIdsHasBeenSet = true; m_bugzillaIds = std::forward<BugzillaIdsT>(value); }
    template<typename BugzillaIdsT = Aws::Vector<Aws::String>>
    Patch& WithBugzillaIds(BugzillaIdsT&& value) { SetBugzillaIds(std::forward<BugzillaIdsT>(value)); return *this;}
    template<typename BugzillaIdsT = Aws::String>
    Patch& AddBugzillaIds(BugzillaIdsT&& value) { m_bugzillaIdsHasBeenSet = true; m_bugzillaIds.emplace_back(std::forward<BugzillaIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Common Vulnerabilities and Exposures (CVE) ID of the patch. For example,
     * <code>CVE-2011-3192</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCVEIds() const { return m_cVEIds; }
    inline bool CVEIdsHasBeenSet() const { return m_cVEIdsHasBeenSet; }
    template<typename CVEIdsT = Aws::Vector<Aws::String>>
    void SetCVEIds(CVEIdsT&& value) { m_cVEIdsHasBeenSet = true; m_cVEIds = std::forward<CVEIdsT>(value); }
    template<typename CVEIdsT = Aws::Vector<Aws::String>>
    Patch& WithCVEIds(CVEIdsT&& value) { SetCVEIds(std::forward<CVEIdsT>(value)); return *this;}
    template<typename CVEIdsT = Aws::String>
    Patch& AddCVEIds(CVEIdsT&& value) { m_cVEIdsHasBeenSet = true; m_cVEIds.emplace_back(std::forward<CVEIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the patch. Applies to Linux-based managed nodes only.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Patch& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The epoch of the patch. For example in
     * <code>pkg-example-EE-20180914-2.2.amzn1.noarch</code>, the epoch value is
     * <code>20180914-2</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline int GetEpoch() const { return m_epoch; }
    inline bool EpochHasBeenSet() const { return m_epochHasBeenSet; }
    inline void SetEpoch(int value) { m_epochHasBeenSet = true; m_epoch = value; }
    inline Patch& WithEpoch(int value) { SetEpoch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the patch. For example, in
     * <code>example-pkg-1.710.10-2.7.abcd.x86_64</code>, the version number is
     * indicated by <code>-1</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    Patch& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The particular release of a patch. For example, in
     * <code>pkg-example-EE-20180914-2.2.amzn1.noarch</code>, the release is
     * <code>2.amaz1</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline const Aws::String& GetRelease() const { return m_release; }
    inline bool ReleaseHasBeenSet() const { return m_releaseHasBeenSet; }
    template<typename ReleaseT = Aws::String>
    void SetRelease(ReleaseT&& value) { m_releaseHasBeenSet = true; m_release = std::forward<ReleaseT>(value); }
    template<typename ReleaseT = Aws::String>
    Patch& WithRelease(ReleaseT&& value) { SetRelease(std::forward<ReleaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The architecture of the patch. For example, in
     * <code>example-pkg-0.710.10-2.7.abcd.x86_64</code>, the architecture is indicated
     * by <code>x86_64</code>. Applies to Linux-based managed nodes only.</p>
     */
    inline const Aws::String& GetArch() const { return m_arch; }
    inline bool ArchHasBeenSet() const { return m_archHasBeenSet; }
    template<typename ArchT = Aws::String>
    void SetArch(ArchT&& value) { m_archHasBeenSet = true; m_arch = std::forward<ArchT>(value); }
    template<typename ArchT = Aws::String>
    Patch& WithArch(ArchT&& value) { SetArch(std::forward<ArchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity level of the patch. For example, <code>CRITICAL</code> or
     * <code>MODERATE</code>.</p>
     */
    inline const Aws::String& GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    template<typename SeverityT = Aws::String>
    void SetSeverity(SeverityT&& value) { m_severityHasBeenSet = true; m_severity = std::forward<SeverityT>(value); }
    template<typename SeverityT = Aws::String>
    Patch& WithSeverity(SeverityT&& value) { SetSeverity(std::forward<SeverityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source patch repository for the operating system and version, such as
     * <code>trusty-security</code> for Ubuntu Server 14.04 LTE and
     * <code>focal-security</code> for Ubuntu Server 20.04 LTE. Applies to Linux-based
     * managed nodes only.</p>
     */
    inline const Aws::String& GetRepository() const { return m_repository; }
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }
    template<typename RepositoryT = Aws::String>
    void SetRepository(RepositoryT&& value) { m_repositoryHasBeenSet = true; m_repository = std::forward<RepositoryT>(value); }
    template<typename RepositoryT = Aws::String>
    Patch& WithRepository(RepositoryT&& value) { SetRepository(std::forward<RepositoryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_releaseDate{};
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

    int m_epoch{0};
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
