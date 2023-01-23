/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about the lifecycle policy for the repository.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcrRepositoryLifecyclePolicyDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcrRepositoryLifecyclePolicyDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcrRepositoryLifecyclePolicyDetails();
    AWS_SECURITYHUB_API AwsEcrRepositoryLifecyclePolicyDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcrRepositoryLifecyclePolicyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The text of the lifecycle policy.</p>
     */
    inline const Aws::String& GetLifecyclePolicyText() const{ return m_lifecyclePolicyText; }

    /**
     * <p>The text of the lifecycle policy.</p>
     */
    inline bool LifecyclePolicyTextHasBeenSet() const { return m_lifecyclePolicyTextHasBeenSet; }

    /**
     * <p>The text of the lifecycle policy.</p>
     */
    inline void SetLifecyclePolicyText(const Aws::String& value) { m_lifecyclePolicyTextHasBeenSet = true; m_lifecyclePolicyText = value; }

    /**
     * <p>The text of the lifecycle policy.</p>
     */
    inline void SetLifecyclePolicyText(Aws::String&& value) { m_lifecyclePolicyTextHasBeenSet = true; m_lifecyclePolicyText = std::move(value); }

    /**
     * <p>The text of the lifecycle policy.</p>
     */
    inline void SetLifecyclePolicyText(const char* value) { m_lifecyclePolicyTextHasBeenSet = true; m_lifecyclePolicyText.assign(value); }

    /**
     * <p>The text of the lifecycle policy.</p>
     */
    inline AwsEcrRepositoryLifecyclePolicyDetails& WithLifecyclePolicyText(const Aws::String& value) { SetLifecyclePolicyText(value); return *this;}

    /**
     * <p>The text of the lifecycle policy.</p>
     */
    inline AwsEcrRepositoryLifecyclePolicyDetails& WithLifecyclePolicyText(Aws::String&& value) { SetLifecyclePolicyText(std::move(value)); return *this;}

    /**
     * <p>The text of the lifecycle policy.</p>
     */
    inline AwsEcrRepositoryLifecyclePolicyDetails& WithLifecyclePolicyText(const char* value) { SetLifecyclePolicyText(value); return *this;}


    /**
     * <p>The Amazon Web Services account identifier that is associated with the
     * registry that contains the repository.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The Amazon Web Services account identifier that is associated with the
     * registry that contains the repository.</p>
     */
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account identifier that is associated with the
     * registry that contains the repository.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The Amazon Web Services account identifier that is associated with the
     * registry that contains the repository.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }

    /**
     * <p>The Amazon Web Services account identifier that is associated with the
     * registry that contains the repository.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }

    /**
     * <p>The Amazon Web Services account identifier that is associated with the
     * registry that contains the repository.</p>
     */
    inline AwsEcrRepositoryLifecyclePolicyDetails& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The Amazon Web Services account identifier that is associated with the
     * registry that contains the repository.</p>
     */
    inline AwsEcrRepositoryLifecyclePolicyDetails& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account identifier that is associated with the
     * registry that contains the repository.</p>
     */
    inline AwsEcrRepositoryLifecyclePolicyDetails& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}

  private:

    Aws::String m_lifecyclePolicyText;
    bool m_lifecyclePolicyTextHasBeenSet = false;

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
