﻿/**
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
   * want to create a new version for.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/CreateTrafficPolicyVersionRequest">AWS
   * API Reference</a></p>
   */
  class CreateTrafficPolicyVersionRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API CreateTrafficPolicyVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTrafficPolicyVersion"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the traffic policy for which you want to create a new version.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline CreateTrafficPolicyVersionRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateTrafficPolicyVersionRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateTrafficPolicyVersionRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of this version of the traffic policy, in JSON format. You
     * specified the JSON in the <code>CreateTrafficPolicyVersion</code> request. For
     * more information about the JSON format, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_CreateTrafficPolicy.html">CreateTrafficPolicy</a>.</p>
     */
    inline const Aws::String& GetDocument() const{ return m_document; }
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }
    inline void SetDocument(const Aws::String& value) { m_documentHasBeenSet = true; m_document = value; }
    inline void SetDocument(Aws::String&& value) { m_documentHasBeenSet = true; m_document = std::move(value); }
    inline void SetDocument(const char* value) { m_documentHasBeenSet = true; m_document.assign(value); }
    inline CreateTrafficPolicyVersionRequest& WithDocument(const Aws::String& value) { SetDocument(value); return *this;}
    inline CreateTrafficPolicyVersionRequest& WithDocument(Aws::String&& value) { SetDocument(std::move(value)); return *this;}
    inline CreateTrafficPolicyVersionRequest& WithDocument(const char* value) { SetDocument(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The comment that you specified in the <code>CreateTrafficPolicyVersion</code>
     * request, if any.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }
    inline CreateTrafficPolicyVersionRequest& WithComment(const Aws::String& value) { SetComment(value); return *this;}
    inline CreateTrafficPolicyVersionRequest& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}
    inline CreateTrafficPolicyVersionRequest& WithComment(const char* value) { SetComment(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_document;
    bool m_documentHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
