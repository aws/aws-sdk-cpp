/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/DocumentReviews.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class UpdateDocumentMetadataRequest : public SSMRequest
  {
  public:
    AWS_SSM_API UpdateDocumentMetadataRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDocumentMetadata"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the change template for which a version's metadata is to be
     * updated.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateDocumentMetadataRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of a change template in which to update approval metadata.</p>
     */
    inline const Aws::String& GetDocumentVersion() const { return m_documentVersion; }
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }
    template<typename DocumentVersionT = Aws::String>
    void SetDocumentVersion(DocumentVersionT&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::forward<DocumentVersionT>(value); }
    template<typename DocumentVersionT = Aws::String>
    UpdateDocumentMetadataRequest& WithDocumentVersion(DocumentVersionT&& value) { SetDocumentVersion(std::forward<DocumentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The change template review details to update.</p>
     */
    inline const DocumentReviews& GetDocumentReviews() const { return m_documentReviews; }
    inline bool DocumentReviewsHasBeenSet() const { return m_documentReviewsHasBeenSet; }
    template<typename DocumentReviewsT = DocumentReviews>
    void SetDocumentReviews(DocumentReviewsT&& value) { m_documentReviewsHasBeenSet = true; m_documentReviews = std::forward<DocumentReviewsT>(value); }
    template<typename DocumentReviewsT = DocumentReviews>
    UpdateDocumentMetadataRequest& WithDocumentReviews(DocumentReviewsT&& value) { SetDocumentReviews(std::forward<DocumentReviewsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet = false;

    DocumentReviews m_documentReviews;
    bool m_documentReviewsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
