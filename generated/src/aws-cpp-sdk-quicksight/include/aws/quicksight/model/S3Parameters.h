/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ManifestFileLocation.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The parameters for S3.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/S3Parameters">AWS
   * API Reference</a></p>
   */
  class S3Parameters
  {
  public:
    AWS_QUICKSIGHT_API S3Parameters() = default;
    AWS_QUICKSIGHT_API S3Parameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API S3Parameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Location of the Amazon S3 manifest file. This is NULL if the manifest file
     * was uploaded into QuickSight.</p>
     */
    inline const ManifestFileLocation& GetManifestFileLocation() const { return m_manifestFileLocation; }
    inline bool ManifestFileLocationHasBeenSet() const { return m_manifestFileLocationHasBeenSet; }
    template<typename ManifestFileLocationT = ManifestFileLocation>
    void SetManifestFileLocation(ManifestFileLocationT&& value) { m_manifestFileLocationHasBeenSet = true; m_manifestFileLocation = std::forward<ManifestFileLocationT>(value); }
    template<typename ManifestFileLocationT = ManifestFileLocation>
    S3Parameters& WithManifestFileLocation(ManifestFileLocationT&& value) { SetManifestFileLocation(std::forward<ManifestFileLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use the <code>RoleArn</code> structure to override an account-wide role for a
     * specific S3 data source. For example, say an account administrator has turned
     * off all S3 access with an account-wide role. The administrator can then use
     * <code>RoleArn</code> to bypass the account-wide role and allow S3 access for the
     * single S3 data source that is specified in the structure, even if the
     * account-wide role forbidding S3 access is still active.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    S3Parameters& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    ManifestFileLocation m_manifestFileLocation;
    bool m_manifestFileLocationHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
