/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/DocumentReviewerResponseSource.h>
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
   * <p>Details about the response to a document review request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DocumentMetadataResponseInfo">AWS
   * API Reference</a></p>
   */
  class DocumentMetadataResponseInfo
  {
  public:
    AWS_SSM_API DocumentMetadataResponseInfo();
    AWS_SSM_API DocumentMetadataResponseInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API DocumentMetadataResponseInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details about a reviewer's response to a document review request.</p>
     */
    inline const Aws::Vector<DocumentReviewerResponseSource>& GetReviewerResponse() const{ return m_reviewerResponse; }

    /**
     * <p>Details about a reviewer's response to a document review request.</p>
     */
    inline bool ReviewerResponseHasBeenSet() const { return m_reviewerResponseHasBeenSet; }

    /**
     * <p>Details about a reviewer's response to a document review request.</p>
     */
    inline void SetReviewerResponse(const Aws::Vector<DocumentReviewerResponseSource>& value) { m_reviewerResponseHasBeenSet = true; m_reviewerResponse = value; }

    /**
     * <p>Details about a reviewer's response to a document review request.</p>
     */
    inline void SetReviewerResponse(Aws::Vector<DocumentReviewerResponseSource>&& value) { m_reviewerResponseHasBeenSet = true; m_reviewerResponse = std::move(value); }

    /**
     * <p>Details about a reviewer's response to a document review request.</p>
     */
    inline DocumentMetadataResponseInfo& WithReviewerResponse(const Aws::Vector<DocumentReviewerResponseSource>& value) { SetReviewerResponse(value); return *this;}

    /**
     * <p>Details about a reviewer's response to a document review request.</p>
     */
    inline DocumentMetadataResponseInfo& WithReviewerResponse(Aws::Vector<DocumentReviewerResponseSource>&& value) { SetReviewerResponse(std::move(value)); return *this;}

    /**
     * <p>Details about a reviewer's response to a document review request.</p>
     */
    inline DocumentMetadataResponseInfo& AddReviewerResponse(const DocumentReviewerResponseSource& value) { m_reviewerResponseHasBeenSet = true; m_reviewerResponse.push_back(value); return *this; }

    /**
     * <p>Details about a reviewer's response to a document review request.</p>
     */
    inline DocumentMetadataResponseInfo& AddReviewerResponse(DocumentReviewerResponseSource&& value) { m_reviewerResponseHasBeenSet = true; m_reviewerResponse.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DocumentReviewerResponseSource> m_reviewerResponse;
    bool m_reviewerResponseHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
