/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/serverlessrepo/model/Version.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ServerlessApplicationRepository
{
namespace Model
{
  class UpdateApplicationResult
  {
  public:
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API UpdateApplicationResult() = default;
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API UpdateApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API UpdateApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    UpdateApplicationResult& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the author publishing the app.</p><p>Minimum length=1. Maximum
     * length=127.</p><p>Pattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";</p>
     */
    inline const Aws::String& GetAuthor() const { return m_author; }
    template<typename AuthorT = Aws::String>
    void SetAuthor(AuthorT&& value) { m_authorHasBeenSet = true; m_author = std::forward<AuthorT>(value); }
    template<typename AuthorT = Aws::String>
    UpdateApplicationResult& WithAuthor(AuthorT&& value) { SetAuthor(std::forward<AuthorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time this resource was created.</p>
     */
    inline const Aws::String& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::String>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::String>
    UpdateApplicationResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the application.</p><p>Minimum length=1. Maximum
     * length=256</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateApplicationResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URL with more information about the application, for example the location
     * of your GitHub repository for the application.</p>
     */
    inline const Aws::String& GetHomePageUrl() const { return m_homePageUrl; }
    template<typename HomePageUrlT = Aws::String>
    void SetHomePageUrl(HomePageUrlT&& value) { m_homePageUrlHasBeenSet = true; m_homePageUrl = std::forward<HomePageUrlT>(value); }
    template<typename HomePageUrlT = Aws::String>
    UpdateApplicationResult& WithHomePageUrl(HomePageUrlT&& value) { SetHomePageUrl(std::forward<HomePageUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the author of this application has been verified. This means means
     * that AWS has made a good faith review, as a reasonable and prudent service
     * provider, of the information provided by the requester and has confirmed that
     * the requester's identity is as claimed.</p>
     */
    inline bool GetIsVerifiedAuthor() const { return m_isVerifiedAuthor; }
    inline void SetIsVerifiedAuthor(bool value) { m_isVerifiedAuthorHasBeenSet = true; m_isVerifiedAuthor = value; }
    inline UpdateApplicationResult& WithIsVerifiedAuthor(bool value) { SetIsVerifiedAuthor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Labels to improve discovery of apps in search results.</p><p>Minimum
     * length=1. Maximum length=127. Maximum number of labels: 10</p><p>Pattern:
     * "^[a-zA-Z0-9+\\-_:\\/@]+$";</p>
     */
    inline const Aws::Vector<Aws::String>& GetLabels() const { return m_labels; }
    template<typename LabelsT = Aws::Vector<Aws::String>>
    void SetLabels(LabelsT&& value) { m_labelsHasBeenSet = true; m_labels = std::forward<LabelsT>(value); }
    template<typename LabelsT = Aws::Vector<Aws::String>>
    UpdateApplicationResult& WithLabels(LabelsT&& value) { SetLabels(std::forward<LabelsT>(value)); return *this;}
    template<typename LabelsT = Aws::String>
    UpdateApplicationResult& AddLabels(LabelsT&& value) { m_labelsHasBeenSet = true; m_labels.emplace_back(std::forward<LabelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A link to a license file of the app that matches the spdxLicenseID value of
     * your application.</p><p>Maximum size 5 MB</p>
     */
    inline const Aws::String& GetLicenseUrl() const { return m_licenseUrl; }
    template<typename LicenseUrlT = Aws::String>
    void SetLicenseUrl(LicenseUrlT&& value) { m_licenseUrlHasBeenSet = true; m_licenseUrl = std::forward<LicenseUrlT>(value); }
    template<typename LicenseUrlT = Aws::String>
    UpdateApplicationResult& WithLicenseUrl(LicenseUrlT&& value) { SetLicenseUrl(std::forward<LicenseUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application.</p><p>Minimum length=1. Maximum
     * length=140</p><p>Pattern: "[a-zA-Z0-9\\-]+";</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateApplicationResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A link to the readme file in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5 MB</p>
     */
    inline const Aws::String& GetReadmeUrl() const { return m_readmeUrl; }
    template<typename ReadmeUrlT = Aws::String>
    void SetReadmeUrl(ReadmeUrlT&& value) { m_readmeUrlHasBeenSet = true; m_readmeUrl = std::forward<ReadmeUrlT>(value); }
    template<typename ReadmeUrlT = Aws::String>
    UpdateApplicationResult& WithReadmeUrl(ReadmeUrlT&& value) { SetReadmeUrl(std::forward<ReadmeUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A valid identifier from https://spdx.org/licenses/.</p>
     */
    inline const Aws::String& GetSpdxLicenseId() const { return m_spdxLicenseId; }
    template<typename SpdxLicenseIdT = Aws::String>
    void SetSpdxLicenseId(SpdxLicenseIdT&& value) { m_spdxLicenseIdHasBeenSet = true; m_spdxLicenseId = std::forward<SpdxLicenseIdT>(value); }
    template<typename SpdxLicenseIdT = Aws::String>
    UpdateApplicationResult& WithSpdxLicenseId(SpdxLicenseIdT&& value) { SetSpdxLicenseId(std::forward<SpdxLicenseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to the public profile of a verified author. This URL is submitted by
     * the author.</p>
     */
    inline const Aws::String& GetVerifiedAuthorUrl() const { return m_verifiedAuthorUrl; }
    template<typename VerifiedAuthorUrlT = Aws::String>
    void SetVerifiedAuthorUrl(VerifiedAuthorUrlT&& value) { m_verifiedAuthorUrlHasBeenSet = true; m_verifiedAuthorUrl = std::forward<VerifiedAuthorUrlT>(value); }
    template<typename VerifiedAuthorUrlT = Aws::String>
    UpdateApplicationResult& WithVerifiedAuthorUrl(VerifiedAuthorUrlT&& value) { SetVerifiedAuthorUrl(std::forward<VerifiedAuthorUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version information about the application.</p>
     */
    inline const Version& GetVersion() const { return m_version; }
    template<typename VersionT = Version>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Version>
    UpdateApplicationResult& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateApplicationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_author;
    bool m_authorHasBeenSet = false;

    Aws::String m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_homePageUrl;
    bool m_homePageUrlHasBeenSet = false;

    bool m_isVerifiedAuthor{false};
    bool m_isVerifiedAuthorHasBeenSet = false;

    Aws::Vector<Aws::String> m_labels;
    bool m_labelsHasBeenSet = false;

    Aws::String m_licenseUrl;
    bool m_licenseUrlHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_readmeUrl;
    bool m_readmeUrlHasBeenSet = false;

    Aws::String m_spdxLicenseId;
    bool m_spdxLicenseIdHasBeenSet = false;

    Aws::String m_verifiedAuthorUrl;
    bool m_verifiedAuthorUrlHasBeenSet = false;

    Version m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
