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
   * <p>A version of an IAM policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsIamPolicyVersion">AWS
   * API Reference</a></p>
   */
  class AwsIamPolicyVersion
  {
  public:
    AWS_SECURITYHUB_API AwsIamPolicyVersion();
    AWS_SECURITYHUB_API AwsIamPolicyVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsIamPolicyVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the policy version.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }
    inline AwsIamPolicyVersion& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}
    inline AwsIamPolicyVersion& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}
    inline AwsIamPolicyVersion& WithVersionId(const char* value) { SetVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the version is the default version.</p>
     */
    inline bool GetIsDefaultVersion() const{ return m_isDefaultVersion; }
    inline bool IsDefaultVersionHasBeenSet() const { return m_isDefaultVersionHasBeenSet; }
    inline void SetIsDefaultVersion(bool value) { m_isDefaultVersionHasBeenSet = true; m_isDefaultVersion = value; }
    inline AwsIamPolicyVersion& WithIsDefaultVersion(bool value) { SetIsDefaultVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the version was created.</p> <p>For more information about the
     * validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetCreateDate() const{ return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    inline void SetCreateDate(const Aws::String& value) { m_createDateHasBeenSet = true; m_createDate = value; }
    inline void SetCreateDate(Aws::String&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }
    inline void SetCreateDate(const char* value) { m_createDateHasBeenSet = true; m_createDate.assign(value); }
    inline AwsIamPolicyVersion& WithCreateDate(const Aws::String& value) { SetCreateDate(value); return *this;}
    inline AwsIamPolicyVersion& WithCreateDate(Aws::String&& value) { SetCreateDate(std::move(value)); return *this;}
    inline AwsIamPolicyVersion& WithCreateDate(const char* value) { SetCreateDate(value); return *this;}
    ///@}
  private:

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    bool m_isDefaultVersion;
    bool m_isDefaultVersionHasBeenSet = false;

    Aws::String m_createDate;
    bool m_createDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
