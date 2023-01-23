/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsEfsAccessPointRootDirectoryCreationInfoDetails.h>
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
   * <p>Provides information about the directory on the Amazon EFS file system that
   * the access point exposes as the root directory to NFS clients using the access
   * point. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEfsAccessPointRootDirectoryDetails">AWS
   * API Reference</a></p>
   */
  class AwsEfsAccessPointRootDirectoryDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEfsAccessPointRootDirectoryDetails();
    AWS_SECURITYHUB_API AwsEfsAccessPointRootDirectoryDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEfsAccessPointRootDirectoryDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the POSIX IDs and permissions to apply to the access point's root
     * directory. </p>
     */
    inline const AwsEfsAccessPointRootDirectoryCreationInfoDetails& GetCreationInfo() const{ return m_creationInfo; }

    /**
     * <p>Specifies the POSIX IDs and permissions to apply to the access point's root
     * directory. </p>
     */
    inline bool CreationInfoHasBeenSet() const { return m_creationInfoHasBeenSet; }

    /**
     * <p>Specifies the POSIX IDs and permissions to apply to the access point's root
     * directory. </p>
     */
    inline void SetCreationInfo(const AwsEfsAccessPointRootDirectoryCreationInfoDetails& value) { m_creationInfoHasBeenSet = true; m_creationInfo = value; }

    /**
     * <p>Specifies the POSIX IDs and permissions to apply to the access point's root
     * directory. </p>
     */
    inline void SetCreationInfo(AwsEfsAccessPointRootDirectoryCreationInfoDetails&& value) { m_creationInfoHasBeenSet = true; m_creationInfo = std::move(value); }

    /**
     * <p>Specifies the POSIX IDs and permissions to apply to the access point's root
     * directory. </p>
     */
    inline AwsEfsAccessPointRootDirectoryDetails& WithCreationInfo(const AwsEfsAccessPointRootDirectoryCreationInfoDetails& value) { SetCreationInfo(value); return *this;}

    /**
     * <p>Specifies the POSIX IDs and permissions to apply to the access point's root
     * directory. </p>
     */
    inline AwsEfsAccessPointRootDirectoryDetails& WithCreationInfo(AwsEfsAccessPointRootDirectoryCreationInfoDetails&& value) { SetCreationInfo(std::move(value)); return *this;}


    /**
     * <p>Specifies the path on the Amazon EFS file system to expose as the root
     * directory to NFS clients using the access point to access the EFS file system. A
     * path can have up to four subdirectories. If the specified path does not exist,
     * you are required to provide <code>CreationInfo</code>. </p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>Specifies the path on the Amazon EFS file system to expose as the root
     * directory to NFS clients using the access point to access the EFS file system. A
     * path can have up to four subdirectories. If the specified path does not exist,
     * you are required to provide <code>CreationInfo</code>. </p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>Specifies the path on the Amazon EFS file system to expose as the root
     * directory to NFS clients using the access point to access the EFS file system. A
     * path can have up to four subdirectories. If the specified path does not exist,
     * you are required to provide <code>CreationInfo</code>. </p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>Specifies the path on the Amazon EFS file system to expose as the root
     * directory to NFS clients using the access point to access the EFS file system. A
     * path can have up to four subdirectories. If the specified path does not exist,
     * you are required to provide <code>CreationInfo</code>. </p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>Specifies the path on the Amazon EFS file system to expose as the root
     * directory to NFS clients using the access point to access the EFS file system. A
     * path can have up to four subdirectories. If the specified path does not exist,
     * you are required to provide <code>CreationInfo</code>. </p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>Specifies the path on the Amazon EFS file system to expose as the root
     * directory to NFS clients using the access point to access the EFS file system. A
     * path can have up to four subdirectories. If the specified path does not exist,
     * you are required to provide <code>CreationInfo</code>. </p>
     */
    inline AwsEfsAccessPointRootDirectoryDetails& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>Specifies the path on the Amazon EFS file system to expose as the root
     * directory to NFS clients using the access point to access the EFS file system. A
     * path can have up to four subdirectories. If the specified path does not exist,
     * you are required to provide <code>CreationInfo</code>. </p>
     */
    inline AwsEfsAccessPointRootDirectoryDetails& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>Specifies the path on the Amazon EFS file system to expose as the root
     * directory to NFS clients using the access point to access the EFS file system. A
     * path can have up to four subdirectories. If the specified path does not exist,
     * you are required to provide <code>CreationInfo</code>. </p>
     */
    inline AwsEfsAccessPointRootDirectoryDetails& WithPath(const char* value) { SetPath(value); return *this;}

  private:

    AwsEfsAccessPointRootDirectoryCreationInfoDetails m_creationInfo;
    bool m_creationInfoHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
