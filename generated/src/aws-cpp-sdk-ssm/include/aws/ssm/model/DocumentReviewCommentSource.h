/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/DocumentReviewCommentType.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Information about comments added to a document review request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DocumentReviewCommentSource">AWS
   * API Reference</a></p>
   */
  class DocumentReviewCommentSource
  {
  public:
    AWS_SSM_API DocumentReviewCommentSource();
    AWS_SSM_API DocumentReviewCommentSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API DocumentReviewCommentSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of information added to a review request. Currently, only the value
     * <code>Comment</code> is supported.</p>
     */
    inline const DocumentReviewCommentType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const DocumentReviewCommentType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(DocumentReviewCommentType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline DocumentReviewCommentSource& WithType(const DocumentReviewCommentType& value) { SetType(value); return *this;}
    inline DocumentReviewCommentSource& WithType(DocumentReviewCommentType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of a comment entered by a user who requests a review of a new
     * document version, or who reviews the new version.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }
    inline DocumentReviewCommentSource& WithContent(const Aws::String& value) { SetContent(value); return *this;}
    inline DocumentReviewCommentSource& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}
    inline DocumentReviewCommentSource& WithContent(const char* value) { SetContent(value); return *this;}
    ///@}
  private:

    DocumentReviewCommentType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
