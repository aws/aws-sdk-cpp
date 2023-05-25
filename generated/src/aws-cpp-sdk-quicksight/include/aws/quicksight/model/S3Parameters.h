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
    AWS_QUICKSIGHT_API S3Parameters();
    AWS_QUICKSIGHT_API S3Parameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API S3Parameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Location of the Amazon S3 manifest file. This is NULL if the manifest file
     * was uploaded into Amazon QuickSight.</p>
     */
    inline const ManifestFileLocation& GetManifestFileLocation() const{ return m_manifestFileLocation; }

    /**
     * <p>Location of the Amazon S3 manifest file. This is NULL if the manifest file
     * was uploaded into Amazon QuickSight.</p>
     */
    inline bool ManifestFileLocationHasBeenSet() const { return m_manifestFileLocationHasBeenSet; }

    /**
     * <p>Location of the Amazon S3 manifest file. This is NULL if the manifest file
     * was uploaded into Amazon QuickSight.</p>
     */
    inline void SetManifestFileLocation(const ManifestFileLocation& value) { m_manifestFileLocationHasBeenSet = true; m_manifestFileLocation = value; }

    /**
     * <p>Location of the Amazon S3 manifest file. This is NULL if the manifest file
     * was uploaded into Amazon QuickSight.</p>
     */
    inline void SetManifestFileLocation(ManifestFileLocation&& value) { m_manifestFileLocationHasBeenSet = true; m_manifestFileLocation = std::move(value); }

    /**
     * <p>Location of the Amazon S3 manifest file. This is NULL if the manifest file
     * was uploaded into Amazon QuickSight.</p>
     */
    inline S3Parameters& WithManifestFileLocation(const ManifestFileLocation& value) { SetManifestFileLocation(value); return *this;}

    /**
     * <p>Location of the Amazon S3 manifest file. This is NULL if the manifest file
     * was uploaded into Amazon QuickSight.</p>
     */
    inline S3Parameters& WithManifestFileLocation(ManifestFileLocation&& value) { SetManifestFileLocation(std::move(value)); return *this;}


    /**
     * <p>Use the <code>RoleArn</code> structure to override an account-wide role for a
     * specific S3 data source. For example, say an account administrator has turned
     * off all S3 access with an account-wide role. The administrator can then use
     * <code>RoleArn</code> to bypass the account-wide role and allow S3 access for the
     * single S3 data source that is specified in the structure, even if the
     * account-wide role forbidding S3 access is still active.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>Use the <code>RoleArn</code> structure to override an account-wide role for a
     * specific S3 data source. For example, say an account administrator has turned
     * off all S3 access with an account-wide role. The administrator can then use
     * <code>RoleArn</code> to bypass the account-wide role and allow S3 access for the
     * single S3 data source that is specified in the structure, even if the
     * account-wide role forbidding S3 access is still active.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>Use the <code>RoleArn</code> structure to override an account-wide role for a
     * specific S3 data source. For example, say an account administrator has turned
     * off all S3 access with an account-wide role. The administrator can then use
     * <code>RoleArn</code> to bypass the account-wide role and allow S3 access for the
     * single S3 data source that is specified in the structure, even if the
     * account-wide role forbidding S3 access is still active.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>Use the <code>RoleArn</code> structure to override an account-wide role for a
     * specific S3 data source. For example, say an account administrator has turned
     * off all S3 access with an account-wide role. The administrator can then use
     * <code>RoleArn</code> to bypass the account-wide role and allow S3 access for the
     * single S3 data source that is specified in the structure, even if the
     * account-wide role forbidding S3 access is still active.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>Use the <code>RoleArn</code> structure to override an account-wide role for a
     * specific S3 data source. For example, say an account administrator has turned
     * off all S3 access with an account-wide role. The administrator can then use
     * <code>RoleArn</code> to bypass the account-wide role and allow S3 access for the
     * single S3 data source that is specified in the structure, even if the
     * account-wide role forbidding S3 access is still active.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>Use the <code>RoleArn</code> structure to override an account-wide role for a
     * specific S3 data source. For example, say an account administrator has turned
     * off all S3 access with an account-wide role. The administrator can then use
     * <code>RoleArn</code> to bypass the account-wide role and allow S3 access for the
     * single S3 data source that is specified in the structure, even if the
     * account-wide role forbidding S3 access is still active.</p>
     */
    inline S3Parameters& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>Use the <code>RoleArn</code> structure to override an account-wide role for a
     * specific S3 data source. For example, say an account administrator has turned
     * off all S3 access with an account-wide role. The administrator can then use
     * <code>RoleArn</code> to bypass the account-wide role and allow S3 access for the
     * single S3 data source that is specified in the structure, even if the
     * account-wide role forbidding S3 access is still active.</p>
     */
    inline S3Parameters& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>Use the <code>RoleArn</code> structure to override an account-wide role for a
     * specific S3 data source. For example, say an account administrator has turned
     * off all S3 access with an account-wide role. The administrator can then use
     * <code>RoleArn</code> to bypass the account-wide role and allow S3 access for the
     * single S3 data source that is specified in the structure, even if the
     * account-wide role forbidding S3 access is still active.</p>
     */
    inline S3Parameters& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    ManifestFileLocation m_manifestFileLocation;
    bool m_manifestFileLocationHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
