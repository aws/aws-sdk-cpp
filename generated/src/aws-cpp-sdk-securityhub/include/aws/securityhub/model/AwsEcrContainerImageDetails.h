/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about an Amazon ECR image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcrContainerImageDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcrContainerImageDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcrContainerImageDetails();
    AWS_SECURITYHUB_API AwsEcrContainerImageDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcrContainerImageDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services account identifier that is associated with the
     * registry that the image belongs to.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The Amazon Web Services account identifier that is associated with the
     * registry that the image belongs to.</p>
     */
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account identifier that is associated with the
     * registry that the image belongs to.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The Amazon Web Services account identifier that is associated with the
     * registry that the image belongs to.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }

    /**
     * <p>The Amazon Web Services account identifier that is associated with the
     * registry that the image belongs to.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }

    /**
     * <p>The Amazon Web Services account identifier that is associated with the
     * registry that the image belongs to.</p>
     */
    inline AwsEcrContainerImageDetails& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The Amazon Web Services account identifier that is associated with the
     * registry that the image belongs to.</p>
     */
    inline AwsEcrContainerImageDetails& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account identifier that is associated with the
     * registry that the image belongs to.</p>
     */
    inline AwsEcrContainerImageDetails& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}


    /**
     * <p>The name of the repository that the image belongs to.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository that the image belongs to.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository that the image belongs to.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository that the image belongs to.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository that the image belongs to.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository that the image belongs to.</p>
     */
    inline AwsEcrContainerImageDetails& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository that the image belongs to.</p>
     */
    inline AwsEcrContainerImageDetails& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository that the image belongs to.</p>
     */
    inline AwsEcrContainerImageDetails& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The architecture of the image. Valid values are as follows:</p> <ul> <li> <p>
     * <code>arm64</code> </p> </li> <li> <p> <code>i386</code> </p> </li> <li> <p>
     * <code>x86_64</code> </p> </li> </ul>
     */
    inline const Aws::String& GetArchitecture() const{ return m_architecture; }

    /**
     * <p>The architecture of the image. Valid values are as follows:</p> <ul> <li> <p>
     * <code>arm64</code> </p> </li> <li> <p> <code>i386</code> </p> </li> <li> <p>
     * <code>x86_64</code> </p> </li> </ul>
     */
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }

    /**
     * <p>The architecture of the image. Valid values are as follows:</p> <ul> <li> <p>
     * <code>arm64</code> </p> </li> <li> <p> <code>i386</code> </p> </li> <li> <p>
     * <code>x86_64</code> </p> </li> </ul>
     */
    inline void SetArchitecture(const Aws::String& value) { m_architectureHasBeenSet = true; m_architecture = value; }

    /**
     * <p>The architecture of the image. Valid values are as follows:</p> <ul> <li> <p>
     * <code>arm64</code> </p> </li> <li> <p> <code>i386</code> </p> </li> <li> <p>
     * <code>x86_64</code> </p> </li> </ul>
     */
    inline void SetArchitecture(Aws::String&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }

    /**
     * <p>The architecture of the image. Valid values are as follows:</p> <ul> <li> <p>
     * <code>arm64</code> </p> </li> <li> <p> <code>i386</code> </p> </li> <li> <p>
     * <code>x86_64</code> </p> </li> </ul>
     */
    inline void SetArchitecture(const char* value) { m_architectureHasBeenSet = true; m_architecture.assign(value); }

    /**
     * <p>The architecture of the image. Valid values are as follows:</p> <ul> <li> <p>
     * <code>arm64</code> </p> </li> <li> <p> <code>i386</code> </p> </li> <li> <p>
     * <code>x86_64</code> </p> </li> </ul>
     */
    inline AwsEcrContainerImageDetails& WithArchitecture(const Aws::String& value) { SetArchitecture(value); return *this;}

    /**
     * <p>The architecture of the image. Valid values are as follows:</p> <ul> <li> <p>
     * <code>arm64</code> </p> </li> <li> <p> <code>i386</code> </p> </li> <li> <p>
     * <code>x86_64</code> </p> </li> </ul>
     */
    inline AwsEcrContainerImageDetails& WithArchitecture(Aws::String&& value) { SetArchitecture(std::move(value)); return *this;}

    /**
     * <p>The architecture of the image. Valid values are as follows:</p> <ul> <li> <p>
     * <code>arm64</code> </p> </li> <li> <p> <code>i386</code> </p> </li> <li> <p>
     * <code>x86_64</code> </p> </li> </ul>
     */
    inline AwsEcrContainerImageDetails& WithArchitecture(const char* value) { SetArchitecture(value); return *this;}


    /**
     * <p>The sha256 digest of the image manifest.</p>
     */
    inline const Aws::String& GetImageDigest() const{ return m_imageDigest; }

    /**
     * <p>The sha256 digest of the image manifest.</p>
     */
    inline bool ImageDigestHasBeenSet() const { return m_imageDigestHasBeenSet; }

    /**
     * <p>The sha256 digest of the image manifest.</p>
     */
    inline void SetImageDigest(const Aws::String& value) { m_imageDigestHasBeenSet = true; m_imageDigest = value; }

    /**
     * <p>The sha256 digest of the image manifest.</p>
     */
    inline void SetImageDigest(Aws::String&& value) { m_imageDigestHasBeenSet = true; m_imageDigest = std::move(value); }

    /**
     * <p>The sha256 digest of the image manifest.</p>
     */
    inline void SetImageDigest(const char* value) { m_imageDigestHasBeenSet = true; m_imageDigest.assign(value); }

    /**
     * <p>The sha256 digest of the image manifest.</p>
     */
    inline AwsEcrContainerImageDetails& WithImageDigest(const Aws::String& value) { SetImageDigest(value); return *this;}

    /**
     * <p>The sha256 digest of the image manifest.</p>
     */
    inline AwsEcrContainerImageDetails& WithImageDigest(Aws::String&& value) { SetImageDigest(std::move(value)); return *this;}

    /**
     * <p>The sha256 digest of the image manifest.</p>
     */
    inline AwsEcrContainerImageDetails& WithImageDigest(const char* value) { SetImageDigest(value); return *this;}


    /**
     * <p>The list of tags that are associated with the image.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImageTags() const{ return m_imageTags; }

    /**
     * <p>The list of tags that are associated with the image.</p>
     */
    inline bool ImageTagsHasBeenSet() const { return m_imageTagsHasBeenSet; }

    /**
     * <p>The list of tags that are associated with the image.</p>
     */
    inline void SetImageTags(const Aws::Vector<Aws::String>& value) { m_imageTagsHasBeenSet = true; m_imageTags = value; }

    /**
     * <p>The list of tags that are associated with the image.</p>
     */
    inline void SetImageTags(Aws::Vector<Aws::String>&& value) { m_imageTagsHasBeenSet = true; m_imageTags = std::move(value); }

    /**
     * <p>The list of tags that are associated with the image.</p>
     */
    inline AwsEcrContainerImageDetails& WithImageTags(const Aws::Vector<Aws::String>& value) { SetImageTags(value); return *this;}

    /**
     * <p>The list of tags that are associated with the image.</p>
     */
    inline AwsEcrContainerImageDetails& WithImageTags(Aws::Vector<Aws::String>&& value) { SetImageTags(std::move(value)); return *this;}

    /**
     * <p>The list of tags that are associated with the image.</p>
     */
    inline AwsEcrContainerImageDetails& AddImageTags(const Aws::String& value) { m_imageTagsHasBeenSet = true; m_imageTags.push_back(value); return *this; }

    /**
     * <p>The list of tags that are associated with the image.</p>
     */
    inline AwsEcrContainerImageDetails& AddImageTags(Aws::String&& value) { m_imageTagsHasBeenSet = true; m_imageTags.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of tags that are associated with the image.</p>
     */
    inline AwsEcrContainerImageDetails& AddImageTags(const char* value) { m_imageTagsHasBeenSet = true; m_imageTags.push_back(value); return *this; }


    /**
     * <p>The date and time when the image was pushed to the repository.</p> <p>Uses
     * the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetImagePublishedAt() const{ return m_imagePublishedAt; }

    /**
     * <p>The date and time when the image was pushed to the repository.</p> <p>Uses
     * the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool ImagePublishedAtHasBeenSet() const { return m_imagePublishedAtHasBeenSet; }

    /**
     * <p>The date and time when the image was pushed to the repository.</p> <p>Uses
     * the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetImagePublishedAt(const Aws::String& value) { m_imagePublishedAtHasBeenSet = true; m_imagePublishedAt = value; }

    /**
     * <p>The date and time when the image was pushed to the repository.</p> <p>Uses
     * the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetImagePublishedAt(Aws::String&& value) { m_imagePublishedAtHasBeenSet = true; m_imagePublishedAt = std::move(value); }

    /**
     * <p>The date and time when the image was pushed to the repository.</p> <p>Uses
     * the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetImagePublishedAt(const char* value) { m_imagePublishedAtHasBeenSet = true; m_imagePublishedAt.assign(value); }

    /**
     * <p>The date and time when the image was pushed to the repository.</p> <p>Uses
     * the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsEcrContainerImageDetails& WithImagePublishedAt(const Aws::String& value) { SetImagePublishedAt(value); return *this;}

    /**
     * <p>The date and time when the image was pushed to the repository.</p> <p>Uses
     * the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsEcrContainerImageDetails& WithImagePublishedAt(Aws::String&& value) { SetImagePublishedAt(std::move(value)); return *this;}

    /**
     * <p>The date and time when the image was pushed to the repository.</p> <p>Uses
     * the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsEcrContainerImageDetails& WithImagePublishedAt(const char* value) { SetImagePublishedAt(value); return *this;}

  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_architecture;
    bool m_architectureHasBeenSet = false;

    Aws::String m_imageDigest;
    bool m_imageDigestHasBeenSet = false;

    Aws::Vector<Aws::String> m_imageTags;
    bool m_imageTagsHasBeenSet = false;

    Aws::String m_imagePublishedAt;
    bool m_imagePublishedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
