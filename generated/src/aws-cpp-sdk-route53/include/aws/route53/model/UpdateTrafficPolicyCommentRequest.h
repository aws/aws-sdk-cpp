/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains information about the traffic policy that you
   * want to update the comment for.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/UpdateTrafficPolicyCommentRequest">AWS
   * API Reference</a></p>
   */
  class UpdateTrafficPolicyCommentRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API UpdateTrafficPolicyCommentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTrafficPolicyComment"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;


    /**
     * <p>The value of <code>Id</code> for the traffic policy that you want to update
     * the comment for.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The value of <code>Id</code> for the traffic policy that you want to update
     * the comment for.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The value of <code>Id</code> for the traffic policy that you want to update
     * the comment for.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The value of <code>Id</code> for the traffic policy that you want to update
     * the comment for.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The value of <code>Id</code> for the traffic policy that you want to update
     * the comment for.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The value of <code>Id</code> for the traffic policy that you want to update
     * the comment for.</p>
     */
    inline UpdateTrafficPolicyCommentRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The value of <code>Id</code> for the traffic policy that you want to update
     * the comment for.</p>
     */
    inline UpdateTrafficPolicyCommentRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The value of <code>Id</code> for the traffic policy that you want to update
     * the comment for.</p>
     */
    inline UpdateTrafficPolicyCommentRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The value of <code>Version</code> for the traffic policy that you want to
     * update the comment for.</p>
     */
    inline int GetVersion() const{ return m_version; }

    /**
     * <p>The value of <code>Version</code> for the traffic policy that you want to
     * update the comment for.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The value of <code>Version</code> for the traffic policy that you want to
     * update the comment for.</p>
     */
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The value of <code>Version</code> for the traffic policy that you want to
     * update the comment for.</p>
     */
    inline UpdateTrafficPolicyCommentRequest& WithVersion(int value) { SetVersion(value); return *this;}


    /**
     * <p>The new comment for the specified traffic policy and version.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>The new comment for the specified traffic policy and version.</p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p>The new comment for the specified traffic policy and version.</p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>The new comment for the specified traffic policy and version.</p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p>The new comment for the specified traffic policy and version.</p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p>The new comment for the specified traffic policy and version.</p>
     */
    inline UpdateTrafficPolicyCommentRequest& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>The new comment for the specified traffic policy and version.</p>
     */
    inline UpdateTrafficPolicyCommentRequest& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>The new comment for the specified traffic policy and version.</p>
     */
    inline UpdateTrafficPolicyCommentRequest& WithComment(const char* value) { SetComment(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    int m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
