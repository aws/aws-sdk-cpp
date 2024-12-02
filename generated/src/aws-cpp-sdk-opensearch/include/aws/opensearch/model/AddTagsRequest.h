/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/Tag.h>
#include <utility>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <code>AddTags</code> operation. Specifies
   * the tags to attach to the domain, data source, or application.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AddTagsRequest">AWS
   * API Reference</a></p>
   */
  class AddTagsRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API AddTagsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddTags"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for the OpenSearch Service domain, data source, or
     * application to which you want to attach resource tags.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }
    inline AddTagsRequest& WithARN(const Aws::String& value) { SetARN(value); return *this;}
    inline AddTagsRequest& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}
    inline AddTagsRequest& WithARN(const char* value) { SetARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of resource tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagListHasBeenSet = true; m_tagList = value; }
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagListHasBeenSet = true; m_tagList = std::move(value); }
    inline AddTagsRequest& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}
    inline AddTagsRequest& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}
    inline AddTagsRequest& AddTagList(const Tag& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }
    inline AddTagsRequest& AddTagList(Tag&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
