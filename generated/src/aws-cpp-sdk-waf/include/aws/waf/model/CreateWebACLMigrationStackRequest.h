/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/WAFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WAF
{
namespace Model
{

  /**
   */
  class CreateWebACLMigrationStackRequest : public WAFRequest
  {
  public:
    AWS_WAF_API CreateWebACLMigrationStackRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWebACLMigrationStack"; }

    AWS_WAF_API Aws::String SerializePayload() const override;

    AWS_WAF_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The UUID of the WAF Classic web ACL that you want to migrate to WAF v2.</p>
     */
    inline const Aws::String& GetWebACLId() const { return m_webACLId; }
    inline bool WebACLIdHasBeenSet() const { return m_webACLIdHasBeenSet; }
    template<typename WebACLIdT = Aws::String>
    void SetWebACLId(WebACLIdT&& value) { m_webACLIdHasBeenSet = true; m_webACLId = std::forward<WebACLIdT>(value); }
    template<typename WebACLIdT = Aws::String>
    CreateWebACLMigrationStackRequest& WithWebACLId(WebACLIdT&& value) { SetWebACLId(std::forward<WebACLIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon S3 bucket to store the CloudFormation template in. The
     * S3 bucket must be configured as follows for the migration: </p> <ul> <li> <p>The
     * bucket name must start with <code>aws-waf-migration-</code>. For example,
     * <code>aws-waf-migration-my-web-acl</code>.</p> </li> <li> <p>The bucket must be
     * in the Region where you are deploying the template. For example, for a web ACL
     * in us-west-2, you must use an Amazon S3 bucket in us-west-2 and you must deploy
     * the template stack to us-west-2. </p> </li> <li> <p>The bucket policies must
     * permit the migration process to write data. For listings of the bucket policies,
     * see the Examples section. </p> </li> </ul>
     */
    inline const Aws::String& GetS3BucketName() const { return m_s3BucketName; }
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
    template<typename S3BucketNameT = Aws::String>
    void SetS3BucketName(S3BucketNameT&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::forward<S3BucketNameT>(value); }
    template<typename S3BucketNameT = Aws::String>
    CreateWebACLMigrationStackRequest& WithS3BucketName(S3BucketNameT&& value) { SetS3BucketName(std::forward<S3BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to exclude entities that can't be migrated or to stop the
     * migration. Set this to true to ignore unsupported entities in the web ACL during
     * the migration. Otherwise, if AWS WAF encounters unsupported entities, it stops
     * the process and throws an exception. </p>
     */
    inline bool GetIgnoreUnsupportedType() const { return m_ignoreUnsupportedType; }
    inline bool IgnoreUnsupportedTypeHasBeenSet() const { return m_ignoreUnsupportedTypeHasBeenSet; }
    inline void SetIgnoreUnsupportedType(bool value) { m_ignoreUnsupportedTypeHasBeenSet = true; m_ignoreUnsupportedType = value; }
    inline CreateWebACLMigrationStackRequest& WithIgnoreUnsupportedType(bool value) { SetIgnoreUnsupportedType(value); return *this;}
    ///@}
  private:

    Aws::String m_webACLId;
    bool m_webACLIdHasBeenSet = false;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    bool m_ignoreUnsupportedType{false};
    bool m_ignoreUnsupportedTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
