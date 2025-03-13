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
  class UpdateApplicationRequest : public ServerlessApplicationRepositoryRequest
  {
  public:
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API UpdateApplicationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplication"; }

    AWS_SERVERLESSAPPLICATIONREPOSITORY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    UpdateApplicationRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

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
    UpdateApplicationRequest& WithAuthor(AuthorT&& value) { SetAuthor(std::forward<AuthorT>(value)); return *this;}
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
    UpdateApplicationRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    UpdateApplicationRequest& WithHomePageUrl(HomePageUrlT&& value) { SetHomePageUrl(std::forward<HomePageUrlT>(value)); return *this;}
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
    UpdateApplicationRequest& WithLabels(LabelsT&& value) { SetLabels(std::forward<LabelsT>(value)); return *this;}
    template<typename LabelsT = Aws::String>
    UpdateApplicationRequest& AddLabels(LabelsT&& value) { m_labelsHasBeenSet = true; m_labels.emplace_back(std::forward<LabelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A text readme file in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5 MB</p>
     */
    inline const Aws::String& GetReadmeBody() const { return m_readmeBody; }
    inline bool ReadmeBodyHasBeenSet() const { return m_readmeBodyHasBeenSet; }
    template<typename ReadmeBodyT = Aws::String>
    void SetReadmeBody(ReadmeBodyT&& value) { m_readmeBodyHasBeenSet = true; m_readmeBody = std::forward<ReadmeBodyT>(value); }
    template<typename ReadmeBodyT = Aws::String>
    UpdateApplicationRequest& WithReadmeBody(ReadmeBodyT&& value) { SetReadmeBody(std::forward<ReadmeBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A link to the readme file in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5 MB</p>
     */
    inline const Aws::String& GetReadmeUrl() const { return m_readmeUrl; }
    inline bool ReadmeUrlHasBeenSet() const { return m_readmeUrlHasBeenSet; }
    template<typename ReadmeUrlT = Aws::String>
    void SetReadmeUrl(ReadmeUrlT&& value) { m_readmeUrlHasBeenSet = true; m_readmeUrl = std::forward<ReadmeUrlT>(value); }
    template<typename ReadmeUrlT = Aws::String>
    UpdateApplicationRequest& WithReadmeUrl(ReadmeUrlT&& value) { SetReadmeUrl(std::forward<ReadmeUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_author;
    bool m_authorHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_homePageUrl;
    bool m_homePageUrlHasBeenSet = false;

    Aws::Vector<Aws::String> m_labels;
    bool m_labelsHasBeenSet = false;

    Aws::String m_readmeBody;
    bool m_readmeBodyHasBeenSet = false;

    Aws::String m_readmeUrl;
    bool m_readmeUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
