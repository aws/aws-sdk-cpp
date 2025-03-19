/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/serverlessrepo/model/ParameterDefinition.h>
#include <aws/serverlessrepo/model/Capability.h>
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
   * <p>Application version details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/Version">AWS
   * API Reference</a></p>
   */
  class Version
  {
  public:
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API Version() = default;
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API Version(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API Version& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    Version& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time this resource was created.</p>
     */
    inline const Aws::String& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::String>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::String>
    Version& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of parameter types supported by the application.</p>
     */
    inline const Aws::Vector<ParameterDefinition>& GetParameterDefinitions() const { return m_parameterDefinitions; }
    inline bool ParameterDefinitionsHasBeenSet() const { return m_parameterDefinitionsHasBeenSet; }
    template<typename ParameterDefinitionsT = Aws::Vector<ParameterDefinition>>
    void SetParameterDefinitions(ParameterDefinitionsT&& value) { m_parameterDefinitionsHasBeenSet = true; m_parameterDefinitions = std::forward<ParameterDefinitionsT>(value); }
    template<typename ParameterDefinitionsT = Aws::Vector<ParameterDefinition>>
    Version& WithParameterDefinitions(ParameterDefinitionsT&& value) { SetParameterDefinitions(std::forward<ParameterDefinitionsT>(value)); return *this;}
    template<typename ParameterDefinitionsT = ParameterDefinition>
    Version& AddParameterDefinitions(ParameterDefinitionsT&& value) { m_parameterDefinitionsHasBeenSet = true; m_parameterDefinitions.emplace_back(std::forward<ParameterDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of values that you must specify before you can deploy certain
     * applications.
 Some applications might include resources that can affect
     * permissions in your AWS
 account, for example, by creating new AWS Identity and
     * Access Management (IAM) users.
 For those applications, you must explicitly
     * acknowledge their capabilities by
 specifying this parameter.</p><p>The only
     * valid values are CAPABILITY_IAM, CAPABILITY_NAMED_IAM,

     * CAPABILITY_RESOURCE_POLICY, and CAPABILITY_AUTO_EXPAND.</p><p>The following
     * resources require you to specify CAPABILITY_IAM or
 CAPABILITY_NAMED_IAM:
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-group.html">AWS::IAM::Group</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-instanceprofile.html">AWS::IAM::InstanceProfile</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-policy.html">AWS::IAM::Policy</a>,
     * and
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-role.html">AWS::IAM::Role</a>.

     * If the application contains IAM resources, you can specify either
     * CAPABILITY_IAM
 or CAPABILITY_NAMED_IAM. If the application contains IAM
     * resources
 with custom names, you must specify CAPABILITY_NAMED_IAM.</p><p>The
     * following resources require you to specify CAPABILITY_RESOURCE_POLICY:
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-lambda-permission.html">AWS::Lambda::Permission</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-policy.html">AWS::IAM:Policy</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-applicationautoscaling-scalingpolicy.html">AWS::ApplicationAutoScaling::ScalingPolicy</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-s3-policy.html">AWS::S3::BucketPolicy</a>,

     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-sqs-policy.html">AWS::SQS::QueuePolicy</a>,
     * and
 <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-sns-policy.html">AWS::SNS::TopicPolicy</a>.</p><p>Applications
     * that contain one or more nested applications require you to specify

     * CAPABILITY_AUTO_EXPAND.</p><p>If your application template contains any of the
     * above resources, we recommend that you review
 all permissions associated with
     * the application before deploying. If you don't specify
 this parameter for an
     * application that requires capabilities, the call will fail.</p>
     */
    inline const Aws::Vector<Capability>& GetRequiredCapabilities() const { return m_requiredCapabilities; }
    inline bool RequiredCapabilitiesHasBeenSet() const { return m_requiredCapabilitiesHasBeenSet; }
    template<typename RequiredCapabilitiesT = Aws::Vector<Capability>>
    void SetRequiredCapabilities(RequiredCapabilitiesT&& value) { m_requiredCapabilitiesHasBeenSet = true; m_requiredCapabilities = std::forward<RequiredCapabilitiesT>(value); }
    template<typename RequiredCapabilitiesT = Aws::Vector<Capability>>
    Version& WithRequiredCapabilities(RequiredCapabilitiesT&& value) { SetRequiredCapabilities(std::forward<RequiredCapabilitiesT>(value)); return *this;}
    inline Version& AddRequiredCapabilities(Capability value) { m_requiredCapabilitiesHasBeenSet = true; m_requiredCapabilities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether all of the AWS resources contained in this application are supported
     * in the region
 in which it is being retrieved.</p>
     */
    inline bool GetResourcesSupported() const { return m_resourcesSupported; }
    inline bool ResourcesSupportedHasBeenSet() const { return m_resourcesSupportedHasBeenSet; }
    inline void SetResourcesSupported(bool value) { m_resourcesSupportedHasBeenSet = true; m_resourcesSupported = value; }
    inline Version& WithResourcesSupported(bool value) { SetResourcesSupported(value); return *this;}
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
    Version& WithSemanticVersion(SemanticVersionT&& value) { SetSemanticVersion(std::forward<SemanticVersionT>(value)); return *this;}
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
    Version& WithSourceCodeArchiveUrl(SourceCodeArchiveUrlT&& value) { SetSourceCodeArchiveUrl(std::forward<SourceCodeArchiveUrlT>(value)); return *this;}
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
    Version& WithSourceCodeUrl(SourceCodeUrlT&& value) { SetSourceCodeUrl(std::forward<SourceCodeUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A link to the packaged AWS SAM template of your application.</p>
     */
    inline const Aws::String& GetTemplateUrl() const { return m_templateUrl; }
    inline bool TemplateUrlHasBeenSet() const { return m_templateUrlHasBeenSet; }
    template<typename TemplateUrlT = Aws::String>
    void SetTemplateUrl(TemplateUrlT&& value) { m_templateUrlHasBeenSet = true; m_templateUrl = std::forward<TemplateUrlT>(value); }
    template<typename TemplateUrlT = Aws::String>
    Version& WithTemplateUrl(TemplateUrlT&& value) { SetTemplateUrl(std::forward<TemplateUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Vector<ParameterDefinition> m_parameterDefinitions;
    bool m_parameterDefinitionsHasBeenSet = false;

    Aws::Vector<Capability> m_requiredCapabilities;
    bool m_requiredCapabilitiesHasBeenSet = false;

    bool m_resourcesSupported{false};
    bool m_resourcesSupportedHasBeenSet = false;

    Aws::String m_semanticVersion;
    bool m_semanticVersionHasBeenSet = false;

    Aws::String m_sourceCodeArchiveUrl;
    bool m_sourceCodeArchiveUrlHasBeenSet = false;

    Aws::String m_sourceCodeUrl;
    bool m_sourceCodeUrlHasBeenSet = false;

    Aws::String m_templateUrl;
    bool m_templateUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
