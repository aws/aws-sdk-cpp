/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Use Job engine versions to run jobs for your production workflow on one version,
   * while you test and validate the latest version. Job engine versions are in a
   * YYYY-MM-DD format.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/JobEngineVersion">AWS
   * API Reference</a></p>
   */
  class JobEngineVersion
  {
  public:
    AWS_MEDIACONVERT_API JobEngineVersion();
    AWS_MEDIACONVERT_API JobEngineVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API JobEngineVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The date that this Job engine version expires. Requests to create jobs with an
     * expired version result in a regular job, as if no specific Job engine version
     * was requested.
     */
    inline const Aws::Utils::DateTime& GetExpirationDate() const{ return m_expirationDate; }
    inline bool ExpirationDateHasBeenSet() const { return m_expirationDateHasBeenSet; }
    inline void SetExpirationDate(const Aws::Utils::DateTime& value) { m_expirationDateHasBeenSet = true; m_expirationDate = value; }
    inline void SetExpirationDate(Aws::Utils::DateTime&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = std::move(value); }
    inline JobEngineVersion& WithExpirationDate(const Aws::Utils::DateTime& value) { SetExpirationDate(value); return *this;}
    inline JobEngineVersion& WithExpirationDate(Aws::Utils::DateTime&& value) { SetExpirationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use Job engine versions to run jobs for your production workflow on one version,
     * while you test and validate the latest version. Job engine versions are in a
     * YYYY-MM-DD format.
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline JobEngineVersion& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline JobEngineVersion& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline JobEngineVersion& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_expirationDate;
    bool m_expirationDateHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
