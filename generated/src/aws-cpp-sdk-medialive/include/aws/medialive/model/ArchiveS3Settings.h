/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/S3CannedAcl.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Archive S3 Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ArchiveS3Settings">AWS
   * API Reference</a></p>
   */
  class ArchiveS3Settings
  {
  public:
    AWS_MEDIALIVE_API ArchiveS3Settings();
    AWS_MEDIALIVE_API ArchiveS3Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API ArchiveS3Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specify the canned ACL to apply to each S3 request. Defaults to none.
     */
    inline const S3CannedAcl& GetCannedAcl() const{ return m_cannedAcl; }

    /**
     * Specify the canned ACL to apply to each S3 request. Defaults to none.
     */
    inline bool CannedAclHasBeenSet() const { return m_cannedAclHasBeenSet; }

    /**
     * Specify the canned ACL to apply to each S3 request. Defaults to none.
     */
    inline void SetCannedAcl(const S3CannedAcl& value) { m_cannedAclHasBeenSet = true; m_cannedAcl = value; }

    /**
     * Specify the canned ACL to apply to each S3 request. Defaults to none.
     */
    inline void SetCannedAcl(S3CannedAcl&& value) { m_cannedAclHasBeenSet = true; m_cannedAcl = std::move(value); }

    /**
     * Specify the canned ACL to apply to each S3 request. Defaults to none.
     */
    inline ArchiveS3Settings& WithCannedAcl(const S3CannedAcl& value) { SetCannedAcl(value); return *this;}

    /**
     * Specify the canned ACL to apply to each S3 request. Defaults to none.
     */
    inline ArchiveS3Settings& WithCannedAcl(S3CannedAcl&& value) { SetCannedAcl(std::move(value)); return *this;}

  private:

    S3CannedAcl m_cannedAcl;
    bool m_cannedAclHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
