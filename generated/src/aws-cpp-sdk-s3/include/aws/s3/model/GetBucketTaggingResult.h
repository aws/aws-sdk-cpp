/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/Tag.h>
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
namespace S3
{
namespace Model
{
  class GetBucketTaggingResult
  {
  public:
    AWS_S3_API GetBucketTaggingResult() = default;
    AWS_S3_API GetBucketTaggingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3_API GetBucketTaggingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Contains the tag set.</p>
     */
    inline const Aws::Vector<Tag>& GetTagSet() const { return m_tagSet; }
    template<typename TagSetT = Aws::Vector<Tag>>
    void SetTagSet(TagSetT&& value) { m_tagSetHasBeenSet = true; m_tagSet = std::forward<TagSetT>(value); }
    template<typename TagSetT = Aws::Vector<Tag>>
    GetBucketTaggingResult& WithTagSet(TagSetT&& value) { SetTagSet(std::forward<TagSetT>(value)); return *this;}
    template<typename TagSetT = Tag>
    GetBucketTaggingResult& AddTagSet(TagSetT&& value) { m_tagSetHasBeenSet = true; m_tagSet.emplace_back(std::forward<TagSetT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBucketTaggingResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Tag> m_tagSet;
    bool m_tagSetHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
