/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
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
namespace ServerlessApplicationRepository
{
namespace Model
{

  /**
   * <p>An application version summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/VersionSummary">AWS
   * API Reference</a></p>
   */
  class VersionSummary
  {
  public:
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API VersionSummary();
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API VersionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API VersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline VersionSummary& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline VersionSummary& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline VersionSummary& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time this resource was created.</p>
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::String& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::String&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline void SetCreationTime(const char* value) { m_creationTimeHasBeenSet = true; m_creationTime.assign(value); }
    inline VersionSummary& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}
    inline VersionSummary& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}
    inline VersionSummary& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline const Aws::String& GetSemanticVersion() const{ return m_semanticVersion; }
    inline bool SemanticVersionHasBeenSet() const { return m_semanticVersionHasBeenSet; }
    inline void SetSemanticVersion(const Aws::String& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = value; }
    inline void SetSemanticVersion(Aws::String&& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = std::move(value); }
    inline void SetSemanticVersion(const char* value) { m_semanticVersionHasBeenSet = true; m_semanticVersion.assign(value); }
    inline VersionSummary& WithSemanticVersion(const Aws::String& value) { SetSemanticVersion(value); return *this;}
    inline VersionSummary& WithSemanticVersion(Aws::String&& value) { SetSemanticVersion(std::move(value)); return *this;}
    inline VersionSummary& WithSemanticVersion(const char* value) { SetSemanticVersion(value); return *this;}
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
    inline VersionSummary& WithSourceCodeUrl(const Aws::String& value) { SetSourceCodeUrl(value); return *this;}
    inline VersionSummary& WithSourceCodeUrl(Aws::String&& value) { SetSourceCodeUrl(std::move(value)); return *this;}
    inline VersionSummary& WithSourceCodeUrl(const char* value) { SetSourceCodeUrl(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_semanticVersion;
    bool m_semanticVersionHasBeenSet = false;

    Aws::String m_sourceCodeUrl;
    bool m_sourceCodeUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
