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
    AWS_SECURITYHUB_API AwsEfsAccessPointRootDirectoryDetails() = default;
    AWS_SECURITYHUB_API AwsEfsAccessPointRootDirectoryDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEfsAccessPointRootDirectoryDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the POSIX IDs and permissions to apply to the access point's root
     * directory. </p>
     */
    inline const AwsEfsAccessPointRootDirectoryCreationInfoDetails& GetCreationInfo() const { return m_creationInfo; }
    inline bool CreationInfoHasBeenSet() const { return m_creationInfoHasBeenSet; }
    template<typename CreationInfoT = AwsEfsAccessPointRootDirectoryCreationInfoDetails>
    void SetCreationInfo(CreationInfoT&& value) { m_creationInfoHasBeenSet = true; m_creationInfo = std::forward<CreationInfoT>(value); }
    template<typename CreationInfoT = AwsEfsAccessPointRootDirectoryCreationInfoDetails>
    AwsEfsAccessPointRootDirectoryDetails& WithCreationInfo(CreationInfoT&& value) { SetCreationInfo(std::forward<CreationInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the path on the Amazon EFS file system to expose as the root
     * directory to NFS clients using the access point to access the EFS file system. A
     * path can have up to four subdirectories. If the specified path does not exist,
     * you are required to provide <code>CreationInfo</code>. </p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    AwsEfsAccessPointRootDirectoryDetails& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}
  private:

    AwsEfsAccessPointRootDirectoryCreationInfoDetails m_creationInfo;
    bool m_creationInfoHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
