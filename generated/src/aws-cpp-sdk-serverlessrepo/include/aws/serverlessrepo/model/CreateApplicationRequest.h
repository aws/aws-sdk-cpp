/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/serverlessrepo/ServerlessApplicationRepositoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ServerlessApplicationRepository
{
namespace Model
{

  /**
   */
  class CreateApplicationRequest : public ServerlessApplicationRepositoryRequest
  {
  public:
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API CreateApplicationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApplication"; }

    AWS_SERVERLESSAPPLICATIONREPOSITORY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the author publishing the app.</p><p>Minimum length=1. Maximum
     * length=127.</p><p>Pattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";</p>
     */
    inline const Aws::String& GetAuthor() const { return m_author; }
    inline bool AuthorHasBeenSet() const { return m_authorHasBeenSet; }
    template<typename AuthorT = Aws::String>
    void SetAuthor(AuthorT&& value) { m_authorHasBeenSet = true; m_author = std::forward<AuthorT>(value); }
    template<typename AuthorT = Aws::String>
    CreateApplicationRequest& WithAuthor(AuthorT&& value) { SetAuthor(std::forward<AuthorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the application.</p><p>Minimum length=1. Maximum
     * length=256</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateApplicationRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URL with more information about the application, for example the location
     * of your GitHub repository for the application.</p>
     */
    inline const Aws::String& GetHomePageUrl() const { return m_homePageUrl; }
    inline bool HomePageUrlHasBeenSet() const { return m_homePageUrlHasBeenSet; }
    template<typename HomePageUrlT = Aws::String>
    void SetHomePageUrl(HomePageUrlT&& value) { m_homePageUrlHasBeenSet = true; m_homePageUrl = std::forward<HomePageUrlT>(value); }
    template<typename HomePageUrlT = Aws::String>
    CreateApplicationRequest& WithHomePageUrl(HomePageUrlT&& value) { SetHomePageUrl(std::forward<HomePageUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Labels to improve discovery of apps in search results.</p><p>Minimum
     * length=1. Maximum length=127. Maximum number of labels: 10</p><p>Pattern:
     * "^[a-zA-Z0-9+\\-_:\\/@]+$";</p>
     */
    inline const Aws::Vector<Aws::String>& GetLabels() const { return m_labels; }
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }
    template<typename LabelsT = Aws::Vector<Aws::String>>
    void SetLabels(LabelsT&& value) { m_labelsHasBeenSet = true; m_labels = std::forward<LabelsT>(value); }
    template<typename LabelsT = Aws::Vector<Aws::String>>
    CreateApplicationRequest& WithLabels(LabelsT&& value) { SetLabels(std::forward<LabelsT>(value)); return *this;}
    template<typename LabelsT = Aws::String>
    CreateApplicationRequest& AddLabels(LabelsT&& value) { m_labelsHasBeenSet = true; m_labels.emplace_back(std::forward<LabelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A local text file that contains the license of the app that matches the
     * spdxLicenseID value of your application.
 The file has the format
     * file://&lt;path>/&lt;filename>.</p><p>Maximum size 5 MB</p><p>You can specify
     * only one of licenseBody and licenseUrl; otherwise, an error results.</p>
     */
    inline const Aws::String& GetLicenseBody() const { return m_licenseBody; }
    inline bool LicenseBodyHasBeenSet() const { return m_licenseBodyHasBeenSet; }
    template<typename LicenseBodyT = Aws::String>
    void SetLicenseBody(LicenseBodyT&& value) { m_licenseBodyHasBeenSet = true; m_licenseBody = std::forward<LicenseBodyT>(value); }
    template<typename LicenseBodyT = Aws::String>
    CreateApplicationRequest& WithLicenseBody(LicenseBodyT&& value) { SetLicenseBody(std::forward<LicenseBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A link to the S3 object that contains the license of the app that matches the
     * spdxLicenseID value of your application.</p><p>Maximum size 5 MB</p><p>You can
     * specify only one of licenseBody and licenseUrl; otherwise, an error results.</p>
     */
    inline const Aws::String& GetLicenseUrl() const { return m_licenseUrl; }
    inline bool LicenseUrlHasBeenSet() const { return m_licenseUrlHasBeenSet; }
    template<typename LicenseUrlT = Aws::String>
    void SetLicenseUrl(LicenseUrlT&& value) { m_licenseUrlHasBeenSet = true; m_licenseUrl = std::forward<LicenseUrlT>(value); }
    template<typename LicenseUrlT = Aws::String>
    CreateApplicationRequest& WithLicenseUrl(LicenseUrlT&& value) { SetLicenseUrl(std::forward<LicenseUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application that you want to publish.</p><p>Minimum length=1.
     * Maximum length=140</p><p>Pattern: "[a-zA-Z0-9\\-]+";</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateApplicationRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A local text readme file in Markdown language that contains a more detailed
     * description of the application and how it works.
 The file has the format
     * file://&lt;path>/&lt;filename>.</p><p>Maximum size 5 MB</p><p>You can specify
     * only one of readmeBody and readmeUrl; otherwise, an error results.</p>
     */
    inline const Aws::String& GetReadmeBody() const { return m_readmeBody; }
    inline bool ReadmeBodyHasBeenSet() const { return m_readmeBodyHasBeenSet; }
    template<typename ReadmeBodyT = Aws::String>
    void SetReadmeBody(ReadmeBodyT&& value) { m_readmeBodyHasBeenSet = true; m_readmeBody = std::forward<ReadmeBodyT>(value); }
    template<typename ReadmeBodyT = Aws::String>
    CreateApplicationRequest& WithReadmeBody(ReadmeBodyT&& value) { SetReadmeBody(std::forward<ReadmeBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A link to the S3 object in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5
     * MB</p><p>You can specify only one of readmeBody and readmeUrl; otherwise, an
     * error results.</p>
     */
    inline const Aws::String& GetReadmeUrl() const { return m_readmeUrl; }
    inline bool ReadmeUrlHasBeenSet() const { return m_readmeUrlHasBeenSet; }
    template<typename ReadmeUrlT = Aws::String>
    void SetReadmeUrl(ReadmeUrlT&& value) { m_readmeUrlHasBeenSet = true; m_readmeUrl = std::forward<ReadmeUrlT>(value); }
    template<typename ReadmeUrlT = Aws::String>
    CreateApplicationRequest& WithReadmeUrl(ReadmeUrlT&& value) { SetReadmeUrl(std::forward<ReadmeUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline const Aws::String& GetSemanticVersion() const { return m_semanticVersion; }
    inline bool SemanticVersionHasBeenSet() const { return m_semanticVersionHasBeenSet; }
    template<typename SemanticVersionT = Aws::String>
    void SetSemanticVersion(SemanticVersionT&& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = std::forward<SemanticVersionT>(value); }
    template<typename SemanticVersionT = Aws::String>
    CreateApplicationRequest& WithSemanticVersion(SemanticVersionT&& value) { SetSemanticVersion(std::forward<SemanticVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A link to the S3 object that contains the ZIP archive of the source code for
     * this version of your application.</p><p>Maximum size 50 MB</p>
     */
    inline const Aws::String& GetSourceCodeArchiveUrl() const { return m_sourceCodeArchiveUrl; }
    inline bool SourceCodeArchiveUrlHasBeenSet() const { return m_sourceCodeArchiveUrlHasBeenSet; }
    template<typename SourceCodeArchiveUrlT = Aws::String>
    void SetSourceCodeArchiveUrl(SourceCodeArchiveUrlT&& value) { m_sourceCodeArchiveUrlHasBeenSet = true; m_sourceCodeArchiveUrl = std::forward<SourceCodeArchiveUrlT>(value); }
    template<typename SourceCodeArchiveUrlT = Aws::String>
    CreateApplicationRequest& WithSourceCodeArchiveUrl(SourceCodeArchiveUrlT&& value) { SetSourceCodeArchiveUrl(std::forward<SourceCodeArchiveUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A link to a public repository for the source code of your application, for
     * example the URL of a specific GitHub commit.</p>
     */
    inline const Aws::String& GetSourceCodeUrl() const { return m_sourceCodeUrl; }
    inline bool SourceCodeUrlHasBeenSet() const { return m_sourceCodeUrlHasBeenSet; }
    template<typename SourceCodeUrlT = Aws::String>
    void SetSourceCodeUrl(SourceCodeUrlT&& value) { m_sourceCodeUrlHasBeenSet = true; m_sourceCodeUrl = std::forward<SourceCodeUrlT>(value); }
    template<typename SourceCodeUrlT = Aws::String>
    CreateApplicationRequest& WithSourceCodeUrl(SourceCodeUrlT&& value) { SetSourceCodeUrl(std::forward<SourceCodeUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A valid identifier from <a
     * href="https://spdx.org/licenses/">https://spdx.org/licenses/</a>.</p>
     */
    inline const Aws::String& GetSpdxLicenseId() const { return m_spdxLicenseId; }
    inline bool SpdxLicenseIdHasBeenSet() const { return m_spdxLicenseIdHasBeenSet; }
    template<typename SpdxLicenseIdT = Aws::String>
    void SetSpdxLicenseId(SpdxLicenseIdT&& value) { m_spdxLicenseIdHasBeenSet = true; m_spdxLicenseId = std::forward<SpdxLicenseIdT>(value); }
    template<typename SpdxLicenseIdT = Aws::String>
    CreateApplicationRequest& WithSpdxLicenseId(SpdxLicenseIdT&& value) { SetSpdxLicenseId(std::forward<SpdxLicenseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The local raw packaged AWS SAM template file of your application.
 The file
     * has the format file://&lt;path>/&lt;filename>.</p><p>You can specify only one of
     * templateBody and templateUrl; otherwise an error results.</p>
     */
    inline const Aws::String& GetTemplateBody() const { return m_templateBody; }
    inline bool TemplateBodyHasBeenSet() const { return m_templateBodyHasBeenSet; }
    template<typename TemplateBodyT = Aws::String>
    void SetTemplateBody(TemplateBodyT&& value) { m_templateBodyHasBeenSet = true; m_templateBody = std::forward<TemplateBodyT>(value); }
    template<typename TemplateBodyT = Aws::String>
    CreateApplicationRequest& WithTemplateBody(TemplateBodyT&& value) { SetTemplateBody(std::forward<TemplateBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A link to the S3 object containing the packaged AWS SAM template of your
     * application.</p><p>You can specify only one of templateBody and templateUrl;
     * otherwise an error results.</p>
     */
    inline const Aws::String& GetTemplateUrl() const { return m_templateUrl; }
    inline bool TemplateUrlHasBeenSet() const { return m_templateUrlHasBeenSet; }
    template<typename TemplateUrlT = Aws::String>
    void SetTemplateUrl(TemplateUrlT&& value) { m_templateUrlHasBeenSet = true; m_templateUrl = std::forward<TemplateUrlT>(value); }
    template<typename TemplateUrlT = Aws::String>
    CreateApplicationRequest& WithTemplateUrl(TemplateUrlT&& value) { SetTemplateUrl(std::forward<TemplateUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_author;
    bool m_authorHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_homePageUrl;
    bool m_homePageUrlHasBeenSet = false;

    Aws::Vector<Aws::String> m_labels;
    bool m_labelsHasBeenSet = false;

    Aws::String m_licenseBody;
    bool m_licenseBodyHasBeenSet = false;

    Aws::String m_licenseUrl;
    bool m_licenseUrlHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_readmeBody;
    bool m_readmeBodyHasBeenSet = false;

    Aws::String m_readmeUrl;
    bool m_readmeUrlHasBeenSet = false;

    Aws::String m_semanticVersion;
    bool m_semanticVersionHasBeenSet = false;

    Aws::String m_sourceCodeArchiveUrl;
    bool m_sourceCodeArchiveUrlHasBeenSet = false;

    Aws::String m_sourceCodeUrl;
    bool m_sourceCodeUrlHasBeenSet = false;

    Aws::String m_spdxLicenseId;
    bool m_spdxLicenseIdHasBeenSet = false;

    Aws::String m_templateBody;
    bool m_templateBodyHasBeenSet = false;

    Aws::String m_templateUrl;
    bool m_templateUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
