/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/S3ObjectCannedAcl.h>
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
   * Optional. Have MediaConvert automatically apply Amazon S3 access control for the
   * outputs in this output group. When you don't use this setting, S3 automatically
   * applies the default access control list PRIVATE.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/S3DestinationAccessControl">AWS
   * API Reference</a></p>
   */
  class S3DestinationAccessControl
  {
  public:
    AWS_MEDIACONVERT_API S3DestinationAccessControl();
    AWS_MEDIACONVERT_API S3DestinationAccessControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API S3DestinationAccessControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Choose an Amazon S3 canned ACL for MediaConvert to apply to this output.
     */
    inline const S3ObjectCannedAcl& GetCannedAcl() const{ return m_cannedAcl; }

    /**
     * Choose an Amazon S3 canned ACL for MediaConvert to apply to this output.
     */
    inline bool CannedAclHasBeenSet() const { return m_cannedAclHasBeenSet; }

    /**
     * Choose an Amazon S3 canned ACL for MediaConvert to apply to this output.
     */
    inline void SetCannedAcl(const S3ObjectCannedAcl& value) { m_cannedAclHasBeenSet = true; m_cannedAcl = value; }

    /**
     * Choose an Amazon S3 canned ACL for MediaConvert to apply to this output.
     */
    inline void SetCannedAcl(S3ObjectCannedAcl&& value) { m_cannedAclHasBeenSet = true; m_cannedAcl = std::move(value); }

    /**
     * Choose an Amazon S3 canned ACL for MediaConvert to apply to this output.
     */
    inline S3DestinationAccessControl& WithCannedAcl(const S3ObjectCannedAcl& value) { SetCannedAcl(value); return *this;}

    /**
     * Choose an Amazon S3 canned ACL for MediaConvert to apply to this output.
     */
    inline S3DestinationAccessControl& WithCannedAcl(S3ObjectCannedAcl&& value) { SetCannedAcl(std::move(value)); return *this;}

  private:

    S3ObjectCannedAcl m_cannedAcl;
    bool m_cannedAclHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
