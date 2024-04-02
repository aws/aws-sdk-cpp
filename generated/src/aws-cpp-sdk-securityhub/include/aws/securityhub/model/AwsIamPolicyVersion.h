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


    /**
     * <p>The identifier of the policy version.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>The identifier of the policy version.</p>
     */
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }

    /**
     * <p>The identifier of the policy version.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /**
     * <p>The identifier of the policy version.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }

    /**
     * <p>The identifier of the policy version.</p>
     */
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }

    /**
     * <p>The identifier of the policy version.</p>
     */
    inline AwsIamPolicyVersion& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>The identifier of the policy version.</p>
     */
    inline AwsIamPolicyVersion& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the policy version.</p>
     */
    inline AwsIamPolicyVersion& WithVersionId(const char* value) { SetVersionId(value); return *this;}


    /**
     * <p>Whether the version is the default version.</p>
     */
    inline bool GetIsDefaultVersion() const{ return m_isDefaultVersion; }

    /**
     * <p>Whether the version is the default version.</p>
     */
    inline bool IsDefaultVersionHasBeenSet() const { return m_isDefaultVersionHasBeenSet; }

    /**
     * <p>Whether the version is the default version.</p>
     */
    inline void SetIsDefaultVersion(bool value) { m_isDefaultVersionHasBeenSet = true; m_isDefaultVersion = value; }

    /**
     * <p>Whether the version is the default version.</p>
     */
    inline AwsIamPolicyVersion& WithIsDefaultVersion(bool value) { SetIsDefaultVersion(value); return *this;}


    /**
     * <p>Indicates when the version was created.</p> <p>This field accepts only the
     * specified formats. Timestamps can end with <code>Z</code> or <code>("+" / "-")
     * time-hour [":" time-minute]</code>. The time-secfrac after seconds is limited to
     * a maximum of 9 digits. The offset is bounded by +/-18:00. Here are valid
     * timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline const Aws::String& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>Indicates when the version was created.</p> <p>This field accepts only the
     * specified formats. Timestamps can end with <code>Z</code> or <code>("+" / "-")
     * time-hour [":" time-minute]</code>. The time-secfrac after seconds is limited to
     * a maximum of 9 digits. The offset is bounded by +/-18:00. Here are valid
     * timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }

    /**
     * <p>Indicates when the version was created.</p> <p>This field accepts only the
     * specified formats. Timestamps can end with <code>Z</code> or <code>("+" / "-")
     * time-hour [":" time-minute]</code>. The time-secfrac after seconds is limited to
     * a maximum of 9 digits. The offset is bounded by +/-18:00. Here are valid
     * timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline void SetCreateDate(const Aws::String& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>Indicates when the version was created.</p> <p>This field accepts only the
     * specified formats. Timestamps can end with <code>Z</code> or <code>("+" / "-")
     * time-hour [":" time-minute]</code>. The time-secfrac after seconds is limited to
     * a maximum of 9 digits. The offset is bounded by +/-18:00. Here are valid
     * timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline void SetCreateDate(Aws::String&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }

    /**
     * <p>Indicates when the version was created.</p> <p>This field accepts only the
     * specified formats. Timestamps can end with <code>Z</code> or <code>("+" / "-")
     * time-hour [":" time-minute]</code>. The time-secfrac after seconds is limited to
     * a maximum of 9 digits. The offset is bounded by +/-18:00. Here are valid
     * timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline void SetCreateDate(const char* value) { m_createDateHasBeenSet = true; m_createDate.assign(value); }

    /**
     * <p>Indicates when the version was created.</p> <p>This field accepts only the
     * specified formats. Timestamps can end with <code>Z</code> or <code>("+" / "-")
     * time-hour [":" time-minute]</code>. The time-secfrac after seconds is limited to
     * a maximum of 9 digits. The offset is bounded by +/-18:00. Here are valid
     * timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline AwsIamPolicyVersion& WithCreateDate(const Aws::String& value) { SetCreateDate(value); return *this;}

    /**
     * <p>Indicates when the version was created.</p> <p>This field accepts only the
     * specified formats. Timestamps can end with <code>Z</code> or <code>("+" / "-")
     * time-hour [":" time-minute]</code>. The time-secfrac after seconds is limited to
     * a maximum of 9 digits. The offset is bounded by +/-18:00. Here are valid
     * timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline AwsIamPolicyVersion& WithCreateDate(Aws::String&& value) { SetCreateDate(std::move(value)); return *this;}

    /**
     * <p>Indicates when the version was created.</p> <p>This field accepts only the
     * specified formats. Timestamps can end with <code>Z</code> or <code>("+" / "-")
     * time-hour [":" time-minute]</code>. The time-secfrac after seconds is limited to
     * a maximum of 9 digits. The offset is bounded by +/-18:00. Here are valid
     * timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline AwsIamPolicyVersion& WithCreateDate(const char* value) { SetCreateDate(value); return *this;}

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
