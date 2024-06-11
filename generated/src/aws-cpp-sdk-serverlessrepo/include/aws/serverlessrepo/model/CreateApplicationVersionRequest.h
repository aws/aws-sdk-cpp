/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/serverlessrepo/ServerlessApplicationRepositoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ServerlessApplicationRepository
{
namespace Model
{

  /**
   */
  class CreateApplicationVersionRequest : public ServerlessApplicationRepositoryRequest
  {
  public:
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API CreateApplicationVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApplicationVersion"; }

    AWS_SERVERLESSAPPLICATIONREPOSITORY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline CreateApplicationVersionRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline CreateApplicationVersionRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline CreateApplicationVersionRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The semantic version of the new version.</p>
     */
    inline const Aws::String& GetSemanticVersion() const{ return m_semanticVersion; }
    inline bool SemanticVersionHasBeenSet() const { return m_semanticVersionHasBeenSet; }
    inline void SetSemanticVersion(const Aws::String& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = value; }
    inline void SetSemanticVersion(Aws::String&& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = std::move(value); }
    inline void SetSemanticVersion(const char* value) { m_semanticVersionHasBeenSet = true; m_semanticVersion.assign(value); }
    inline CreateApplicationVersionRequest& WithSemanticVersion(const Aws::String& value) { SetSemanticVersion(value); return *this;}
    inline CreateApplicationVersionRequest& WithSemanticVersion(Aws::String&& value) { SetSemanticVersion(std::move(value)); return *this;}
    inline CreateApplicationVersionRequest& WithSemanticVersion(const char* value) { SetSemanticVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A link to the S3 object that contains the ZIP archive of the source code for
     * this version of your application.</p><p>Maximum size 50 MB</p>
     */
    inline const Aws::String& GetSourceCodeArchiveUrl() const{ return m_sourceCodeArchiveUrl; }
    inline bool SourceCodeArchiveUrlHasBeenSet() const { return m_sourceCodeArchiveUrlHasBeenSet; }
    inline void SetSourceCodeArchiveUrl(const Aws::String& value) { m_sourceCodeArchiveUrlHasBeenSet = true; m_sourceCodeArchiveUrl = value; }
    inline void SetSourceCodeArchiveUrl(Aws::String&& value) { m_sourceCodeArchiveUrlHasBeenSet = true; m_sourceCodeArchiveUrl = std::move(value); }
    inline void SetSourceCodeArchiveUrl(const char* value) { m_sourceCodeArchiveUrlHasBeenSet = true; m_sourceCodeArchiveUrl.assign(value); }
    inline CreateApplicationVersionRequest& WithSourceCodeArchiveUrl(const Aws::String& value) { SetSourceCodeArchiveUrl(value); return *this;}
    inline CreateApplicationVersionRequest& WithSourceCodeArchiveUrl(Aws::String&& value) { SetSourceCodeArchiveUrl(std::move(value)); return *this;}
    inline CreateApplicationVersionRequest& WithSourceCodeArchiveUrl(const char* value) { SetSourceCodeArchiveUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A link to a public repository for the source code of your application, for
     * example the URL of a specific GitHub commit.</p>
     */
    inline const Aws::String& GetSourceCodeUrl() const{ return m_sourceCodeUrl; }
    inline bool SourceCodeUrlHasBeenSet() const { return m_sourceCodeUrlHasBeenSet; }
    inline void SetSourceCodeUrl(const Aws::String& value) { m_sourceCodeUrlHasBeenSet = true; m_sourceCodeUrl = value; }
    inline void SetSourceCodeUrl(Aws::String&& value) { m_sourceCodeUrlHasBeenSet = true; m_sourceCodeUrl = std::move(value); }
    inline void SetSourceCodeUrl(const char* value) { m_sourceCodeUrlHasBeenSet = true; m_sourceCodeUrl.assign(value); }
    inline CreateApplicationVersionRequest& WithSourceCodeUrl(const Aws::String& value) { SetSourceCodeUrl(value); return *this;}
    inline CreateApplicationVersionRequest& WithSourceCodeUrl(Aws::String&& value) { SetSourceCodeUrl(std::move(value)); return *this;}
    inline CreateApplicationVersionRequest& WithSourceCodeUrl(const char* value) { SetSourceCodeUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The raw packaged AWS SAM template of your application.</p>
     */
    inline const Aws::String& GetTemplateBody() const{ return m_templateBody; }
    inline bool TemplateBodyHasBeenSet() const { return m_templateBodyHasBeenSet; }
    inline void SetTemplateBody(const Aws::String& value) { m_templateBodyHasBeenSet = true; m_templateBody = value; }
    inline void SetTemplateBody(Aws::String&& value) { m_templateBodyHasBeenSet = true; m_templateBody = std::move(value); }
    inline void SetTemplateBody(const char* value) { m_templateBodyHasBeenSet = true; m_templateBody.assign(value); }
    inline CreateApplicationVersionRequest& WithTemplateBody(const Aws::String& value) { SetTemplateBody(value); return *this;}
    inline CreateApplicationVersionRequest& WithTemplateBody(Aws::String&& value) { SetTemplateBody(std::move(value)); return *this;}
    inline CreateApplicationVersionRequest& WithTemplateBody(const char* value) { SetTemplateBody(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A link to the packaged AWS SAM template of your application.</p>
     */
    inline const Aws::String& GetTemplateUrl() const{ return m_templateUrl; }
    inline bool TemplateUrlHasBeenSet() const { return m_templateUrlHasBeenSet; }
    inline void SetTemplateUrl(const Aws::String& value) { m_templateUrlHasBeenSet = true; m_templateUrl = value; }
    inline void SetTemplateUrl(Aws::String&& value) { m_templateUrlHasBeenSet = true; m_templateUrl = std::move(value); }
    inline void SetTemplateUrl(const char* value) { m_templateUrlHasBeenSet = true; m_templateUrl.assign(value); }
    inline CreateApplicationVersionRequest& WithTemplateUrl(const Aws::String& value) { SetTemplateUrl(value); return *this;}
    inline CreateApplicationVersionRequest& WithTemplateUrl(Aws::String&& value) { SetTemplateUrl(std::move(value)); return *this;}
    inline CreateApplicationVersionRequest& WithTemplateUrl(const char* value) { SetTemplateUrl(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_semanticVersion;
    bool m_semanticVersionHasBeenSet = false;

    Aws::String m_sourceCodeArchiveUrl;
    bool m_sourceCodeArchiveUrlHasBeenSet = false;

    Aws::String m_sourceCodeUrl;
    bool m_sourceCodeUrlHasBeenSet = false;

    Aws::String m_templateBody;
    bool m_templateBodyHasBeenSet = false;

    Aws::String m_templateUrl;
    bool m_templateUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
