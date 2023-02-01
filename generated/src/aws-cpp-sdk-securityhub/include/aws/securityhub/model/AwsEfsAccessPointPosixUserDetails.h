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
   * <p>Provides details for all file system operations using this Amazon EFS access
   * point. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEfsAccessPointPosixUserDetails">AWS
   * API Reference</a></p>
   */
  class AwsEfsAccessPointPosixUserDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEfsAccessPointPosixUserDetails();
    AWS_SECURITYHUB_API AwsEfsAccessPointPosixUserDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEfsAccessPointPosixUserDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The POSIX group ID used for all file system operations using this access
     * point. </p>
     */
    inline const Aws::String& GetGid() const{ return m_gid; }

    /**
     * <p>The POSIX group ID used for all file system operations using this access
     * point. </p>
     */
    inline bool GidHasBeenSet() const { return m_gidHasBeenSet; }

    /**
     * <p>The POSIX group ID used for all file system operations using this access
     * point. </p>
     */
    inline void SetGid(const Aws::String& value) { m_gidHasBeenSet = true; m_gid = value; }

    /**
     * <p>The POSIX group ID used for all file system operations using this access
     * point. </p>
     */
    inline void SetGid(Aws::String&& value) { m_gidHasBeenSet = true; m_gid = std::move(value); }

    /**
     * <p>The POSIX group ID used for all file system operations using this access
     * point. </p>
     */
    inline void SetGid(const char* value) { m_gidHasBeenSet = true; m_gid.assign(value); }

    /**
     * <p>The POSIX group ID used for all file system operations using this access
     * point. </p>
     */
    inline AwsEfsAccessPointPosixUserDetails& WithGid(const Aws::String& value) { SetGid(value); return *this;}

    /**
     * <p>The POSIX group ID used for all file system operations using this access
     * point. </p>
     */
    inline AwsEfsAccessPointPosixUserDetails& WithGid(Aws::String&& value) { SetGid(std::move(value)); return *this;}

    /**
     * <p>The POSIX group ID used for all file system operations using this access
     * point. </p>
     */
    inline AwsEfsAccessPointPosixUserDetails& WithGid(const char* value) { SetGid(value); return *this;}


    /**
     * <p>Secondary POSIX group IDs used for all file system operations using this
     * access point. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSecondaryGids() const{ return m_secondaryGids; }

    /**
     * <p>Secondary POSIX group IDs used for all file system operations using this
     * access point. </p>
     */
    inline bool SecondaryGidsHasBeenSet() const { return m_secondaryGidsHasBeenSet; }

    /**
     * <p>Secondary POSIX group IDs used for all file system operations using this
     * access point. </p>
     */
    inline void SetSecondaryGids(const Aws::Vector<Aws::String>& value) { m_secondaryGidsHasBeenSet = true; m_secondaryGids = value; }

    /**
     * <p>Secondary POSIX group IDs used for all file system operations using this
     * access point. </p>
     */
    inline void SetSecondaryGids(Aws::Vector<Aws::String>&& value) { m_secondaryGidsHasBeenSet = true; m_secondaryGids = std::move(value); }

    /**
     * <p>Secondary POSIX group IDs used for all file system operations using this
     * access point. </p>
     */
    inline AwsEfsAccessPointPosixUserDetails& WithSecondaryGids(const Aws::Vector<Aws::String>& value) { SetSecondaryGids(value); return *this;}

    /**
     * <p>Secondary POSIX group IDs used for all file system operations using this
     * access point. </p>
     */
    inline AwsEfsAccessPointPosixUserDetails& WithSecondaryGids(Aws::Vector<Aws::String>&& value) { SetSecondaryGids(std::move(value)); return *this;}

    /**
     * <p>Secondary POSIX group IDs used for all file system operations using this
     * access point. </p>
     */
    inline AwsEfsAccessPointPosixUserDetails& AddSecondaryGids(const Aws::String& value) { m_secondaryGidsHasBeenSet = true; m_secondaryGids.push_back(value); return *this; }

    /**
     * <p>Secondary POSIX group IDs used for all file system operations using this
     * access point. </p>
     */
    inline AwsEfsAccessPointPosixUserDetails& AddSecondaryGids(Aws::String&& value) { m_secondaryGidsHasBeenSet = true; m_secondaryGids.push_back(std::move(value)); return *this; }

    /**
     * <p>Secondary POSIX group IDs used for all file system operations using this
     * access point. </p>
     */
    inline AwsEfsAccessPointPosixUserDetails& AddSecondaryGids(const char* value) { m_secondaryGidsHasBeenSet = true; m_secondaryGids.push_back(value); return *this; }


    /**
     * <p>The POSIX user ID used for all file system operations using this access
     * point. </p>
     */
    inline const Aws::String& GetUid() const{ return m_uid; }

    /**
     * <p>The POSIX user ID used for all file system operations using this access
     * point. </p>
     */
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }

    /**
     * <p>The POSIX user ID used for all file system operations using this access
     * point. </p>
     */
    inline void SetUid(const Aws::String& value) { m_uidHasBeenSet = true; m_uid = value; }

    /**
     * <p>The POSIX user ID used for all file system operations using this access
     * point. </p>
     */
    inline void SetUid(Aws::String&& value) { m_uidHasBeenSet = true; m_uid = std::move(value); }

    /**
     * <p>The POSIX user ID used for all file system operations using this access
     * point. </p>
     */
    inline void SetUid(const char* value) { m_uidHasBeenSet = true; m_uid.assign(value); }

    /**
     * <p>The POSIX user ID used for all file system operations using this access
     * point. </p>
     */
    inline AwsEfsAccessPointPosixUserDetails& WithUid(const Aws::String& value) { SetUid(value); return *this;}

    /**
     * <p>The POSIX user ID used for all file system operations using this access
     * point. </p>
     */
    inline AwsEfsAccessPointPosixUserDetails& WithUid(Aws::String&& value) { SetUid(std::move(value)); return *this;}

    /**
     * <p>The POSIX user ID used for all file system operations using this access
     * point. </p>
     */
    inline AwsEfsAccessPointPosixUserDetails& WithUid(const char* value) { SetUid(value); return *this;}

  private:

    Aws::String m_gid;
    bool m_gidHasBeenSet = false;

    Aws::Vector<Aws::String> m_secondaryGids;
    bool m_secondaryGidsHasBeenSet = false;

    Aws::String m_uid;
    bool m_uidHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
