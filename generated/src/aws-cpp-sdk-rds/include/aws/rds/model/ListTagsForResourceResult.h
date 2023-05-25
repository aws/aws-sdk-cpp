/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/Tag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/TagListMessage">AWS
   * API Reference</a></p>
   */
  class ListTagsForResourceResult
  {
  public:
    AWS_RDS_API ListTagsForResourceResult();
    AWS_RDS_API ListTagsForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API ListTagsForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>List of tags returned by the <code>ListTagsForResource</code> operation.</p>
     */
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }

    /**
     * <p>List of tags returned by the <code>ListTagsForResource</code> operation.</p>
     */
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagList = value; }

    /**
     * <p>List of tags returned by the <code>ListTagsForResource</code> operation.</p>
     */
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagList = std::move(value); }

    /**
     * <p>List of tags returned by the <code>ListTagsForResource</code> operation.</p>
     */
    inline ListTagsForResourceResult& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}

    /**
     * <p>List of tags returned by the <code>ListTagsForResource</code> operation.</p>
     */
    inline ListTagsForResourceResult& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}

    /**
     * <p>List of tags returned by the <code>ListTagsForResource</code> operation.</p>
     */
    inline ListTagsForResourceResult& AddTagList(const Tag& value) { m_tagList.push_back(value); return *this; }

    /**
     * <p>List of tags returned by the <code>ListTagsForResource</code> operation.</p>
     */
    inline ListTagsForResourceResult& AddTagList(Tag&& value) { m_tagList.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListTagsForResourceResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListTagsForResourceResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Tag> m_tagList;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
