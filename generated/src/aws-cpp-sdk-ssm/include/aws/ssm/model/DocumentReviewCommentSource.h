﻿/**
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
    AWS_SSM_API DocumentReviewCommentSource() = default;
    AWS_SSM_API DocumentReviewCommentSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API DocumentReviewCommentSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of information added to a review request. Currently, only the value
     * <code>Comment</code> is supported.</p>
     */
    inline DocumentReviewCommentType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DocumentReviewCommentType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DocumentReviewCommentSource& WithType(DocumentReviewCommentType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of a comment entered by a user who requests a review of a new
     * document version, or who reviews the new version.</p>
     */
    inline const Aws::String& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::String>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::String>
    DocumentReviewCommentSource& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}
  private:

    DocumentReviewCommentType m_type{DocumentReviewCommentType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
